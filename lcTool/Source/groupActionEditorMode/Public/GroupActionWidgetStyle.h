// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "Styling/SlateWidgetStyleContainerBase.h"

#include "GroupActionWidgetStyle.generated.h"

/**
 *
 */
USTRUCT()
struct GROUPACTIONEDITORMODE_API FGroupActionStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

		FGroupActionStyle();
	virtual ~FGroupActionStyle();

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FGroupActionStyle& GetDefault();


	//拖动生成群组单元图标笔刷
	UPROPERTY(EditAnywhere, Category = "group action style")
		FSlateBrush spawnGaUnitIcon;
	//拖动生成群主目标点图标笔刷
	UPROPERTY(EditAnywhere, Category = "group action style")
		FSlateBrush spawnGaTargetPointIcon;
	UPROPERTY(EditAnywhere, Category = "group action style")
		FTextBlockStyle textStyle;
};

/**
 */
UCLASS(hidecategories = Object, MinimalAPI)
class UGroupActionWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category = Appearance, EditAnywhere, meta = (ShowOnlyInnerProperties))
		FGroupActionStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast<const struct FSlateWidgetStyle*>(&WidgetStyle);
	}
};
