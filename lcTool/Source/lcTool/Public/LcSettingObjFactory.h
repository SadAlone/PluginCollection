// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "LcSettingObj.h"

#include "Developer/AssetTools/Public/AssetTypeActions_Base.h"

#include "LcSettingObjFactory.generated.h"

class FAssetTypeActions_LcSettingObj : public FAssetTypeActions_Base
{

public:
	FAssetTypeActions_LcSettingObj(EAssetTypeCategories::Type InAssetCategory);

	virtual FColor GetTypeColor() const override { return FColor(97, 85, 212); }
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

	// IAssetTypeActions Implementation
	virtual FText GetName() const override { return FText::FromName(TEXT("LcSetting")); }
	virtual UClass* GetSupportedClass() const override { return ULcSettingObj::StaticClass(); }
	virtual uint32 GetCategories() override { return MyAssetCategory; }

private:
	EAssetTypeCategories::Type MyAssetCategory;

};

UCLASS()
class LCTOOL_API ULcSettingObjFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

		virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	virtual bool ShouldShowInNewMenu()const override;

	virtual uint32 GetMenuCategories() const override;


};
