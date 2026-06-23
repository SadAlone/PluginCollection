// Fill out your copyright notice in the Description page of Project Settings.


#include "GaGroupUnit.h"

#include "GaCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "groupActionGISS.h"

#include "LandscapeClasses.h"
PRAGMA_DISABLE_OPTIMIZATION
// Sets default values


void FGroupActionPaintInfo::AddInstance(FVector location, int Index)
{
	InstanceHash->InsertInstance(location, Index);
}

void FGroupActionPaintInfo::InitInstanceComponent(TMap<int, FVector>idLocationMap)
{
	Clear();
	for (auto& it : idLocationMap)
	{
		AddInstance(it.Value, it.Key);
	}
}

void FGroupActionPaintInfo::Clear()
{
	InstanceHash->Empty();
}

AGaGroupUnit::AGaGroupUnit()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("root");

	IdentifyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("identifyMesh");
	IdentifyMeshComponent->SetupAttachment(RootComponent);

	//普通木桩实例组件
	groupUnitDeadmanInstanceComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>("deadMan");
	groupUnitDeadmanInstanceComponent->SetupAttachment(RootComponent);

	UObject* lsObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/lcTool/asset/groupAction/model/gaUnit.gaUnit'"));
	UObject* deadManMeshObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/lcTool/asset/groupAction/model/targetUnitCharacter.targetUnitCharacter'"));

	if (lsObj)
	{
		UStaticMesh* identifyMesh = Cast<UStaticMesh>(lsObj);
		if (identifyMesh)
		{
			IdentifyMeshComponent->SetStaticMesh(identifyMesh);
			IdentifyMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			//先隐藏
			IdentifyMeshComponent->SetVisibility(true);
		}
	}
	if (deadManMeshObj)
	{
		UStaticMesh* identifyMesh = Cast<UStaticMesh>(deadManMeshObj);
		if (identifyMesh)
		{
			groupUnitDeadmanInstanceComponent->SetStaticMesh(identifyMesh);
			groupUnitDeadmanInstanceComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			//隐藏

			UGroupActionEngineSS* gaess = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

			bool bShowDeadMan = true;
			if (gaess)
			{
				UGaSettingObject* settingObj = gaess->gaSettingObj;
				if (settingObj)
					bShowDeadMan = settingObj->bShowGaUnit;
			}
			groupUnitDeadmanInstanceComponent->SetVisibility(bShowDeadMan);
		}
	}
	bLoadAtInit = false;
	LoadUnitData();
}

TSet<ACharacter*> AGaGroupUnit::GetAliveCharacterSet()
{
	return aliveCharacterSet;
}

void AGaGroupUnit::RemoveAliveCharacter(AGaCharacter* character)
{
	if (character)
	{
		aliveCharacterSet.Remove(character);
	}
}

// Called when the game starts or when spawned
void AGaGroupUnit::BeginPlay()
{
	Super::BeginPlay();

	//隐藏单元自身
	SetActorHiddenInGame(true);

	if (bEnableDebgCloseMdoe)
		return;

	if (bSpawnCharWhenBegin)
	{
		SpawnCharacter();
		bAlreadSpawnCharacter = true;
	}
}


void AGaGroupUnit::BuildFormation()
{
	groupUnitDeadmanInstanceComponent->ClearInstances();
	idFormationBuildUnitData.Empty();
	aliveCharacterSet.Empty();
	characterIdMap.Empty();
	characterScaleMap.Empty();

	TArray<FBoxSphereBounds>lsBoundArr;

	if (formationBuilder)
	{
		bool bWorldSpace = false;
		TArray<FFormationBuildUnitData> formationArr = formationBuilder->BuildSpawnFormation(bWorldSpace);
		for (int j = 0; j < formationArr.Num(); j++)
		{
			FFormationBuildUnitData lsData = formationArr[j];
			lsData.characterData.characterId = lsData.id;
			idFormationBuildUnitData.Add(lsData.id, lsData);
			FTransform tempTrans;
			tempTrans = lsData.characterData.characterSpawnTransform;
			if (lsData.characterData.openScaleRange)
			{
				FVector tmepScale01 = lsData.characterData.characterSpawnTransform.GetScale3D();

				FVector2D tempValue = lsData.characterData.characterSpawnTransformRange;
				
				float tempScale = UKismetMathLibrary::RandomFloatInRange(tempValue.X, tempValue.Y);
				
				FVector tmepSca = tmepScale01 + UKismetMathLibrary::MakeVector(tempScale, tempScale, tempScale);


				tempTrans = UKismetMathLibrary::MakeTransform(lsData.characterData.characterSpawnTransform.GetLocation(), 
					lsData.characterData.characterSpawnTransform.GetRotation().Rotator(), tmepSca);

				characterScaleMap.Add(lsData.characterData.characterId, tmepSca);
	
			}
			groupUnitDeadmanInstanceComponent->AddInstanceWorldSpace(tempTrans);
		}
	}

	//保存阵型数据
	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

	if (gaEss)
	{
		gaEss->AddUnitSaveDataAndSaveUn(this);
	}
}

void AGaGroupUnit::RefreshFormation()
{
	groupUnitDeadmanInstanceComponent->ClearInstances();
	for (auto& It : idFormationBuildUnitData)
	{
		groupUnitDeadmanInstanceComponent->AddInstanceWorldSpace(It.Value.characterData.characterSpawnTransform);
	}
}

void AGaGroupUnit::SetGuid(FGuid inguid)
{
	this->guid = inguid;
}

bool  AGaGroupUnit::traceSpecialLocationHeight(FVector& inOutVector)
{
	FHitResult hitResult;

	FVector startLocation = inOutVector + FVector(0, 0, 5000);

	startLocation = GetActorTransform().TransformPosition(startLocation);

	FVector endLocation = inOutVector + FVector(0, 0, -5000);

	endLocation = GetActorTransform().TransformPosition(endLocation);

	bool retValue = GetWorld()->LineTraceSingleByChannel(hitResult,
		startLocation,
		endLocation,
		ECollisionChannel::ECC_WorldStatic,
		FCollisionQueryParams::DefaultQueryParam,
		FCollisionResponseParams::DefaultResponseParam);
	if (retValue)
	{
		if (Cast<ALandscape>(hitResult.Actor))
		{
			inOutVector = GetActorTransform().InverseTransformPosition(hitResult.Location);
			return true;
		}
	}
	return false;
}

void AGaGroupUnit::SpawnCharacter()
{
	int count = 0;
	for (auto itSpawnData = idFormationBuildUnitData.CreateConstIterator();
		itSpawnData;
		++itSpawnData)
	{
		FFormationBuildUnitData gaFormationBuildData = itSpawnData.Value();

		if (!gaFormationBuildData.gaCharacterClass->IsValidLowLevel())
			return;
		FGaCharacterData gaCharacterData = gaFormationBuildData.characterData;

		FVector spawnLocalLocation = gaCharacterData.characterSpawnTransform.GetLocation();

		FTransform spawnTrans;
		if (gaCharacterData.openScaleRange)
		{
			spawnTrans.SetScale3D(*characterScaleMap.Find(gaCharacterData.characterId));
		}
												

		FRotator lsSpawnRot;
		FRotator lsRandomRot;
		//生成旋转
		if (bUseSpecialSpawnRotator)
		{
			lsSpawnRot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), GetActorTransform().TransformPosition(specialSpawnRotator));

			lsSpawnRot.Pitch = 0;
			lsSpawnRot.Roll = 0;
			spawnTrans.SetRotation(lsSpawnRot.Quaternion());
		}
		else if (bUseRandomSpawnRotator)
		{
			lsRandomRot.Pitch = 0;
			lsRandomRot.Roll = 0;
			lsRandomRot.Yaw = FMath::RandRange(0, 359);
			spawnTrans.SetRotation(lsRandomRot.Quaternion());
		}

		spawnTrans.SetLocation(spawnLocalLocation + spawnCharacterOffset);

		//延迟生成
		AGaCharacter* character = GetWorld()->SpawnActorDeferred<AGaCharacter>(gaFormationBuildData.gaCharacterClass, spawnTrans, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);

		//传递角色构建参数
		character->gaUnit = this;
		character->characterData = gaCharacterData;
		character->targetArr = targetPointArr;
		character->bIsBakeCharacter = true;
		if (bUseSpecialSpawnRotator)
		{
			character->characterData.noTargetLooat = lsSpawnRot;
		}
		else if (bUseRandomSpawnRotator)
		{
			character->characterData.noTargetLooat = lsRandomRot;
		}
		UGameplayStatics::FinishSpawningActor(character, spawnTrans);

		//添加到合集
		characterIdMap.Add(gaCharacterData.characterId, character);
		//character->SetActorLabel(this->GetActorLabel() + FString::FromInt(count), true);

		aliveCharacterSet.Add(character);
		count++;

		//通知蓝图角色生成
		spawnCharacterEvent(character);
	}
}

void AGaGroupUnit::SaveUnitData_Implementation()
{

	UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	if (!gaESS)
		return;

	gaESS->AddUnitSaveDataAndSaveUn(this);
}

void AGaGroupUnit::LoadUnitData_Implementation()
{
	if (guid.IsValid())
	{
		UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
		if (!gaESS)
			return;

		FGaUnitSaveData* lsSaveData = gaESS->GetUnitSaveGame()->saveUnitData.Find(guid);
		if (lsSaveData)
		{
			this->idFormationBuildUnitData = lsSaveData->idFormationBuildUnitData;
		}
	}
}

// Called every frame
void AGaGroupUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bEnableDebgCloseMdoe)
		return;

	if (bUseSequencerChangeProperty)
	{
		for (auto charIt : characterIdMap)
		{
			AGaCharacter* gaChar = Cast<AGaCharacter>(charIt.Value);
			if (gaChar)
			{
				gaChar->GetCharacterMovement()->MaxWalkSpeed = gaChar->characterData.gaUnitMoveData.baseMoveSpeed.X
					* moveSpeedMultiValue;
			}
		}
	}

	//生成角色
	if (bCanSpawnCaCharacter && !bAlreadSpawnCharacter)
	{
		SpawnCharacter();
		bAlreadSpawnCharacter = true;
	}

	//销毁角色
	if (bCanDestroyGaCharaceter && !bAlreadDestroyCharacter)
	{
		for (auto pCharacter : characterIdMap)
		{
			if (pCharacter.Value)
			{

				AGaCharacter* lsChar = Cast<AGaCharacter>(pCharacter.Value);
				if (lsChar)
					lsChar->Destroy();
			}
		}
		bAlreadDestroyCharacter = true;
	}
}

void AGaGroupUnit::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	//载入保存数据
	if (!bLoadAtInit)
	{
		LoadUnitData();
		RefreshFormation();
		bLoadAtInit = true;
	}
}

FVector ABaseFormationBuilder::GetFormationLocation_Implementation(int id, AGaGroupUnit* unit, AGaTargetPointActor* target, bool& bHaveResult)
{
	return GetFormationLocationNative(id, unit, target, bHaveResult);
}

TArray<FFormationBuildUnitData> ABaseFormationBuilder::BuildSpawnFormation_Implementation(bool& bWorldSpace)
{
	return BuildSpawnFormationNative(bWorldSpace);
}


FVector2D ABaseFormationBuilder::GetRandomPointInCircle(float radius)
{
	return FMath::RandPointInCircle(radius);
}

bool ABaseFormationBuilder::IsBoundBoxIntersect(FBoxSphereBounds bound1, FBoxSphereBounds bound2)
{
	return FBoxSphereBounds::BoxesIntersect(bound1, bound2);
}

bool ABaseFormationBuilder::isBoundSphereIntersect(FBoxSphereBounds bound1, FBoxSphereBounds bound2)
{
	return FBoxSphereBounds::SpheresIntersect(bound1, bound2);
}

FGaCharacterData ABaseFormationBuilder::GetRandomCharacterData(TSubclassOf<AGaCharacter>gaCharClass)
{
	//FVector lsPosition = inLocation;
	if (!gaCharClass->IsValidLowLevel())
	{
		return FGaCharacterData();
	}
	AGaCharacter* character = Cast<AGaCharacter>(gaCharClass->GetDefaultObject());
	if (!character)
		return FGaCharacterData();

	FGaCharacterData itUnitFormationData = character->characterData;

	//处理待机动画随机index
	FGaUnitInitData gaUnitInitData = itUnitFormationData.gaUnitInitData;
	if (gaUnitInitData.gaUnitInitAnimData.bUseRandomIndex
		&& gaUnitInitData.gaUnitInitAnimData.initAnim.Num() > 0)
	{
		//筛选随机动画
		int randAnimIndex = FMath::RandRange(0, gaUnitInitData.gaUnitInitAnimData.initAnim.Num() - 1);
		UAnimationAsset* lsAnim = gaUnitInitData.gaUnitInitAnimData.initAnim[randAnimIndex];
		gaUnitInitData.gaUnitInitAnimData.initAnim.Empty();
		gaUnitInitData.gaUnitInitAnimData.initAnim.Add(lsAnim);

		if (gaUnitInitData.gaUnitInitAnimData.bUseRandomAnimSpeed)
		{
			//处理随机动画播放速度
			float randAnimSpeed = FMath::RandRange(gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.X, gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.Y);
			gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.X = randAnimSpeed;

			UAnimSequenceBase* lsAnimSeq = Cast<UAnimSequenceBase>(lsAnim);
			if (lsAnimSeq)
			{
				float playPostion = FMath::RandRange(0.0f, lsAnimSeq->GetPlayLength() * (1 / randAnimSpeed));
				gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.Y = playPostion;
			}
			else
			{
				gaUnitInitData.gaUnitInitAnimData.randomAnimSpeedRange.Y = 0;
			}
		}
	}

	//处理移动动画随机index
	FGaUnitMoveData gaUnitMoveData = itUnitFormationData.gaUnitMoveData;
	if (gaUnitMoveData.gaUnitMoveAnimData.bUseRandomIndex
		&& gaUnitMoveData.gaUnitMoveAnimData.moveAnim.Num() > 0)
	{
		//筛选随机动画
		int randAnimIndex = FMath::RandRange(0, gaUnitMoveData.gaUnitMoveAnimData.moveAnim.Num() - 1);
		UAnimationAsset* lsAnim = gaUnitMoveData.gaUnitMoveAnimData.moveAnim[randAnimIndex];
		gaUnitMoveData.gaUnitMoveAnimData.moveAnim.Empty();
		gaUnitMoveData.gaUnitMoveAnimData.moveAnim.Add(lsAnim);

		if (gaUnitMoveData.gaUnitMoveAnimData.bUseRandomAnimSpeed)
		{

			//处理随机动画播放速度
			float randAnimSpeed = FMath::RandRange(gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.X, gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.Y);
			gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.X = randAnimSpeed;

			UAnimSequenceBase* lsAnimSeq = Cast<UAnimSequenceBase>(lsAnim);
			if (lsAnimSeq)
			{
				float playPostion = FMath::RandRange(0.0f, lsAnimSeq->GetPlayLength() * (1 / randAnimSpeed));
				gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.Y = playPostion;
			}
			else
			{
				gaUnitMoveData.gaUnitMoveAnimData.randomAnimSpeedRange.Y = 0;
			}

			//处理移动速度
			gaUnitMoveData.baseMoveSpeed.X = FMath::RandRange(gaUnitMoveData.baseMoveSpeed.X, gaUnitMoveData.baseMoveSpeed.Y);
			gaUnitMoveData.moveAccelerate.X = FMath::RandRange(gaUnitMoveData.moveAccelerate.X, gaUnitMoveData.moveAccelerate.Y);

		}
	}

	//处理攻击动画随机index
	FGaUnitAttackData gaUnitAttackData = itUnitFormationData.gaUnitAttackData;
	if (gaUnitAttackData.gaUnitAttackAnimData.bUseRandomIndex
		&& gaUnitAttackData.gaUnitAttackAnimData.AttackAnim.Num() > 0)
	{
		//筛选随机动画
		int randAnimIndex = FMath::RandRange(0, gaUnitAttackData.gaUnitAttackAnimData.AttackAnim.Num() - 1);
		UAnimationAsset* lsAnim = gaUnitAttackData.gaUnitAttackAnimData.AttackAnim[randAnimIndex];
		gaUnitAttackData.gaUnitAttackAnimData.AttackAnim.Empty();
		gaUnitAttackData.gaUnitAttackAnimData.AttackAnim.Add(lsAnim);

		if (gaUnitAttackData.gaUnitAttackAnimData.bUseRandomAnimSpeed)
		{
			//处理随机动画播放速度
			float randAnimSpeed = FMath::RandRange(gaUnitAttackData.gaUnitAttackAnimData.randomAnimSpeedRange.X, gaUnitAttackData.gaUnitAttackAnimData.randomAnimSpeedRange.Y);
			gaUnitAttackData.gaUnitAttackAnimData.randomAnimSpeedRange.X = randAnimSpeed;

			UAnimSequenceBase* lsAnimSeq = Cast<UAnimSequenceBase>(lsAnim);
			if (lsAnimSeq)
			{
				float playPostion = FMath::RandRange(0.0f, lsAnimSeq->GetPlayLength() * (1 / randAnimSpeed));
				gaUnitAttackData.gaUnitAttackAnimData.randomAnimSpeedRange.Y = playPostion;
			}
			else
			{
				gaUnitAttackData.gaUnitAttackAnimData.randomAnimSpeedRange.Y = 0;
			}
		}
	}

	//处理死亡动画随机index
	FGaUnitDeadData gaUnitDeadeData = itUnitFormationData.gaUnitDeadData;
	if (gaUnitDeadeData.deadAnimData.bUseRandomIndex
		&& gaUnitDeadeData.deadAnimData.deadAnim.Num() > 0)
	{
		//筛选随机动画
		int randAnimIndex = FMath::RandRange(0, gaUnitDeadeData.deadAnimData.deadAnim.Num() - 1);
		UAnimationAsset* lsAnim = gaUnitDeadeData.deadAnimData.deadAnim[randAnimIndex];
		gaUnitDeadeData.deadAnimData.deadAnim.Empty();
		gaUnitDeadeData.deadAnimData.deadAnim.Add(lsAnim);

		if (!gaUnitDeadeData.deadAnimData.bUseRandomAnimSpeed)
		{
			//处理随机动画播放速度
			float randAnimSpeed = FMath::RandRange(gaUnitDeadeData.deadAnimData.randomAnimSpeedRange.X, gaUnitDeadeData.deadAnimData.randomAnimSpeedRange.Y);
			gaUnitDeadeData.deadAnimData.randomAnimSpeedRange.X = randAnimSpeed;

			UAnimSequenceBase* lsAnimSeq = Cast<UAnimSequenceBase>(lsAnim);
			if (lsAnimSeq)
			{
				float playPostion = FMath::RandRange(0.0f, lsAnimSeq->GetPlayLength() * (1 / randAnimSpeed));
				gaUnitDeadeData.deadAnimData.randomAnimSpeedRange.X = playPostion;
			}
			else
			{
				gaUnitDeadeData.deadAnimData.randomAnimSpeedRange.X = 0;
			}

			//处理HP
			gaUnitDeadeData.hp.X = FMath::RandRange(gaUnitDeadeData.hp.X, gaUnitDeadeData.hp.Y);
		}
	}

	itUnitFormationData.gaUnitInitData = gaUnitInitData;
	itUnitFormationData.gaUnitMoveData = gaUnitMoveData;
	itUnitFormationData.gaUnitAttackData = gaUnitAttackData;
	itUnitFormationData.gaUnitDeadData = gaUnitDeadeData;


	//添加记号
	return itUnitFormationData;
}

void ABaseFormationBuilder::ShowHideFormation_Implementation(bool bShow)
{
}

void ABaseFormationBuilder::SaveFormationData_Implementation()
{
	UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	if (!gaESS)
		return;

	gaESS->AddFormationSaveDataAndSave(this);
}

void ABaseFormationBuilder::LoadFormationData_Implementation()
{
	if (guid.IsValid())
	{
		UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
		if (!gaESS)
			return;

		FGaFormationSaveData* lsSaveData = gaESS->GetUnitSaveGame()->saveFormationData.Find(guid);
		if (lsSaveData)
		{
			this->idLocationMap = lsSaveData->idLocationData;
		}
	}
}

void ABaseFormationBuilder::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	//载入保存数据
	if (!bLoadAtInit)
	{
		LoadFormationData();
		UpdateIdMapToFormation();

		if (guid.IsValid())
		{
			UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
			if (!gaESS)
				return;

			FGaUnitSaveData* lsSaveData = gaESS->GetUnitSaveGame()->saveUnitData.Find(guid);
			if (lsSaveData)
			{
				this->idFormationBuildUnitData = lsSaveData->idFormationBuildUnitData;
			}
		}

		groupUnitDeadmanInstanceComponent->ClearInstances();
		for (auto& It : idFormationBuildUnitData)
		{
			groupUnitDeadmanInstanceComponent->AddInstanceWorldSpace(It.Value.characterData.characterSpawnTransform);
		}

		bLoadAtInit = true;
	}
}

void ABaseFormationBuilder::RefreshFormationHash()
{
	//清空哈希实例
	formationHashInstance.Empty();
	UpdateIdMapToFormation();
	for (auto& it : idLocationMap)
	{
		int id = it.Key;
		FVector loc = it.Value;
		//插入实例
		formationHashInstance.InsertInstance(loc, id);
	}
	SaveFormationData();
	UpdateFormationNumber(idLocationMap.Num());
}

void ABaseFormationBuilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bEnableDebgCloseMdoe)
		return;

	if (bUseSequencerChangeProperty)
	{
		for (auto charIt : characterIdMap)
		{
			AGaCharacter* gaChar = Cast<AGaCharacter>(charIt.Value);
			if (gaChar)
			{
				gaChar->GetCharacterMovement()->MaxWalkSpeed = gaChar->characterData.gaUnitMoveData.baseMoveSpeed.X
					* moveSpeedMultiValue;
			}
		}
	}

	//生成角色
	if (bCanSpawnCaCharacter && !bAlreadSpawnCharacter)
	{
		//延迟生成
		if (delaySpawn.isDelaySpawn)
		{
			float delaytime = 0;

			delaytime = delaySpawn.bMultiDelayTime;

			int32 tempSpawnCount = delaySpawn.bMultiDelayNum; //临时生成次数

			for (int i = 0; i < tempSpawnCount; i++)
			{
				FLatentActionInfo LatentInfo;
				LatentInfo.CallbackTarget = this;
				LatentInfo.ExecutionFunction = "SpawnCharacter";
				LatentInfo.Linkage = i;
				LatentInfo.UUID = 1234 + i;
			
				UKismetSystemLibrary::Delay(GetWorld(), delaytime * i, LatentInfo);
			}
			bAlreadSpawnCharacter = true;
		}
		else
		{
			SpawnCharacter();
			bAlreadSpawnCharacter = true;
		}
	}

	//销毁角色
	if (bCanDestroyGaCharaceter && !bAlreadDestroyCharacter)
	{
		for (auto pCharacter : characterIdMap)
		{
			if (pCharacter.Value)
			{

				AGaCharacter* lsChar = Cast<AGaCharacter>(pCharacter.Value);
				if (lsChar)
					lsChar->Destroy();
			}
		}
		bAlreadDestroyCharacter = true;
	}
}

void ABaseFormationBuilder::BeginPlay()
{
	Super::BeginPlay();
	//隐藏单元自身
	SetActorHiddenInGame(true);

	if (bEnableDebgCloseMdoe)
		return;

	if (bSpawnCharWhenBegin)
	{
		//延迟生成
		if (delaySpawn.isDelaySpawn)
		{
			float delaytime = 0;

			delaytime = delaySpawn.bMultiDelayTime;

			int32 tempSpawnCount = delaySpawn.bMultiDelayNum; //临时生成次数

			for (int i = 0; i < tempSpawnCount; i++)
			{
				FLatentActionInfo LatentInfo;
				LatentInfo.CallbackTarget = this;
				LatentInfo.ExecutionFunction = "SpawnCharacter";
				LatentInfo.Linkage = i;
				LatentInfo.UUID = 1234 + i;
				UKismetSystemLibrary::Delay(GetWorld(), delaytime * i, LatentInfo);
			}
		}
		else
		{
			SpawnCharacter();
			bAlreadSpawnCharacter = true;
		}
	}
}

void ABaseFormationBuilder::BuildFormation()
{
	groupUnitDeadmanInstanceComponent->ClearInstances();
	idFormationBuildUnitData.Empty();
	aliveCharacterSet.Empty();
	characterIdMap.Empty();
	characterScaleMap.Empty();

	TArray<FBoxSphereBounds>lsBoundArr;

	if (formationBuilder)
	{
		bool bWorldSpace = false;
	
		TArray<FFormationBuildUnitData> formationArr = formationBuilder->BuildSpawnFormation(bWorldSpace);

			for (int j = 0; j < formationArr.Num(); j++)
			{
				FFormationBuildUnitData lsData = formationArr[j];
				lsData.characterData.characterId = lsData.id;
				idFormationBuildUnitData.Add(lsData.id, lsData);
				FTransform tempTrans;
				tempTrans = lsData.characterData.characterSpawnTransform;
				if (lsData.characterData.openScaleRange)
				{
					FVector tmepScale01 = lsData.characterData.characterSpawnTransform.GetScale3D();

					FVector2D tempValue = lsData.characterData.characterSpawnTransformRange;

					float tempScale = UKismetMathLibrary::RandomFloatInRange(tempValue.X, tempValue.Y);

					FVector tmepSca = tmepScale01 + UKismetMathLibrary::MakeVector(tempScale, tempScale, tempScale);


					tempTrans = UKismetMathLibrary::MakeTransform(lsData.characterData.characterSpawnTransform.GetLocation(),
						lsData.characterData.characterSpawnTransform.GetRotation().Rotator(), tmepSca);

					characterScaleMap.Add(lsData.characterData.characterId, tmepSca);

				}
				groupUnitDeadmanInstanceComponent->AddInstanceWorldSpace(tempTrans);
			}
		
	}

	//保存阵型数据
	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

	if (gaEss)
	{
		gaEss->AddUnitSaveDataAndSaveBF(this);
		//gaEss->AddUnitSaveDataAndSave(this);
	}
}

void ABaseFormationBuilder::SpawnCharacter(int32 characterId)
{
	int count = 0;
	for (auto itSpawnData = idFormationBuildUnitData.CreateConstIterator();
		itSpawnData;
		++itSpawnData)
	{
		
		FFormationBuildUnitData gaFormationBuildData = itSpawnData.Value();

		if (!gaFormationBuildData.gaCharacterClass->IsValidLowLevel())
			return;
		FGaCharacterData gaCharacterData = gaFormationBuildData.characterData;

		FVector spawnLocalLocation = gaCharacterData.characterSpawnTransform.GetLocation();

		FTransform spawnTrans;
		if (gaCharacterData.openScaleRange)
		{
			spawnTrans.SetScale3D(*characterScaleMap.Find(gaCharacterData.characterId));
		}


		FRotator lsSpawnRot;
		FRotator lsRandomRot;
		//生成旋转
		if (bUseSpecialSpawnRotator)
		{
			lsSpawnRot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), GetActorTransform().TransformPosition(specialSpawnRotator));

			lsSpawnRot.Pitch = 0;
			lsSpawnRot.Roll = 0;
			spawnTrans.SetRotation(lsSpawnRot.Quaternion());
		}
		else if (bUseRandomSpawnRotator)
		{
			lsRandomRot.Pitch = 0;
			lsRandomRot.Roll = 0;
			lsRandomRot.Yaw = FMath::RandRange(0, 359);
			spawnTrans.SetRotation(lsRandomRot.Quaternion());
		}

		spawnTrans.SetLocation(spawnLocalLocation + spawnCharacterOffset);

		//FPlatformProcess::Sleep(delaytime);
		AGaCharacter* character = GetWorld()->SpawnActorDeferred<AGaCharacter>(gaFormationBuildData.gaCharacterClass, spawnTrans, this, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
		
		//传递角色构建参数
		character->baseForBuilderUnit = this;
		character->characterData = gaCharacterData;

		character->targetArr = targetPointArr;
		character->bIsBakeCharacter = true;
		character->targetViewport = viewPort;
		character->randomDeadRotation = randomDeadRotation;
		//character->characterData.characterId = characterId * idLocationMap.Num() + count;
		

		if (bUseSpecialSpawnRotator)
		{
			character->characterData.noTargetLooat = lsSpawnRot;
		}
		else if (bUseRandomSpawnRotator)
		{
			character->characterData.noTargetLooat = lsRandomRot;
		}
		UGameplayStatics::FinishSpawningActor(character, spawnTrans);

		int32 tempMapKey = characterId * idLocationMap.Num() + count;
		character->characterData.characterId = tempMapKey;
		character->IdChange(tempMapKey);
		//添加到合集
		characterIdMap.Add(tempMapKey, character);
		//character->SetActorLabel(this->GetActorLabel() + FString::FromInt(count), true);

		aliveCharacterSet.Add(character);
		count++;

		//通知蓝图角色生成
		spawnCharacterEvent(character);
	}
}

void ABaseFormationBuilder::SaveUnitData_Implementation()
{
	UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	if (!gaESS)
		return;

	gaESS->AddUnitSaveDataAndSaveBF(this);
}

void ABaseFormationBuilder::LoadUnitData_Implementation()
{
	if (guid.IsValid())
	{
		UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
		if (!gaESS)
			return;

		FGaUnitSaveData* lsSaveData = gaESS->GetUnitSaveGame()->saveUnitData.Find(guid);
		if (lsSaveData)
		{
			this->idFormationBuildUnitData = lsSaveData->idFormationBuildUnitData;
		}
	}
}

UGaSettingObject::UGaSettingObject()
{
}

ABaseFormationBuilder::ABaseFormationBuilder()
{
	formationBuilder = this;

	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("root");

	IdentifyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("identifyMesh");
	IdentifyMeshComponent->SetupAttachment(RootComponent);

	//普通木桩实例组件
	groupUnitDeadmanInstanceComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>("deadMan");
	groupUnitDeadmanInstanceComponent->SetupAttachment(RootComponent);

	UObject* lsObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/lcTool/asset/groupAction/model/gaUnit.gaUnit'"));
	UObject* deadManMeshObj = LoadObject<UObject>(NULL, TEXT("StaticMesh'/lcTool/asset/groupAction/model/targetUnitCharacter.targetUnitCharacter'"));

	if (lsObj)
	{
		UStaticMesh* identifyMesh = Cast<UStaticMesh>(lsObj);
		if (identifyMesh)
		{
			IdentifyMeshComponent->SetStaticMesh(identifyMesh);
			IdentifyMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			//先隐藏
			IdentifyMeshComponent->SetVisibility(true);
		}
	}
	if (deadManMeshObj)
	{
		UStaticMesh* identifyMesh = Cast<UStaticMesh>(deadManMeshObj);
		if (identifyMesh)
		{
			groupUnitDeadmanInstanceComponent->SetStaticMesh(identifyMesh);
			groupUnitDeadmanInstanceComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			//隐藏

			UGroupActionEngineSS* gaess = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();

			bool bShowDeadMan = true;
			if (gaess)
			{
				UGaSettingObject* settingObj = gaess->gaSettingObj;
				if (settingObj)
					bShowDeadMan = settingObj->bShowGaUnit;
			}
			groupUnitDeadmanInstanceComponent->SetVisibility(bShowDeadMan);
		}
	}
	bLoadAtInit = false;
	LoadUnitData();
	//AGaGroupUnit::LoadUnitData();
}

PRAGMA_ENABLE_OPTIMIZATION


FGuid ABaseFormationBuilder::GetFormationGuid()
{
	return guid;
}

void ABaseFormationBuilder::GetIdLocationMap(TMap<int, FVector>& retMap)
{
	retMap = idLocationMap;
}

void ABaseFormationBuilder::SetIdLocationMap(TMap<int, FVector> retMap)
{
	idLocationMap = retMap;
	UE_LOG(LogTemp, Error, TEXT("bsbsbsbsbs %d"), idLocationMap.Num());
}

void UGaSettingObject::ChangeBrushRadisu(float changeValue)
{
	if ((brushRadius + changeValue) <= 1)
		brushRadius = 1;
	else
		brushRadius += changeValue;
}
