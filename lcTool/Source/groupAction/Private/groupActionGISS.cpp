// Fill out your copyright notice in the Description page of Project Settings.


#include "groupActionGISS.h"

#include "Runtime/Engine/Classes/kismet/GameplayStatics.h"
#include "Runtime/Landscape/Classes/Landscape.h"
#include "Runtime/Landscape/Classes/LandscapeHeightfieldCollisionComponent.h"

void UGroupActionGISS::Initialize(FSubsystemCollectionBase& Collection)
{

	bLandscapeInit = false;


}

void UGroupActionGISS::DisposeLandscapeCollision()
{
	TArray<AActor*>landscapeArr;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALandscape::StaticClass(), landscapeArr);

	//调整所有地形碰撞
	if (landscapeArr.Num() > 0)
	{
		for (int i = 0; i < landscapeArr.Num(); i++)
		{
			ALandscape* lsLandscape = Cast<ALandscape>(landscapeArr[i]);
			if (!lsLandscape)
				continue;

			//对所有物体关闭碰撞除了char,也就是角色,还有物理模拟
			//设置为pawn3
			lsLandscape->BodyInstance.SetObjectType(ECC_GameTraceChannel5);
			lsLandscape->BodyInstance.SetResponseToAllChannels(ECR_Block);

			for (auto& comIt : lsLandscape->CollisionComponents)
			{
				comIt->SetCollisionObjectType(ECC_GameTraceChannel5);
				comIt->SetCollisionResponseToAllChannels(ECR_Block);
			}
			lsLandscape->UnregisterAllComponents();
			lsLandscape->RerunConstructionScripts();
			lsLandscape->ReregisterAllComponents();


			//只对char和物理模拟物体做出响应
			//lsLandscape->BodyInstance.SetResponseToChannel(ECC_GameTraceChannel1, ECollisionResponse::ECR_Block);
			//lsLandscape->BodyInstance.SetResponseToChannel(ECC_PhysicsBody, ECollisionResponse::ECR_Block);
			//lsLandscape->BodyInstance.UpdateBodyScale(FVector(1, 1, 1), true);
		}
	}
	bLandscapeInit = true;
}

void UGroupActionEngineSS::Initialize(FSubsystemCollectionBase& Collection)
{

	//先载入群组保存数据
	LoadGroupActionUnitSave();

	//载入群组设置数据
	LoadGroupActionSettingSave();
}

FGaUnitSaveData UGroupActionEngineSS::GetSpeicailGuidUnitSaveData(FGuid& guid)
{
	FGaUnitSaveData* lsData = unitSaveDataMap.Find(guid);
	if (lsData)
	{
		return *lsData;
	}
	return FGaUnitSaveData();
}

FGaFormationSaveData UGroupActionEngineSS::GetSpeicailGuidFormationSaveData(FGuid& guid)
{
	FGaFormationSaveData* lsData = formationSaveDataMap.Find(guid);
	if (lsData)
	{
		return *lsData;
	}
	return FGaFormationSaveData();
}

void UGroupActionEngineSS::LcChangeFormationGuid(ABaseFormationBuilder* formation)
{
	formation->guid = FGuid::NewGuid();
}


void UGroupActionEngineSS::AddUnitSaveDataAndSaveBF(ABaseFormationBuilder* bf)
{
	FGaUnitSaveData lsSaveData;
	lsSaveData.idFormationBuildUnitData = bf->idFormationBuildUnitData;

	FGuid guid = bf->guid;

	if (!guid.IsValid())
	{
		if (gaSettingObj->bAutoCreateGUID)
		{
			bf->guid = FGuid::NewGuid();
			guid = bf->guid;
		}
		else
		{
			UGameplayStatics::SaveGameToSlot(unitSaveGame, FString(""), 0);
			UE_LOG(LogTemp, Error, TEXT("save guid is valid : %s"), *bf->GetName());
		}
	}

	unitSaveGame = GetUnitSaveGame();

	if (!unitSaveGame)
	{
		UE_LOG(LogTemp, Error, TEXT("create save unit slot error!"));
		return;
	}
	unitSaveGame->saveUnitData.Add(guid, lsSaveData);

	UGameplayStatics::SaveGameToSlot(unitSaveGame, FString("groupActionSave"), 0);
}

void UGroupActionEngineSS::AddUnitSaveDataAndSaveUn(AGaGroupUnit* unit)
{
	FGaUnitSaveData lsSaveData;
	lsSaveData.idFormationBuildUnitData = unit->idFormationBuildUnitData;

	FGuid guid = unit->guid;

	if (!guid.IsValid())
	{
		if (gaSettingObj->bAutoCreateGUID)
		{
			unit->guid = FGuid::NewGuid();
			guid = unit->guid;
		}
		else
		{
			UGameplayStatics::SaveGameToSlot(unitSaveGame, FString(""), 0);
			UE_LOG(LogTemp, Error, TEXT("save guid is valid : %s"), *unit->GetName());
		}
	}

	unitSaveGame = GetUnitSaveGame();

	if (!unitSaveGame)
	{
		UE_LOG(LogTemp, Error, TEXT("create save unit slot error!"));
		return;
	}
	unitSaveGame->saveUnitData.Add(guid, lsSaveData);

	UGameplayStatics::SaveGameToSlot(unitSaveGame, FString("groupActionSave"), 0);
}

void UGroupActionEngineSS::AddFormationSaveDataAndSave(ABaseFormationBuilder* builder)
{
	FGaFormationSaveData lsSaveData;
	lsSaveData.idLocationData = builder->idLocationMap;

	FGuid guid = builder->guid;

	if (!guid.IsValid())
	{
		if (gaSettingObj->bAutoCreateGUID)
		{
			builder->guid = FGuid::NewGuid();
			guid = builder->guid;
		}
		else
		{
			UGameplayStatics::SaveGameToSlot(unitSaveGame, FString(""), 0);
			UE_LOG(LogTemp, Error, TEXT("save guid is valid : %s"), *builder->GetName());
		}
	}

	unitSaveGame = GetUnitSaveGame();

	if (!unitSaveGame)
	{
		UE_LOG(LogTemp, Error, TEXT("create save unit slot error!"));
		return;
	}
	unitSaveGame->saveFormationData.Add(guid, lsSaveData);

	UGameplayStatics::SaveGameToSlot(unitSaveGame, FString("groupActionSave"), 0);
}

UGroupActionSaveGame* UGroupActionEngineSS::GetUnitSaveGame()
{
	if (unitSaveGame)
		return unitSaveGame;

	LoadGroupActionUnitSave();

	if (unitSaveGame)
		return unitSaveGame;

	unitSaveGame = Cast<UGroupActionSaveGame>(UGameplayStatics::CreateSaveGameObject(UGroupActionSaveGame::StaticClass()));

	if (unitSaveGame)
		return unitSaveGame;
	else
		UE_LOG(LogTemp, Error, TEXT("create group action error!"));

	return nullptr;
}

void UGroupActionEngineSS::LoadGroupActionUnitSave()
{
	unitSaveGame = Cast<UGroupActionSaveGame>(UGameplayStatics::LoadGameFromSlot(FString("groupActionSave"), 0));

	if (!unitSaveGame)
		UE_LOG(LogTemp, Error, TEXT("no group action save load"));

}

void UGroupActionEngineSS::LoadGroupActionSettingSave()
{
	gaSettingObj = Cast<UGaSettingObject>(UGameplayStatics::LoadGameFromSlot(FString("groupActionSetting"), 0));

	if (!gaSettingObj)
	{
		gaSettingObj = Cast<UGaSettingObject>(UGameplayStatics::CreateSaveGameObject(UGaSettingObject::StaticClass()));
		if (!gaSettingObj)
		{
			UE_LOG(LogTemp, Error, TEXT("create gasetting object error!"));
			return;
		}
		UGameplayStatics::SaveGameToSlot(gaSettingObj, FString("groupActionSetting"), 0);
	}
}
