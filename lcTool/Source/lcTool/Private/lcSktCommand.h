#pragma once

#include "CoreMinimal.h"
#include "EditorStyleSet.h"
#include "Framework/Commands/Commands.h"



class FlcSktCommands : public TCommands<FlcSktCommands>
{
public:
	FlcSktCommands()
		: TCommands<FlcSktCommands>(TEXT("lcSktTools"), NSLOCTEXT("Contexts", "ClothPainter", "Cloth Painter"), NAME_None, FEditorStyle::GetStyleSetName())
	{

	}

	virtual void RegisterCommands() override;
	static const FlcSktCommands& Get();

	/** Clothing commands */
	TSharedPtr<FUICommandInfo> ToggleSktMode;
};
