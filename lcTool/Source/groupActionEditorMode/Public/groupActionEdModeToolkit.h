// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"

#include "DragAndDrop/DecoratedDragDropOp.h"
#include "Widgets/SWidget.h"
#include "Widgets/SCompoundWidget.h"

#include "GaEditorStyle.h"
#include "GroupActionWidgetStyle.h"
#include "Widgets/input/SCheckBox.h"
#include "Widgets/Layout/SSpacer.h"

#include "GaCharacter.h"
#include "GaGroupUnit.h"
#include "GaTargetPointActor.h"

#include "EdMode.h"

//#include "GaCharacter.h"
//#include "GaGroupUnit.h"
//#include "GaTargetPointActor.h"

#include "PlacementMode/Public/IPlacementModeModule.h"


/***********************************************************************************************/
/* 控制模式类型按钮                                                                    **********************/
/***********************************************************************************************/

	/*************************
	 * 拖动操作类
	**********************/





enum EGaSpawnUnitType
{
	GSUT_GaUnit,
	GSUT_GaTargetPoint,
	GSUT_GaSubVolum,
};

//群组面板类型
enum EGaPanelType
{
	GAPT_SpawnGaUnit,
	GAPT_GaUnitSetting,
	GAPT_TargetPointSetting,
	GAPT_NavSetting,
	GAPT_OtherSetting,
};


class SGroupActionMode;

/*************************
 * 群组单元属性显示面板
**********************/

class SGaSettingPanel : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SGaSettingPanel) {}
	SLATE_END_ARGS();

	TSharedPtr<class IDetailsView> gaSettingDetailPanel;

	TSharedPtr<SGroupActionMode>gaModelPanel;

	void RefreshGaSettingPanel();

	void Construct(const FArguments& InArgs);

	//属性改变时调用
	void OnPropertyChanged(const FPropertyChangedEvent& InEvent);

	virtual ~SGaSettingPanel();

	//private:
	//	FReply OnButtonDown();
};

/*************************
 * 控制模式总面板
**********************/

class SGroupActionMode : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SGroupActionMode) {}
	SLATE_ARGUMENT(UGaSettingObject*, gaSetting)
		//SLATE_ARGUMENT(FEdMode*, pMode)
		SLATE_END_ARGS();

	void Construct(const FArguments& InArgs);

	virtual ~SGroupActionMode();

	/*************************
	 * 外部调用
	**********************/
	UGaSettingObject* gaSetting;

	//FEdMode* pMode;
private:
	//属性显示面板
	TSharedPtr<SGaSettingPanel>gaSettingPanel;

	//创建属性显示面板
	TSharedPtr<SWidget> CreateGaSettingPanel();

	//刷新群组设置面板
	void RefreshGaSettingPanel();
private:
	// Begin SWidget
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	// End SWidget

};

class FgroupActionEdModeToolkit : public FModeToolkit
{
public:
	FgroupActionEdModeToolkit();

	/************************* FModeToolkit interface**********************/
	virtual void Init(const TSharedPtr<IToolkitHost>& InitToolkitHost) override;

	/************************* IToolkit interface**********************/
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual class FEdMode* GetEditorMode() const override;
	virtual TSharedPtr<class SWidget> GetInlineContent() const override { return ToolkitWidget; }

	/************************************************************************/
	/* 刷新场景                                                                     */
	/************************************************************************/
	void RefreshScene(UGaSettingObject* gaSettingObject);

private:

	TSharedPtr<SWidget> ToolkitWidget;
};
