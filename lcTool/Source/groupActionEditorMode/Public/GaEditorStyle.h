#pragma once

#include "CoreMinimal.h"
#include "styling/SlateStyle.h"
#include "styling/ISlateStyle.h"
#include "Slate/SlateGameResources.h"
#include "Styling/SlateStyleRegistry.h"

class GroupActionStyle
{
public:
	static void Initialze();
	static FName GetStyleSetName();
	static void ShutDown();
	static const ISlateStyle& Get();

private:
	static TSharedRef<class FSlateStyleSet>Create();
	static TSharedPtr<class FSlateStyleSet>GroupActionStyleInstance;
};
