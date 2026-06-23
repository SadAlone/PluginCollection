// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lcTool/Public/etActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeetActor() {}
// Cross Module References
	LCTOOL_API UClass* Z_Construct_UClass_AetActor_NoRegister();
	LCTOOL_API UClass* Z_Construct_UClass_AetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_lcTool();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(AetActor::execetSetRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->etSetRotation(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AetActor::execetSetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->etSetLocation(Z_Param_location);
		P_NATIVE_END;
	}
	void AetActor::StaticRegisterNativesAetActor()
	{
		UClass* Class = AetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "etSetLocation", &AetActor::execetSetLocation },
			{ "etSetRotation", &AetActor::execetSetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AetActor_etSetLocation_Statics
	{
		struct etActor_eventetSetLocation_Parms
		{
			FVector location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AetActor_etSetLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(etActor_eventetSetLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AetActor_etSetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AetActor_etSetLocation_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AetActor_etSetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "etActor" },
		{ "ModuleRelativePath", "Public/etActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AetActor_etSetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AetActor, nullptr, "etSetLocation", nullptr, nullptr, sizeof(etActor_eventetSetLocation_Parms), Z_Construct_UFunction_AetActor_etSetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AetActor_etSetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AetActor_etSetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AetActor_etSetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AetActor_etSetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AetActor_etSetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AetActor_etSetRotation_Statics
	{
		struct etActor_eventetSetRotation_Parms
		{
			FRotator rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AetActor_etSetRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(etActor_eventetSetRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AetActor_etSetRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AetActor_etSetRotation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AetActor_etSetRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "etActor" },
		{ "ModuleRelativePath", "Public/etActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AetActor_etSetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AetActor, nullptr, "etSetRotation", nullptr, nullptr, sizeof(etActor_eventetSetRotation_Parms), Z_Construct_UFunction_AetActor_etSetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AetActor_etSetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AetActor_etSetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AetActor_etSetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AetActor_etSetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AetActor_etSetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AetActor_NoRegister()
	{
		return AetActor::StaticClass();
	}
	struct Z_Construct_UClass_AetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AetActor_etSetLocation, "etSetLocation" }, // 1534014310
		{ &Z_Construct_UFunction_AetActor_etSetRotation, "etSetRotation" }, // 1584481998
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "etActor.h" },
		{ "ModuleRelativePath", "Public/etActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AetActor_Statics::ClassParams = {
		&AetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AetActor, 4284114787);
	template<> LCTOOL_API UClass* StaticClass<AetActor>()
	{
		return AetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AetActor(Z_Construct_UClass_AetActor, &AetActor::StaticClass, TEXT("/Script/lcTool"), TEXT("AetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
