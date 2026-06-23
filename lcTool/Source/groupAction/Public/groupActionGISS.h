// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"

#include "GaGroupUnit.h"

#include "groupActionGISS.generated.h"

/**
 *
 */


UCLASS()
class GROUPACTION_API UGroupActionGISS : public UGameInstanceSubsystem
{
	GENERATED_BODY()
		virtual void Initialize(FSubsystemCollectionBase& Collection);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "groupActionGISS")
		bool bLandscapeInit = false;
	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		void DisposeLandscapeCollision();

};

UCLASS()
class GROUPACTION_API UGroupActionEngineSS : public UEngineSubsystem
{
	GENERATED_BODY()
		virtual void Initialize(FSubsystemCollectionBase& Collection);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "groupActionGISS")
		UGroupActionSaveGame* unitSaveGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "groupActionGISS")
		TMap<FGuid, FGaUnitSaveData>unitSaveDataMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "groupActionGISS")
		TMap<FGuid, FGaFormationSaveData>formationSaveDataMap;

	//获取指定guid保存单元数据
	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		FGaUnitSaveData GetSpeicailGuidUnitSaveData(FGuid& guid);

	//获取指定guid保存阵型数据
	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		FGaFormationSaveData GetSpeicailGuidFormationSaveData(FGuid& guid);

	//添加unit保存数据到map顺便保存
	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		void AddUnitSaveDataAndSaveBF(ABaseFormationBuilder* unit);

	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		void AddUnitSaveDataAndSaveUn(AGaGroupUnit* unit);

	//添加阵型保存数据到map顺便保存
	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		void AddFormationSaveDataAndSave(ABaseFormationBuilder* unit);

	//获取保存对象
	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		UGroupActionSaveGame* GetUnitSaveGame();

	//载入群组保存数据
	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		void LoadGroupActionUnitSave();


	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		void LoadGroupActionSettingSave();

	UFUNCTION(BlueprintCallable, Category = "groupActionGISS")
		void LcChangeFormationGuid(ABaseFormationBuilder* formation);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "群组显示设置")
		UGaSettingObject* gaSettingObj;


};
