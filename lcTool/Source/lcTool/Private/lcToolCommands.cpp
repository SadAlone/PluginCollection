// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "lcToolCommands.h"

#define LOCTEXT_NAMESPACE "FlcToolModule"

void FlcToolCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "lcTool", "Bring up lcTool window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
