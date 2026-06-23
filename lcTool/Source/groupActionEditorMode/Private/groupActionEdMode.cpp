//SGroupActionMode// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "groupActionEdMode.h"
#include "groupActionEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "Engine/Classes/Engine/Selection.h"
#include "EditorModeManager.h"
#include "LcRuntimeLibrary/Public/LcRuntimeLibraryBPLibrary.h"

#include "EngineUtils.h"
#include "Engine/CollisionProfile.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "Landscape/Classes/Landscape.h"
#include "groupActionGISS.h"

#include "GroupActionWidgetStyle.h"
#include "..\Public\groupActionEdMode.h"
PRAGMA_DISABLE_OPTIMIZATION

const FEditorModeID FgroupActionEdMode::EM_groupActionEdModeId = TEXT("EM_groupActionEdMode");

static FName FoliageBrushHighlightColorParamName("HighlightColor");

float FgroupActionEdMode::GetPaintingBrushRadius() const
{
	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	if (gaEss->gaSettingObj)
		return gaEss->gaSettingObj->brushRadius;
	return 300;
}

void FgroupActionEdMode::RefreshFormationHash()
{
	//清空哈希实例
	if (!currentFormation)
		return;
	formationHashInstance.Empty();
	currentFormation->UpdateIdMapToFormation();
	for (auto& it : currentFormation->idLocationMap)
	{
		int id = it.Key;
		FVector loc = it.Value;
		//插入实例
		formationHashInstance.InsertInstance(loc, id);
	}
	currentFormation->SaveFormationData();
	selectArr.Empty();
}

bool IsLandscapeLayersArrayValid(const TArray<FName>& LandscapeLayersArray)
{
	bool bValid = false;
	for (FName LayerName : LandscapeLayersArray)
	{
		bValid |= LayerName != NAME_None;
	}

	return bValid;
}

bool FgroupActionEdMode::CheckForOverlappingSphere(const FSphere& Sphere)
{
	if (!currentFormation)
		return false;

	auto TempInstances = currentFormation->formationHashInstance.GetInstancesOverlappingBox(FBox::BuildAABB(Sphere.Center, FVector(Sphere.W)));
	for (int32 Idx : TempInstances)
	{
		if (FSphere(currentFormation->idLocationMap.Find(Idx), 0.f).IsInside(Sphere))
		{
			return true;
		}
	}
	return false;
}


void FgroupActionEdMode::GetInstancesInsideSphere(const FSphere& Sphere, TArray<int32>& OutInstances)
{
	if (!currentFormation)
		return;

	auto TempInstances = currentFormation->formationHashInstance.GetInstancesOverlappingBox(FBox::BuildAABB(Sphere.Center, FVector(Sphere.W)));
	for (int32 Idx : TempInstances)
	{
		FVector* lsLoc = currentFormation->idLocationMap.Find(Idx);
		if (lsLoc)
		{

			if (FSphere(*lsLoc, 1.0f).IsInside(Sphere))
			{
				OutInstances.Add(Idx);
			}
		}
	}

}

/** FEdMode: Called when a mouse button is pressed */
bool FgroupActionEdMode::StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	if (IsCtrlDown(InViewport) && InViewport->KeyState(EKeys::MiddleMouseButton))
	{
		return true;
	}
	else if (paintEditingMode == EGaPaintEditingMode::paint)
	{
		// Update pivot

		return true;
	}
	return FEdMode::StartTracking(InViewportClient, InViewport);
}

/** FEdMode: Called when the a mouse button is released */
bool FgroupActionEdMode::EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	if (paintEditingMode != EGaPaintEditingMode::paint)
	{
		GEditor->EndTransaction();
		return true;
	}
	else
	{
		return true;
	}

	return FEdMode::EndTracking(InViewportClient, InViewport);
}

void FgroupActionEdMode::GetRandomVectorInBrush(FVector& OutStart, FVector& OutEnd)
{
	// Find Rx and Ry inside the unit circle
	float Ru = (2.f * FMath::FRand() - 1.f);
	float Rv = (2.f * FMath::FRand() - 1.f) * FMath::Sqrt(1.f - FMath::Square(Ru));

	// find random point in circle through brush location on the same plane to brush location hit surface normal
	FVector U, V;
	BrushNormal.FindBestAxisVectors(U, V);
	FVector Point = Ru * U + Rv * V;

	// find distance to surface of sphere brush from this point
	FVector Rw = FMath::Sqrt(FMath::Max(1.f - (FMath::Square(Ru) + FMath::Square(Rv)), 0.001f)) * BrushNormal;

	OutStart = BrushLocation + gaSetting->brushRadius * (Point + Rw);
	OutEnd = BrushLocation + gaSetting->brushRadius * (Point - Rw);
}

void FgroupActionEdMode::GetSingleRandomVectorInBrush(FVector& OutStart, FVector& OutEnd)
{
	// Find Rx and Ry inside the unit circle
	float Ru = (2.f * FMath::FRand() - 1.f);
	float Rv = (2.f * FMath::FRand() - 1.f) * FMath::Sqrt(1.f - FMath::Square(Ru));

	// find random point in circle through brush location on the same plane to brush location hit surface normal
	FVector U, V;
	BrushNormal.FindBestAxisVectors(U, V);
	FVector Point = Ru * U + Rv * V;

	// find distance to surface of sphere brush from this point
	FVector Rw = FMath::Sqrt(FMath::Max(1.f - (FMath::Square(Ru) + FMath::Square(Rv)), 0.001f)) * BrushNormal;

	OutStart = BrushLocation + 1 * (Point + Rw);
	OutEnd = BrushLocation + 1 * (Point - Rw);
}

void FgroupActionEdMode::GetVectorInSquareBrush(int id, FVector& OutStart, FVector& OutEnd)
{
}

bool FgroupActionEdMode::GroupActionTrace(const UWorld* InWorld, FHitResult& OutHit, const FDesiredGaInstance& DesiredInstance, FName InTraceTag, bool InbReturnFaceIndex)
{
	FCollisionQueryParams QueryParams = FCollisionQueryParams();
	QueryParams.bReturnFaceIndex = InbReturnFaceIndex;

	//It's possible that with the radius of the shape we will end up with an initial overlap which would place the instance at the top of the procedural volume.
	//Moving the start trace back a bit will fix this, but it introduces the potential for spawning instances a bit above the volume. This second issue is already somewhat broken because of how sweeps work so it's not too bad, also this is a less common case.
	//The proper fix would be to do something like EncroachmentCheck where we first do a sweep, then we fix it up if it's overlapping, then check the filters. This is more expensive and error prone so for now we just move the trace up a bit.
	const FVector Dir = (DesiredInstance.EndTrace - DesiredInstance.StartTrace).GetSafeNormal();
	const FVector StartTrace = DesiredInstance.StartTrace - (Dir * DesiredInstance.TraceRadius);

	TArray<FHitResult> Hits;
	FCollisionShape SphereShape;
	SphereShape.SetSphere(DesiredInstance.TraceRadius);
	InWorld->SweepMultiByObjectType(Hits, StartTrace, DesiredInstance.EndTrace, FQuat::Identity, FCollisionObjectQueryParams(ECC_WorldStatic), SphereShape, QueryParams);

	for (const FHitResult& Hit : Hits)
	{
		AActor* HitActor = Hit.GetActor();

		ALandscape* pLand = Cast<ALandscape>(HitActor);
		if (!pLand)
			continue;
		OutHit = Hit;
		return true;
	}

	return false;
}


void FgroupActionEdMode::CalculatePotentialInstances(const UWorld* InWorld, const TArray<FDesiredGaInstance>& DesiredInstances, TArray<FPotentialGaInstance> OutPotentialInstances[NUM_INSTANCE_BUCKETS])
{
	TArray<FVector> PotentialInstanceLocations;
	FGroupActionPaintHash PotentialInstanceHash(7);	// use 128x128 cell size, things like brush radius are typically small
	PotentialInstanceLocations.Empty(DesiredInstances.Num());

	// Reserve space in buckets for a potential instances 
	for (int32 BucketIdx = 0; BucketIdx < NUM_INSTANCE_BUCKETS; ++BucketIdx)
	{
		auto& Bucket = OutPotentialInstances[BucketIdx];
		Bucket.Reserve(DesiredInstances.Num());
	}

	for (const FDesiredGaInstance& DesiredInst : DesiredInstances)
	{
		FHitResult Hit;
		static FName NAME_AddFoliageInstances = FName(TEXT("AddFoliageInstances"));
		if (GroupActionTrace(InWorld, Hit, DesiredInst, NAME_AddFoliageInstances, true))
		{
			float HitWeight = 1.f;

			UPrimitiveComponent* InstanceBase = Hit.GetComponent();

			if (InstanceBase == nullptr)
			{
				continue;
			}

			ULevel* TargetLevel = InstanceBase->GetComponentLevel();
			// We can paint into new level only if FoliageType is shared
			//if (!CanPaint(Settings, TargetLevel))
			//{
			//	continue;
			//}

			//检查是否是有效实例


			// Check existing instances. Use the Density radius rather than the minimum radius

			// Check with other potential instances we're about to add.

			UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

			const float RadiusSquared = FMath::Square(gaEss->gaSettingObj->brushRadius);

			TArray<int>retId;

			bool bValidInstance = CheckForOverlappingSphere(FSphere(Hit.ImpactPoint, gaEss->gaSettingObj->brushRadius));

			if (!bValidInstance)
			{
				const int32 BucketIndex = FMath::RoundToInt(HitWeight * (float)(NUM_INSTANCE_BUCKETS - 1));
				OutPotentialInstances[BucketIndex].Add(FPotentialGaInstance(Hit.ImpactPoint, Hit.ImpactNormal, InstanceBase, HitWeight, DesiredInst));
			}
		}
	}
}

void FgroupActionEdMode::SpawnGaInstance(UWorld* InWorld, const TArray<FPotentialGaInstance>& PlacedInstances)
{
	for (auto& it : PlacedInstances)
	{
		int id = currentFormation->AddFormationInstance(it.HitLocation);
		currentFormation->formationHashInstance.InsertInstance(it.HitLocation, id);
		currentFormation->idLocationMap.Add(id, it.HitLocation);
	}
}

void FgroupActionEdMode::AddInstancesForBrush(UWorld* InWorld, const FSphere& BrushSphere, int32 DesiredInstanceCount)
{
	//SCOPE_CYCLE_COUNTER(STAT_GaPaintAddInstanceBrush);

	UWorld* World = GetWorld();

	TArray<int32> ExistingInstanceBuckets;
	ExistingInstanceBuckets.AddZeroed(NUM_INSTANCE_BUCKETS);
	int32 NumExistingInstances = 0;

	//现有实例
	TArray<int32> ExistingInstances;

	//获取现有球内实例
	GetInstancesInsideSphere(BrushSphere, ExistingInstances);

	NumExistingInstances += ExistingInstances.Num();

	ExistingInstanceBuckets[NUM_INSTANCE_BUCKETS - 1] = NumExistingInstances;

	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

	if (DesiredInstanceCount > NumExistingInstances)
	{

		TArray<FDesiredGaInstance> DesiredInstances;	//we compute instances for the brush
		DesiredInstances.Reserve(DesiredInstanceCount);

		for (int32 DesiredIdx = 0; DesiredIdx < DesiredInstanceCount; DesiredIdx++)
		{
			FVector Start, End;
			GetRandomVectorInBrush(Start, End);
			FDesiredGaInstance* DesiredInstance = new (DesiredInstances)FDesiredGaInstance(Start, End);
		}

		if (DesiredInstances.Num() == 0)
		{
			return;
		}

		TArray<FPotentialGaInstance> PotentialInstanceBuckets[NUM_INSTANCE_BUCKETS];
		if (DesiredInstances[0].PlacementMode == EGaPaintEditingMode::paint)
		{
			CalculatePotentialInstances(InWorld, DesiredInstances, PotentialInstanceBuckets);
		}

		bool bPlacedInstances = false;

		for (int32 BucketIdx = 0; BucketIdx < NUM_INSTANCE_BUCKETS; BucketIdx++)
		{
			TArray<FPotentialGaInstance>& PotentialInstances = PotentialInstanceBuckets[BucketIdx];
			float BucketFraction = (float)(BucketIdx + 1) / (float)NUM_INSTANCE_BUCKETS;

			// We use the number that actually succeeded in placement (due to parameters) as the target
			// for the number that should be in the brush region.
			const int32 BucketOffset = (ExistingInstanceBuckets.Num() ? ExistingInstanceBuckets[BucketIdx] : 0);
			int32 AdditionalInstances = FMath::Clamp<int32>(FMath::RoundToInt(BucketFraction * (float)(PotentialInstances.Num() - BucketOffset) * 1), 0, PotentialInstances.Num());

			SpawnGaInstance(InWorld, PotentialInstances);
		}
	}
	if (currentFormation)
	{
		currentFormation->UpdateFormationNumber(currentFormation->idLocationMap.Num());
	}
}

void FgroupActionEdMode::AddSingleInstancesForBrush(UWorld* InWorld, const FSphere& BrushSphere)

{
	//SCOPE_CYCLE_COUNTER(STAT_GaPaintAddInstanceBrush);

	UWorld* World = GetWorld();

	TArray<int32> ExistingInstanceBuckets;
	ExistingInstanceBuckets.AddZeroed(NUM_INSTANCE_BUCKETS);
	int32 NumExistingInstances = 0;

	//现有实例
	TArray<int32> ExistingInstances;

	//获取现有球内实例
	GetInstancesInsideSphere(BrushSphere, ExistingInstances);

	NumExistingInstances += ExistingInstances.Num();

	ExistingInstanceBuckets[NUM_INSTANCE_BUCKETS - 1] = NumExistingInstances;

	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

	if (NumExistingInstances < 1)
	{

		TArray<FDesiredGaInstance> DesiredInstances;	//we compute instances for the brush
		DesiredInstances.Reserve(1);

		FVector Start, End;
		GetSingleRandomVectorInBrush(Start, End);
		FDesiredGaInstance* DesiredInstance = new (DesiredInstances)FDesiredGaInstance(Start, End);

		if (DesiredInstances.Num() == 0)
		{
			return;
		}

		TArray<FPotentialGaInstance> PotentialInstanceBuckets[NUM_INSTANCE_BUCKETS];
		if (DesiredInstances[0].PlacementMode == EGaPaintEditingMode::paint)
		{
			CalculatePotentialInstances(InWorld, DesiredInstances, PotentialInstanceBuckets);
		}

		bool bPlacedInstances = false;

		for (int32 BucketIdx = 0; BucketIdx < NUM_INSTANCE_BUCKETS; BucketIdx++)
		{
			TArray<FPotentialGaInstance>& PotentialInstances = PotentialInstanceBuckets[BucketIdx];
			float BucketFraction = (float)(BucketIdx + 1) / (float)NUM_INSTANCE_BUCKETS;

			// We use the number that actually succeeded in placement (due to parameters) as the target
			// for the number that should be in the brush region.
			const int32 BucketOffset = (ExistingInstanceBuckets.Num() ? ExistingInstanceBuckets[BucketIdx] : 0);
			int32 AdditionalInstances = FMath::Clamp<int32>(FMath::RoundToInt(BucketFraction * (float)(PotentialInstances.Num() - BucketOffset) * 1), 0, PotentialInstances.Num());

			SpawnGaInstance(InWorld, PotentialInstances);
		}
	}
}


/** Remove instances inside the brush to match DesiredInstanceCount */
void FgroupActionEdMode::RemoveInstancesForBrush(UWorld* InWorld, const FSphere& BrushSphere, int32 DesiredInstanceCount)
{
	TArray<int32> PotentialInstancesToRemove;
	GetInstancesInsideSphere(BrushSphere, PotentialInstancesToRemove);
	if (PotentialInstancesToRemove.Num() == 0)
	{
		return;
	}

	//int32 InstancesToRemove = FMath::RoundToInt((float)(PotentialInstancesToRemove.Num() - DesiredInstanceCount));
	//if (InstancesToRemove <= 0)
	//{
	//	return;
	//}

	//int32 InstancesToKeep = PotentialInstancesToRemove.Num() - InstancesToRemove;
	//if (InstancesToKeep > 0)
	//{
	//	// Remove InstancesToKeep random PotentialInstancesToRemove from the array to leave those PotentialInstancesToRemove behind, and delete all the rest
	//	for (int32 i = 0; i < InstancesToKeep; i++)
	//	{
	//		PotentialInstancesToRemove.RemoveAtSwap(FMath::Rand() % PotentialInstancesToRemove.Num(), 1, false);
	//	}
	//}

	// Filter PotentialInstancesToRemove
	for (int32 Idx = 0; Idx < PotentialInstancesToRemove.Num(); Idx++)
	{
		int index = PotentialInstancesToRemove[Idx];
		FVector* lsLoc = currentFormation->idLocationMap.Find(index);
		if (lsLoc)
		{
			FVector loc = *lsLoc;
			currentFormation->idLocationMap.Remove(index);
			currentFormation->RemoveFormationInstance(index);
			currentFormation->formationHashInstance.RemoveInstance(loc, index, false);
			bHasRemoveOperation = true;
		}
		//// Instance should not be removed, so remove it from the removal list.
		//PotentialInstancesToRemove.RemoveAtSwap(Idx, 1, false);
		//Idx--;
	}

	// Remove PotentialInstancesToRemove to reduce it to desired count
	//if (PotentialInstancesToRemove.Num() > 0)
	//{
	//	CurrentFoliageTraceBrushAffectedLevels.AddUnique(IFA->GetLevel());

	//	FoliageInfo->RemoveInstances(IFA, PotentialInstancesToRemove, false);
	//}
}

void FgroupActionEdMode::ApplyBrush(FEditorViewportClient* ViewportClient)
{
	if (!bBrushTraceValid)// || ViewportClient != GCurrentLevelEditingViewportClient)
	{
		return;
	}

	//获取世界
	UWorld* World = ViewportClient->GetWorld();

	//刷子球体
	FSphere BrushSphere(BrushLocation, gaSetting->brushRadius);

	//刷子区域
	float BrushArea = PI * FMath::Square(gaSetting->brushRadius);

	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

	float DesiredInstanceCountFloat = BrushArea * gaSetting->density * gaSetting->density / (1000.f * 1000.f);
	switch (gaEss->gaSettingObj->egcm)
	{
		//绘制模式
	case EGaControlMode::EGCM_Paint:
	{
		switch (paintEditingMode)
		{

			//绘制
		case EGaPaintEditingMode::paint:
		{

			// Allow a single instance with a random chance, if the brush is smaller than the density
			int32 DesiredInstanceCount = DesiredInstanceCountFloat > 1.f ? FMath::RoundToInt(DesiredInstanceCountFloat) : FMath::FRand() < DesiredInstanceCountFloat ? 1 : 0;

			if (gaEss->gaSettingObj->bSinglePaintMode)
			{
				AddSingleInstancesForBrush(World, BrushSphere);
			}
			else
			{
				AddInstancesForBrush(World, BrushSphere, DesiredInstanceCount);
			}
			break;
		}
		//擦除
		case EGaPaintEditingMode::erase:
		{
			int32 DesiredInstanceCount = DesiredInstanceCountFloat > 1.f ? FMath::RoundToInt(DesiredInstanceCountFloat) : FMath::FRand() < DesiredInstanceCountFloat ? 1 : 0;

			RemoveInstancesForBrush(World, BrushSphere, DesiredInstanceCount);
			break;
		}
		default:
			break;
		}
	}
	//选择模式
	case EGaControlMode::EGCM_Select:
	{

		break;
	}
	default:
		break;
	}


}


bool FgroupActionEdMode::GetSelectionLocation(UWorld* InWorld, FVector& OutLocation) const
{
	FBox OutBox(EForceInit::ForceInit);
	bool bHasSelection = false;
	// Go through all sub-levels

	for (int32 InstanceIdx : selectArr)
	{
		FVector* lsLoc = currentFormation->idLocationMap.Find(InstanceIdx);
		if (lsLoc)
		{
			OutBox += *lsLoc;
			bHasSelection = true;
		}
	}

	if (bHasSelection)
	{
		OutLocation = OutBox.GetCenter();
	}

	return bHasSelection;
}

void FgroupActionEdMode::UpdateWidgetLocationToInstanceSelection()
{
	FVector SelectionLocation = FVector::ZeroVector;
	if (GetSelectionLocation(GetWorld(), SelectionLocation))
	{
		Owner->PivotLocation = Owner->SnappedLocation = SelectionLocation;
	}
}

FgroupActionEdMode::FgroupActionEdMode()
{
	/**
	 * 初始化绘制球
	 */
	UStaticMesh* StaticMesh = nullptr;
	BrushDefaultHighlightColor = FColor::White;
	StaticMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/EngineMeshes/Sphere.Sphere"), nullptr, LOAD_None, nullptr);
	if (StaticMesh)
	{
		UMaterial* BrushMaterial = LoadObject<UMaterial>(nullptr, TEXT("/Engine/EditorLandscapeResources/FoliageBrushSphereMaterial.FoliageBrushSphereMaterial"), nullptr, LOAD_None, nullptr);
		BrushMID = UMaterialInstanceDynamic::Create(BrushMaterial, GetTransientPackage());
		check(BrushMID != nullptr);
		FLinearColor DefaultColor;
		BrushMID->GetVectorParameterDefaultValue(FoliageBrushHighlightColorParamName, DefaultColor);
		BrushDefaultHighlightColor = DefaultColor.ToFColor(false);

		SphereBrushComponent = NewObject<UStaticMeshComponent>(GetTransientPackage(), TEXT("SphereBrushComponent"));
		SphereBrushComponent->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
		SphereBrushComponent->SetCollisionObjectType(ECC_WorldDynamic);
		SphereBrushComponent->SetStaticMesh(StaticMesh);
		SphereBrushComponent->SetMaterial(0, BrushMID);
		SphereBrushComponent->SetAbsolute(true, true, true);
		SphereBrushComponent->CastShadow = false;
	}
	currentFormation = nullptr;


}

FgroupActionEdMode::~FgroupActionEdMode()
{

}

bool FgroupActionEdMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click)
{
	if (!IsEditingEnabled())
	{
		return false;
	}



	//点击
	if (HitProxy)
	{
		HActor* actorProxy = (HActor*)HitProxy;
		ABaseFormationBuilder* lsFormation = Cast<ABaseFormationBuilder>(actorProxy->Actor);
		if ((!currentFormation && lsFormation) || (lsFormation && lsFormation != currentFormation))
		{
			currentFormation = Cast<ABaseFormationBuilder>(actorProxy->Actor);
			currentFormation->RefreshFormationHash();
		}
		if (currentFormation && gaSetting->egcm == EGaControlMode::EGCM_Select)
		{
			if (HitProxy && HitProxy->IsA(HInstancedStaticMeshInstance::StaticGetType()))
			{
				HInstancedStaticMeshInstance* SMIProxy = ((HInstancedStaticMeshInstance*)HitProxy);
				ABaseFormationBuilder* formation = Cast<ABaseFormationBuilder>(SMIProxy->Component->GetOuter());
				if (formation)
				{
					formation->GetInstanceComponent()->SelectInstance(true, SMIProxy->InstanceIndex, 1);
					selectArr.Add(SMIProxy->InstanceIndex);
				}
			}
			else
			{
				if (!Click.IsControlDown())
				{
					// Select none if not trying to toggle
					SelectInstances(GetWorld(), false);
				}
			}

			return true;
		}
	}
	return FEdMode::HandleClick(InViewportClient, HitProxy, Click);
}

void FgroupActionEdMode::SelectInstances(UWorld* InWorld, bool bSelect)
{
	if (!bSelect)
	{
		selectArr.Empty();
		currentFormation->GetInstanceComponent()->ClearInstanceSelection();
	}
	else
	{
		for (int selectIndex : selectArr)
		{
			currentFormation->GetInstanceComponent()->SelectInstance(true, selectIndex, 1);
		}
	}
}

void FgroupActionEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FgroupActionEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());

		UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

		gaSetting = gaEss->gaSettingObj;

		//绑定编辑器  选择变动
		GEditor->GetSelectedActors()->SelectionChangedEvent.AddRaw(this, &FgroupActionEdMode::OnLevelSelectionChanged);
	}
	if (currentFormation)
		currentFormation->RefreshFormationHash();
	RefreshSelection();
}

void FgroupActionEdMode::OnLevelSelectionChanged(UObject* Obj)
{
	USelection* Selection = Cast<USelection>(Obj);
	if (Selection)
	{
		TArray<ABaseFormationBuilder*>unitArr;
		bool bFind = false;
		ABaseFormationBuilder* firstSelectFormation = currentFormation;
		for (int32 Idx = 0; Idx < Selection->Num(); Idx++)
		{
			ABaseFormationBuilder* lsSelectFormation = Cast<ABaseFormationBuilder>(Selection->GetSelectedObject(Idx));
			if (lsSelectFormation)
			{
				bFind = true;
				if (lsSelectFormation)
				{
					if (currentFormation != lsSelectFormation)
					{
						currentFormation = lsSelectFormation;
						//刷新阵型哈希
						currentFormation->RefreshFormationHash();
						break;
					}
				}
			}
		}
		if (!bFind)
			currentFormation = nullptr;

	}
	else
	{
		currentFormation = nullptr;
	}
}

void FgroupActionEdMode::RefreshSelection()
{
	USelection* Selection = GEditor->GetSelectedActors();
	if (Selection)
	{
		TArray<ABaseFormationBuilder*>unitArr;
		bool bFind = false;
		bool bChangeFormation = false;
		for (int32 Idx = 0; Idx < Selection->Num(); Idx++)
		{
			ABaseFormationBuilder* lsSelectFormation = Cast<ABaseFormationBuilder>(Selection->GetSelectedObject(Idx));
			if (lsSelectFormation)
			{
				bFind = true;
				if (currentFormation != lsSelectFormation)
				{
					currentFormation = lsSelectFormation;
					bChangeFormation = true;
					//刷新阵型哈希
					currentFormation->RefreshFormationHash();
					break;
				}
			}
		}
	}
	else
	{
		currentFormation = nullptr;
	}
}

EGaPaintEditingState FgroupActionEdMode::GetEditingState() const
{
	UWorld* World = GetWorld();

	if (GEditor->bIsSimulatingInEditor)
	{
		return EGaPaintEditingState::SIEWorld;
	}
	else if (GEditor->PlayWorld != NULL)
	{
		return EGaPaintEditingState::PIEWorld;
	}
	else if (World == nullptr)
	{
		return EGaPaintEditingState::Unknown;
	}

	return EGaPaintEditingState::Enabled;

}


void FgroupActionEdMode::Exit()
{
	FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
	Toolkit.Reset();
	SphereBrushComponent->UnregisterComponent();

	//GEditor->GetSelectedActors()->SelectionChangedEvent.Remove();

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FgroupActionEdMode::DisallowMouseDeltaTracking() const
{
	return bToolActive;

}

void FgroupActionEdMode::Tick(FEditorViewportClient* ViewportClient, float DeltaTime)
{
	if (!tempStaticClass::ThePDispose(false, false))
		return;
	if (!IsEditingEnabled())
	{
		return;
	}

	if (bToolActive)
	{
		ApplyBrush(ViewportClient);
	}

	if (currentFormation->bNeedRefresh)
	{
		currentFormation->RefreshFormationHash();
		currentFormation->bNeedRefresh = false;
	}

	FEdMode::Tick(ViewportClient, DeltaTime);

	if (gaSetting->egcm == EGaControlMode::EGCM_Select)
	{
		UpdateWidgetLocationToInstanceSelection();
	}

	if (bBrushTraceValid && gaSetting->egcm == EGaControlMode::EGCM_Paint)
	{

		FTransform BrushTransform = FTransform(FQuat::Identity, BrushLocation, FVector(GetPaintingBrushRadius() * 0.00625f));
		SphereBrushComponent->SetRelativeTransform(BrushTransform);


		if (!SphereBrushComponent->IsRegistered())
		{
			SphereBrushComponent->RegisterComponentWithWorld(ViewportClient->GetWorld());
		}
	}
	else
	{
		if (SphereBrushComponent->IsRegistered())
		{
			SphereBrushComponent->UnregisterComponent();
		}
	}
}

bool FgroupActionEdMode::InputDelta(FEditorViewportClient* InViewportClient, FViewport* InViewport, FVector& InDrag, FRotator& InRot, FVector& InScale)
{

	return FEdMode::InputDelta(InViewportClient, InViewport, InDrag, InRot, InScale);
}

void FgroupActionEdMode::AddReferencedObjects(FReferenceCollector& Collector)
{
	// Call parent implementation
	FEdMode::AddReferencedObjects(Collector);

	Collector.AddReferencedObject(SphereBrushComponent);
}

FVector FgroupActionEdMode::GetWidgetLocation() const
{
	return FEdMode::GetWidgetLocation();
}

bool FgroupActionEdMode::AllowWidgetMove()
{
	return ShouldDrawWidget();
}

bool FgroupActionEdMode::ShouldDrawWidget() const
{
	if (gaSetting->egcm == EGaControlMode::EGCM_Select)
	{
		FVector Location;
		return GetSelectionLocation(GetWorld(), Location);
	}
	return false;
}

bool FgroupActionEdMode::UsesTransformWidget() const
{
	return ShouldDrawWidget();
}

EAxisList::Type FgroupActionEdMode::GetWidgetAxisToDraw(FWidget::EWidgetMode InWidgetMode) const
{
	switch (InWidgetMode)
	{
	case FWidget::WM_Translate:
	case FWidget::WM_Rotate:
	case FWidget::WM_Scale:
		return EAxisList::XYZ;
	default:
		return EAxisList::None;
	}
}


bool FgroupActionEdMode::MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY)
{
	// Use mouse capture if there's no other interactor currently tracing brush
	if (IsEditingEnabled())
	{
		// Compute a world space ray from the screen space mouse coordinates
		FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
			ViewportClient->Viewport,
			ViewportClient->GetScene(),
			ViewportClient->EngineShowFlags)
			.SetRealtimeUpdate(ViewportClient->IsRealtime()));

		FSceneView* View = ViewportClient->CalcSceneView(&ViewFamily);
		FViewportCursorLocation MouseViewportRay(View, ViewportClient, MouseX, MouseY);
		BrushTraceDirection = MouseViewportRay.GetDirection();

		FVector BrushTraceStart = MouseViewportRay.GetOrigin();
		if (ViewportClient->IsOrtho())
		{
			BrushTraceStart += -WORLD_MAX * BrushTraceDirection;
		}

		GroupActionBrushTrace(ViewportClient, BrushTraceStart, BrushTraceDirection);
	}
	return false;
}

bool FgroupActionEdMode::CapturedMouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY)
{
	// Use mouse capture if there's no other interactor currently tracing brush
	{
		//Compute a world space ray from the screen space mouse coordinates
		FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
			ViewportClient->Viewport,
			ViewportClient->GetScene(),
			ViewportClient->EngineShowFlags)
			.SetRealtimeUpdate(ViewportClient->IsRealtime()));

		FSceneView* View = ViewportClient->CalcSceneView(&ViewFamily);
		FViewportCursorLocation MouseViewportRay(View, ViewportClient, MouseX, MouseY);
		BrushTraceDirection = MouseViewportRay.GetDirection();

		FVector BrushTraceStart = MouseViewportRay.GetOrigin();
		if (ViewportClient->IsOrtho())
		{
			BrushTraceStart += -WORLD_MAX * BrushTraceDirection;
		}

		GroupActionBrushTrace(ViewportClient, BrushTraceStart, BrushTraceDirection);
	}
	return false;
}

void FgroupActionEdMode::StartFoliageBrushTrace(FEditorViewportClient* ViewportClient)
{
	if (!bToolActive)
	{
		//PreApplyBrush();
		ApplyBrush(ViewportClient);

		bToolActive = true;
	}

}


void FgroupActionEdMode::EndFoliageBrushTrace()
{
	bToolActive = false;
	bBrushTraceValid = false;
}

/** Trace and update brush position */
void FgroupActionEdMode::GroupActionBrushTrace(FEditorViewportClient* ViewportClient, const FVector& InRayOrigin, const FVector& InRayDirection)
{
	bBrushTraceValid = false;
	//if (ViewportClient == nullptr || (!ViewportClient->IsMovingCamera() && ViewportClient->IsVisible()))
	{
		if (gaSetting->egcm == EGaControlMode::EGCM_Paint)
		{
			const FVector TraceStart(InRayOrigin);
			const FVector TraceEnd(InRayOrigin + InRayDirection * HALF_WORLD_MAX);

			FHitResult Hit;
			UWorld* World = GetWorld();
			static FName NAME_FoliageBrush = FName(TEXT("FoliageBrush"));

			if (GroupActionTrace(World, Hit, FDesiredGaInstance(TraceStart, TraceEnd), NAME_FoliageBrush, false))
			{
				{
					// Adjust the brush location
					BrushLocation = Hit.Location;
					BrushNormal = Hit.Normal;
					// Still want to draw the brush when resizing
					bBrushTraceValid = true;
				}
			}
		}
	}
}

bool FgroupActionEdMode::InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event)
{
	if (!tempStaticClass::ThePDispose(false, false))
		return false;
	if (!IsEditingEnabled())
	{
		return false;
	}

	bool bHandled = false;
	if (gaSetting->egcm == EGaControlMode::EGCM_Paint)
	{
		if (Key == EKeys::LeftMouseButton && Event == IE_Pressed)
		{
			StartFoliageBrushTrace(ViewportClient);
			bHandled = true;
		}
		else if (bToolActive && Event == IE_Released &&
			Key == EKeys::LeftMouseButton)
		{
			//Set the cursor position to that of the slate cursor so it wont snap back
			Viewport->SetPreCaptureMousePosFromSlateCursor();
			EndFoliageBrushTrace();
			bHandled = true;
			currentFormation->RefreshFormationHash();
		}
		else if ((Key == EKeys::LeftShift || Key == EKeys::RightShift) && Event == IE_Released)
		{
			paintEditingMode = EGaPaintEditingMode::paint;
		}
		else if ((Key == EKeys::LeftShift || Key == EKeys::RightShift) && Event == IE_Pressed)
		{
			paintEditingMode = EGaPaintEditingMode::erase;
		}
		else if ((Key == EKeys::LeftControl) && Event == IE_Pressed)
		{
			bCtrlDown = true;
		}
		else if ((Key == EKeys::LeftControl) && Event == IE_Released)
		{
			bCtrlDown = false;
		}
		else if ((Key == EKeys::LeftAlt) && Event == IE_Pressed)
		{
			bAltDown = true;
		}
		else if ((Key == EKeys::LeftAlt) && Event == IE_Released)
		{
			bAltDown = false;
		}
		else if ((Key == EKeys::MouseScrollUp) && bCtrlDown)
		{
			gaSetting->ChangeBrushRadisu(15);
			bHandled = true;
		}
		else if ((Key == EKeys::MouseScrollDown) && bCtrlDown)
		{
			gaSetting->ChangeBrushRadisu(-15);
			bHandled = true;
		}
		else if ((Key == EKeys::MouseScrollUp) && bAltDown)
		{
			if (currentFormation)
			{
				currentFormation->ChangeInstanceSize(1);
				bHandled = true;
			}
		}
		else if ((Key == EKeys::MouseScrollDown) && bAltDown)
		{
			if (currentFormation)
			{
				currentFormation->ChangeInstanceSize(-1);
				bHandled = true;
			}
		}
		else if ((Key == EKeys::X) && Event == IE_Pressed)
		{
			gaSetting->bSinglePaintMode = !gaSetting->bSinglePaintMode;
			bHandled = true;
		}
	}
	if (!bHandled && gaSetting->egcm == EGaControlMode::EGCM_Select)
	{

	}

	return bHandled;
}

bool FgroupActionEdMode::IsEditingEnabled() const
{
	if (GetEditingState() != EGaPaintEditingState::Enabled)
		return false;

	if (!currentFormation)
		return false;

	if (!SphereBrushComponent)
		return false;

	return true;
}


bool FgroupActionEdMode::UsesToolkits() const
{
	return true;
}

FPotentialGaInstance::FPotentialGaInstance(FVector InHitLocation, FVector InHitNormal, UPrimitiveComponent* InHitComponent, float InHitWeight, const FDesiredGaInstance& InDesiredInstance)
{
	HitLocation = InHitLocation;
	HitNormal = InHitNormal;
	HitComponent = InHitComponent;
	HitWeight = InHitWeight;
	DesiredInstance = InDesiredInstance;
}

bool FPotentialGaInstance::PlaceInstance(const UWorld* InWorld, const UFoliageType* Settings, bool bSkipCollision)
{
	return false;
}

PRAGMA_ENABLE_OPTIMIZATION
