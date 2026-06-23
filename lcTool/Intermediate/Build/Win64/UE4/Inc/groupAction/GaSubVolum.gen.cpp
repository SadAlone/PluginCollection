// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/GaSubVolum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaSubVolum() {}
// Cross Module References
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EGaSubVolumType();
	UPackage* Z_Construct_UPackage__Script_groupAction();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaSubVolum_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaSubVolum();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EGaSubVolumType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EGaSubVolumType, Z_Construct_UPackage__Script_groupAction(), TEXT("EGaSubVolumType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EGaSubVolumType>()
	{
		return EGaSubVolumType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGaSubVolumType(EGaSubVolumType_StaticEnum, TEXT("/Script/groupAction"), TEXT("EGaSubVolumType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EGaSubVolumType_Hash() { return 1330275941U; }
	UEnum* Z_Construct_UEnum_groupAction_EGaSubVolumType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGaSubVolumType"), 0, Get_Z_Construct_UEnum_groupAction_EGaSubVolumType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGaSubVolumType::EGSVT_Square", (int64)EGaSubVolumType::EGSVT_Square },
				{ "EGaSubVolumType::EGSVT_Sphere", (int64)EGaSubVolumType::EGSVT_Sphere },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EGSVT_Sphere.DisplayName", "\xe7\x90\x83\xe5\xbd\xa2\xe7\x9b\x92\xe5\xad\x90" },
				{ "EGSVT_Sphere.Name", "EGaSubVolumType::EGSVT_Sphere" },
				{ "EGSVT_Square.DisplayName", "\xe7\x9f\xa9\xe5\xbd\xa2\xe5\x89\x94\xe9\x99\xa4\xe7\x9b\x92\xe5\xad\x90" },
				{ "EGSVT_Square.Name", "EGaSubVolumType::EGSVT_Square" },
				{ "ModuleRelativePath", "Public/GaSubVolum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EGaSubVolumType",
				"EGaSubVolumType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AGaSubVolum::execSetSubVolumType)
	{
		P_GET_ENUM(EGaSubVolumType,Z_Param_inSubVolumType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubVolumType(EGaSubVolumType(Z_Param_inSubVolumType));
		P_NATIVE_END;
	}
	void AGaSubVolum::StaticRegisterNativesAGaSubVolum()
	{
		UClass* Class = AGaSubVolum::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSubVolumType", &AGaSubVolum::execSetSubVolumType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics
	{
		struct GaSubVolum_eventSetSubVolumType_Parms
		{
			EGaSubVolumType inSubVolumType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inSubVolumType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inSubVolumType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::NewProp_inSubVolumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::NewProp_inSubVolumType = { "inSubVolumType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaSubVolum_eventSetSubVolumType_Parms, inSubVolumType), Z_Construct_UEnum_groupAction_EGaSubVolumType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::NewProp_inSubVolumType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::NewProp_inSubVolumType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaSubVolum.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaSubVolum, nullptr, "SetSubVolumType", nullptr, nullptr, sizeof(GaSubVolum_eventSetSubVolumType_Parms), Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaSubVolum_SetSubVolumType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaSubVolum_SetSubVolumType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGaSubVolum_NoRegister()
	{
		return AGaSubVolum::StaticClass();
	}
	struct Z_Construct_UClass_AGaSubVolum_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_subVolumType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subVolumType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_subVolumType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_visualMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_visualMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaSubVolum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGaSubVolum_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGaSubVolum_SetSubVolumType, "SetSubVolumType" }, // 4231595188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaSubVolum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaSubVolum.h" },
		{ "ModuleRelativePath", "Public/GaSubVolum.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGaSubVolum_Statics::NewProp_subVolumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaSubVolum_Statics::NewProp_subVolumType_MetaData[] = {
		{ "Category", "\xe5\x89\x94\xe9\x99\xa4\xe7\x9b\x92\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe5\x8c\x85\xe5\x9b\xb4\xe7\x9b\x92\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "DisplayName", "\xe7\x9b\x92\xe5\xad\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/GaSubVolum.h" },
		{ "ToolTip", "\xe5\x8c\x85\xe5\x9b\xb4\xe7\x9b\x92\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGaSubVolum_Statics::NewProp_subVolumType = { "subVolumType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaSubVolum, subVolumType), Z_Construct_UEnum_groupAction_EGaSubVolumType, METADATA_PARAMS(Z_Construct_UClass_AGaSubVolum_Statics::NewProp_subVolumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaSubVolum_Statics::NewProp_subVolumType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaSubVolum_Statics::NewProp_visualMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaSubVolum.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaSubVolum_Statics::NewProp_visualMeshComponent = { "visualMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaSubVolum, visualMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaSubVolum_Statics::NewProp_visualMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaSubVolum_Statics::NewProp_visualMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaSubVolum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaSubVolum_Statics::NewProp_subVolumType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaSubVolum_Statics::NewProp_subVolumType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaSubVolum_Statics::NewProp_visualMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaSubVolum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaSubVolum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaSubVolum_Statics::ClassParams = {
		&AGaSubVolum::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGaSubVolum_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaSubVolum_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaSubVolum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaSubVolum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaSubVolum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaSubVolum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaSubVolum, 1503071246);
	template<> GROUPACTION_API UClass* StaticClass<AGaSubVolum>()
	{
		return AGaSubVolum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaSubVolum(Z_Construct_UClass_AGaSubVolum, &AGaSubVolum::StaticClass, TEXT("/Script/groupAction"), TEXT("AGaSubVolum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaSubVolum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
