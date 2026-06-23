// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "groupActionEditorMode.h"
#include "groupActionEdMode.h"
#include "Engine/ObjectLibrary.h"

#define LOCTEXT_NAMESPACE "FgroupActionEditorModeModule"

void FgroupActionEditorModeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FgroupActionEdMode>(FgroupActionEdMode::EM_groupActionEdModeId, LOCTEXT("groupActionEditorModeName", "群组设置"), FSlateIcon(), true);

	FSlateStyleRegistry::UnRegisterSlateStyle(GroupActionStyle::GetStyleSetName());
	GroupActionStyle::Initialze();


	FPlacementCategoryInfo Info(
		LOCTEXT("CinematicCategoryName", "LC群组工具"),
		"LC群组",
		TEXT("群组工具"),
		25
	);

	//注册阵型生成器
	UObjectLibrary* objectLibrary = UObjectLibrary::CreateLibrary(ABaseFormationBuilder::StaticClass(), true, GIsEditor);
	if (objectLibrary)
		objectLibrary->AddToRoot();

	objectLibrary->LoadBlueprintsFromPath(TEXT("/lcTool/experiment/bp"));

	TArray<UBlueprintGeneratedClass*> bpAss;
	objectLibrary->GetObjects<UBlueprintGeneratedClass>(bpAss);

	//const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	//TArray<FAssetData> AllBPsAssetData;
	//AssetRegistryModule.Get().GetAssetsByClass(ABaseFormationBuilder::StaticClass()->GetFName(), AllBPsAssetData, true);
	for (int32 index = 0; index < bpAss.Num(); ++index)
	{
		if (bpAss[index]->GetName().Contains(FString("SKEL")))
			continue;
		if (!bpAss[index]->GetName().Contains(FString("lcGa")))
			continue;
		IPlacementModeModule::Get().RegisterPlacementCategory(Info);
		IPlacementModeModule::Get().RegisterPlaceableItem(Info.UniqueHandle, MakeShareable(new FPlaceableItem(nullptr, FAssetData(bpAss[index]))));
	}

	//注册群组单元
	bpAss.Empty();

	UObjectLibrary* objectLibrary1 = UObjectLibrary::CreateLibrary(AGaGroupUnit::StaticClass(), true, GIsEditor);
	if (objectLibrary1)
		objectLibrary1->AddToRoot();

	objectLibrary1->LoadBlueprintsFromPath(TEXT("/lcTool/experiment/bp"));

	objectLibrary1->GetObjects<UBlueprintGeneratedClass>(bpAss);

	//const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	//TArray<FAssetData> AllBPsAssetData;
	//AssetRegistryModule.Get().GetAssetsByClass(ABaseFormationBuilder::StaticClass()->GetFName(), AllBPsAssetData, true);
	for (int32 index = 0; index < bpAss.Num(); ++index)
	{
		if (bpAss[index]->GetName().Contains(FString("SKEL")))
			continue;
		if (!bpAss[index]->GetName().Contains(FString("lcGa")))
			continue;
		IPlacementModeModule::Get().RegisterPlacementCategory(Info);
		IPlacementModeModule::Get().RegisterPlaceableItem(Info.UniqueHandle, MakeShareable(new FPlaceableItem(nullptr, FAssetData(bpAss[index]))));
	}

	//注册目标
	bpAss.Empty();

	UObjectLibrary* objectLibrary2 = UObjectLibrary::CreateLibrary(AGaTargetPointActor::StaticClass(), true, GIsEditor);
	if (objectLibrary)
		objectLibrary->AddToRoot();

	objectLibrary2->LoadBlueprintsFromPath(TEXT("/lcTool/experiment/bp"));

	objectLibrary2->GetObjects<UBlueprintGeneratedClass>(bpAss);

	//const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	//TArray<FAssetData> AllBPsAssetData;
	//AssetRegistryModule.Get().GetAssetsByClass(ABaseFormationBuilder::StaticClass()->GetFName(), AllBPsAssetData, true);
	for (int32 index = 0; index < bpAss.Num(); ++index)
	{
		if (bpAss[index]->GetName().Contains(FString("SKEL")))
			continue;
		if (!bpAss[index]->GetName().Contains(FString("lcGa")))
			continue;
		IPlacementModeModule::Get().RegisterPlacementCategory(Info);
		IPlacementModeModule::Get().RegisterPlaceableItem(Info.UniqueHandle, MakeShareable(new FPlaceableItem(nullptr, FAssetData(bpAss[index]))));
	}
}

void FgroupActionEditorModeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FgroupActionEdMode::EM_groupActionEdModeId);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FgroupActionEditorModeModule, groupActionEditorMode)
