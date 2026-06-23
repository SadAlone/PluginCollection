// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "groupActionEdModeToolkit.h"
#include "groupActionEdMode.h"
#include "Engine/Selection.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorModeManager.h"
#include "..\Public\groupActionEdModeToolkit.h"
#include "DragAndDrop/AssetDragDropOp.h"

#include "groupActionGISS.h"

#include "Kismet/GameplayStatics.h"


#define LOCTEXT_NAMESPACE "FgroupActionEdModeToolkit"

void SGroupActionMode::Construct(const FArguments& InArgs)
{
	ChildSlot
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		[
			CreateGaSettingPanel().ToSharedRef()
		]
		]
		];
}

SGroupActionMode::~SGroupActionMode()
{
}

TSharedPtr<SWidget> SGroupActionMode::CreateGaSettingPanel()
{
	gaSettingPanel = SNew(SGaSettingPanel);
	gaSettingPanel->RefreshGaSettingPanel();
	return gaSettingPanel;
}

void SGroupActionMode::RefreshGaSettingPanel()
{
	gaSettingPanel->RefreshGaSettingPanel();
	gaSettingPanel->SetVisibility(EVisibility::SelfHitTestInvisible);
}

void SGroupActionMode::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
}



FgroupActionEdModeToolkit::FgroupActionEdModeToolkit()
{
}

void FgroupActionEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	UGaSettingObject* gaSettingObj;

	UGroupActionEngineSS* gaESS = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	gaSettingObj = gaESS->gaSettingObj;

	//构建面板
	ToolkitWidget = SNew(SGroupActionMode).gaSetting(gaSettingObj);

	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	UGaSettingObject* gaSettingObject = gaEss->gaSettingObj;

	if (gaEss && gaSettingObject)
	{
		////刷新设置
		RefreshScene(gaSettingObj);

		FModeToolkit::Init(InitToolkitHost);
	}
}

FName FgroupActionEdModeToolkit::GetToolkitFName() const
{
	return FName("groupActionEdMode");
}

FText FgroupActionEdModeToolkit::GetBaseToolkitName() const
{
	return NSLOCTEXT("groupActionEdModeToolkit", "DisplayName", "groupActionEdMode Tool");
}

class FEdMode* FgroupActionEdModeToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FgroupActionEdMode::EM_groupActionEdModeId);
}

void FgroupActionEdModeToolkit::RefreshScene(UGaSettingObject* gaSettingObject)
{
	if (!gaSettingObject)
		return;
	UWorld* world = GEngine->GetWorldContexts()[0].World();
	if (gaSettingObject->bShowFormationBuilder)
	{
		TArray<AActor*>actorArr;

		UGameplayStatics::GetAllActorsOfClass(world, ABaseFormationBuilder::StaticClass(), actorArr);

		if (actorArr.Num() > 0)
		{
			for (int i = 0; i < actorArr.Num(); i++)
			{
				ABaseFormationBuilder* gaFormationBuilder = Cast<ABaseFormationBuilder>(actorArr[i]);
				if (gaFormationBuilder)
				{
					gaFormationBuilder->ShowHideFormation(gaSettingObject->bShowFormationBuilder);
				}
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE



void SGaSettingPanel::Construct(const FArguments& InArgs)
{
	//先创建属性栏widget

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bUpdatesFromSelection = false;
	DetailsViewArgs.bLockable = false;
	DetailsViewArgs.bShowPropertyMatrixButton = false;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	DetailsViewArgs.ViewIdentifier = NAME_None;
	DetailsViewArgs.bShowScrollBar = true;

	gaSettingDetailPanel = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	gaSettingDetailPanel->OnFinishedChangingProperties().AddSP(this, &SGaSettingPanel::OnPropertyChanged);

	ChildSlot
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		[
			gaSettingDetailPanel.ToSharedRef()
		]
		];
}


void SGaSettingPanel::RefreshGaSettingPanel()
{
	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	UGaSettingObject* gaSettingObject = gaEss->gaSettingObj;
	if (gaSettingObject)
	{
		if (gaSettingObject)
		{
			gaSettingDetailPanel->SetObject(gaSettingObject);
			gaSettingDetailPanel->ForceRefresh();
		}
	}

}

void SGaSettingPanel::OnPropertyChanged(const FPropertyChangedEvent& InEvent)
{
	const FName propertyName = InEvent.Property ? InEvent.Property->GetFName() : NAME_None;
	const FName memberPropertyName = InEvent.MemberProperty ? InEvent.MemberProperty->GetFName() : NAME_None;

	UGroupActionEngineSS* gaEss = GEngine->GetEngineSubsystem<UGroupActionEngineSS>();
	UGaSettingObject* gaSettingObject = gaEss->gaSettingObj;

	if (gaEss && gaSettingObject)
	{
		//修改是否显示群组单元
		if (memberPropertyName == GET_MEMBER_NAME_CHECKED(UGaSettingObject, bShowFormationBuilder))
		{
			UWorld* World = GEngine->GetWorldContexts()[0].World();

			TArray<AActor*>actorArr;

			UGameplayStatics::GetAllActorsOfClass(World, ABaseFormationBuilder::StaticClass(), actorArr);

			if (actorArr.Num() > 0)
			{
				for (int i = 0; i < actorArr.Num(); i++)
				{
					ABaseFormationBuilder* gaFormationBuilder = Cast<ABaseFormationBuilder>(actorArr[i]);
					if (gaFormationBuilder)
					{
						gaFormationBuilder->ShowHideFormation(gaSettingObject->bShowFormationBuilder);
					}
				}
			}
		}
		//修改绘制模式
		else if (memberPropertyName == GET_MEMBER_NAME_CHECKED(UGaSettingObject, egcm))
		{
			//switch (gaSettingObject->egcm)
			//{
			//case EGaControlMode::EGCM_Normal:
			//{
			//	FgroupActionEdMode* pGaMode = (FgroupActionEdMode*)gaModelPanel->pMode;
			//	break;
			//}
			//case EGaControlMode::EGCM_Paint:
			//{
			//	break;
			//}
			//default:
			//	break;
			//}
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("property change!"));
	//TArray<FLiveLinkSourceUIEntryPtr> Selected;
	//SourceListView->GetSelectedItems(Selected);
	//for (FLiveLinkSourceUIEntryPtr Item : Selected)
	//{
	//	Client->OnPropertyChanged(Item->GetGuid(), InEvent);
	//}
	if (gaSettingObject)
		UGameplayStatics::SaveGameToSlot(gaSettingObject, FString("groupActionSetting"), 0);
}

SGaSettingPanel::~SGaSettingPanel()
{
}
