// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "lcToolStyle.h"

class FlcToolCommands : public TCommands<FlcToolCommands>
{
public:

	FlcToolCommands()
		: TCommands<FlcToolCommands>(TEXT("lcTool"), NSLOCTEXT("Contexts", "lcTool", "lcTool Plugin"), NAME_None, FlcToolStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};