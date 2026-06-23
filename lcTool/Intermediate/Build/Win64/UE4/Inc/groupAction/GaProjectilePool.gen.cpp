// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/GaProjectilePool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaProjectilePool() {}
// Cross Module References
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectilePool_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectilePool();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_groupAction();
// End Cross Module References
	void AGaProjectilePool::StaticRegisterNativesAGaProjectilePool()
	{
	}
	UClass* Z_Construct_UClass_AGaProjectilePool_NoRegister()
	{
		return AGaProjectilePool::StaticClass();
	}
	struct Z_Construct_UClass_AGaProjectilePool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaProjectilePool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectilePool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaProjectilePool.h" },
		{ "ModuleRelativePath", "Public/GaProjectilePool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaProjectilePool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaProjectilePool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaProjectilePool_Statics::ClassParams = {
		&AGaProjectilePool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaProjectilePool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectilePool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaProjectilePool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaProjectilePool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaProjectilePool, 419257041);
	template<> GROUPACTION_API UClass* StaticClass<AGaProjectilePool>()
	{
		return AGaProjectilePool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaProjectilePool(Z_Construct_UClass_AGaProjectilePool, &AGaProjectilePool::StaticClass, TEXT("/Script/groupAction"), TEXT("AGaProjectilePool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaProjectilePool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
