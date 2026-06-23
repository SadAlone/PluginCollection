#include "lcSktCommand.h"

#define LOCTEXT_NAMESPACE "lcSktCommands"

void FlcSktCommands::RegisterCommands()
{
	UI_COMMAND(ToggleSktMode, "Enable skt editor", "Toggles sk editor mode!", EUserInterfaceActionType::ToggleButton, FInputChord());
}

const FlcSktCommands& FlcSktCommands::Get()
{
	return TCommands<FlcSktCommands>::Get();
}

#undef LOCTEXT_NAMESPACE