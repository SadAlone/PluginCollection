// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "lcTool.h"
#include "lcToolStyle.h"
#include "lcToolCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ContentBrowser/Public/ContentBrowserModule.h"

#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "EditorAssetLibrary.h"
#include "Runtime/AssetRegistry/Public/AssetRegistryModule.h"
#include "UnrealEd/Public/FileHelpers.h"


//#include "Editor/SequencerWidgets/Public/ITimeSlider.h"
#include "Editor/Sequencer/Private/SSequencer.h"

#include "lcBpBridge.h"

class SSequencer;
static const FName lcToolTabName("lcTool");

#define LOCTEXT_NAMESPACE "FlcToolModule"

void FlcToolModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FlcToolStyle::Initialize();
	FlcToolStyle::ReloadTextures();

	FlcToolCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FlcToolCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FlcToolModule::PluginButtonClicked),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FlcToolModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FlcToolModule::AddToolbarExtension));

		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}

	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(lcToolTabName, FOnSpawnTab::CreateRaw(this, &FlcToolModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FlcToolTabTitle", "lcTool"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	//ltPtr = MakeShareable(new FlcLevelTool());

	importFileSystemPtr = NewObject<UlcImportFileSystem>(GEditor, TEXT("lcimportFileSystem"));

	bpBridgetPtr = NewObject<UlcBpBridge>(GEditor, TEXT("lcBpBridge"));

	bpBridgetPtr->RequestServerCode();

	// Register content browser hook
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	TArray<FContentBrowserMenuExtender_SelectedAssets>& CBAssetMenuExtenderDelegates = ContentBrowserModule.GetAllAssetViewContextMenuExtenders();

	CBAssetMenuExtenderDelegates.Add(FContentBrowserMenuExtender_SelectedAssets::CreateRaw(this, &FlcToolModule::OnExtendContentBrowserAssetSelectionMenu));
	//ContentBrowserAssetExtenderDelegateHandle = CBAssetMenuExtenderDelegates.Last().GetHandle();

	//lcSktPtr = MakeShareable(new FlcSkt);


	//注册资产
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	EAssetTypeCategories::Type AssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("MyDefined")), FText::FromName(TEXT("LcSetting")));
	actionType = MakeShareable(new FAssetTypeActions_LcSettingObj(AssetCategory));
	AssetTools.RegisterAssetTypeActions(actionType.ToSharedRef());


	auto tt = FTimerDelegate::CreateRaw(this, &FlcToolModule::BootDelayTimerFunction);
	GEditor->GetTimerManager()->SetTimer(bootDelayTimerHandle, tt, 5, false);

}

void FlcToolModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FlcToolStyle::Shutdown();

	FlcToolCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(lcToolTabName);

	//FContentBrowserModule* ContentBrowserModule = FModuleManager::GetModulePtr<FContentBrowserModule>(TEXT("ContentBrowser"));
	//if (nullptr != ContentBrowserModule)
	//{
	//	TArray<FContentBrowserMenuExtender_SelectedAssets>& CBMenuExtenderDelegates = ContentBrowserModule->GetAllAssetViewContextMenuExtenders();
	//	CBMenuExtenderDelegates.RemoveAll([this](const FContentBrowserMenuExtender_SelectedAssets& Delegate) { return Delegate.GetHandle() == ContentBrowserAssetExtenderDelegateHandle; });
	//}
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		IAssetTools& AssetTools = FModuleManager::Get().GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		AssetTools.UnregisterAssetTypeActions(actionType.ToSharedRef());
	}
}

void FlcToolModule::openPluginBlueprintWidget()
{
	const FString BlueprintRef = "EditorUtilityWidgetBlueprint'/lcTool/lcLevelToolWidget.lcLevelToolWidget'";
	FSoftObjectPath BlueprintPath = FSoftObjectPath(BlueprintRef);
	UObject* BlueprintObject = BlueprintPath.TryLoad();
	UWidgetBlueprint* Blueprint = Cast<UWidgetBlueprint>(BlueprintObject);

	if (!Blueprint || Blueprint->IsPendingKillOrUnreachable())
	{
		return;
	}

	if (!Blueprint->GeneratedClass->IsChildOf(UEditorUtilityWidget::StaticClass()))
	{
		return;
	}

	UEditorUtilityWidgetBlueprint* EditorWidget = (UEditorUtilityWidgetBlueprint*)Blueprint;
	if (EditorWidget)
	{
		UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
		EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);
	}
}

TSharedRef<SDockTab> FlcToolModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::Format(
		LOCTEXT("WindowWidgetText", "Add code to {0} in {1} to override this window's contents"),
		FText::FromString(TEXT("FlcToolModule::OnSpawnPluginTab")),
		FText::FromString(TEXT("lcTool.cpp"))
	);

	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// Put your tab content here!
			SNew(SBox)
			.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SBox)
		]
		];
}

void FlcToolModule::BootDelayTimerFunction()
{
	//验证检查
	if (!bpBridgetPtr->bPasswordCheck)
		return;
	ULcSettingObj* lsSetting = Cast<ULcSettingObj>(UEditorAssetLibrary::LoadAsset("LcSettingObj'/Game/lig/cmdSetting.cmdSetting'"));
	if (!lsSetting)
	{
		const FString Dot(TEXT("."));
		FString Path = "/game/lig/";
		FString AssetPath = "cmdSetting";
		FString AssetName = "cmdSetting";

		AssetPath /= AssetName;
		AssetPath += Dot + AssetName;
		AssetPath = Path + AssetName;

		FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
		FAssetData AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

		// if object with same name exists, try a different name until we don't find one
		int32 ExtensionIndex = 0;
		while (AssetData.IsValid() && AssetData.GetClass() == ULcSettingObj::StaticClass())
		{
			AssetName = FString::Printf(TEXT("%s_%d"), *AssetName, ExtensionIndex);
			AssetPath = (Path / AssetName) + Dot + AssetName;
			AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(*AssetPath);

			ExtensionIndex++;
		}

		// Create the new asset in the package we just made
		//AssetPath = (Path / AssetName);
		AssetPath = Path + AssetName;

		FString FileName;
		if (FPackageName::TryConvertLongPackageNameToFilename(AssetPath, FileName))
		{
			UObject* Package = CreatePackage(nullptr, *AssetPath);
			ULcSettingObj* lsLS = NewObject<ULcSettingObj>(Package, *AssetName, RF_Public | RF_Standalone);
			if (lsLS)
			{
				FAssetRegistryModule::AssetCreated(lsLS);
				lsLS->MarkPackageDirty();
				TArray<UPackage*> Packages;
				Packages.Add(Package->GetOutermost()); // Fully load and check out is done in UEditorLoadingAndSavingUtils::SavePackages
				UEditorLoadingAndSavingUtils::SavePackages(Packages, false);
			}
		}
	}
	else
	{
		//批量输入指令
		if (lsSetting->cmdList.Num() > 0)
		{
			for (auto lsStr : lsSetting->cmdList)
			{
				FString theKey = lsStr.Key;
				FString theValue = lsStr.Value;

				FString cmd = theKey + FString(" ") + theValue;

				GEngine->Exec(GEngine->GetWorldContexts()[0].World(), *(cmd));
			}
		}
	}
}

void FlcToolModule::PluginButtonClicked()
{
	openPluginBlueprintWidget();
	return;

	//FGlobalTabmanager::Get()->InvokeTab(lcToolTabName);


	//StyleSet->SetContentRoot(IPluginManager::Get().FindPlugin(TEXT("MyPluginNamedInterface"))->GetContentDir());




	//UEditorUtilityWidget* SequenceAsset = Cast<UEditorUtilityWidget>(StaticLoadObject(UEditorUtilityWidget::StaticClass(), nullptr, TEXT("EditorUtilityWidgetBlueprint'/lcTool/lcLevelToolWidget.lcLevelToolWidget'")));

/*
	if (!SequenceAsset)
		return;

	if (SequenceAsset)
	{
		SequenceAsset->ExecuteDefaultAction();
		////UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
		//EditorUtilitySubsystem->SpawnAndRegisterTab(SequenceAsset);


	}
	//StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));

*/
//return;

	ULevelSequence* SequenceAsset = Cast<ULevelSequence>(StaticLoadObject(ULevelSequence::StaticClass(), nullptr, TEXT("LevelSequence'/Engine/lcRes/emptySequencer.emptySequencer'")));

	//FAssetEditorManager::Get().OpenEditorForAsset(SequenceAsset);

	//IAssetEditorInstance*        AssetEditor = FAssetEditorManager::Get().FindEditorForAsset(SequenceAsset, false);

	TArray<UObject*>assetArray = FAssetEditorManager::Get().GetAllEditedAssets();

	if (assetArray.Num() <= 0)
		return;

	bool bFindSeq = false;
	//ULevelSequence* SequenceAsset = nullptr;

	for (auto assE : assetArray)
	{
		UObject* lsObj = assE;
		if (lsObj)
		{
			ULevelSequence* lsSeqAsset = Cast<ULevelSequence>(lsObj);
			if (lsSeqAsset)
			{
				bFindSeq = true;
				SequenceAsset = lsSeqAsset;
			}
		}
	}
	if (!bFindSeq)
		return;



	IAssetEditorInstance* AssetEditor = FAssetEditorManager::Get().FindEditorForAsset(SequenceAsset, false);
	ILevelSequenceEditorToolkit* LevelSequenceEditor = static_cast<ILevelSequenceEditorToolkit*>(AssetEditor);
	TWeakPtr<ISequencer>WeakSequencer = LevelSequenceEditor ? LevelSequenceEditor->GetSequencer() : nullptr;

	WeakSequencer.Pin()->EmptySelection();

	TSet<TSharedRef<FSequencerDisplayNode>> fs = WeakSequencer.Pin()->GetSelection().GetSelectedOutlinerNodes();

	TArray<FMovieSceneBinding>arr = WeakSequencer.Pin()->GetRootMovieSceneSequence()->GetMovieScene()->GetBindings();


	WeakSequencer.Pin()->GetSelection().AddToSelection(fs.Array());


	TSet<TSharedRef<FSequencerDisplayNode>>lsSet;
	for (int i = 0; i < arr.Num(); i++)
	{
		FMovieSceneBinding lsBind = arr[i];
		//WeakSequencer.Pin()->SelectObject(lsBind.GetObjectGuid());

		for (auto lsTrack : lsBind.GetTracks())
		{
			UMovieSceneTrack* tr = lsTrack;
			TArray< UMovieSceneSection*>ret = tr->GetAllSections();

			for (auto lsSec : ret)
			{

				WeakSequencer.Pin()->SelectSection(lsSec);
			}

		}
		//WeakSequencer.Pin()->GetCommandBindings(ESequencerCommandBindings::Sequencer).Get()->

		//lsSet.Append(WeakSequencer.Pin()->GetSelection().GetSelectedOutlinerNodes());
	}
	//WeakSequencer.Pin()->EmptySelection();

	//WeakSequencer.Pin()->GetSelection().AddToSelection(lsSet.Array());


}



void FlcToolModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FlcToolCommands::Get().OpenPluginWindow);
}


void FlcToolModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FlcToolCommands::Get().OpenPluginWindow);
}

// Extend content browser menu for groups of selected assets
TSharedRef<FExtender> FlcToolModule::OnExtendContentBrowserAssetSelectionMenu(const TArray<FAssetData>& InSelectedAssets)
{
	bool bIsHaveAssetNeedExport = false;
	TSharedRef<FExtender> Extender(new FExtender());
	for (const FAssetData& AssetData : InSelectedAssets)
	{
		UObject* Object = AssetData.GetAsset();
		if (Object)
		{
			const UPackage* Package = Object->GetOutermost();
			if (Package->HasAnyPackageFlags(EPackageFlags::PKG_DisallowExport))
			{
				bIsHaveAssetNeedExport = true;
				break;
			}
		}
	}
	if (bIsHaveAssetNeedExport)
	{
		Extender->AddMenuExtension(
			"AssetContextMoveActions",
			EExtensionHook::First,
			nullptr,
			FMenuExtensionDelegate::CreateRaw(this, &FlcToolModule::CreateDataValidationContentBrowserAssetMenu, InSelectedAssets));
	}

	return Extender;
}

// Extend content browser menu for groups of selected assets
void FlcToolModule::CreateDataValidationContentBrowserAssetMenu(FMenuBuilder& InMenuBuilder, TArray<FAssetData> InSelectedAssets)
{
	InMenuBuilder.AddMenuEntry
	(
		LOCTEXT("MakeAssetsExportableTabTitle", "Make Assets Exportable"),
		LOCTEXT("MakeAssetsExportableTooltipText", "Make Assets Exportable"),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateRaw(this, &FlcToolModule::MakeAssetsExportable, InSelectedAssets))
	);
}

void FlcToolModule::MakeAssetsExportable(TArray<FAssetData> InSelectedAssets)
{
	for (const FAssetData& AssetData : InSelectedAssets)
	{
		UObject* Object = AssetData.GetAsset();
		if (Object)
		{
			UPackage* Package = Object->GetOutermost();
			if (Package->HasAnyPackageFlags(EPackageFlags::PKG_DisallowExport))
			{
				Package->ClearPackageFlags(EPackageFlags::PKG_DisallowExport);
				Package->MarkPackageDirty();
				UE_LOG(LogTemp, Log, TEXT("Marked '%s' as exportable"), *Object->GetName());
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FlcToolModule, lcTool)
