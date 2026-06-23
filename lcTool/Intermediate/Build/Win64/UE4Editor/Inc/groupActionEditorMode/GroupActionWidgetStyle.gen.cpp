// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupActionEditorMode/Public/GroupActionWidgetStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupActionWidgetStyle() {}
// Cross Module References
	GROUPACTIONEDITORMODE_API UScriptStruct* Z_Construct_UScriptStruct_FGroupActionStyle();
	UPackage* Z_Construct_UPackage__Script_groupActionEditorMode();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	GROUPACTIONEDITORMODE_API UClass* Z_Construct_UClass_UGroupActionWidgetStyle_NoRegister();
	GROUPACTIONEDITORMODE_API UClass* Z_Construct_UClass_UGroupActionWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupActionStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FGroupActionStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

class UScriptStruct* FGroupActionStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTIONEDITORMODE_API uint32 Get_Z_Construct_UScriptStruct_FGroupActionStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupActionStyle, Z_Construct_UPackage__Script_groupActionEditorMode(), TEXT("GroupActionStyle"), sizeof(FGroupActionStyle), Get_Z_Construct_UScriptStruct_FGroupActionStyle_Hash());
	}
	return Singleton;
}
template<> GROUPACTIONEDITORMODE_API UScriptStruct* StaticStruct<FGroupActionStyle>()
{
	return FGroupActionStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupActionStyle(FGroupActionStyle::StaticStruct, TEXT("/Script/groupActionEditorMode"), TEXT("GroupActionStyle"), false, nullptr, nullptr);
static struct FScriptStruct_groupActionEditorMode_StaticRegisterNativesFGroupActionStyle
{
	FScriptStruct_groupActionEditorMode_StaticRegisterNativesFGroupActionStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GroupActionStyle")),new UScriptStruct::TCppStructOps<FGroupActionStyle>);
	}
} ScriptStruct_groupActionEditorMode_StaticRegisterNativesFGroupActionStyle;
	struct Z_Construct_UScriptStruct_FGroupActionStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnGaUnitIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnGaUnitIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnGaTargetPointIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnGaTargetPointIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_textStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupActionStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/GroupActionWidgetStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupActionStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaUnitIcon_MetaData[] = {
		{ "Category", "group action style" },
		{ "Comment", "//\xe6\x8b\x96\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83\xe5\x9b\xbe\xe6\xa0\x87\xe7\xac\x94\xe5\x88\xb7\n" },
		{ "ModuleRelativePath", "Public/GroupActionWidgetStyle.h" },
		{ "ToolTip", "\xe6\x8b\x96\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83\xe5\x9b\xbe\xe6\xa0\x87\xe7\xac\x94\xe5\x88\xb7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaUnitIcon = { "spawnGaUnitIcon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupActionStyle, spawnGaUnitIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaUnitIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaUnitIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaTargetPointIcon_MetaData[] = {
		{ "Category", "group action style" },
		{ "Comment", "//\xe6\x8b\x96\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe4\xb8\xbb\xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9\xe5\x9b\xbe\xe6\xa0\x87\xe7\xac\x94\xe5\x88\xb7\n" },
		{ "ModuleRelativePath", "Public/GroupActionWidgetStyle.h" },
		{ "ToolTip", "\xe6\x8b\x96\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe4\xb8\xbb\xe7\x9b\xae\xe6\xa0\x87\xe7\x82\xb9\xe5\x9b\xbe\xe6\xa0\x87\xe7\xac\x94\xe5\x88\xb7" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaTargetPointIcon = { "spawnGaTargetPointIcon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupActionStyle, spawnGaTargetPointIcon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaTargetPointIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaTargetPointIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_textStyle_MetaData[] = {
		{ "Category", "group action style" },
		{ "ModuleRelativePath", "Public/GroupActionWidgetStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_textStyle = { "textStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupActionStyle, textStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_textStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_textStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupActionStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaUnitIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_spawnGaTargetPointIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupActionStyle_Statics::NewProp_textStyle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupActionStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupActionEditorMode,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"GroupActionStyle",
		sizeof(FGroupActionStyle),
		alignof(FGroupActionStyle),
		Z_Construct_UScriptStruct_FGroupActionStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupActionStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupActionStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupActionStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupActionEditorMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupActionStyle"), sizeof(FGroupActionStyle), Get_Z_Construct_UScriptStruct_FGroupActionStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupActionStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupActionStyle_Hash() { return 88226986U; }
	void UGroupActionWidgetStyle::StaticRegisterNativesUGroupActionWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UGroupActionWidgetStyle_NoRegister()
	{
		return UGroupActionWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UGroupActionWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupActionWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_groupActionEditorMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GroupActionWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/GroupActionWidgetStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionWidgetStyle_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the widget appearance. */" },
		{ "ModuleRelativePath", "Public/GroupActionWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the widget appearance." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionWidgetStyle_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroupActionWidgetStyle, WidgetStyle), Z_Construct_UScriptStruct_FGroupActionStyle, METADATA_PARAMS(Z_Construct_UClass_UGroupActionWidgetStyle_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionWidgetStyle_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupActionWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionWidgetStyle_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupActionWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupActionWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGroupActionWidgetStyle_Statics::ClassParams = {
		&UGroupActionWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroupActionWidgetStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupActionWidgetStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupActionWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGroupActionWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGroupActionWidgetStyle, 1277655566);
	template<> GROUPACTIONEDITORMODE_API UClass* StaticClass<UGroupActionWidgetStyle>()
	{
		return UGroupActionWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGroupActionWidgetStyle(Z_Construct_UClass_UGroupActionWidgetStyle, &UGroupActionWidgetStyle::StaticClass, TEXT("/Script/groupActionEditorMode"), TEXT("UGroupActionWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupActionWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
