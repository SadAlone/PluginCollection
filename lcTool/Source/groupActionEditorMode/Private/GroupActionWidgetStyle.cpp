// Fill out your copyright notice in the Description page of Project Settings.


#include "GroupActionWidgetStyle.h"

FGroupActionStyle::FGroupActionStyle()
{
}

FGroupActionStyle::~FGroupActionStyle()
{
}

const FName FGroupActionStyle::TypeName(TEXT("FGroupActionStyle"));

const FGroupActionStyle& FGroupActionStyle::GetDefault()
{
	static FGroupActionStyle Default;
	return Default;
}

void FGroupActionStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them
	OutBrushes.Add(&spawnGaUnitIcon);
	OutBrushes.Add(&spawnGaTargetPointIcon);
}

