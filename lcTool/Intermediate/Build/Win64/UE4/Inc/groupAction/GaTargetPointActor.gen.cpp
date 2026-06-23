// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/GaTargetPointActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaTargetPointActor() {}
// Cross Module References
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_ERemoteRangeAttackTargetType();
	UPackage* Z_Construct_UPackage__Script_groupAction();
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EFormationTargetType();
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EFormationTargetFinishConditionType();
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EIdelTargetFinishConditionType();
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_ETargetUnitType();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FFormationTargetUnitData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FSquareFormationTargetUnitData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FCircleFormationTargetUnitData();
	GROUPACTION_API UClass* Z_Construct_UClass_ABaseFormationBuilder_NoRegister();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIdleTargetUnitData();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaTargetPointActor_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaTargetPointActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ERemoteRangeAttackTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_ERemoteRangeAttackTargetType, Z_Construct_UPackage__Script_groupAction(), TEXT("ERemoteRangeAttackTargetType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<ERemoteRangeAttackTargetType>()
	{
		return ERemoteRangeAttackTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERemoteRangeAttackTargetType(ERemoteRangeAttackTargetType_StaticEnum, TEXT("/Script/groupAction"), TEXT("ERemoteRangeAttackTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_ERemoteRangeAttackTargetType_Hash() { return 2372460686U; }
	UEnum* Z_Construct_UEnum_groupAction_ERemoteRangeAttackTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERemoteRangeAttackTargetType"), 0, Get_Z_Construct_UEnum_groupAction_ERemoteRangeAttackTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERemoteRangeAttackTargetType::ERRATT_Square", (int64)ERemoteRangeAttackTargetType::ERRATT_Square },
				{ "ERemoteRangeAttackTargetType::ERRATT_Circle", (int64)ERemoteRangeAttackTargetType::ERRATT_Circle },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae\n */" },
				{ "ERRATT_Circle.DisplayName", "\xe5\x9c\x86\xe5\xbd\xa2\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb" },
				{ "ERRATT_Circle.Name", "ERemoteRangeAttackTargetType::ERRATT_Circle" },
				{ "ERRATT_Square.DisplayName", "\xe7\x9f\xa9\xe5\xbd\xa2\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb" },
				{ "ERRATT_Square.Name", "ERemoteRangeAttackTargetType::ERRATT_Square" },
				{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
				{ "ToolTip", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"ERemoteRangeAttackTargetType",
				"ERemoteRangeAttackTargetType",
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
	static UEnum* EFormationTargetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EFormationTargetType, Z_Construct_UPackage__Script_groupAction(), TEXT("EFormationTargetType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EFormationTargetType>()
	{
		return EFormationTargetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFormationTargetType(EFormationTargetType_StaticEnum, TEXT("/Script/groupAction"), TEXT("EFormationTargetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EFormationTargetType_Hash() { return 1910273272U; }
	UEnum* Z_Construct_UEnum_groupAction_EFormationTargetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFormationTargetType"), 0, Get_Z_Construct_UEnum_groupAction_EFormationTargetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFormationTargetType::EFTT_OriFormation", (int64)EFormationTargetType::EFTT_OriFormation },
				{ "EFormationTargetType::EFTT_FormationBuilder", (int64)EFormationTargetType::EFTT_FormationBuilder },
				{ "EFormationTargetType::EFTT_SquareFormation", (int64)EFormationTargetType::EFTT_SquareFormation },
				{ "EFormationTargetType::EFTT_CircleFormation", (int64)EFormationTargetType::EFTT_CircleFormation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \xe7\x9b\xae\xe6\xa0\x87\xe9\x98\xb5\xe5\x9e\x8b\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
				{ "EFTT_CircleFormation.DisplayName", "\xe5\x9c\x86\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b" },
				{ "EFTT_CircleFormation.Name", "EFormationTargetType::EFTT_CircleFormation" },
				{ "EFTT_FormationBuilder.DisplayName", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x94\x9f\xe6\x88\x90\xe5\x99\xa8\xe9\x98\xb5\xe5\x9e\x8b" },
				{ "EFTT_FormationBuilder.Name", "EFormationTargetType::EFTT_FormationBuilder" },
				{ "EFTT_OriFormation.DisplayName", "\xe5\x8e\x9f\xe5\xa7\x8b\xe9\x98\xb5\xe5\x9e\x8b" },
				{ "EFTT_OriFormation.Name", "EFormationTargetType::EFTT_OriFormation" },
				{ "EFTT_SquareFormation.DisplayName", "\xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b" },
				{ "EFTT_SquareFormation.Name", "EFormationTargetType::EFTT_SquareFormation" },
				{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
				{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe9\x98\xb5\xe5\x9e\x8b\xe7\xb1\xbb\xe5\x9e\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EFormationTargetType",
				"EFormationTargetType",
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
	static UEnum* EFormationTargetFinishConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EFormationTargetFinishConditionType, Z_Construct_UPackage__Script_groupAction(), TEXT("EFormationTargetFinishConditionType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EFormationTargetFinishConditionType>()
	{
		return EFormationTargetFinishConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFormationTargetFinishConditionType(EFormationTargetFinishConditionType_StaticEnum, TEXT("/Script/groupAction"), TEXT("EFormationTargetFinishConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EFormationTargetFinishConditionType_Hash() { return 2870416946U; }
	UEnum* Z_Construct_UEnum_groupAction_EFormationTargetFinishConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFormationTargetFinishConditionType"), 0, Get_Z_Construct_UEnum_groupAction_EFormationTargetFinishConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFormationTargetFinishConditionType::EFTFCT_Immediately", (int64)EFormationTargetFinishConditionType::EFTFCT_Immediately },
				{ "EFormationTargetFinishConditionType::EFTFCT_AllArrive", (int64)EFormationTargetFinishConditionType::EFTFCT_AllArrive },
				{ "EFormationTargetFinishConditionType::EFTFCT_Sequence", (int64)EFormationTargetFinishConditionType::EFTFCT_Sequence },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe5\xae\x8c\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
				{ "EFTFCT_AllArrive.DisplayName", "\xe5\x85\xa8\xe9\x83\xa8\xe5\x88\xb0\xe8\xbe\xbe\xe5\xae\x8c\xe6\x88\x90" },
				{ "EFTFCT_AllArrive.Name", "EFormationTargetFinishConditionType::EFTFCT_AllArrive" },
				{ "EFTFCT_Immediately.DisplayName", "\xe7\xab\x8b\xe5\x8d\xb3\xe5\xae\x8c\xe6\x88\x90" },
				{ "EFTFCT_Immediately.Name", "EFormationTargetFinishConditionType::EFTFCT_Immediately" },
				{ "EFTFCT_Sequence.DisplayName", "\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8\xe5\xae\x8c\xe6\x88\x90" },
				{ "EFTFCT_Sequence.Name", "EFormationTargetFinishConditionType::EFTFCT_Sequence" },
				{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
				{ "ToolTip", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe5\xae\x8c\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EFormationTargetFinishConditionType",
				"EFormationTargetFinishConditionType",
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
	static UEnum* EIdelTargetFinishConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EIdelTargetFinishConditionType, Z_Construct_UPackage__Script_groupAction(), TEXT("EIdelTargetFinishConditionType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EIdelTargetFinishConditionType>()
	{
		return EIdelTargetFinishConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIdelTargetFinishConditionType(EIdelTargetFinishConditionType_StaticEnum, TEXT("/Script/groupAction"), TEXT("EIdelTargetFinishConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EIdelTargetFinishConditionType_Hash() { return 3230077298U; }
	UEnum* Z_Construct_UEnum_groupAction_EIdelTargetFinishConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIdelTargetFinishConditionType"), 0, Get_Z_Construct_UEnum_groupAction_EIdelTargetFinishConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIdelTargetFinishConditionType::EITFCT_Immediately", (int64)EIdelTargetFinishConditionType::EITFCT_Immediately },
				{ "EIdelTargetFinishConditionType::EITFCT_Delay", (int64)EIdelTargetFinishConditionType::EITFCT_Delay },
				{ "EIdelTargetFinishConditionType::EITFCT_Sequence", (int64)EIdelTargetFinishConditionType::EITFCT_Sequence },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \xe5\xbe\x85\xe6\x9c\xba\xe7\x9b\xae\xe6\xa0\x87\xe5\xae\x8c\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b\n */" },
				{ "EITFCT_Delay.DisplayName", "\xe5\xbb\xb6\xe6\x97\xb6\xe5\xae\x8c\xe6\x88\x90" },
				{ "EITFCT_Delay.Name", "EIdelTargetFinishConditionType::EITFCT_Delay" },
				{ "EITFCT_Immediately.DisplayName", "\xe7\xab\x8b\xe5\x8d\xb3\xe5\xae\x8c\xe6\x88\x90" },
				{ "EITFCT_Immediately.Name", "EIdelTargetFinishConditionType::EITFCT_Immediately" },
				{ "EITFCT_Sequence.DisplayName", "\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8\xe6\x8e\xa7\xe5\x88\xb6\xe5\xae\x8c\xe6\x88\x90" },
				{ "EITFCT_Sequence.Name", "EIdelTargetFinishConditionType::EITFCT_Sequence" },
				{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
				{ "ToolTip", "\xe5\xbe\x85\xe6\x9c\xba\xe7\x9b\xae\xe6\xa0\x87\xe5\xae\x8c\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EIdelTargetFinishConditionType",
				"EIdelTargetFinishConditionType",
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
	static UEnum* ETargetUnitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_ETargetUnitType, Z_Construct_UPackage__Script_groupAction(), TEXT("ETargetUnitType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<ETargetUnitType>()
	{
		return ETargetUnitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETargetUnitType(ETargetUnitType_StaticEnum, TEXT("/Script/groupAction"), TEXT("ETargetUnitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_ETargetUnitType_Hash() { return 316424329U; }
	UEnum* Z_Construct_UEnum_groupAction_ETargetUnitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETargetUnitType"), 0, Get_Z_Construct_UEnum_groupAction_ETargetUnitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETargetUnitType::ETUT_Idle", (int64)ETargetUnitType::ETUT_Idle },
				{ "ETargetUnitType::ETUT_FormationTarget", (int64)ETargetUnitType::ETUT_FormationTarget },
				{ "ETargetUnitType::ETUT_PointTarget", (int64)ETargetUnitType::ETUT_PointTarget },
				{ "ETargetUnitType::ETUT_ActorTarget", (int64)ETargetUnitType::ETUT_ActorTarget },
				{ "ETargetUnitType::ETUT_RemoteRangeRandAttackTarget", (int64)ETargetUnitType::ETUT_RemoteRangeRandAttackTarget },
				{ "ETargetUnitType::ETUT_CustomTarget", (int64)ETargetUnitType::ETUT_CustomTarget },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/************************************************************************/" },
				{ "ETUT_ActorTarget.Comment", "/************************************************************************/" },
				{ "ETUT_ActorTarget.DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8d\x95\xe4\xbd\x8d\xe7\x9b\xae\xe6\xa0\x87" },
				{ "ETUT_ActorTarget.Name", "ETargetUnitType::ETUT_ActorTarget" },
				{ "ETUT_CustomTarget.Comment", "/************************************************************************/" },
				{ "ETUT_CustomTarget.DisplayName", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9b\xae\xe6\xa0\x87" },
				{ "ETUT_CustomTarget.Name", "ETargetUnitType::ETUT_CustomTarget" },
				{ "ETUT_FormationTarget.Comment", "/************************************************************************/" },
				{ "ETUT_FormationTarget.DisplayName", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87" },
				{ "ETUT_FormationTarget.Name", "ETargetUnitType::ETUT_FormationTarget" },
				{ "ETUT_Idle.Comment", "/************************************************************************/" },
				{ "ETUT_Idle.DisplayName", "\xe5\xbe\x85\xe6\x9c\xba\xe7\x9b\xae\xe6\xa0\x87" },
				{ "ETUT_Idle.Name", "ETargetUnitType::ETUT_Idle" },
				{ "ETUT_PointTarget.Comment", "/************************************************************************/" },
				{ "ETUT_PointTarget.DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x82\xb9\xe7\x9b\xae\xe6\xa0\x87" },
				{ "ETUT_PointTarget.Name", "ETargetUnitType::ETUT_PointTarget" },
				{ "ETUT_RemoteRangeRandAttackTarget.Comment", "/************************************************************************/" },
				{ "ETUT_RemoteRangeRandAttackTarget.DisplayName", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe9\x9a\x8f\xe6\x9c\xba\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87" },
				{ "ETUT_RemoteRangeRandAttackTarget.Name", "ETargetUnitType::ETUT_RemoteRangeRandAttackTarget" },
				{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"ETargetUnitType",
				"ETargetUnitType",
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
class UScriptStruct* FGaSpecialFrameToggleActiveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaSpecialFrameToggleActiveData"), sizeof(FGaSpecialFrameToggleActiveData), Get_Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaSpecialFrameToggleActiveData>()
{
	return FGaSpecialFrameToggleActiveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaSpecialFrameToggleActiveData(FGaSpecialFrameToggleActiveData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaSpecialFrameToggleActiveData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaSpecialFrameToggleActiveData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaSpecialFrameToggleActiveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaSpecialFrameToggleActiveData")),new UScriptStruct::TCppStructOps<FGaSpecialFrameToggleActiveData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaSpecialFrameToggleActiveData;
	struct Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speicalFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_speicalFrame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe8\xa7\xa6\xe5\x8f\x91\xe7\x94\x9f\xe6\x88\x90\n" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe8\xa7\xa6\xe5\x8f\x91\xe7\x94\x9f\xe6\x88\x90" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaSpecialFrameToggleActiveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::NewProp_speicalFrame_MetaData[] = {
		{ "Category", "\xe6\x8c\x87\xe5\xae\x9a\xe5\xb8\xa7\xe8\xa7\xa6\xe5\x8f\x91\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x8c\x87\xe5\xae\x9a\xe8\xa7\xa6\xe5\x8f\x91\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xb8\xa7\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::NewProp_speicalFrame = { "speicalFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaSpecialFrameToggleActiveData, speicalFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::NewProp_speicalFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::NewProp_speicalFrame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::NewProp_speicalFrame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaSpecialFrameToggleActiveData",
		sizeof(FGaSpecialFrameToggleActiveData),
		alignof(FGaSpecialFrameToggleActiveData),
		Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaSpecialFrameToggleActiveData"), sizeof(FGaSpecialFrameToggleActiveData), Get_Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Hash() { return 2161430840U; }
class UScriptStruct* FRemoteRangeAttackTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData, Z_Construct_UPackage__Script_groupAction(), TEXT("RemoteRangeAttackTargetData"), sizeof(FRemoteRangeAttackTargetData), Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FRemoteRangeAttackTargetData>()
{
	return FRemoteRangeAttackTargetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteRangeAttackTargetData(FRemoteRangeAttackTargetData::StaticStruct, TEXT("/Script/groupAction"), TEXT("RemoteRangeAttackTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFRemoteRangeAttackTargetData
{
	FScriptStruct_groupAction_StaticRegisterNativesFRemoteRangeAttackTargetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteRangeAttackTargetData")),new UScriptStruct::TCppStructOps<FRemoteRangeAttackTargetData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFRemoteRangeAttackTargetData;
	struct Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_remoteRangeAttackTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_remoteRangeAttackTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_remoteRangeAttackTargetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xa8\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xa8\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteRangeAttackTargetData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_remoteRangeAttackTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_remoteRangeAttackTargetType_MetaData[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_remoteRangeAttackTargetType = { "remoteRangeAttackTargetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteRangeAttackTargetData, remoteRangeAttackTargetType), Z_Construct_UEnum_groupAction_ERemoteRangeAttackTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_remoteRangeAttackTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_remoteRangeAttackTargetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_bound_MetaData[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\x8c\x83\xe5\x9b\xb4\xe5\x8c\x85\xe5\x9b\xb4\xe7\x9b\x92\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_bound = { "bound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteRangeAttackTargetData, bound), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_remoteRangeAttackTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_remoteRangeAttackTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::NewProp_bound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"RemoteRangeAttackTargetData",
		sizeof(FRemoteRangeAttackTargetData),
		alignof(FRemoteRangeAttackTargetData),
		Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteRangeAttackTargetData"), sizeof(FRemoteRangeAttackTargetData), Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Hash() { return 48215743U; }
class UScriptStruct* FRemoteRangeAttackTargetInterfaceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData, Z_Construct_UPackage__Script_groupAction(), TEXT("RemoteRangeAttackTargetInterfaceData"), sizeof(FRemoteRangeAttackTargetInterfaceData), Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FRemoteRangeAttackTargetInterfaceData>()
{
	return FRemoteRangeAttackTargetInterfaceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData(FRemoteRangeAttackTargetInterfaceData::StaticStruct, TEXT("/Script/groupAction"), TEXT("RemoteRangeAttackTargetInterfaceData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFRemoteRangeAttackTargetInterfaceData
{
	FScriptStruct_groupAction_StaticRegisterNativesFRemoteRangeAttackTargetInterfaceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteRangeAttackTargetInterfaceData")),new UScriptStruct::TCppStructOps<FRemoteRangeAttackTargetInterfaceData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFRemoteRangeAttackTargetInterfaceData;
	struct Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_remoteRangeAttackTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_remoteRangeAttackTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_remoteRangeAttackTargetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_squareSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_squareSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_circleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_circleSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xa8\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe6\x8e\xa5\xe5\x8f\xa3\xe7\x94\xa8\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteRangeAttackTargetInterfaceData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_remoteRangeAttackTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_remoteRangeAttackTargetType_MetaData[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_remoteRangeAttackTargetType = { "remoteRangeAttackTargetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteRangeAttackTargetInterfaceData, remoteRangeAttackTargetType), Z_Construct_UEnum_groupAction_ERemoteRangeAttackTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_remoteRangeAttackTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_remoteRangeAttackTargetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_squareSize_MetaData[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe7\x9f\xa9\xe5\xbd\xa2\xe7\x9b\x92\xe5\xad\x90\xe5\xa4\xa7\xe5\xb0\x8f\n" },
		{ "DisplayName", "\xe7\x9f\xa9\xe5\xbd\xa2\xe7\x9b\x92\xe5\xad\x90\xe5\xa4\xa7\xe5\xb0\x8f" },
		{ "EditCondition", "ERemoteRangeAttackTargetType== ERRATT_Square" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe7\x9f\xa9\xe5\xbd\xa2\xe7\x9b\x92\xe5\xad\x90\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_squareSize = { "squareSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteRangeAttackTargetInterfaceData, squareSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_squareSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_squareSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_circleSize_MetaData[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xa8\x8b\xe8\x8c\x83\xe5\x9b\xb4\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe5\x9c\x86\xe5\xbd\xa2\xe5\x8d\x8a\xe5\xbe\x84\n" },
		{ "DisplayName", "\xe5\x9c\x86\xe5\xbd\xa2\xe8\x8c\x83\xe5\x9b\xb4\xe5\x8d\x8a\xe5\xbe\x84" },
		{ "EditCondition", "ERemoteRangeAttackTargetType== ERRATT_Circle" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe5\x9c\x86\xe5\xbd\xa2\xe5\x8d\x8a\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_circleSize = { "circleSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteRangeAttackTargetInterfaceData, circleSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_circleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_circleSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_remoteRangeAttackTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_remoteRangeAttackTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_squareSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::NewProp_circleSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"RemoteRangeAttackTargetInterfaceData",
		sizeof(FRemoteRangeAttackTargetInterfaceData),
		alignof(FRemoteRangeAttackTargetInterfaceData),
		Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteRangeAttackTargetInterfaceData"), sizeof(FRemoteRangeAttackTargetInterfaceData), Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Hash() { return 386102276U; }
class UScriptStruct* FFormationTargetUnitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FFormationTargetUnitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFormationTargetUnitData, Z_Construct_UPackage__Script_groupAction(), TEXT("FormationTargetUnitData"), sizeof(FFormationTargetUnitData), Get_Z_Construct_UScriptStruct_FFormationTargetUnitData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FFormationTargetUnitData>()
{
	return FFormationTargetUnitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFormationTargetUnitData(FFormationTargetUnitData::StaticStruct, TEXT("/Script/groupAction"), TEXT("FormationTargetUnitData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFFormationTargetUnitData
{
	FScriptStruct_groupAction_StaticRegisterNativesFFormationTargetUnitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FormationTargetUnitData")),new UScriptStruct::TCppStructOps<FFormationTargetUnitData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFFormationTargetUnitData;
	struct Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_formationTargetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_formationTargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_formationTargetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_squareFormationTargetUnitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_squareFormationTargetUnitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_circleFormationTargetUnitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_circleFormationTargetUnitData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_formationTargetFinishConditionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_formationTargetFinishConditionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_formationTargetFinishConditionType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_formationBuilderArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_formationBuilderArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_formationBuilderArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFormationTargetUnitData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetType_MetaData[] = {
		{ "Category", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "DisplayName", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetType = { "formationTargetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationTargetUnitData, formationTargetType), Z_Construct_UEnum_groupAction_EFormationTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_squareFormationTargetUnitData_MetaData[] = {
		{ "Category", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "EditCondition", "formationTargetType==EFormationTargetType::EFTT_SquareFormation" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_squareFormationTargetUnitData = { "squareFormationTargetUnitData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationTargetUnitData, squareFormationTargetUnitData), Z_Construct_UScriptStruct_FSquareFormationTargetUnitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_squareFormationTargetUnitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_squareFormationTargetUnitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_circleFormationTargetUnitData_MetaData[] = {
		{ "Category", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x9c\x86\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "EditCondition", "formationTargetType==EFormationTargetType::EFTT_CircleFormation" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_circleFormationTargetUnitData = { "circleFormationTargetUnitData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationTargetUnitData, circleFormationTargetUnitData), Z_Construct_UScriptStruct_FCircleFormationTargetUnitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_circleFormationTargetUnitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_circleFormationTargetUnitData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetFinishConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetFinishConditionType_MetaData[] = {
		{ "Category", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe5\xae\x8c\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "EditCondition", "formationTargetType==EFormationTargetType::EFTT_CircleFormation" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetFinishConditionType = { "formationTargetFinishConditionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationTargetUnitData, formationTargetFinishConditionType), Z_Construct_UEnum_groupAction_EFormationTargetFinishConditionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetFinishConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetFinishConditionType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationBuilderArr_Inner = { "formationBuilderArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationBuilderArr_MetaData[] = {
		{ "Category", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x94\x9f\xe6\x88\x90\xe5\x99\xa8\xe5\xbc\x95\xe7\x94\xa8" },
		{ "EditCondition", "formationTargetType==EFormationTargetType::EFTT_FormationBuilder" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationBuilderArr = { "formationBuilderArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationTargetUnitData, formationBuilderArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationBuilderArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationBuilderArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_squareFormationTargetUnitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_circleFormationTargetUnitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetFinishConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationTargetFinishConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationBuilderArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::NewProp_formationBuilderArr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"FormationTargetUnitData",
		sizeof(FFormationTargetUnitData),
		alignof(FFormationTargetUnitData),
		Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFormationTargetUnitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFormationTargetUnitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FormationTargetUnitData"), sizeof(FFormationTargetUnitData), Get_Z_Construct_UScriptStruct_FFormationTargetUnitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFormationTargetUnitData_Hash() { return 890222175U; }
class UScriptStruct* FCircleFormationTargetUnitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData, Z_Construct_UPackage__Script_groupAction(), TEXT("CircleFormationTargetUnitData"), sizeof(FCircleFormationTargetUnitData), Get_Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FCircleFormationTargetUnitData>()
{
	return FCircleFormationTargetUnitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCircleFormationTargetUnitData(FCircleFormationTargetUnitData::StaticStruct, TEXT("/Script/groupAction"), TEXT("CircleFormationTargetUnitData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFCircleFormationTargetUnitData
{
	FScriptStruct_groupAction_StaticRegisterNativesFCircleFormationTargetUnitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CircleFormationTargetUnitData")),new UScriptStruct::TCppStructOps<FCircleFormationTargetUnitData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFCircleFormationTargetUnitData;
	struct Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe5\x9c\x86\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae\n */" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe5\x9c\x86\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCircleFormationTargetUnitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_X_MetaData[] = {
		{ "Category", "\xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "DisplayName", "\xe5\xae\xbd\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircleFormationTargetUnitData, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "\xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x95\xbf\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCircleFormationTargetUnitData, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_Y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::NewProp_Y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"CircleFormationTargetUnitData",
		sizeof(FCircleFormationTargetUnitData),
		alignof(FCircleFormationTargetUnitData),
		Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCircleFormationTargetUnitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CircleFormationTargetUnitData"), sizeof(FCircleFormationTargetUnitData), Get_Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Hash() { return 1049823611U; }
class UScriptStruct* FSquareFormationTargetUnitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData, Z_Construct_UPackage__Script_groupAction(), TEXT("SquareFormationTargetUnitData"), sizeof(FSquareFormationTargetUnitData), Get_Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FSquareFormationTargetUnitData>()
{
	return FSquareFormationTargetUnitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSquareFormationTargetUnitData(FSquareFormationTargetUnitData::StaticStruct, TEXT("/Script/groupAction"), TEXT("SquareFormationTargetUnitData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFSquareFormationTargetUnitData
{
	FScriptStruct_groupAction_StaticRegisterNativesFSquareFormationTargetUnitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SquareFormationTargetUnitData")),new UScriptStruct::TCppStructOps<FSquareFormationTargetUnitData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFSquareFormationTargetUnitData;
	struct Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae\n */" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSquareFormationTargetUnitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_X_MetaData[] = {
		{ "Category", "\xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "DisplayName", "\xe5\xae\xbd\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSquareFormationTargetUnitData, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "\xe7\x9f\xa9\xe5\xbd\xa2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x95\xbf\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSquareFormationTargetUnitData, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_Y_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::NewProp_Y,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"SquareFormationTargetUnitData",
		sizeof(FSquareFormationTargetUnitData),
		alignof(FSquareFormationTargetUnitData),
		Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSquareFormationTargetUnitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SquareFormationTargetUnitData"), sizeof(FSquareFormationTargetUnitData), Get_Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Hash() { return 2442233924U; }
class UScriptStruct* FIdleTargetUnitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FIdleTargetUnitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIdleTargetUnitData, Z_Construct_UPackage__Script_groupAction(), TEXT("IdleTargetUnitData"), sizeof(FIdleTargetUnitData), Get_Z_Construct_UScriptStruct_FIdleTargetUnitData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FIdleTargetUnitData>()
{
	return FIdleTargetUnitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIdleTargetUnitData(FIdleTargetUnitData::StaticStruct, TEXT("/Script/groupAction"), TEXT("IdleTargetUnitData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFIdleTargetUnitData
{
	FScriptStruct_groupAction_StaticRegisterNativesFIdleTargetUnitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IdleTargetUnitData")),new UScriptStruct::TCppStructOps<FIdleTargetUnitData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFIdleTargetUnitData;
	struct Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idleFrameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_idleFrameCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_idelTargetFinishConditionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idelTargetFinishConditionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_idelTargetFinishConditionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIdleTargetUnitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idleFrameCount_MetaData[] = {
		{ "Category", "\xe5\xbe\x85\xe6\x9c\xba\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe7\x9b\xae\xe6\xa0\x87\xe5\x8d\x95\xe5\x85\x83\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "DisplayName", "\xe5\xbe\x85\xe6\x9c\xba\xe5\xb8\xa7\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe5\x8d\x95\xe5\x85\x83\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idleFrameCount = { "idleFrameCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIdleTargetUnitData, idleFrameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idleFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idleFrameCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idelTargetFinishConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idelTargetFinishConditionType_MetaData[] = {
		{ "Category", "\xe5\xbe\x85\xe6\x9c\xba\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\xbe\x85\xe6\x9c\xba\xe5\xae\x8c\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idelTargetFinishConditionType = { "idelTargetFinishConditionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIdleTargetUnitData, idelTargetFinishConditionType), Z_Construct_UEnum_groupAction_EIdelTargetFinishConditionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idelTargetFinishConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idelTargetFinishConditionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_delayTime_MetaData[] = {
		{ "Category", "\xe5\xbe\x85\xe6\x9c\xba\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\xbe\x85\xe6\x9c\xba\xe6\x97\xb6\xe9\x97\xb4" },
		{ "EditCondition", "idelTargetFinishConditionType=EIdelTargetFinishConditionType::EITFCT_Delay" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_delayTime = { "delayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIdleTargetUnitData, delayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_delayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_delayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idleFrameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idelTargetFinishConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_idelTargetFinishConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::NewProp_delayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"IdleTargetUnitData",
		sizeof(FIdleTargetUnitData),
		alignof(FIdleTargetUnitData),
		Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIdleTargetUnitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIdleTargetUnitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IdleTargetUnitData"), sizeof(FIdleTargetUnitData), Get_Z_Construct_UScriptStruct_FIdleTargetUnitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIdleTargetUnitData_Hash() { return 3154586078U; }
	DEFINE_FUNCTION(AGaTargetPointActor::execAddEnemyInstance)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY(FIntProperty,Z_Param_instanceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEnemyInstance(Z_Param_location,Z_Param_instanceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaTargetPointActor::execGetInstancesInsideSphere)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_GET_STRUCT(FVector,Z_Param_loaction);
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInstancesInsideSphere(Z_Param_radius,Z_Param_loaction,Z_Param_Out_OutInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaTargetPointActor::execGetTargetFormationWorldLocation)
	{
		P_GET_OBJECT(ABaseFormationBuilder,Z_Param_gaUnit);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTargetFormationWorldLocation_Implementation(Z_Param_gaUnit,Z_Param_id);
		P_NATIVE_END;
	}
	static FName NAME_AGaTargetPointActor_GetTargetFormationWorldLocation = FName(TEXT("GetTargetFormationWorldLocation"));
	FVector AGaTargetPointActor::GetTargetFormationWorldLocation(ABaseFormationBuilder* gaUnit, int32 id)
	{
		GaTargetPointActor_eventGetTargetFormationWorldLocation_Parms Parms;
		Parms.gaUnit=gaUnit;
		Parms.id=id;
		ProcessEvent(FindFunctionChecked(NAME_AGaTargetPointActor_GetTargetFormationWorldLocation),&Parms);
		return Parms.ReturnValue;
	}
	void AGaTargetPointActor::StaticRegisterNativesAGaTargetPointActor()
	{
		UClass* Class = AGaTargetPointActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEnemyInstance", &AGaTargetPointActor::execAddEnemyInstance },
			{ "GetInstancesInsideSphere", &AGaTargetPointActor::execGetInstancesInsideSphere },
			{ "GetTargetFormationWorldLocation", &AGaTargetPointActor::execGetTargetFormationWorldLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics
	{
		struct GaTargetPointActor_eventAddEnemyInstance_Parms
		{
			FVector location;
			int32 instanceId;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_instanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventAddEnemyInstance_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::NewProp_instanceId = { "instanceId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventAddEnemyInstance_Parms, instanceId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::NewProp_instanceId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "gaTarget" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x95\x8c\xe4\xba\xba\xe5\xae\x9e\xe4\xbe\x8b\n" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe6\x95\x8c\xe4\xba\xba\xe5\xae\x9e\xe4\xbe\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaTargetPointActor, nullptr, "AddEnemyInstance", nullptr, nullptr, sizeof(GaTargetPointActor_eventAddEnemyInstance_Parms), Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics
	{
		struct GaTargetPointActor_eventGetInstancesInsideSphere_Parms
		{
			float radius;
			FVector loaction;
			TArray<int32> OutInstances;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_loaction;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutInstances_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventGetInstancesInsideSphere_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_loaction = { "loaction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventGetInstancesInsideSphere_Parms, loaction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_OutInstances_Inner = { "OutInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_OutInstances = { "OutInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventGetInstancesInsideSphere_Parms, OutInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_loaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_OutInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::NewProp_OutInstances,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "gaTarget" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb1\x82\xe5\x86\x85\xe5\xae\x9e\xe4\xbe\x8b\n" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb1\x82\xe5\x86\x85\xe5\xae\x9e\xe4\xbe\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaTargetPointActor, nullptr, "GetInstancesInsideSphere", nullptr, nullptr, sizeof(GaTargetPointActor_eventGetInstancesInsideSphere_Parms), Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gaUnit;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::NewProp_gaUnit = { "gaUnit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventGetTargetFormationWorldLocation_Parms, gaUnit), Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventGetTargetFormationWorldLocation_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaTargetPointActor_eventGetTargetFormationWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::NewProp_gaUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "target point" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aID\xe5\x8e\x9f\xe8\xa7\x92\xe8\x89\xb2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe4\xb8\x96\xe7\x95\x8c\xe4\xbd\x8d\xe7\xbd\xae""ABaseFormationBuilder\n" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aID\xe5\x8e\x9f\xe8\xa7\x92\xe8\x89\xb2\xe9\x98\xb5\xe5\x9e\x8b\xe7\x9b\xae\xe6\xa0\x87\xe4\xb8\x96\xe7\x95\x8c\xe4\xbd\x8d\xe7\xbd\xae""ABaseFormationBuilder" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaTargetPointActor, nullptr, "GetTargetFormationWorldLocation", nullptr, nullptr, sizeof(GaTargetPointActor_eventGetTargetFormationWorldLocation_Parms), Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGaTargetPointActor_NoRegister()
	{
		return AGaTargetPointActor::StaticClass();
	}
	struct Z_Construct_UClass_AGaTargetPointActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentifyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdentifyMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPointInstanceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPointInstanceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minArriveDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minArriveDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActiveAtBegin_MetaData[];
#endif
		static void NewProp_bActiveAtBegin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActiveAtBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[];
#endif
		static void NewProp_bCanAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_changeNeedFinish_MetaData[];
#endif
		static void NewProp_changeNeedFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_changeNeedFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugMode_MetaData[];
#endif
		static void NewProp_bDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBoot_MetaData[];
#endif
		static void NewProp_bCanBoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanMovePause_MetaData[];
#endif
		static void NewProp_bCanMovePause_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanMovePause;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinish_MetaData[];
#endif
		static void NewProp_bFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaTargetPointActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGaTargetPointActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGaTargetPointActor_AddEnemyInstance, "AddEnemyInstance" }, // 1009719726
		{ &Z_Construct_UFunction_AGaTargetPointActor_GetInstancesInsideSphere, "GetInstancesInsideSphere" }, // 422779517
		{ &Z_Construct_UFunction_AGaTargetPointActor_GetTargetFormationWorldLocation, "GetTargetFormationWorldLocation" }, // 1396170864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GaTargetPointActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_IdentifyMeshComponent_MetaData[] = {
		{ "Category", "gaTargetPointActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_IdentifyMeshComponent = { "IdentifyMeshComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaTargetPointActor, IdentifyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_IdentifyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_IdentifyMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_targetPointInstanceComponent_MetaData[] = {
		{ "Category", "gaTargetPointActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_targetPointInstanceComponent = { "targetPointInstanceComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaTargetPointActor, targetPointInstanceComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_targetPointInstanceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_targetPointInstanceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_minArriveDistance_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe9\x80\x9a\xe7\x94\xa8\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe8\xb7\x9d\xe7\xa6\xbb\xe5\xa4\x9a\xe8\xbf\x9c\xe5\x81\x9c\xe4\xb8\x8b" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_minArriveDistance = { "minArriveDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaTargetPointActor, minArriveDistance), METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_minArriveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_minArriveDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bActiveAtBegin_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe9\x80\x9a\xe7\x94\xa8\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe7\x9b\xb4\xe6\x8e\xa5\xe6\xbf\x80\xe6\xb4\xbb\xe7\x9b\xae\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	void Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bActiveAtBegin_SetBit(void* Obj)
	{
		((AGaTargetPointActor*)Obj)->bActiveAtBegin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bActiveAtBegin = { "bActiveAtBegin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaTargetPointActor), &Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bActiveAtBegin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bActiveAtBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bActiveAtBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanAttack_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe6\x94\xbb\xe5\x87\xbb\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe6\xad\xa4\xe7\x9b\xae\xe6\xa0\x87\xe6\x89\x8d\xe8\x83\xbd\xe5\x88\x87\xe6\x8d\xa2\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe6\xad\xa4\xe7\x9b\xae\xe6\xa0\x87\xe6\x89\x8d\xe8\x83\xbd\xe5\x88\x87\xe6\x8d\xa2\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87" },
	};
#endif
	void Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanAttack_SetBit(void* Obj)
	{
		((AGaTargetPointActor*)Obj)->bCanAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanAttack = { "bCanAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaTargetPointActor), &Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_changeNeedFinish_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe9\x80\x9a\xe7\x94\xa8\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe6\xad\xa4\xe7\x9b\xae\xe6\xa0\x87\xe6\x89\x8d\xe8\x83\xbd\xe5\x88\x87\xe6\x8d\xa2\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87\n" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe6\xad\xa4\xe7\x9b\xae\xe6\xa0\x87\xe6\x89\x8d\xe8\x83\xbd\xe5\x88\x87\xe6\x8d\xa2\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe6\xad\xa4\xe7\x9b\xae\xe6\xa0\x87\xe6\x89\x8d\xe8\x83\xbd\xe5\x88\x87\xe6\x8d\xa2\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe7\x9b\xae\xe6\xa0\x87" },
	};
#endif
	void Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_changeNeedFinish_SetBit(void* Obj)
	{
		((AGaTargetPointActor*)Obj)->changeNeedFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_changeNeedFinish = { "changeNeedFinish", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaTargetPointActor), &Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_changeNeedFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_changeNeedFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_changeNeedFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bDebugMode_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|Debug\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe4\xb8\xaa\xe4\xbd\x93\xe5\x8d\x95\xe7\x8b\xac""debug\xe6\xa8\xa1\xe5\xbc\x8f,\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe6\x98\xbe\xe7\xa4\xba\n" },
		{ "DisplayName", "Debug\xe6\x98\xbe\xe7\xa4\xba\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "\xe4\xb8\xaa\xe4\xbd\x93\xe5\x8d\x95\xe7\x8b\xac""debug\xe6\xa8\xa1\xe5\xbc\x8f,\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe6\x98\xbe\xe7\xa4\xba" },
	};
#endif
	void Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bDebugMode_SetBit(void* Obj)
	{
		((AGaTargetPointActor*)Obj)->bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bDebugMode = { "bDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaTargetPointActor), &Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanBoot_MetaData[] = {
		{ "Category", "C\xe5\x86\x85\xe9\x83\xa8\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "/*\x09""FVector GetTargetFormationWorldLocation(AGaGroupUnit* gaUnit, int id);\n\x09""FVector GetTargetFormationWorldLocation_Implementation(AGaGroupUnit* gaUnit, int id) { return GetTargetFormationWorldLocationNative(gaUnit, id); }\n\x09""FVector GetTargetFormationWorldLocationNative(AGaGroupUnit* gaUnit, int id);*/" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe5\x90\xaf\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
		{ "ToolTip", "FVector GetTargetFormationWorldLocation(AGaGroupUnit* gaUnit, int id);\nFVector GetTargetFormationWorldLocation_Implementation(AGaGroupUnit* gaUnit, int id) { return GetTargetFormationWorldLocationNative(gaUnit, id); }\nFVector GetTargetFormationWorldLocationNative(AGaGroupUnit* gaUnit, int id);" },
	};
#endif
	void Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanBoot_SetBit(void* Obj)
	{
		((AGaTargetPointActor*)Obj)->bCanBoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanBoot = { "bCanBoot", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaTargetPointActor), &Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanBoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanBoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanBoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanMovePause_MetaData[] = {
		{ "Category", "C\xe5\x86\x85\xe9\x83\xa8\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x81\xe8\xae\xb8\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x9a\x82\xe5\x81\x9c" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	void Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanMovePause_SetBit(void* Obj)
	{
		((AGaTargetPointActor*)Obj)->bCanMovePause = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanMovePause = { "bCanMovePause", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaTargetPointActor), &Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanMovePause_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanMovePause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanMovePause_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bFinish_MetaData[] = {
		{ "Category", "C\xe5\x86\x85\xe9\x83\xa8\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x81\xe8\xae\xb8\xe5\xae\x8c\xe6\x88\x90" },
		{ "ModuleRelativePath", "Public/GaTargetPointActor.h" },
	};
#endif
	void Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bFinish_SetBit(void* Obj)
	{
		((AGaTargetPointActor*)Obj)->bFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bFinish = { "bFinish", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaTargetPointActor), &Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bFinish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaTargetPointActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_IdentifyMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_targetPointInstanceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_minArriveDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bActiveAtBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_changeNeedFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanBoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bCanMovePause,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaTargetPointActor_Statics::NewProp_bFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaTargetPointActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaTargetPointActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaTargetPointActor_Statics::ClassParams = {
		&AGaTargetPointActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGaTargetPointActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaTargetPointActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaTargetPointActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaTargetPointActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaTargetPointActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaTargetPointActor, 1289773778);
	template<> GROUPACTION_API UClass* StaticClass<AGaTargetPointActor>()
	{
		return AGaTargetPointActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaTargetPointActor(Z_Construct_UClass_AGaTargetPointActor, &AGaTargetPointActor::StaticClass, TEXT("/Script/groupAction"), TEXT("AGaTargetPointActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaTargetPointActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
