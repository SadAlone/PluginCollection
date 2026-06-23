// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/GaProjectileActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaProjectileActor() {}
// Cross Module References
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaProjectileData();
	UPackage* Z_Construct_UPackage__Script_groupAction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectileActor_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectileActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FGaProjectileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaProjectileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaProjectileData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaProjectileData"), sizeof(FGaProjectileData), Get_Z_Construct_UScriptStruct_FGaProjectileData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaProjectileData>()
{
	return FGaProjectileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaProjectileData(FGaProjectileData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaProjectileData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaProjectileData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaProjectileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaProjectileData")),new UScriptStruct::TCppStructOps<FGaProjectileData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaProjectileData;
	struct Z_Construct_UScriptStruct_FGaProjectileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_attackValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speedValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_speedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaProjectileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaProjectileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_attackValue_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b\xe8\x8c\x83\xe5\x9b\xb4\n" },
		{ "DisplayName", "\xe5\xbc\xb9\xe4\xb8\xb8\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b\xe8\x8c\x83\xe5\x9b\xb4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_attackValue = { "attackValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaProjectileData, attackValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_attackValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_attackValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_speedValue_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe5\xbc\xb9\xe4\xb8\xb8\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4\n" },
		{ "DisplayName", "\xe5\xbc\xb9\xe4\xb8\xb8\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
		{ "ToolTip", "\xe5\xbc\xb9\xe4\xb8\xb8\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_speedValue = { "speedValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaProjectileData, speedValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_speedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_speedValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaProjectileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_attackValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaProjectileData_Statics::NewProp_speedValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaProjectileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaProjectileData",
		sizeof(FGaProjectileData),
		alignof(FGaProjectileData),
		Z_Construct_UScriptStruct_FGaProjectileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaProjectileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaProjectileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaProjectileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaProjectileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaProjectileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaProjectileData"), sizeof(FGaProjectileData), Get_Z_Construct_UScriptStruct_FGaProjectileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaProjectileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaProjectileData_Hash() { return 828870118U; }
	void AGaProjectileActor::StaticRegisterNativesAGaProjectileActor()
	{
	}
	UClass* Z_Construct_UClass_AGaProjectileActor_NoRegister()
	{
		return AGaProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AGaProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaProjectildData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaProjectildData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sendCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sendCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitTarget_MetaData[];
#endif
		static void NewProp_hitTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hitTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectileActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaProjectileActor.h" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_gaProjectildData_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x88\x9d\xe5\xa7\x8b\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe5\xbc\xb9\xe4\xb8\xb8\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "DisplayName", "\xe5\xbc\xb9\xe4\xb8\xb8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
		{ "ToolTip", "\xe5\xbc\xb9\xe4\xb8\xb8\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_gaProjectildData = { "gaProjectildData", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectileActor, gaProjectildData), Z_Construct_UScriptStruct_FGaProjectileData, METADATA_PARAMS(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_gaProjectildData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_gaProjectildData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetLocation_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x86\x85\xe9\x83\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\xb0\x84\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetLocation = { "targetLocation", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectileActor, targetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetCharacter_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x86\x85\xe9\x83\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\xb0\x84\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\xe8\xa7\x92\xe8\x89\xb2" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetCharacter = { "targetCharacter", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectileActor, targetCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_sendCharacter_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x86\x85\xe9\x83\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8f\x91\xe5\xb0\x84\xe5\xbc\xb9\xe4\xb8\xb8\xe8\xa7\x92\xe8\x89\xb2" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_sendCharacter = { "sendCharacter", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectileActor, sendCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_sendCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_sendCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_hitTarget_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x86\x85\xe9\x83\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x87\xbb\xe4\xb8\xad""Actor" },
		{ "ExposeOnSpawn", "FALSE" },
		{ "ModuleRelativePath", "Public/GaProjectileActor.h" },
	};
#endif
	void Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_hitTarget_SetBit(void* Obj)
	{
		((AGaProjectileActor*)Obj)->hitTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_hitTarget = { "hitTarget", nullptr, (EPropertyFlags)0x0011000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaProjectileActor), &Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_hitTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_hitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_hitTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaProjectileActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_gaProjectildData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_targetCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_sendCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectileActor_Statics::NewProp_hitTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaProjectileActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaProjectileActor_Statics::ClassParams = {
		&AGaProjectileActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGaProjectileActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectileActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaProjectileActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectileActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaProjectileActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaProjectileActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaProjectileActor, 1758883932);
	template<> GROUPACTION_API UClass* StaticClass<AGaProjectileActor>()
	{
		return AGaProjectileActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaProjectileActor(Z_Construct_UClass_AGaProjectileActor, &AGaProjectileActor::StaticClass, TEXT("/Script/groupAction"), TEXT("AGaProjectileActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaProjectileActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
