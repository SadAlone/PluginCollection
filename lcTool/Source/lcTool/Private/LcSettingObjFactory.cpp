
#include "LcSettingObjFactory.h"


ULcSettingObjFactory::ULcSettingObjFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = ULcSettingObj::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}


UObject* ULcSettingObjFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	ULcSettingObj* newObj = NewObject<ULcSettingObj>(InParent, InClass, InName, Flags);

	return newObj;
}

bool ULcSettingObjFactory::ShouldShowInNewMenu()const
{
	return true;
}

uint32 ULcSettingObjFactory::GetMenuCategories() const
{
	return 1 << 8;
}

FAssetTypeActions_LcSettingObj::FAssetTypeActions_LcSettingObj(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

void FAssetTypeActions_LcSettingObj::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone, EditWithinLevelEditor, InObjects);
}
