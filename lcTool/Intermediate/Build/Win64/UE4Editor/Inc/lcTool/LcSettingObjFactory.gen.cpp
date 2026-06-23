// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lcTool/Public/LcSettingObjFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLcSettingObjFactory() {}
// Cross Module References
	LCTOOL_API UClass* Z_Construct_UClass_ULcSettingObjFactory_NoRegister();
	LCTOOL_API UClass* Z_Construct_UClass_ULcSettingObjFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_lcTool();
// End Cross Module References
	void ULcSettingObjFactory::StaticRegisterNativesULcSettingObjFactory()
	{
	}
	UClass* Z_Construct_UClass_ULcSettingObjFactory_NoRegister()
	{
		return ULcSettingObjFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULcSettingObjFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULcSettingObjFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULcSettingObjFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LcSettingObjFactory.h" },
		{ "ModuleRelativePath", "Public/LcSettingObjFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULcSettingObjFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULcSettingObjFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULcSettingObjFactory_Statics::ClassParams = {
		&ULcSettingObjFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULcSettingObjFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULcSettingObjFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULcSettingObjFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULcSettingObjFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULcSettingObjFactory, 4115532915);
	template<> LCTOOL_API UClass* StaticClass<ULcSettingObjFactory>()
	{
		return ULcSettingObjFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULcSettingObjFactory(Z_Construct_UClass_ULcSettingObjFactory, &ULcSettingObjFactory::StaticClass, TEXT("/Script/lcTool"), TEXT("ULcSettingObjFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULcSettingObjFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
