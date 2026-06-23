// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildLightActor.h"
#include "Engine/Classes/Engine/SpotLight.h"
#include "Kismet/KismetMathLibrary.h"

#include "..\Public\BuildLightActor.h"
PRAGMA_DISABLE_OPTIMIZATION
// Sets default values


ABuildSpotLight::ABuildSpotLight(const FObjectInitializer& ObjectInitializer)
{
	// Structure to hold one-time initialization
	struct FConstructorStatics
	{
		FName ID_Lighting;
		FText NAME_Lighting;
		FConstructorStatics()
			: ID_Lighting(TEXT("Lighting"))
			, NAME_Lighting(NSLOCTEXT("SpriteCategory", "Lighting", "Lighting"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	sceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("defultScene"));
	RootComponent = sceneComponent;

#if WITH_EDITORONLY_DATA
	ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent0"));
	if (ArrowComponent)
	{
		ArrowComponent->ArrowColor = FColor(1, 1, 1, 1);
		ArrowComponent->bTreatAsASprite = true;
		ArrowComponent->SpriteInfo.Category = ConstructorStatics.ID_Lighting;
		ArrowComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_Lighting;
		ArrowComponent->SetupAttachment(sceneComponent);
		ArrowComponent->bLightAttachment = true;
		ArrowComponent->bIsScreenSizeScaled = true;
	}
#endif // WITH_EDITORONLY_DATA
}

void ABuildSpotLight::AddSpoitLightToMap(int layerNum, USpotLightComponent* spotLightComponent)
{
	FSphereLightLayerUnit* lsArr = spotLightMap.Find(layerNum);
	if (lsArr)
	{
		lsArr->spoitLightComponentArr.Add(spotLightComponent);
	}
	else
	{
		FSphereLightLayerUnit spotLightUnit;
		spotLightUnit.spoitLightComponentArr.Add(spotLightComponent);
		spotLightMap.Add(layerNum, spotLightUnit);
	}
}

USpotLightComponent* ABuildSpotLight::GetSpotLightFormMap(int layerNum, int numInLayer)
{
	FSphereLightLayerUnit* lsArr = spotLightMap.Find(layerNum);
	if (lsArr)
	{
		if (numInLayer >= lsArr->spoitLightComponentArr.Num())
			return nullptr;

		return lsArr->spoitLightComponentArr[numInLayer];
	}
	else
	{
		return nullptr;
	}
	return nullptr;
}

void ABuildSpotLight::PostLoad()
{
	Super::PostLoad();

#if WITH_EDITORONLY_DATA
	if (ArrowComponent)
	{
		ArrowComponent->ArrowColor = FColor(1, 1, 1, 1);
	}
#endif
}

// Disable for now
//void ABuildSpotLight::SetLightShaftConeAngle(float NewLightShaftConeAngle)
//{
//	SpotLightComponent->SetLightShaftConeAngle(NewLightShaftConeAngle);
//}

//void ABuildSpotLight::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
//{
//	Super::PostEditChangeProperty(PropertyChangedEvent);
//
//	const FName memberPropertyName = PropertyChangedEvent.MemberProperty ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;
//
//	//修改是否显示群组单元
//	if (memberPropertyName == GET_MEMBER_NAME_CHECKED(ABuildSpotLight, sphereRadius))
//	{
//		RefreshSphereLightRadius();
//	}
//}
void ABuildSpotLight::RefreshBuildSphereLight()
{
	//if (!tempStaticClass::ThePDispose(false, false))
		//return;


	HideAllLight();
	FVector tempYawDir = FVector(1, 0, 0);
	FVector tempPitchDir = FVector(1, 0, 0);

	float pitchAngle = 0;
	if (sphereLightData.bHalfSphere)
	{
		pitchAngle = 90.0f / (float)(sphereLightData.layerNum - 1);
	}
	else
	{
		pitchAngle = 180.0f / (float)(sphereLightData.layerNum - 1);
	}

	float yawAngle = 360.0f / float(sphereLightData.lightNumberOneLayer);


	float addAngle = 0;

	//确定起始结束位置
	int startIndex = sphereLightData.bHalfSphere ? 0 : (sphereLightData.layerNum - 1) * -1;
	int endIndex = sphereLightData.layerNum;
	//int endIndex = sphereLightData.bHalfSphere ? sphereLightData.layerNum : sphereLightData.layerNum - 1) * -1;

	int lightCount = 0;

	int layerNumber = 0;
	int layerCount = 0;

	for (int i = 0; i < endIndex; i++)
	{
		tempPitchDir = FVector(0, 0, 1);

		layerNumber = i;

		addAngle = i * pitchAngle;

		tempPitchDir.Normalize();
		tempYawDir = tempPitchDir = UKismetMathLibrary::RotateAngleAxis(tempPitchDir, addAngle * -1, FVector(0, 1, 0));

		//处理第层和最后一层的情况,半球灯的时候不考虑
		if ((!sphereLightData.bHalfSphere && i == 0) || i == endIndex - 1)
		{
			layerCount = 0;
			FString lightName;
			lightName = FString::FromInt(layerNumber)
				+ FString("_")
				+ FString::FromInt(layerCount);

			FTransform lsTransform;
			FVector lsLoction = UKismetMathLibrary::TransformDirection(GetActorTransform(), tempPitchDir) * sphereRadius;
			FRotator lsRotation = UKismetMathLibrary::FindLookAtRotation(lsLoction, FVector(0, 0, 0));
			lsTransform.SetLocation(lsLoction);
			lsTransform.SetRotation(lsRotation.Quaternion());

			USpotLightComponent* lsSpotLightComponent;
			lsSpotLightComponent = GetSpotLightFormMap(i, 0);
			if (!lsSpotLightComponent)
			{
				//lsSpotLightComponent = NewObject<USpotLightComponent>(this);
				lsSpotLightComponent = NewObject<USpotLightComponent>(this, FName(lightName), RF_NoFlags, nullptr, false, nullptr);
				lsSpotLightComponent->SetupAttachment(RootComponent);
				AddInstanceComponent(lsSpotLightComponent);
				lsSpotLightComponent->OnComponentCreated();
				lsSpotLightComponent->RegisterComponent();

				AddSpoitLightToMap(i, lsSpotLightComponent);
			}
			else
			{
				lsSpotLightComponent->SetVisibility(true, true);
			}

			lsSpotLightComponent->SetRelativeTransform(lsTransform);
			lsSpotLightComponent->CastShadows = sphereLightData.bShadow;
		}
		else
		{
			for (int j = 0; j < sphereLightData.lightNumberOneLayer; j++)
			{
				layerCount = j;

				FString lightName;
				lightName = FString::FromInt(layerNumber)
					+ FString("_")
					+ FString::FromInt(layerCount);

				tempYawDir.Normalize();
				tempYawDir = UKismetMathLibrary::RotateAngleAxis(tempYawDir, yawAngle, FVector(0, 0, 1));

				FVector lsLocation = tempYawDir * sphereRadius;
				FRotator lsRotation = UKismetMathLibrary::FindLookAtRotation(lsLocation, FVector(0, 0, 0));

				FTransform lsTransform;
				lsTransform.SetLocation(lsLocation);
				lsTransform.SetRotation(lsRotation.Quaternion());


				USpotLightComponent* lsSpotLightComponent;
				lsSpotLightComponent = GetSpotLightFormMap(i, j);
				if (!lsSpotLightComponent)
				{
					lsSpotLightComponent = NewObject<USpotLightComponent>(this, FName(lightName), RF_NoFlags, nullptr, false, nullptr);
					lsSpotLightComponent->SetupAttachment(RootComponent);
					AddInstanceComponent(lsSpotLightComponent);
					lsSpotLightComponent->OnComponentCreated();
					lsSpotLightComponent->RegisterComponent();

					AddSpoitLightToMap(i, lsSpotLightComponent);
				}
				else
				{
					lsSpotLightComponent->SetVisibility(true, true);
				}
				lsSpotLightComponent->SetRelativeTransform(lsTransform);
				lsSpotLightComponent->CastShadows = sphereLightData.bShadow;
			}
		}
	}
	FPropertyChangedEvent evt(nullptr);
	//this->PostEditChangeProperty(evt);

}
void ABuildSpotLight::RefreshSphereLightRadius()
{
	FVector tempYawDir = FVector(1, 0, 0);
	FVector tempPitchDir = FVector(1, 0, 0);

	float pitchAngle = 0;
	if (sphereLightData.bHalfSphere)
	{
		pitchAngle = 90.0f / (float)(sphereLightData.layerNum - 1);
	}
	else
	{
		pitchAngle = 180.0f / (float)(sphereLightData.layerNum - 1);
	}

	float yawAngle = 360.0f / float(sphereLightData.lightNumberOneLayer);

	float addAngle = 0;

	//sphereRadius = newRadius;

	//确定起始结束位置
	int startIndex = sphereLightData.bHalfSphere ? 0 : (sphereLightData.layerNum - 1) * -1;
	int endIndex = sphereLightData.layerNum;
	int lightCount = 0;


	for (int i = 0; i < endIndex; i++)
	{

		tempPitchDir = FVector(0, 0, 1);

		addAngle = i * pitchAngle;

		tempPitchDir.Normalize();
		tempYawDir = tempPitchDir = UKismetMathLibrary::RotateAngleAxis(tempPitchDir, addAngle * -1, FVector(0, 1, 0));

		//处理第层和最后一层的情况,半球灯的时候不考虑
		if ((!sphereLightData.bHalfSphere && i == 0) || i == endIndex - 1)
		{

			FTransform lsTransform;
			FVector lsLoction = UKismetMathLibrary::TransformDirection(GetActorTransform(), tempPitchDir) * sphereRadius;
			FRotator lsRotation = UKismetMathLibrary::FindLookAtRotation(lsLoction, FVector(0, 0, 0));
			lsTransform.SetLocation(lsLoction);
			lsTransform.SetRotation(lsRotation.Quaternion());

			USpotLightComponent* lsSpotLightComponent;
			lsSpotLightComponent = GetSpotLightFormMap(i, 0);
			if (lsSpotLightComponent)
			{
				lsSpotLightComponent->SetRelativeTransform(lsTransform);
			}
		}
		else
		{
			for (int j = 0; j < sphereLightData.lightNumberOneLayer; j++)
			{
				tempYawDir.Normalize();
				tempYawDir = UKismetMathLibrary::RotateAngleAxis(tempYawDir, yawAngle, FVector(0, 0, 1));

				FVector lsLocation = tempYawDir * sphereRadius;
				FRotator lsRotation = UKismetMathLibrary::FindLookAtRotation(lsLocation, FVector(0, 0, 0));

				FTransform lsTransform;
				lsTransform.SetLocation(lsLocation);
				lsTransform.SetRotation(lsRotation.Quaternion());


				USpotLightComponent* lsSpotLightComponent;
				lsSpotLightComponent = GetSpotLightFormMap(i, j);
				if (lsSpotLightComponent)
				{
					lsSpotLightComponent->SetRelativeTransform(lsTransform);
				}
			}
		}
	}

}

void ABuildSpotLight::RefreshSphereLightShadow(TArray<int>selectLightArr, bool bShowShadow)
{
	//GEditor->SelectNone(true, true, true);

	if (selectLightArr.Num() == 0)
	{
		return;
	}

	for (int i = 0; i < selectLightArr.Num(); i++)
	{
		int layerNum = selectLightArr[i];
		FSphereLightLayerUnit* lsArr = spotLightMap.Find(layerNum);
		if (lsArr)
		{
			//GEditor->SelectActor(this, true, true, true, true);
			for (int j = 0; j < lsArr->spoitLightComponentArr.Num(); j++)
			{
				USpotLightComponent* lsSpotLightComponent = lsArr->spoitLightComponentArr[j];
				lsSpotLightComponent->CastShadows = bShowShadow;
			}
		}
	}
}

void ABuildSpotLight::SetSphereLightData(FSphereLightData data)
{
	sphereLightData = data;
}
FSphereLightData ABuildSpotLight::GetSphereLightData()
{
	return sphereLightData;
}
void ABuildSpotLight::SelectSpecialLayerComponent(int layerNum)
{
	FSphereLightLayerUnit* lsArr = spotLightMap.Find(layerNum);
	//GEditor->SelectNone(true, true, true);
	//if (lsArr)
	//{
	//	GEditor->SelectActor(this, true, true, true, true);
	//	for (int i = 0; i < lsArr->spoitLightComponentArr.Num(); i++)
	//	{
	//		USpotLightComponent* lsSpotLightComponent = lsArr->spoitLightComponentArr[i];
	//		GEditor->SelectComponent(lsSpotLightComponent, true, true, false);
	//	}
	//}
}

void ABuildSpotLight::SelectSpeicalLayerArrComponent(TArray<int> layerArr)
{
	//GEditor->SelectNone(true, true, true);

	//if (layerArr.Num() == 0)
	//{
	//	GEditor->SelectActor(this, true, true, true, true);
	//	return;
	//}

	//for (int i = 0; i < layerArr.Num(); i++)
	//{
	//	int layerNum = layerArr[i];
	//	FSphereLightLayerUnit* lsArr = spotLightMap.Find(layerNum);
	//	if (lsArr)
	//	{
	//		GEditor->SelectActor(this, true, true, true, true);
	//		for (int j = 0; j < lsArr->spoitLightComponentArr.Num(); j++)
	//		{
	//			USpotLightComponent* lsSpotLightComponent = lsArr->spoitLightComponentArr[j];
	//			GEditor->SelectComponent(lsSpotLightComponent, true, true, false);
	//		}
	//	}
	//}
}

void ABuildSpotLight::SelectAllLayerComponent()
{
	//GEditor->SelectNone(true, true, true);
	//for (int i = 0; i < sphereLightData.layerNum; i++)
	//{
	//	FSphereLightLayerUnit* lsArr = spotLightMap.Find(i);
	//	if (lsArr)
	//	{
	//		GEditor->SelectActor(this, true, true, true, true);
	//		for (int j = 0; j < lsArr->spoitLightComponentArr.Num(); j++)
	//		{
	//			USpotLightComponent* lsSpotLightComponent = lsArr->spoitLightComponentArr[j];
	//			GEditor->SelectComponent(lsSpotLightComponent, true, true, false);
	//		}
	//	}
	//}

}
void ABuildSpotLight::HideAllLight()
{
	for (auto& it : spotLightMap)
	{
		FSphereLightLayerUnit& lsUnit = it.Value;

		for (auto* lsSpotLight : lsUnit.spoitLightComponentArr)
		{
			if (lsSpotLight)
			{
				//lsSpotLight->SetVisibility(false, true);
				lsSpotLight->DestroyComponent();
			}
		}
	}
	spotLightMap.Empty();
}

void ABuildSpotLight::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	TSet<UActorComponent*>lsComponentSet = GetComponents();

	if (lsComponentSet.Num() > 0)
	{
		for (auto* componentIt : lsComponentSet)
		{
			if (componentIt)
			{
				USpotLightComponent* spotComponent = Cast<USpotLightComponent>(componentIt);
				if (spotComponent)
				{
					FString componentName = spotComponent->GetName();
					FString layerNumStr = "";
					FString layerCountStr = "";
					componentName.Split(FString("_"), &layerNumStr, &layerCountStr);
					if (layerNumStr != "" && layerCountStr != "")
					{
						int layerNum = FCString::Atoi(*layerNumStr);
						int layerCount = FCString::Atoi(*layerCountStr);
						FSphereLightLayerUnit* pUnit = spotLightMap.Find(layerNum);
						if (pUnit)
						{
							pUnit->spoitLightComponentArr.Add(spotComponent);
						}
					}
				}
			}

		}
	}
}

PRAGMA_ENABLE_OPTIMIZATION
