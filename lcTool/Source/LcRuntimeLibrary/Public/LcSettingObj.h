// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "LcSettingObj.generated.h"
UCLASS(BlueprintType)

class LCRUNTIMELIBRARY_API ULcSettingObj : public UObject
{
public:
	GENERATED_BODY()
		//启动执行命令列表
		UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "LcSetting")
		TMap<FString, FString>cmdList;
};
