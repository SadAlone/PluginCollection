// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "lcTool.h"
#include "lcBpBridge.h"
#include "Modules/ModuleManager.h"

#include "lcLevelToolLibrary.generated.h"

/**
 *
 */
UCLASS()
class LCTOOL_API UlcLevelToolLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, Category = "lcTool")
		static UlcBpBridge* GetBpBridgeObj();

	UFUNCTION(BlueprintPure, Category = "lcTool")
		static UObject* GetBpLsObj();

	UFUNCTION(BlueprintCallable, Category = "lcTool")
		static void SetBpLsObj(UObject* obj);

	UFUNCTION(BlueprintCallable, Category = "lcTool")
		static void setBpBridgetObj(UlcBpBridge* inObj);

	UFUNCTION(BlueprintCallable, Category = "lcTool")
		static bool bpBridgetObjIsValid();

	//转换定序器内所有可生产到已经附加角色
	UFUNCTION(BlueprintCallable, Category = "lcTool")
		static void LcSequencerConvertToPossessable(ULevelSequence* Sequence);

	//刷新当前actor
	UFUNCTION(BlueprintCallable, Category = "lcTool")
		static void LcRefreshActor(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "lcTool")
		static TArray<FString>LcSplitString(FString source, FString splitStr);

	UFUNCTION(BlueprintCallable, Category = "lcTool")
		static void LcSimpleDialog(FString msgStr);
};
