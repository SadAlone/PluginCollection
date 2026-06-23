


#include "GaEditorStyle.h"


TSharedPtr<FSlateStyleSet>GroupActionStyle::GroupActionStyleInstance = NULL;


void GroupActionStyle::Initialze()
{
	if (!GroupActionStyleInstance)
	{
		GroupActionStyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*GroupActionStyleInstance);
	}

}


FName GroupActionStyle::GetStyleSetName()
{
	const static FName MyStyleName(TEXT("GroupActionStyle"));
	return MyStyleName;
}

void GroupActionStyle::ShutDown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*GroupActionStyleInstance);
	ensure(GroupActionStyleInstance.IsUnique());
	GroupActionStyleInstance.Reset();
}

const ISlateStyle& GroupActionStyle::Get()
{
	return *GroupActionStyleInstance;
}

TSharedRef<class FSlateStyleSet> GroupActionStyle::Create()
{
	return FSlateGameResources::New(GroupActionStyle::GetStyleSetName(), "/lcTool/asset/groupAction/slateStyle", "/lcTool/asset/groupAction/slateStyle");
}

