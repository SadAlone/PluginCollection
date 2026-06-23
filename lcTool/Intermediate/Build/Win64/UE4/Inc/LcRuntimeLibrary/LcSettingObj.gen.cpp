// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LcRuntimeLibrary/Public/LcSettingObj.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLcSettingObj() {}
// Cross Module References
	LCRUNTIMELIBRARY_API UClass* Z_Construct_UClass_ULcSettingObj_NoRegister();
	LCRUNTIMELIBRARY_API UClass* Z_Construct_UClass_ULcSettingObj();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LcRuntimeLibrary();
// End Cross Module References
	void ULcSettingObj::StaticRegisterNativesULcSettingObj()
	{
	}
	UClass* Z_Construct_UClass_ULcSettingObj_NoRegister()
	{
		return ULcSettingObj::StaticClass();
	}
	struct Z_Construct_UClass_ULcSettingObj_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cmdList_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_cmdList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cmdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_cmdList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULcSettingObj_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LcRuntimeLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULcSettingObj_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LcSettingObj.h" },
		{ "ModuleRelativePath", "Public/LcSettingObj.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList_ValueProp = { "cmdList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList_Key_KeyProp = { "cmdList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList_MetaData[] = {
		{ "Category", "LcSetting" },
		{ "Comment", "//\xe5\x90\xaf\xe5\x8a\xa8\xe6\x89\xa7\xe8\xa1\x8c\xe5\x91\xbd\xe4\xbb\xa4\xe5\x88\x97\xe8\xa1\xa8\n" },
		{ "ModuleRelativePath", "Public/LcSettingObj.h" },
		{ "ToolTip", "\xe5\x90\xaf\xe5\x8a\xa8\xe6\x89\xa7\xe8\xa1\x8c\xe5\x91\xbd\xe4\xbb\xa4\xe5\x88\x97\xe8\xa1\xa8" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList = { "cmdList", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULcSettingObj, cmdList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULcSettingObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULcSettingObj_Statics::NewProp_cmdList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULcSettingObj_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULcSettingObj>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULcSettingObj_Statics::ClassParams = {
		&ULcSettingObj::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULcSettingObj_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULcSettingObj_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULcSettingObj_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULcSettingObj_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULcSettingObj()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULcSettingObj_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULcSettingObj, 3479154609);
	template<> LCRUNTIMELIBRARY_API UClass* StaticClass<ULcSettingObj>()
	{
		return ULcSettingObj::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULcSettingObj(Z_Construct_UClass_ULcSettingObj, &ULcSettingObj::StaticClass, TEXT("/Script/LcRuntimeLibrary"), TEXT("ULcSettingObj"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULcSettingObj);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
