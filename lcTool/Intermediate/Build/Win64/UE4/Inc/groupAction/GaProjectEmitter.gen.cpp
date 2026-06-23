// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/GaProjectEmitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaProjectEmitter() {}
// Cross Module References
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EGaProjectEmmiterTargetType();
	UPackage* Z_Construct_UPackage__Script_groupAction();
	GROUPACTION_API UClass* Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UGaProjectEmitterInterfaceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectileActor_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaTargetPointActor_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectEmitter_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectEmitter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
// End Cross Module References
	static UEnum* EGaProjectEmmiterTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EGaProjectEmmiterTargetType, Z_Construct_UPackage__Script_groupAction(), TEXT("EGaProjectEmmiterTargetType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EGaProjectEmmiterTargetType>()
	{
		return EGaProjectEmmiterTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGaProjectEmmiterTargetType(EGaProjectEmmiterTargetType_StaticEnum, TEXT("/Script/groupAction"), TEXT("EGaProjectEmmiterTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EGaProjectEmmiterTargetType_Hash() { return 912602825U; }
	UEnum* Z_Construct_UEnum_groupAction_EGaProjectEmmiterTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGaProjectEmmiterTargetType"), 0, Get_Z_Construct_UEnum_groupAction_EGaProjectEmmiterTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGaProjectEmmiterTargetType::EGPETT_RangeRandTarget", (int64)EGaProjectEmmiterTargetType::EGPETT_RangeRandTarget },
				{ "EGaProjectEmmiterTargetType::EGPETT_ActorTarget", (int64)EGaProjectEmmiterTargetType::EGPETT_ActorTarget },
				{ "EGaProjectEmmiterTargetType::EGPETT_GaTarget", (int64)EGaProjectEmmiterTargetType::EGPETT_GaTarget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EGPETT_ActorTarget.DisplayName", "Actor\xe5\xaf\xb9\xe8\xb1\xa1\xe7\x9b\xae\xe6\xa0\x87" },
				{ "EGPETT_ActorTarget.Name", "EGaProjectEmmiterTargetType::EGPETT_ActorTarget" },
				{ "EGPETT_GaTarget.DisplayName", "\xe7\xbe\xa4\xe7\xbb\x84\xe7\x9b\xae\xe6\xa0\x87" },
				{ "EGPETT_GaTarget.Name", "EGaProjectEmmiterTargetType::EGPETT_GaTarget" },
				{ "EGPETT_RangeRandTarget.DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9b\xae\xe6\xa0\x87" },
				{ "EGPETT_RangeRandTarget.Name", "EGaProjectEmmiterTargetType::EGPETT_RangeRandTarget" },
				{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EGaProjectEmmiterTargetType",
				"EGaProjectEmmiterTargetType",
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
	void UGaProjectEmitterInterfaceComponent::StaticRegisterNativesUGaProjectEmitterInterfaceComponent()
	{
	}
	UClass* Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_NoRegister()
	{
		return UGaProjectEmitterInterfaceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_projectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_projectClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gaProjectEmmiterTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaProjectEmmiterTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gaProjectEmmiterTargetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xa8\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GaProjectEmitter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
		{ "ToolTip", "\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xa8\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_projectClass_MetaData[] = {
		{ "Category", "\xe5\x8f\x91\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x8e\xa5\xe5\x8f\xa3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8f\x91\xe5\xb0\x84\xe7\x89\xa9\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_projectClass = { "projectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGaProjectEmitterInterfaceComponent, projectClass), Z_Construct_UClass_AGaProjectileActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_projectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_projectClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_gaProjectEmmiterTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_gaProjectEmmiterTargetType_MetaData[] = {
		{ "Category", "\xe5\x8f\x91\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x8e\xa5\xe5\x8f\xa3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x9b\xba\xe5\xae\x9a\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_gaProjectEmmiterTargetType = { "gaProjectEmmiterTargetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGaProjectEmitterInterfaceComponent, gaProjectEmmiterTargetType), Z_Construct_UEnum_groupAction_EGaProjectEmmiterTargetType, METADATA_PARAMS(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_gaProjectEmmiterTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_gaProjectEmmiterTargetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_target_MetaData[] = {
		{ "Category", "\xe5\x8f\x91\xe5\xb0\x84\xe7\x89\xa9\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x8e\xa5\xe5\x8f\xa3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x9b\xba\xe5\xae\x9a\xe7\x9b\xae\xe6\xa0\x87\xe5\xaf\xb9\xe8\xb1\xa1" },
		{ "EditCondition", "gaProjectEmmiterTargetType== EGaProjectEmmiterTargetType::EGPETT_ActorTarget" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGaProjectEmitterInterfaceComponent, target), Z_Construct_UClass_AGaTargetPointActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_projectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_gaProjectEmmiterTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_gaProjectEmmiterTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::NewProp_target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaProjectEmitterInterfaceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::ClassParams = {
		&UGaProjectEmitterInterfaceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGaProjectEmitterInterfaceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGaProjectEmitterInterfaceComponent, 3699466251);
	template<> GROUPACTION_API UClass* StaticClass<UGaProjectEmitterInterfaceComponent>()
	{
		return UGaProjectEmitterInterfaceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGaProjectEmitterInterfaceComponent(Z_Construct_UClass_UGaProjectEmitterInterfaceComponent, &UGaProjectEmitterInterfaceComponent::StaticClass, TEXT("/Script/groupAction"), TEXT("UGaProjectEmitterInterfaceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGaProjectEmitterInterfaceComponent);
	void AGaProjectEmitter::StaticRegisterNativesAGaProjectEmitter()
	{
	}
	UClass* Z_Construct_UClass_AGaProjectEmitter_NoRegister()
	{
		return AGaProjectEmitter::StaticClass();
	}
	struct Z_Construct_UClass_AGaProjectEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interfaceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interfaceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rangeTargetMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rangeTargetMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emmiterMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_emmiterMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetRangeBoxPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetRangeBoxPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetRangeBoxExtend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetRangeBoxExtend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emmiterRangeBoxPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_emmiterRangeBoxPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emmiterRangeBoxExtend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_emmiterRangeBoxExtend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activeFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_activeFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClose_MetaData[];
#endif
		static void NewProp_bClose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emmiterCountRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_emmiterCountRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepailExtend_MetaData[];
#endif
		static void NewProp_bRepailExtend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepailExtend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetRangeBoxBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetRangeBoxBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_emmiterRangeBoxBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_emmiterRangeBoxBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaProjectEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaProjectEmitter.h" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_interfaceComponent_MetaData[] = {
		{ "Comment", "//\xe6\x8e\xa5\xe5\x8f\xa3\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
		{ "ToolTip", "\xe6\x8e\xa5\xe5\x8f\xa3\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_interfaceComponent = { "interfaceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, interfaceComponent), Z_Construct_UClass_UGaProjectEmitterInterfaceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_interfaceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_interfaceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_rangeTargetMeshComponent_MetaData[] = {
		{ "Comment", "//\xe7\x9b\xae\xe6\xa0\x87\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9b\x92\xe5\xad\x90\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9b\x92\xe5\xad\x90\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_rangeTargetMeshComponent = { "rangeTargetMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, rangeTargetMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_rangeTargetMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_rangeTargetMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterMeshComponent_MetaData[] = {
		{ "Comment", "//\xe5\x8f\x91\xe5\xb0\x84\xe5\x8e\x9f\xe7\x82\xb9\xe7\x9b\x92\xe5\xad\x90\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
		{ "ToolTip", "\xe5\x8f\x91\xe5\xb0\x84\xe5\x8e\x9f\xe7\x82\xb9\xe7\x9b\x92\xe5\xad\x90\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterMeshComponent = { "emmiterMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, emmiterMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxPoint_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9b\x92\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\xe5\x9d\x90\xe6\xa0\x87" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxPoint = { "targetRangeBoxPoint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, targetRangeBoxPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxExtend_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9b\x92\xe5\xad\x90\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxExtend = { "targetRangeBoxExtend", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, targetRangeBoxExtend), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxExtend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxExtend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxPoint_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9b\x92\xe5\xad\x90\xe4\xbd\x8d\xe7\xbd\xae\xe5\x9d\x90\xe6\xa0\x87" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxPoint = { "emmiterRangeBoxPoint", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, emmiterRangeBoxPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxExtend_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9b\x92\xe5\xad\x90\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxExtend = { "emmiterRangeBoxExtend", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, emmiterRangeBoxExtend), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxExtend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxExtend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_activeFrame_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\xbf\x80\xe6\xb4\xbb\xe5\xb8\xa7" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_activeFrame = { "activeFrame", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, activeFrame), METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_activeFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_activeFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bClose_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x85\xb3\xe9\x97\xad\xe5\x8f\x91\xe5\xb0\x84" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	void Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bClose_SetBit(void* Obj)
	{
		((AGaProjectEmitter*)Obj)->bClose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bClose = { "bClose", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaProjectEmitter), &Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bClose_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bClose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterCountRange_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8f\x91\xe5\xb0\x84\xe6\xac\xa1\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterCountRange = { "emmiterCountRange", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, emmiterCountRange), METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterCountRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterCountRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bRepailExtend_MetaData[] = {
		{ "Category", "\xe5\xbc\xb9\xe4\xb8\xb8\xe5\x8f\x91\xe5\xb0\x84\xe5\x99\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8f\x91\xe5\xb0\x84\xe6\xac\xa1\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	void Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bRepailExtend_SetBit(void* Obj)
	{
		((AGaProjectEmitter*)Obj)->bRepailExtend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bRepailExtend = { "bRepailExtend", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaProjectEmitter), &Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bRepailExtend_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bRepailExtend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bRepailExtend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxBound = { "targetRangeBoxBound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, targetRangeBoxBound), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxBound_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaProjectEmitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxBound = { "emmiterRangeBoxBound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaProjectEmitter, emmiterRangeBoxBound), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxBound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaProjectEmitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_interfaceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_rangeTargetMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxExtend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxExtend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_activeFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bClose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterCountRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_bRepailExtend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_targetRangeBoxBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaProjectEmitter_Statics::NewProp_emmiterRangeBoxBound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaProjectEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaProjectEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaProjectEmitter_Statics::ClassParams = {
		&AGaProjectEmitter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGaProjectEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaProjectEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaProjectEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaProjectEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaProjectEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaProjectEmitter, 1510361474);
	template<> GROUPACTION_API UClass* StaticClass<AGaProjectEmitter>()
	{
		return AGaProjectEmitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaProjectEmitter(Z_Construct_UClass_AGaProjectEmitter, &AGaProjectEmitter::StaticClass, TEXT("/Script/groupAction"), TEXT("AGaProjectEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaProjectEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
