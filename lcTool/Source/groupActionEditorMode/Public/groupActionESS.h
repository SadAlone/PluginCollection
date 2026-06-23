// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/EditorSubsystem/Public/EditorSubsystem.h"
#include "groupActionESS.generated.h"

/**
 *
 */
UCLASS()
class UGroupActionESS : public UEditorSubsystem
{
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection);

};
