// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lcTool/Public/lcBpBridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelcBpBridge() {}
// Cross Module References
	LCTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FColorOutputUnitSave();
	UPackage* Z_Construct_UPackage__Script_lcTool();
	LCTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FFeather();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
	LCTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSelectSet();
	LCTOOL_API UClass* Z_Construct_UClass_UlcBpBridge_NoRegister();
	LCTOOL_API UClass* Z_Construct_UClass_UlcBpBridge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	BUILDLIGHT_API UClass* Z_Construct_UClass_ABuildSpotLight_NoRegister();
// End Cross Module References
class UScriptStruct* FColorOutputUnitSave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LCTOOL_API uint32 Get_Z_Construct_UScriptStruct_FColorOutputUnitSave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorOutputUnitSave, Z_Construct_UPackage__Script_lcTool(), TEXT("ColorOutputUnitSave"), sizeof(FColorOutputUnitSave), Get_Z_Construct_UScriptStruct_FColorOutputUnitSave_Hash());
	}
	return Singleton;
}
template<> LCTOOL_API UScriptStruct* StaticStruct<FColorOutputUnitSave>()
{
	return FColorOutputUnitSave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorOutputUnitSave(FColorOutputUnitSave::StaticStruct, TEXT("/Script/lcTool"), TEXT("ColorOutputUnitSave"), false, nullptr, nullptr);
static struct FScriptStruct_lcTool_StaticRegisterNativesFColorOutputUnitSave
{
	FScriptStruct_lcTool_StaticRegisterNativesFColorOutputUnitSave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorOutputUnitSave")),new UScriptStruct::TCppStructOps<FColorOutputUnitSave>);
	}
} ScriptStruct_lcTool_StaticRegisterNativesFColorOutputUnitSave;
	struct Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_actorSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_actorSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x9a\xe9\x81\x93\xe5\x8d\x95\xe5\x85\x83\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe9\xa2\x9c\xe8\x89\xb2\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x9a\xe9\x81\x93\xe5\x8d\x95\xe5\x85\x83" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorOutputUnitSave>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewProp_actorSet_ElementProp = { "actorSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewProp_actorSet_MetaData[] = {
		{ "Category", "\xe9\x80\x89\xe6\x8b\xa9\xe5\x90\x88\xe9\x9b\x86" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewProp_actorSet = { "actorSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorOutputUnitSave, actorSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewProp_actorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewProp_actorSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewProp_actorSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::NewProp_actorSet,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
		nullptr,
		&NewStructOps,
		"ColorOutputUnitSave",
		sizeof(FColorOutputUnitSave),
		alignof(FColorOutputUnitSave),
		Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorOutputUnitSave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorOutputUnitSave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_lcTool();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorOutputUnitSave"), sizeof(FColorOutputUnitSave), Get_Z_Construct_UScriptStruct_FColorOutputUnitSave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorOutputUnitSave_Hash() { return 262239356U; }

static_assert(std::is_polymorphic<FFeather>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFeather cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FFeather::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LCTOOL_API uint32 Get_Z_Construct_UScriptStruct_FFeather_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeather, Z_Construct_UPackage__Script_lcTool(), TEXT("Feather"), sizeof(FFeather), Get_Z_Construct_UScriptStruct_FFeather_Hash());
	}
	return Singleton;
}
template<> LCTOOL_API UScriptStruct* StaticStruct<FFeather>()
{
	return FFeather::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFeather(FFeather::StaticStruct, TEXT("/Script/lcTool"), TEXT("Feather"), false, nullptr, nullptr);
static struct FScriptStruct_lcTool_StaticRegisterNativesFFeather
{
	FScriptStruct_lcTool_StaticRegisterNativesFFeather()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Feather")),new UScriptStruct::TCppStructOps<FFeather>);
	}
} ScriptStruct_lcTool_StaticRegisterNativesFFeather;
	struct Z_Construct_UScriptStruct_FFeather_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groomAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_groomAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groomBindingAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_groomBindingAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeather_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xbe\xbd\xe6\xaf\x9b\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe7\xbe\xbd\xe6\xaf\x9b\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\xe4\xbd\x93" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeather_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeather>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomAsset_MetaData[] = {
		{ "Category", "FeatherProperty" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomAsset = { "groomAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeather, groomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomBindingAsset_MetaData[] = {
		{ "Category", "FeatherProperty" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomBindingAsset = { "groomBindingAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFeather, groomBindingAsset), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomBindingAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomBindingAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeather_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeather_Statics::NewProp_groomBindingAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeather_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Feather",
		sizeof(FFeather),
		alignof(FFeather),
		Z_Construct_UScriptStruct_FFeather_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeather_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeather_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeather_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeather()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFeather_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_lcTool();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Feather"), sizeof(FFeather), Get_Z_Construct_UScriptStruct_FFeather_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFeather_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFeather_Hash() { return 2812029603U; }
class UScriptStruct* FLevelSelectSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LCTOOL_API uint32 Get_Z_Construct_UScriptStruct_FLevelSelectSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSelectSet, Z_Construct_UPackage__Script_lcTool(), TEXT("LevelSelectSet"), sizeof(FLevelSelectSet), Get_Z_Construct_UScriptStruct_FLevelSelectSet_Hash());
	}
	return Singleton;
}
template<> LCTOOL_API UScriptStruct* StaticStruct<FLevelSelectSet>()
{
	return FLevelSelectSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelSelectSet(FLevelSelectSet::StaticStruct, TEXT("/Script/lcTool"), TEXT("LevelSelectSet"), false, nullptr, nullptr);
static struct FScriptStruct_lcTool_StaticRegisterNativesFLevelSelectSet
{
	FScriptStruct_lcTool_StaticRegisterNativesFLevelSelectSet()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelSelectSet")),new UScriptStruct::TCppStructOps<FLevelSelectSet>);
	}
} ScriptStruct_lcTool_StaticRegisterNativesFLevelSelectSet;
	struct Z_Construct_UScriptStruct_FLevelSelectSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_os_MetaData[];
#endif
		static void NewProp_os_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_os;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSelectSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe5\x85\xb3\xe5\x8d\xa1\xe9\x80\x89\xe6\x8b\xa9\xe5\x90\x88\xe9\x9b\x86\n */" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe5\x85\xb3\xe5\x8d\xa1\xe9\x80\x89\xe6\x8b\xa9\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSelectSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewProp_os_MetaData[] = {
		{ "Category", "\xe9\x80\x89\xe6\x8b\xa9\xe5\x90\x88\xe9\x9b\x86" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewProp_os_SetBit(void* Obj)
	{
		((FLevelSelectSet*)Obj)->os = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewProp_os = { "os", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSelectSet), &Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewProp_os_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewProp_os_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewProp_os_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSelectSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSelectSet_Statics::NewProp_os,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSelectSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
		nullptr,
		&NewStructOps,
		"LevelSelectSet",
		sizeof(FLevelSelectSet),
		alignof(FLevelSelectSet),
		Z_Construct_UScriptStruct_FLevelSelectSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSelectSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSelectSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSelectSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSelectSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelSelectSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_lcTool();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelSelectSet"), sizeof(FLevelSelectSet), Get_Z_Construct_UScriptStruct_FLevelSelectSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelSelectSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelSelectSet_Hash() { return 3984973188U; }
	DEFINE_FUNCTION(UlcBpBridge::execcallUpdateExe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->callUpdateExe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execRequestServerPluginVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestServerPluginVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execRequestServerCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestServerCode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execsettingEnableStencil)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->settingEnableStencil();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execclearSpecialIdColorOutputSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->clearSpecialIdColorOutputSet(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execclearAllColorOuputSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->clearAllColorOuputSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execaddContentToSpecialColorSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_TARRAY(FString,Z_Param_content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addContentToSpecialColorSet(Z_Param_id,Z_Param_content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execgetAllColorId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->getAllColorId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execgetSpecialIdColorouputContent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->getSpecialIdColorouputContent(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execdelColorOutputSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->delColorOutputSet(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execaddNewColorOuputSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->addNewColorOuputSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execgetSpecialIdColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->getSpecialIdColor(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execClearLevelSelectSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLevelSelectSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execgetAllSetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->getAllSetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execsetSpecialNameToNewSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_newSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setSpecialNameToNewSetName(Z_Param_SetName,Z_Param_newSetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execremoveSpecialSetNameContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->removeSpecialSetNameContent(Z_Param_SetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execgetSelectContentBySetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SetName);
		P_GET_UBOOL_REF(Z_Param_Out_bfind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->getSelectContentBySetName(Z_Param_SetName,Z_Param_Out_bfind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execaddContentToSpecialSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_setName);
		P_GET_TARRAY(FString,Z_Param_setContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addContentToSpecialSet(Z_Param_setName,Z_Param_setContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execaddNewSelectSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_setName);
		P_GET_TARRAY(FString,Z_Param_setContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->addNewSelectSet(Z_Param_setName,Z_Param_setContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execGetAllSqPtrBinddingsName)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_outString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSqPtrBinddingsName(Z_Param_Out_outString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execRemoveAllNodeEqualSpecialName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllNodeEqualSpecialName(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execRemoveAllNodeContainSpecialName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllNodeContainSpecialName(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execgetTableAllGroomAsset)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UGroomAsset*,UGroomBindingAsset*>*)Z_Param__Result=P_THIS->getTableAllGroomAsset(Z_Param_Table);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execdeleteDataTableValue)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_STRUCT(FFeather,Z_Param_featherPro);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->deleteDataTableValue(Z_Param_Table,Z_Param_featherPro);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execaddDataTableValue)
	{
		P_GET_OBJECT(UDataTable,Z_Param_Table);
		P_GET_STRUCT(FFeather,Z_Param_featherPro);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->addDataTableValue(Z_Param_Table,Z_Param_featherPro);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execgetAllFileOnDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->getAllFileOnDirectory(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execGetLevelMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetLevelMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execsetMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_staticMesh);
		P_GET_OBJECT(USkeletalMesh,Z_Param_skMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setMesh(Z_Param_staticMesh,Z_Param_skMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execGetSetArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_retPathSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSetArray(Z_Param_Out_retPathSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execEmptyPathSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptyPathSet(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execDelDirPathToSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelDirPathToSet(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execCallAddPitch)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallAddPitch(Z_Param_Out_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execsetMeshType)
	{
		P_GET_UBOOL(Z_Param_bStatic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setMeshType(Z_Param_bStatic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execClearMeshAllMat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMeshAllMat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execReplaceLevelMeshMat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceLevelMeshMat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcBpBridge::execReplaceMeshMat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceMeshMat();
		P_NATIVE_END;
	}
	void UlcBpBridge::StaticRegisterNativesUlcBpBridge()
	{
		UClass* Class = UlcBpBridge::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "addContentToSpecialColorSet", &UlcBpBridge::execaddContentToSpecialColorSet },
			{ "addContentToSpecialSet", &UlcBpBridge::execaddContentToSpecialSet },
			{ "addDataTableValue", &UlcBpBridge::execaddDataTableValue },
			{ "addNewColorOuputSet", &UlcBpBridge::execaddNewColorOuputSet },
			{ "addNewSelectSet", &UlcBpBridge::execaddNewSelectSet },
			{ "CallAddPitch", &UlcBpBridge::execCallAddPitch },
			{ "callUpdateExe", &UlcBpBridge::execcallUpdateExe },
			{ "clearAllColorOuputSet", &UlcBpBridge::execclearAllColorOuputSet },
			{ "ClearLevelSelectSet", &UlcBpBridge::execClearLevelSelectSet },
			{ "ClearMeshAllMat", &UlcBpBridge::execClearMeshAllMat },
			{ "clearSpecialIdColorOutputSet", &UlcBpBridge::execclearSpecialIdColorOutputSet },
			{ "delColorOutputSet", &UlcBpBridge::execdelColorOutputSet },
			{ "DelDirPathToSet", &UlcBpBridge::execDelDirPathToSet },
			{ "deleteDataTableValue", &UlcBpBridge::execdeleteDataTableValue },
			{ "EmptyPathSet", &UlcBpBridge::execEmptyPathSet },
			{ "getAllColorId", &UlcBpBridge::execgetAllColorId },
			{ "getAllFileOnDirectory", &UlcBpBridge::execgetAllFileOnDirectory },
			{ "getAllSetName", &UlcBpBridge::execgetAllSetName },
			{ "GetAllSqPtrBinddingsName", &UlcBpBridge::execGetAllSqPtrBinddingsName },
			{ "GetLevelMesh", &UlcBpBridge::execGetLevelMesh },
			{ "getSelectContentBySetName", &UlcBpBridge::execgetSelectContentBySetName },
			{ "GetSetArray", &UlcBpBridge::execGetSetArray },
			{ "getSpecialIdColor", &UlcBpBridge::execgetSpecialIdColor },
			{ "getSpecialIdColorouputContent", &UlcBpBridge::execgetSpecialIdColorouputContent },
			{ "getTableAllGroomAsset", &UlcBpBridge::execgetTableAllGroomAsset },
			{ "RemoveAllNodeContainSpecialName", &UlcBpBridge::execRemoveAllNodeContainSpecialName },
			{ "RemoveAllNodeEqualSpecialName", &UlcBpBridge::execRemoveAllNodeEqualSpecialName },
			{ "removeSpecialSetNameContent", &UlcBpBridge::execremoveSpecialSetNameContent },
			{ "ReplaceLevelMeshMat", &UlcBpBridge::execReplaceLevelMeshMat },
			{ "ReplaceMeshMat", &UlcBpBridge::execReplaceMeshMat },
			{ "RequestServerCode", &UlcBpBridge::execRequestServerCode },
			{ "RequestServerPluginVersion", &UlcBpBridge::execRequestServerPluginVersion },
			{ "setMesh", &UlcBpBridge::execsetMesh },
			{ "setMeshType", &UlcBpBridge::execsetMeshType },
			{ "setSpecialNameToNewSetName", &UlcBpBridge::execsetSpecialNameToNewSetName },
			{ "settingEnableStencil", &UlcBpBridge::execsettingEnableStencil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics
	{
		struct lcBpBridge_eventaddContentToSpecialColorSet_Parms
		{
			int32 id;
			TArray<FString> content;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddContentToSpecialColorSet_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::NewProp_content_Inner = { "content", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddContentToSpecialColorSet_Parms, content), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::NewProp_content_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::NewProp_content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9aID\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9aID\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "addContentToSpecialColorSet", nullptr, nullptr, sizeof(lcBpBridge_eventaddContentToSpecialColorSet_Parms), Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics
	{
		struct lcBpBridge_eventaddContentToSpecialSet_Parms
		{
			FString setName;
			TArray<FString> setContent;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_setName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_setContent_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_setContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::NewProp_setName = { "setName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddContentToSpecialSet_Parms, setName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::NewProp_setContent_Inner = { "setContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::NewProp_setContent = { "setContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddContentToSpecialSet_Parms, setContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::NewProp_setName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::NewProp_setContent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::NewProp_setContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe7\xa7\xb0\xe5\x90\x88\xe9\x9b\x86\xe9\x87\x8c\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe5\x86\x85\xe5\xae\xb9\xe5\x88\xb0\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe7\xa7\xb0\xe5\x90\x88\xe9\x9b\x86\xe9\x87\x8c" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "addContentToSpecialSet", nullptr, nullptr, sizeof(lcBpBridge_eventaddContentToSpecialSet_Parms), Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics
	{
		struct lcBpBridge_eventaddDataTableValue_Parms
		{
			UDataTable* Table;
			FFeather featherPro;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_featherPro;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddDataTableValue_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_featherPro = { "featherPro", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddDataTableValue_Parms, featherPro), Z_Construct_UScriptStruct_FFeather, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lcBpBridge_eventaddDataTableValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lcBpBridge_eventaddDataTableValue_Parms), &Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_featherPro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "addDataTableValue", nullptr, nullptr, sizeof(lcBpBridge_eventaddDataTableValue_Parms), Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_addDataTableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_addDataTableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics
	{
		struct lcBpBridge_eventaddNewColorOuputSet_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddNewColorOuputSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xb8\x80\xe4\xb8\xaa\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "addNewColorOuputSet", nullptr, nullptr, sizeof(lcBpBridge_eventaddNewColorOuputSet_Parms), Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics
	{
		struct lcBpBridge_eventaddNewSelectSet_Parms
		{
			FString setName;
			TArray<FString> setContent;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_setName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_setContent_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_setContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::NewProp_setName = { "setName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddNewSelectSet_Parms, setName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::NewProp_setContent_Inner = { "setContent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::NewProp_setContent = { "setContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventaddNewSelectSet_Parms, setContent), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::NewProp_setName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::NewProp_setContent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::NewProp_setContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x96\xb0\xe7\x9a\x84\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x96\xb0\xe7\x9a\x84\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "addNewSelectSet", nullptr, nullptr, sizeof(lcBpBridge_eventaddNewSelectSet_Parms), Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_addNewSelectSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_addNewSelectSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics
	{
		struct lcBpBridge_eventCallAddPitch_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventCallAddPitch_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe8\xb7\xaf\xe5\xbe\x84\xe5\x88\xb0\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe8\xb7\xaf\xe5\xbe\x84\xe5\x88\xb0\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "CallAddPitch", nullptr, nullptr, sizeof(lcBpBridge_eventCallAddPitch_Parms), Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_CallAddPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_CallAddPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_callUpdateExe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_callUpdateExe_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_callUpdateExe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "callUpdateExe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_callUpdateExe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_callUpdateExe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_callUpdateExe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_callUpdateExe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb8\x85\xe7\xa9\xba\xe6\x89\x80\xe6\x9c\x89\xe9\xa2\x9c\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb8\x85\xe7\xa9\xba\xe6\x89\x80\xe6\x9c\x89\xe9\xa2\x9c\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "clearAllColorOuputSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "ClearLevelSelectSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb8\x85\xe7\x90\x86\xe6\x8c\x87\xe5\xae\x9amesh\xe6\x89\x80\xe6\x9c\x89\xe6\x9d\x90\xe8\xb4\xa8\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb8\x85\xe7\x90\x86\xe6\x8c\x87\xe5\xae\x9amesh\xe6\x89\x80\xe6\x9c\x89\xe6\x9d\x90\xe8\xb4\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "ClearMeshAllMat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics
	{
		struct lcBpBridge_eventclearSpecialIdColorOutputSet_Parms
		{
			int32 id;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventclearSpecialIdColorOutputSet_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb8\x85\xe9\x99\xa4\xe6\x8c\x87\xe5\xae\x9a\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb8\x85\xe9\x99\xa4\xe6\x8c\x87\xe5\xae\x9a" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "clearSpecialIdColorOutputSet", nullptr, nullptr, sizeof(lcBpBridge_eventclearSpecialIdColorOutputSet_Parms), Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics
	{
		struct lcBpBridge_eventdelColorOutputSet_Parms
		{
			int32 id;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventdelColorOutputSet_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe5\x88\xa0\xe9\x99\xa4\xe4\xb8\x80\xe4\xb8\xaa\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe5\x88\xa0\xe9\x99\xa4\xe4\xb8\x80\xe4\xb8\xaa\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "delColorOutputSet", nullptr, nullptr, sizeof(lcBpBridge_eventdelColorOutputSet_Parms), Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_delColorOutputSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_delColorOutputSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics
	{
		struct lcBpBridge_eventDelDirPathToSet_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventDelDirPathToSet_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe5\x88\xa0\xe9\x99\xa4\xe8\xb7\xaf\xe5\xbe\x84\xe5\x9c\xa8\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe5\x88\xa0\xe9\x99\xa4\xe8\xb7\xaf\xe5\xbe\x84\xe5\x9c\xa8\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "DelDirPathToSet", nullptr, nullptr, sizeof(lcBpBridge_eventDelDirPathToSet_Parms), Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics
	{
		struct lcBpBridge_eventdeleteDataTableValue_Parms
		{
			UDataTable* Table;
			FFeather featherPro;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_featherPro;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventdeleteDataTableValue_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_featherPro = { "featherPro", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventdeleteDataTableValue_Parms, featherPro), Z_Construct_UScriptStruct_FFeather, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lcBpBridge_eventdeleteDataTableValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lcBpBridge_eventdeleteDataTableValue_Parms), &Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_featherPro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "deleteDataTableValue", nullptr, nullptr, sizeof(lcBpBridge_eventdeleteDataTableValue_Parms), Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics
	{
		struct lcBpBridge_eventEmptyPathSet_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventEmptyPathSet_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\xb8\x85\xe7\xa9\xba\xe8\xb7\xaf\xe5\xbe\x84\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\xb8\x85\xe7\xa9\xba\xe8\xb7\xaf\xe5\xbe\x84\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "EmptyPathSet", nullptr, nullptr, sizeof(lcBpBridge_eventEmptyPathSet_Parms), Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_EmptyPathSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_EmptyPathSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics
	{
		struct lcBpBridge_eventgetAllColorId_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetAllColorId_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89ID\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "getAllColorId", nullptr, nullptr, sizeof(lcBpBridge_eventgetAllColorId_Parms), Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_getAllColorId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_getAllColorId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics
	{
		struct lcBpBridge_eventgetAllFileOnDirectory_Parms
		{
			FString path;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetAllFileOnDirectory_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetAllFileOnDirectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "getAllFileOnDirectory", nullptr, nullptr, sizeof(lcBpBridge_eventgetAllFileOnDirectory_Parms), Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics
	{
		struct lcBpBridge_eventgetAllSetName_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetAllSetName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe5\x90\x88\xe9\x9b\x86\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x89\x80\xe6\x9c\x89\xe5\x90\x88\xe9\x9b\x86\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "getAllSetName", nullptr, nullptr, sizeof(lcBpBridge_eventgetAllSetName_Parms), Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_getAllSetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_getAllSetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics
	{
		struct lcBpBridge_eventGetAllSqPtrBinddingsName_Parms
		{
			TArray<FString> outString;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outString_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::NewProp_outString_Inner = { "outString", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::NewProp_outString = { "outString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventGetAllSqPtrBinddingsName_Parms, outString), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::NewProp_outString_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::NewProp_outString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "GetAllSqPtrBinddingsName", nullptr, nullptr, sizeof(lcBpBridge_eventGetAllSqPtrBinddingsName_Parms), Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics
	{
		struct lcBpBridge_eventGetLevelMesh_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventGetLevelMesh_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "GetLevelMesh", nullptr, nullptr, sizeof(lcBpBridge_eventGetLevelMesh_Parms), Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_GetLevelMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_GetLevelMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics
	{
		struct lcBpBridge_eventgetSelectContentBySetName_Parms
		{
			FString SetName;
			bool bfind;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SetName;
		static void NewProp_bfind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bfind;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetSelectContentBySetName_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_bfind_SetBit(void* Obj)
	{
		((lcBpBridge_eventgetSelectContentBySetName_Parms*)Obj)->bfind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_bfind = { "bfind", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lcBpBridge_eventgetSelectContentBySetName_Parms), &Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_bfind_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetSelectContentBySetName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_SetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_bfind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\x90\x88\xe9\x9b\x86\xe5\x86\x85\xe5\xae\xb9\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x88\xe9\x9b\x86\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x90\x88\xe9\x9b\x86\xe5\x86\x85\xe5\xae\xb9\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x88\xe9\x9b\x86\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "getSelectContentBySetName", nullptr, nullptr, sizeof(lcBpBridge_eventgetSelectContentBySetName_Parms), Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics
	{
		struct lcBpBridge_eventGetSetArray_Parms
		{
			TArray<FString> retPathSet;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retPathSet_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_retPathSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::NewProp_retPathSet_Inner = { "retPathSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::NewProp_retPathSet = { "retPathSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventGetSetArray_Parms, retPathSet), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::NewProp_retPathSet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::NewProp_retPathSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\x90\x88\xe9\x9b\x86\xe6\x95\xb0\xe7\xbb\x84\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x90\x88\xe9\x9b\x86\xe6\x95\xb0\xe7\xbb\x84" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "GetSetArray", nullptr, nullptr, sizeof(lcBpBridge_eventGetSetArray_Parms), Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_GetSetArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_GetSetArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics
	{
		struct lcBpBridge_eventgetSpecialIdColor_Parms
		{
			int32 id;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetSpecialIdColor_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetSpecialIdColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "getSpecialIdColor", nullptr, nullptr, sizeof(lcBpBridge_eventgetSpecialIdColor_Parms), Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics
	{
		struct lcBpBridge_eventgetSpecialIdColorouputContent_Parms
		{
			int32 id;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetSpecialIdColorouputContent_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetSpecialIdColorouputContent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aid\xe9\xa2\x9c\xe8\x89\xb2\xe5\x86\x85\xe5\xae\xb9\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aid\xe9\xa2\x9c\xe8\x89\xb2\xe5\x86\x85\xe5\xae\xb9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "getSpecialIdColorouputContent", nullptr, nullptr, sizeof(lcBpBridge_eventgetSpecialIdColorouputContent_Parms), Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics
	{
		struct lcBpBridge_eventgetTableAllGroomAsset_Parms
		{
			UDataTable* Table;
			TMap<UGroomAsset*,UGroomBindingAsset*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Table;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetTableAllGroomAsset_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventgetTableAllGroomAsset_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "getTableAllGroomAsset", nullptr, nullptr, sizeof(lcBpBridge_eventgetTableAllGroomAsset_Parms), Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics
	{
		struct lcBpBridge_eventRemoveAllNodeContainSpecialName_Parms
		{
			FString name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventRemoveAllNodeContainSpecialName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "RemoveAllNodeContainSpecialName", nullptr, nullptr, sizeof(lcBpBridge_eventRemoveAllNodeContainSpecialName_Parms), Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics
	{
		struct lcBpBridge_eventRemoveAllNodeEqualSpecialName_Parms
		{
			FString name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventRemoveAllNodeEqualSpecialName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "RemoveAllNodeEqualSpecialName", nullptr, nullptr, sizeof(lcBpBridge_eventRemoveAllNodeEqualSpecialName_Parms), Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics
	{
		struct lcBpBridge_eventremoveSpecialSetNameContent_Parms
		{
			FString SetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventremoveSpecialSetNameContent_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::NewProp_SetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x88\xe9\x9b\x86\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x88\xe9\x9b\x86\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x88\xe9\x9b\x86\xe9\x80\x9a\xe8\xbf\x87\xe5\x90\x88\xe9\x9b\x86\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "removeSpecialSetNameContent", nullptr, nullptr, sizeof(lcBpBridge_eventremoveSpecialSetNameContent_Parms), Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\x9b\xbf\xe6\x8d\xa2\xe5\x9c\xba\xe6\x99\xafmesh\xe6\x9d\x90\xe8\xb4\xa8\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\x9b\xbf\xe6\x8d\xa2\xe5\x9c\xba\xe6\x99\xafmesh\xe6\x9d\x90\xe8\xb4\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "ReplaceLevelMeshMat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\x9b\xbf\xe6\x8d\xa2mesh\xe6\x9d\x90\xe8\xb4\xa8\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\x9b\xbf\xe6\x8d\xa2mesh\xe6\x9d\x90\xe8\xb4\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "ReplaceMeshMat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_RequestServerCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_RequestServerCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_RequestServerCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "RequestServerCode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_RequestServerCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_RequestServerCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_RequestServerCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_RequestServerCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\xaf\xb7\xe6\xb1\x82\xe6\x8f\x92\xe4\xbb\xb6\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\xaf\xb7\xe6\xb1\x82\xe6\x8f\x92\xe4\xbb\xb6\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "RequestServerPluginVersion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_setMesh_Statics
	{
		struct lcBpBridge_eventsetMesh_Parms
		{
			UStaticMesh* staticMesh;
			USkeletalMesh* skMesh;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::NewProp_staticMesh = { "staticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventsetMesh_Parms, staticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::NewProp_skMesh = { "skMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventsetMesh_Parms, skMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::NewProp_staticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::NewProp_skMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "setMesh", nullptr, nullptr, sizeof(lcBpBridge_eventsetMesh_Parms), Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_setMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_setMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics
	{
		struct lcBpBridge_eventsetMeshType_Parms
		{
			bool bStatic;
		};
		static void NewProp_bStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStatic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::NewProp_bStatic_SetBit(void* Obj)
	{
		((lcBpBridge_eventsetMeshType_Parms*)Obj)->bStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::NewProp_bStatic = { "bStatic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lcBpBridge_eventsetMeshType_Parms), &Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::NewProp_bStatic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::NewProp_bStatic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x9d\x99\xe6\x80\x81mesh\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x9d\x99\xe6\x80\x81mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "setMeshType", nullptr, nullptr, sizeof(lcBpBridge_eventsetMeshType_Parms), Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_setMeshType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_setMeshType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics
	{
		struct lcBpBridge_eventsetSpecialNameToNewSetName_Parms
		{
			FString SetName;
			FString newSetName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SetName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::NewProp_SetName = { "SetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventsetSpecialNameToNewSetName_Parms, SetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::NewProp_newSetName = { "newSetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcBpBridge_eventsetSpecialNameToNewSetName_Parms, newSetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::NewProp_SetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::NewProp_newSetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "//\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe7\xa7\xb0\xe5\x90\x88\xe9\x9b\x86\xe5\x88\xb0\xe6\x96\xb0\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe9\x87\x8d\xe5\x91\xbd\xe5\x90\x8d\xe6\x8c\x87\xe5\xae\x9a\xe5\x90\x8d\xe7\xa7\xb0\xe5\x90\x88\xe9\x9b\x86\xe5\x88\xb0\xe6\x96\xb0\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "setSpecialNameToNewSetName", nullptr, nullptr, sizeof(lcBpBridge_eventsetSpecialNameToNewSetName_Parms), Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcBpBridge_settingEnableStencil_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcBpBridge_settingEnableStencil_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcBpBridge" },
		{ "Comment", "/**\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe7\x9b\xb8\xe5\x85\xb3\n\x09 *///\xe5\xbc\x80\xe5\x90\xaf\xe9\xa1\xb9\xe7\x9b\xae\xe8\xae\xbe\xe7\xbd\xaestencil\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x9b\xb8\xe5\x85\xb3\n        //\xe5\xbc\x80\xe5\x90\xaf\xe9\xa1\xb9\xe7\x9b\xae\xe8\xae\xbe\xe7\xbd\xaestencil" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcBpBridge_settingEnableStencil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcBpBridge, nullptr, "settingEnableStencil", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcBpBridge_settingEnableStencil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcBpBridge_settingEnableStencil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcBpBridge_settingEnableStencil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcBpBridge_settingEnableStencil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UlcBpBridge_NoRegister()
	{
		return UlcBpBridge::StaticClass();
	}
	struct Z_Construct_UClass_UlcBpBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matReplaceSke_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_matReplaceSke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_matReplaceStatic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_matReplaceStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticMesh_MetaData[];
#endif
		static void NewProp_bStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticMesh;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dirPathSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dirPathSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_dirPathSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_basePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_basePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_outputFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outputFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mayaLockFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mayaLockFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ueLockFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ueLockFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCheckImportFbx_MetaData[];
#endif
		static void NewProp_bAutoCheckImportFbx_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCheckImportFbx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sqPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sqPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverVersionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_serverVersionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentVersionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentVersionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buildSpotLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buildSpotLight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UlcBpBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UlcBpBridge_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UlcBpBridge_addContentToSpecialColorSet, "addContentToSpecialColorSet" }, // 3254732612
		{ &Z_Construct_UFunction_UlcBpBridge_addContentToSpecialSet, "addContentToSpecialSet" }, // 794981118
		{ &Z_Construct_UFunction_UlcBpBridge_addDataTableValue, "addDataTableValue" }, // 1884795766
		{ &Z_Construct_UFunction_UlcBpBridge_addNewColorOuputSet, "addNewColorOuputSet" }, // 3039739166
		{ &Z_Construct_UFunction_UlcBpBridge_addNewSelectSet, "addNewSelectSet" }, // 1779568284
		{ &Z_Construct_UFunction_UlcBpBridge_CallAddPitch, "CallAddPitch" }, // 3278568503
		{ &Z_Construct_UFunction_UlcBpBridge_callUpdateExe, "callUpdateExe" }, // 1503321020
		{ &Z_Construct_UFunction_UlcBpBridge_clearAllColorOuputSet, "clearAllColorOuputSet" }, // 3524567610
		{ &Z_Construct_UFunction_UlcBpBridge_ClearLevelSelectSet, "ClearLevelSelectSet" }, // 1663072235
		{ &Z_Construct_UFunction_UlcBpBridge_ClearMeshAllMat, "ClearMeshAllMat" }, // 3848554940
		{ &Z_Construct_UFunction_UlcBpBridge_clearSpecialIdColorOutputSet, "clearSpecialIdColorOutputSet" }, // 336705246
		{ &Z_Construct_UFunction_UlcBpBridge_delColorOutputSet, "delColorOutputSet" }, // 1027120364
		{ &Z_Construct_UFunction_UlcBpBridge_DelDirPathToSet, "DelDirPathToSet" }, // 2924840551
		{ &Z_Construct_UFunction_UlcBpBridge_deleteDataTableValue, "deleteDataTableValue" }, // 3956627424
		{ &Z_Construct_UFunction_UlcBpBridge_EmptyPathSet, "EmptyPathSet" }, // 3057401446
		{ &Z_Construct_UFunction_UlcBpBridge_getAllColorId, "getAllColorId" }, // 2108312995
		{ &Z_Construct_UFunction_UlcBpBridge_getAllFileOnDirectory, "getAllFileOnDirectory" }, // 3260300443
		{ &Z_Construct_UFunction_UlcBpBridge_getAllSetName, "getAllSetName" }, // 2430717719
		{ &Z_Construct_UFunction_UlcBpBridge_GetAllSqPtrBinddingsName, "GetAllSqPtrBinddingsName" }, // 390509394
		{ &Z_Construct_UFunction_UlcBpBridge_GetLevelMesh, "GetLevelMesh" }, // 3993395879
		{ &Z_Construct_UFunction_UlcBpBridge_getSelectContentBySetName, "getSelectContentBySetName" }, // 4149634189
		{ &Z_Construct_UFunction_UlcBpBridge_GetSetArray, "GetSetArray" }, // 1567896347
		{ &Z_Construct_UFunction_UlcBpBridge_getSpecialIdColor, "getSpecialIdColor" }, // 936158377
		{ &Z_Construct_UFunction_UlcBpBridge_getSpecialIdColorouputContent, "getSpecialIdColorouputContent" }, // 3955722767
		{ &Z_Construct_UFunction_UlcBpBridge_getTableAllGroomAsset, "getTableAllGroomAsset" }, // 3299610108
		{ &Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeContainSpecialName, "RemoveAllNodeContainSpecialName" }, // 2920695746
		{ &Z_Construct_UFunction_UlcBpBridge_RemoveAllNodeEqualSpecialName, "RemoveAllNodeEqualSpecialName" }, // 2941365709
		{ &Z_Construct_UFunction_UlcBpBridge_removeSpecialSetNameContent, "removeSpecialSetNameContent" }, // 3712962201
		{ &Z_Construct_UFunction_UlcBpBridge_ReplaceLevelMeshMat, "ReplaceLevelMeshMat" }, // 2203466653
		{ &Z_Construct_UFunction_UlcBpBridge_ReplaceMeshMat, "ReplaceMeshMat" }, // 1142279130
		{ &Z_Construct_UFunction_UlcBpBridge_RequestServerCode, "RequestServerCode" }, // 164628936
		{ &Z_Construct_UFunction_UlcBpBridge_RequestServerPluginVersion, "RequestServerPluginVersion" }, // 1306265243
		{ &Z_Construct_UFunction_UlcBpBridge_setMesh, "setMesh" }, // 3155482902
		{ &Z_Construct_UFunction_UlcBpBridge_setMeshType, "setMeshType" }, // 3639456192
		{ &Z_Construct_UFunction_UlcBpBridge_setSpecialNameToNewSetName, "setSpecialNameToNewSetName" }, // 2150829870
		{ &Z_Construct_UFunction_UlcBpBridge_settingEnableStencil, "settingEnableStencil" }, // 1755790662
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "lcBpBridge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceSke_MetaData[] = {
		{ "Category", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x9b\xbf\xe6\x8d\xa2" },
		{ "Comment", "/**\n\x09 * \xe6\x9d\x90\xe8\xb4\xa8\xe6\x9b\xbf\xe6\x8d\xa2\xe7\x9b\xb8\xe5\x85\xb3\n\x09 */" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe9\xaa\xa8\xe9\xaa\xbc\xe7\x89\xa9\xe4\xbd\x93" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x9b\xbf\xe6\x8d\xa2\xe7\x9b\xb8\xe5\x85\xb3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceSke = { "matReplaceSke", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, matReplaceSke), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceSke_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceSke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceStatic_MetaData[] = {
		{ "Category", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x9b\xbf\xe6\x8d\xa2" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe9\x9d\x99\xe6\x80\x81\xe7\x89\xa9\xe4\xbd\x93" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceStatic = { "matReplaceStatic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, matReplaceStatic), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bStaticMesh_MetaData[] = {
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x9d\x99\xe6\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x9d\x99\xe6\x80\x81\xe6\xa8\xa1\xe5\x9e\x8b" },
	};
#endif
	void Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bStaticMesh_SetBit(void* Obj)
	{
		((UlcBpBridge*)Obj)->bStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bStaticMesh = { "bStaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UlcBpBridge), &Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_dirPathSet_ElementProp = { "dirPathSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_dirPathSet_MetaData[] = {
		{ "Comment", "//\xe7\x9b\xae\xe5\xbd\x95\xe8\xb7\xaf\xe5\xbe\x84\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe7\x9b\xae\xe5\xbd\x95\xe8\xb7\xaf\xe5\xbe\x84\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_dirPathSet = { "dirPathSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, dirPathSet), METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_dirPathSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_dirPathSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_basePath_MetaData[] = {
		{ "Category", "FBX\xe8\x87\xaa\xe5\x8a\xa8\xe5\xaf\xbc\xe5\x85\xa5" },
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe7\x9b\xae\xe5\xbd\x95" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_basePath = { "basePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, basePath), METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_basePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_basePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_outputFilePath_MetaData[] = {
		{ "Category", "FBX\xe8\x87\xaa\xe5\x8a\xa8\xe5\xaf\xbc\xe5\x85\xa5" },
		{ "DisplayName", "\xe8\xbe\x93\xe5\x87\xba\xe6\xa3\x80\xe6\xb5\x8b\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_outputFilePath = { "outputFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, outputFilePath), METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_outputFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_outputFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_mayaLockFilePath_MetaData[] = {
		{ "Category", "FBX\xe8\x87\xaa\xe5\x8a\xa8\xe5\xaf\xbc\xe5\x85\xa5" },
		{ "DisplayName", "maya\xe6\xad\xa3\xe5\x9c\xa8\xe5\x88\xb0\xe5\xa4\x84\xe6\xa0\x87\xe5\xbf\x97\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_mayaLockFilePath = { "mayaLockFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, mayaLockFilePath), METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_mayaLockFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_mayaLockFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_ueLockFilePath_MetaData[] = {
		{ "Category", "FBX\xe8\x87\xaa\xe5\x8a\xa8\xe5\xaf\xbc\xe5\x85\xa5" },
		{ "DisplayName", "UE\xe6\xad\xa3\xe5\x9c\xa8\xe5\xaf\xbc\xe5\x85\xa5\xe6\xa0\x87\xe5\xbf\x97\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_ueLockFilePath = { "ueLockFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, ueLockFilePath), METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_ueLockFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_ueLockFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bAutoCheckImportFbx_MetaData[] = {
		{ "Category", "FBX\xe8\x87\xaa\xe5\x8a\xa8\xe5\xaf\xbc\xe5\x85\xa5" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe6\xa3\x80\xe6\xb5\x8b\xe5\xaf\xbc\xe5\x85\xa5""FBX" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	void Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bAutoCheckImportFbx_SetBit(void* Obj)
	{
		((UlcBpBridge*)Obj)->bAutoCheckImportFbx = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bAutoCheckImportFbx = { "bAutoCheckImportFbx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UlcBpBridge), &Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bAutoCheckImportFbx_SetBit, METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bAutoCheckImportFbx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bAutoCheckImportFbx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_sqPtr_MetaData[] = {
		{ "Category", "\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8" },
		{ "Comment", "/**\n\x09* sq\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8\n\x09*/" },
		{ "DisplayName", "\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8\xe8\xb5\x84\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "sq\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_sqPtr = { "sqPtr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, sqPtr), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_sqPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_sqPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_serverVersionCode_MetaData[] = {
		{ "Category", "version" },
		{ "Comment", "/**\n\x09 * \xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\xe7\x9b\xb8\xe5\x85\xb3\n\x09 *///\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\n" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
		{ "ToolTip", "\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7\xe7\x9b\xb8\xe5\x85\xb3\n        //\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_serverVersionCode = { "serverVersionCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, serverVersionCode), METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_serverVersionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_serverVersionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_currentVersionCode_MetaData[] = {
		{ "Category", "version" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_currentVersionCode = { "currentVersionCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, currentVersionCode), METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_currentVersionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_currentVersionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcBpBridge_Statics::NewProp_buildSpotLight_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/lcBpBridge.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UlcBpBridge_Statics::NewProp_buildSpotLight = { "buildSpotLight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcBpBridge, buildSpotLight), Z_Construct_UClass_ABuildSpotLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_buildSpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::NewProp_buildSpotLight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UlcBpBridge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceSke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_matReplaceStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_dirPathSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_dirPathSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_basePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_outputFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_mayaLockFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_ueLockFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_bAutoCheckImportFbx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_sqPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_serverVersionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_currentVersionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcBpBridge_Statics::NewProp_buildSpotLight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UlcBpBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UlcBpBridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UlcBpBridge_Statics::ClassParams = {
		&UlcBpBridge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UlcBpBridge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UlcBpBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UlcBpBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UlcBpBridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UlcBpBridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UlcBpBridge, 864764890);
	template<> LCTOOL_API UClass* StaticClass<UlcBpBridge>()
	{
		return UlcBpBridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UlcBpBridge(Z_Construct_UClass_UlcBpBridge, &UlcBpBridge::StaticClass, TEXT("/Script/lcTool"), TEXT("UlcBpBridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UlcBpBridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
