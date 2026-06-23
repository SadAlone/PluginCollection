// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "lcImportFileSystem.h"
#include "ISequencer.h"
#include "LevelSequence/Public/LevelSequence.h"
#include "LevelEditor.h"
#include "ILevelSequenceEditorToolkit.h"
#include "UMGEditor/Public/WidgetBlueprint.h"

#include "Blutility/Public/IBlutilityModule.h"

#include "Blutility/Classes/EditorUtilityWidgetBlueprint.h"

#include "Blutility/Classes/EditorUtilityWidget.h"

#include "Blutility/Public/EditorUtilitySubsystem.h"

#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"

#include "UnrealEd/Public/Toolkits/AssetEditorManager.h"

#include "LcSettingObjFactory.h"

//#include "LevelSequenceEditorBlueprintLibrary.h"


#include "lcTool.h"

class FToolBarBuilder;
class FMenuBuilder;
class FlcSkt;
class FlcToolModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();

	UlcBpBridge* bpBridgetPtr;

	UlcImportFileSystem* importFileSystemPtr;

	UObject* lsObjs;

	//启动延时定时器句柄
	FTimerHandle bootDelayTimerHandle;


private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

	void openPluginBlueprintWidget();


	TSharedRef<FExtender> OnExtendContentBrowserAssetSelectionMenu(const TArray<FAssetData>& InSelectedAssets);
	void CreateDataValidationContentBrowserAssetMenu(FMenuBuilder& InMenuBuilder, TArray<FAssetData> InSelectedAssets);
	void MakeAssetsExportable(TArray<FAssetData> InSelectedAssets);


	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	TSharedPtr<FlcSkt>lcSktPtr;

	//启动延时定时器函数
	void BootDelayTimerFunction();


private:
	TSharedPtr<class FUICommandList> PluginCommands;

	TSharedPtr<FAssetTypeActions_LcSettingObj> actionType;
};
