// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/GaGroupUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaGroupUnit() {}
// Cross Module References
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EGaControlMode();
	UPackage* Z_Construct_UPackage__Script_groupAction();
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EGaUnitAttackType();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaSettingSaveData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaFormationSaveData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitSaveData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FFormationBuildUnitData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaCharacter_NoRegister();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaCharacterData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitInitData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitMoveData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitAttackData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitDeadData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitCustomData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitDelaySpawn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitDeadAnimData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitAttackAnimData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitRemoteAttackData();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaProjectileActor_NoRegister();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitMoveAnimData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitInitAnimData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UGroupActionSaveGame_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UGroupActionSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GROUPACTION_API UClass* Z_Construct_UClass_ABaseFormationBuilder_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_ABaseFormationBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaGroupUnit_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaTargetPointActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaGroupUnit();
	GROUPACTION_API UClass* Z_Construct_UClass_UGaSettingObject_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UGaSettingObject();
// End Cross Module References
	static UEnum* EGaControlMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EGaControlMode, Z_Construct_UPackage__Script_groupAction(), TEXT("EGaControlMode"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EGaControlMode>()
	{
		return EGaControlMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGaControlMode(EGaControlMode_StaticEnum, TEXT("/Script/groupAction"), TEXT("EGaControlMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EGaControlMode_Hash() { return 872802092U; }
	UEnum* Z_Construct_UEnum_groupAction_EGaControlMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGaControlMode"), 0, Get_Z_Construct_UEnum_groupAction_EGaControlMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGaControlMode::EGCM_Normal", (int64)EGaControlMode::EGCM_Normal },
				{ "EGaControlMode::EGCM_Paint", (int64)EGaControlMode::EGCM_Paint },
				{ "EGaControlMode::EGCM_Select", (int64)EGaControlMode::EGCM_Select },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EGCM_Normal.DisplayName", "\xe6\x99\xae\xe9\x80\x9a\xe6\xa8\xa1\xe5\xbc\x8f" },
				{ "EGCM_Normal.Name", "EGaControlMode::EGCM_Normal" },
				{ "EGCM_Paint.DisplayName", "\xe7\xbb\x98\xe5\x88\xb6\xe6\xa8\xa1\xe5\xbc\x8f" },
				{ "EGCM_Paint.Name", "EGaControlMode::EGCM_Paint" },
				{ "EGCM_Select.DisplayName", "\xe9\x80\x89\xe6\x8b\xa9\xe6\xa8\xa1\xe5\xbc\x8f" },
				{ "EGCM_Select.Name", "EGaControlMode::EGCM_Select" },
				{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EGaControlMode",
				"EGaControlMode",
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
	static UEnum* EGaUnitAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EGaUnitAttackType, Z_Construct_UPackage__Script_groupAction(), TEXT("EGaUnitAttackType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EGaUnitAttackType>()
	{
		return EGaUnitAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGaUnitAttackType(EGaUnitAttackType_StaticEnum, TEXT("/Script/groupAction"), TEXT("EGaUnitAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EGaUnitAttackType_Hash() { return 2788538997U; }
	UEnum* Z_Construct_UEnum_groupAction_EGaUnitAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGaUnitAttackType"), 0, Get_Z_Construct_UEnum_groupAction_EGaUnitAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGaUnitAttackType::EGUAT_Close", (int64)EGaUnitAttackType::EGUAT_Close },
				{ "EGaUnitAttackType::EGUAT_Remote", (int64)EGaUnitAttackType::EGUAT_Remote },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/************************************************************************///\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83\xe6\x94\xbb\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b\n" },
				{ "EGUAT_Close.DisplayName", "\xe8\xbf\x91\xe6\x88\x98" },
				{ "EGUAT_Close.Name", "EGaUnitAttackType::EGUAT_Close" },
				{ "EGUAT_Remote.DisplayName", "\xe8\xbf\x9c\xe7\xa8\x8b" },
				{ "EGUAT_Remote.Name", "EGaUnitAttackType::EGUAT_Remote" },
				{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
				{ "ToolTip", "********************************************************************//\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83\xe6\x94\xbb\xe5\x87\xbb\xe7\xb1\xbb\xe5\x9e\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EGaUnitAttackType",
				"EGaUnitAttackType",
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
class UScriptStruct* FGaSettingSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaSettingSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaSettingSaveData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaSettingSaveData"), sizeof(FGaSettingSaveData), Get_Z_Construct_UScriptStruct_FGaSettingSaveData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaSettingSaveData>()
{
	return FGaSettingSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaSettingSaveData(FGaSettingSaveData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaSettingSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaSettingSaveData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaSettingSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaSettingSaveData")),new UScriptStruct::TCppStructOps<FGaSettingSaveData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaSettingSaveData;
	struct Z_Construct_UScriptStruct_FGaSettingSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_egcm_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_egcm_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_egcm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFormationBuilder_MetaData[];
#endif
		static void NewProp_bShowFormationBuilder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFormationBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGaUnitWhenLeaveGaMode_MetaData[];
#endif
		static void NewProp_bShowGaUnitWhenLeaveGaMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGaUnitWhenLeaveGaMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaSettingSaveData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_egcm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_egcm_MetaData[] = {
		{ "Category", "\xe6\x93\x8d\xe6\x8e\xa7\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x93\x8d\xe6\x8e\xa7\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_egcm = { "egcm", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaSettingSaveData, egcm), Z_Construct_UEnum_groupAction_EGaControlMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_egcm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_egcm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowFormationBuilder_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowFormationBuilder_SetBit(void* Obj)
	{
		((FGaSettingSaveData*)Obj)->bShowFormationBuilder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowFormationBuilder = { "bShowFormationBuilder", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaSettingSaveData), &Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowFormationBuilder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowFormationBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowFormationBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe7\xa6\xbb\xe5\xbc\x80\xe7\xbe\xa4\xe7\xbb\x84\xe6\x93\x8d\xe4\xbd\x9c\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x90\x8e\xe7\xbb\xa7\xe7\xbb\xad\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84unit\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe7\xa6\xbb\xe5\xbc\x80\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x90\x8e\xe7\xbb\xa7\xe7\xbb\xad\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe7\xa6\xbb\xe5\xbc\x80\xe7\xbe\xa4\xe7\xbb\x84\xe6\x93\x8d\xe4\xbd\x9c\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x90\x8e\xe7\xbb\xa7\xe7\xbb\xad\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84unit" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_SetBit(void* Obj)
	{
		((FGaSettingSaveData*)Obj)->bShowGaUnitWhenLeaveGaMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowGaUnitWhenLeaveGaMode = { "bShowGaUnitWhenLeaveGaMode", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaSettingSaveData), &Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_egcm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_egcm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowFormationBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::NewProp_bShowGaUnitWhenLeaveGaMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaSettingSaveData",
		sizeof(FGaSettingSaveData),
		alignof(FGaSettingSaveData),
		Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaSettingSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaSettingSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaSettingSaveData"), sizeof(FGaSettingSaveData), Get_Z_Construct_UScriptStruct_FGaSettingSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaSettingSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaSettingSaveData_Hash() { return 3390897888U; }
class UScriptStruct* FGaFormationSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaFormationSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaFormationSaveData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaFormationSaveData"), sizeof(FGaFormationSaveData), Get_Z_Construct_UScriptStruct_FGaFormationSaveData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaFormationSaveData>()
{
	return FGaFormationSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaFormationSaveData(FGaFormationSaveData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaFormationSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaFormationSaveData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaFormationSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaFormationSaveData")),new UScriptStruct::TCppStructOps<FGaFormationSaveData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaFormationSaveData;
	struct Z_Construct_UScriptStruct_FGaFormationSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_idLocationData_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_idLocationData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idLocationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_idLocationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaFormationSaveData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData_ValueProp = { "idLocationData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData_Key_KeyProp = { "idLocationData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData_MetaData[] = {
		{ "Category", "gaUnitSaveData" },
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84\xe9\x98\xb5\xe5\x9e\x8b\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84\xe9\x98\xb5\xe5\x9e\x8b\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData = { "idLocationData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaFormationSaveData, idLocationData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::NewProp_idLocationData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaFormationSaveData",
		sizeof(FGaFormationSaveData),
		alignof(FGaFormationSaveData),
		Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaFormationSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaFormationSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaFormationSaveData"), sizeof(FGaFormationSaveData), Get_Z_Construct_UScriptStruct_FGaFormationSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaFormationSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaFormationSaveData_Hash() { return 1221879088U; }
class UScriptStruct* FGaUnitSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitSaveData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitSaveData"), sizeof(FGaUnitSaveData), Get_Z_Construct_UScriptStruct_FGaUnitSaveData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitSaveData>()
{
	return FGaUnitSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitSaveData(FGaUnitSaveData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitSaveData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitSaveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitSaveData")),new UScriptStruct::TCppStructOps<FGaUnitSaveData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitSaveData;
	struct Z_Construct_UScriptStruct_FGaUnitSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_idFormationBuildUnitData_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_idFormationBuildUnitData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idFormationBuildUnitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_idFormationBuildUnitData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitSaveData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData_ValueProp = { "idFormationBuildUnitData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFormationBuildUnitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData_Key_KeyProp = { "idFormationBuildUnitData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData_MetaData[] = {
		{ "Category", "gaUnitSaveData" },
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84\xe9\x98\xb5\xe5\x9e\x8b\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84\xe9\x98\xb5\xe5\x9e\x8b\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData = { "idFormationBuildUnitData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitSaveData, idFormationBuildUnitData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::NewProp_idFormationBuildUnitData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitSaveData",
		sizeof(FGaUnitSaveData),
		alignof(FGaUnitSaveData),
		Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitSaveData"), sizeof(FGaUnitSaveData), Get_Z_Construct_UScriptStruct_FGaUnitSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitSaveData_Hash() { return 39800940U; }
class UScriptStruct* FFormationBuildUnitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FFormationBuildUnitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFormationBuildUnitData, Z_Construct_UPackage__Script_groupAction(), TEXT("FormationBuildUnitData"), sizeof(FFormationBuildUnitData), Get_Z_Construct_UScriptStruct_FFormationBuildUnitData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FFormationBuildUnitData>()
{
	return FFormationBuildUnitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFormationBuildUnitData(FFormationBuildUnitData::StaticStruct, TEXT("/Script/groupAction"), TEXT("FormationBuildUnitData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFFormationBuildUnitData
{
	FScriptStruct_groupAction_StaticRegisterNativesFFormationBuildUnitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FormationBuildUnitData")),new UScriptStruct::TCppStructOps<FFormationBuildUnitData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFFormationBuildUnitData;
	struct Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaCharacterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_gaCharacterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFormationBuildUnitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_id_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94ID\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94ID" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationBuildUnitData, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_gaCharacterClass_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe7\xb1\xbb\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe7\xb1\xbb" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_gaCharacterClass = { "gaCharacterClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationBuildUnitData, gaCharacterClass), Z_Construct_UClass_AGaCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_gaCharacterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_gaCharacterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_characterData_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_characterData = { "characterData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationBuildUnitData, characterData), Z_Construct_UScriptStruct_FGaCharacterData, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_characterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_characterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_bound_MetaData[] = {
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_bound = { "bound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFormationBuildUnitData, bound), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_bound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_bound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_gaCharacterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_characterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::NewProp_bound,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"FormationBuildUnitData",
		sizeof(FFormationBuildUnitData),
		alignof(FFormationBuildUnitData),
		Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFormationBuildUnitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFormationBuildUnitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FormationBuildUnitData"), sizeof(FFormationBuildUnitData), Get_Z_Construct_UScriptStruct_FFormationBuildUnitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFormationBuildUnitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFormationBuildUnitData_Hash() { return 311005080U; }
class UScriptStruct* FGaCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaCharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaCharacterData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaCharacterData"), sizeof(FGaCharacterData), Get_Z_Construct_UScriptStruct_FGaCharacterData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaCharacterData>()
{
	return FGaCharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaCharacterData(FGaCharacterData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaCharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaCharacterData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaCharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaCharacterData")),new UScriptStruct::TCppStructOps<FGaCharacterData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaCharacterData;
	struct Z_Construct_UScriptStruct_FGaCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitInitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitInitData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitMoveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitMoveData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitAttackData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitAttackData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitDeadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitDeadData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitCustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterSpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterSpawnTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_openScaleRange_MetaData[];
#endif
		static void NewProp_openScaleRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_openScaleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterSpawnTransformRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterSpawnTransformRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_characterSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLerpRotation_MetaData[];
#endif
		static void NewProp_bUseLerpRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLerpRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lerpRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lerpRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_noTargetLooat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_noTargetLooat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n */" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaCharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitInitData_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitInitData = { "gaUnitInitData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, gaUnitInitData), Z_Construct_UScriptStruct_FGaUnitInitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitInitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitInitData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitMoveData_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitMoveData = { "gaUnitMoveData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, gaUnitMoveData), Z_Construct_UScriptStruct_FGaUnitMoveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitMoveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitMoveData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitAttackData_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitAttackData = { "gaUnitAttackData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, gaUnitAttackData), Z_Construct_UScriptStruct_FGaUnitAttackData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitAttackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitAttackData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitDeadData_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\xad\xbb\xe4\xba\xa1\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitDeadData = { "gaUnitDeadData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, gaUnitDeadData), Z_Construct_UScriptStruct_FGaUnitDeadData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitDeadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitDeadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitCustomData_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x9b\xb8\xe5\x85\xb3\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitCustomData = { "gaUnitCustomData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, gaUnitCustomData), Z_Construct_UScriptStruct_FGaUnitCustomData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitCustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransform_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe7\x94\x9f\xe6\x88\x90\xe5\x8f\xa0\xe5\x8a\xa0\xe5\x8f\x98\xe6\x8d\xa2\xe9\xbb\x98\xe8\xae\xa4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransform = { "characterSpawnTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, characterSpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_openScaleRange_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\xbc\x80\xe5\x90\xaf\xe5\x8f\xa0\xe5\x8a\xa0\xe5\x8f\x98\xe6\x8d\xa2\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_openScaleRange_SetBit(void* Obj)
	{
		((FGaCharacterData*)Obj)->openScaleRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_openScaleRange = { "openScaleRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaCharacterData), &Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_openScaleRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_openScaleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_openScaleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransformRange_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe7\x94\x9f\xe6\x88\x90\xe6\x94\xbe\xe5\xa4\xa7\xe5\x80\x8d\xe6\x95\xb0" },
		{ "EditCondition", "openRange" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransformRange = { "characterSpawnTransformRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, characterSpawnTransformRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransformRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransformRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSize_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xa4\xa7\xe5\xb0\x8f\xe5\x8d\x8a\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSize = { "characterSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, characterSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_bUseLerpRotation_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8f\x92\xe5\x80\xbc\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_bUseLerpRotation_SetBit(void* Obj)
	{
		((FGaCharacterData*)Obj)->bUseLerpRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_bUseLerpRotation = { "bUseLerpRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaCharacterData), &Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_bUseLerpRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_bUseLerpRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_bUseLerpRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_lerpRotationSpeed_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x8f\x92\xe5\x80\xbc\xe6\x97\x8b\xe8\xbd\xac\xe9\x80\x9f\xe7\x8e\x87" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_lerpRotationSpeed = { "lerpRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, lerpRotationSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_lerpRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_lerpRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_noTargetLooat_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x97\xa0\xe7\x9b\xae\xe6\xa0\x87\xe6\x97\x8b\xe8\xbd\xac\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_noTargetLooat = { "noTargetLooat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, noTargetLooat), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_noTargetLooat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_noTargetLooat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterId_MetaData[] = {
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2ID\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2ID" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaCharacterData, characterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitInitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitMoveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitAttackData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitDeadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_gaUnitCustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_openScaleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSpawnTransformRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_bUseLerpRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_lerpRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_noTargetLooat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaCharacterData_Statics::NewProp_characterId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaCharacterData",
		sizeof(FGaCharacterData),
		alignof(FGaCharacterData),
		Z_Construct_UScriptStruct_FGaCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaCharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaCharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaCharacterData"), sizeof(FGaCharacterData), Get_Z_Construct_UScriptStruct_FGaCharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaCharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaCharacterData_Hash() { return 753438480U; }
class UScriptStruct* FGaUnitDelaySpawn::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitDelaySpawn, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitDelaySpawn"), sizeof(FGaUnitDelaySpawn), Get_Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitDelaySpawn>()
{
	return FGaUnitDelaySpawn::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitDelaySpawn(FGaUnitDelaySpawn::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitDelaySpawn"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitDelaySpawn
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitDelaySpawn()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitDelaySpawn")),new UScriptStruct::TCppStructOps<FGaUnitDelaySpawn>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitDelaySpawn;
	struct Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDelaySpawn_MetaData[];
#endif
		static void NewProp_isDelaySpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDelaySpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bMultiDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiDelayNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bMultiDelayNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitDelaySpawn>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_isDelaySpawn_MetaData[] = {
		{ "Category", "\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_isDelaySpawn_SetBit(void* Obj)
	{
		((FGaUnitDelaySpawn*)Obj)->isDelaySpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_isDelaySpawn = { "isDelaySpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitDelaySpawn), &Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_isDelaySpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_isDelaySpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_isDelaySpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayTime_MetaData[] = {
		{ "Category", "\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90\xe6\x95\xb0\xe6\x8d\xae|\xe5\xbb\xb6\xe8\xbf\x9f\xe6\x97\xb6\xe9\x97\xb4" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = \"\xe5\xa4\x9a\xe4\xb8\xaa\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90?\",\n//\x09""EditCondition = \"isDelaySpawn\"\n//\x09), Category = \"\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90\xe6\x95\xb0\xe6\x8d\xae|\xe5\xa4\x9a\xe4\xb8\xaa?\")\n//\x09""bool bMultiDelaySpawn = false;\n" },
		{ "DisplayName", "\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90\xe6\x97\xb6\xe9\x97\xb4" },
		{ "EditCondition", "isDelaySpawn" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = \"\xe5\xa4\x9a\xe4\xb8\xaa\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90?\",\n       EditCondition = \"isDelaySpawn\"\n       ), Category = \"\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90\xe6\x95\xb0\xe6\x8d\xae|\xe5\xa4\x9a\xe4\xb8\xaa?\")\n       bool bMultiDelaySpawn = false;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayTime = { "bMultiDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitDelaySpawn, bMultiDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayNum_MetaData[] = {
		{ "Category", "\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90\xe6\x95\xb0\xe6\x8d\xae|\xe5\xbb\xb6\xe8\xbf\x9f\xe6\xac\xa1\xe6\x95\xb0" },
		{ "DisplayName", "\xe5\xbb\xb6\xe8\xbf\x9f\xe7\x94\x9f\xe6\x88\x90\xe6\xac\xa1\xe6\x95\xb0" },
		{ "EditCondition", "isDelaySpawn" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayNum = { "bMultiDelayNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitDelaySpawn, bMultiDelayNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_isDelaySpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::NewProp_bMultiDelayNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitDelaySpawn",
		sizeof(FGaUnitDelaySpawn),
		alignof(FGaUnitDelaySpawn),
		Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitDelaySpawn()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitDelaySpawn"), sizeof(FGaUnitDelaySpawn), Get_Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitDelaySpawn_Hash() { return 3417455070U; }
class UScriptStruct* FGaUnitCustomData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitCustomData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitCustomData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitCustomData"), sizeof(FGaUnitCustomData), Get_Z_Construct_UScriptStruct_FGaUnitCustomData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitCustomData>()
{
	return FGaUnitCustomData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitCustomData(FGaUnitCustomData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitCustomData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitCustomData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitCustomData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitCustomData")),new UScriptStruct::TCppStructOps<FGaUnitCustomData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitCustomData;
	struct Z_Construct_UScriptStruct_FGaUnitCustomData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_customSmClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customSmClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_customSmClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitCustomData>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewProp_customSmClass_Inner = { "customSmClass", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewProp_customSmClass_MetaData[] = {
		{ "Category", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe5\x8d\x95\xe5\x85\x83\xe5\x8a\xa8\xe4\xbd\x9c\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewProp_customSmClass = { "customSmClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitCustomData, customSmClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewProp_customSmClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewProp_customSmClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewProp_customSmClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::NewProp_customSmClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitCustomData",
		sizeof(FGaUnitCustomData),
		alignof(FGaUnitCustomData),
		Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitCustomData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitCustomData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitCustomData"), sizeof(FGaUnitCustomData), Get_Z_Construct_UScriptStruct_FGaUnitCustomData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitCustomData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitCustomData_Hash() { return 2728829783U; }
class UScriptStruct* FGaUnitDeadData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitDeadData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitDeadData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitDeadData"), sizeof(FGaUnitDeadData), Get_Z_Construct_UScriptStruct_FGaUnitDeadData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitDeadData>()
{
	return FGaUnitDeadData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitDeadData(FGaUnitDeadData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitDeadData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitDeadData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitDeadData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitDeadData")),new UScriptStruct::TCppStructOps<FGaUnitDeadData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitDeadData;
	struct Z_Construct_UScriptStruct_FGaUnitDeadData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttackDead_MetaData[];
#endif
		static void NewProp_bAttackDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttackDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTriggerDead_MetaData[];
#endif
		static void NewProp_bTriggerDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTriggerDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysic_MetaData[];
#endif
		static void NewProp_bEnablePhysic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_removeDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_removeDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deadAnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_deadAnimData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitDeadData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bAttackDead_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x85\x81\xe8\xae\xb8\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb\xe6\xad\xbb\xe4\xba\xa1" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bAttackDead_SetBit(void* Obj)
	{
		((FGaUnitDeadData*)Obj)->bAttackDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bAttackDead = { "bAttackDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitDeadData), &Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bAttackDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bAttackDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bAttackDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_hp_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x85\x81\xe8\xae\xb8\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb\xe6\xad\xbb\xe4\xba\xa1" },
		{ "EditCondition", "bAttackDead" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitDeadData, hp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_hp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bTriggerDead_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x85\x81\xe8\xae\xb8\xe8\xa7\xa6\xe5\x8f\x91\xe6\xad\xbb\xe4\xba\xa1" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bTriggerDead_SetBit(void* Obj)
	{
		((FGaUnitDeadData*)Obj)->bTriggerDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bTriggerDead = { "bTriggerDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitDeadData), &Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bTriggerDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bTriggerDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bTriggerDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bEnablePhysic_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\xbc\x80\xe5\x90\xaf\xe5\xb8\x83\xe5\xa8\x83\xe5\xa8\x83\xe7\xb3\xbb\xe7\xbb\x9f" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bEnablePhysic_SetBit(void* Obj)
	{
		((FGaUnitDeadData*)Obj)->bEnablePhysic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bEnablePhysic = { "bEnablePhysic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitDeadData), &Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bEnablePhysic_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bEnablePhysic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bEnablePhysic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_removeDelay_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x90\x8e\xe6\xb6\x88\xe6\x95\xa3\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_removeDelay = { "removeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitDeadData, removeDelay), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_removeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_removeDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_deadAnimData_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_deadAnimData = { "deadAnimData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitDeadData, deadAnimData), Z_Construct_UScriptStruct_FGaUnitDeadAnimData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_deadAnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_deadAnimData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bAttackDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_hp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bTriggerDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_bEnablePhysic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_removeDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::NewProp_deadAnimData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitDeadData",
		sizeof(FGaUnitDeadData),
		alignof(FGaUnitDeadData),
		Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitDeadData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitDeadData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitDeadData"), sizeof(FGaUnitDeadData), Get_Z_Construct_UScriptStruct_FGaUnitDeadData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitDeadData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitDeadData_Hash() { return 513052424U; }
class UScriptStruct* FGaUnitAttackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitAttackData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitAttackData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitAttackData"), sizeof(FGaUnitAttackData), Get_Z_Construct_UScriptStruct_FGaUnitAttackData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitAttackData>()
{
	return FGaUnitAttackData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitAttackData(FGaUnitAttackData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitAttackData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitAttackData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitAttackData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitAttackData")),new UScriptStruct::TCppStructOps<FGaUnitAttackData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitAttackData;
	struct Z_Construct_UScriptStruct_FGaUnitAttackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitAttackAnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitAttackAnimData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_attackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_attackType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitRemoteAttackData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitRemoteAttackData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackStength_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_attackStength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackMaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_attackMaxCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackRandomRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_attackRandomRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_attackInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstAttackDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_firstAttackDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitAttackData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitAttackAnimData_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitAttackAnimData = { "gaUnitAttackAnimData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, gaUnitAttackAnimData), Z_Construct_UScriptStruct_FGaUnitAttackAnimData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitAttackAnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitAttackAnimData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackType_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x96\xb9\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackType = { "attackType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, attackType), Z_Construct_UEnum_groupAction_EGaUnitAttackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitRemoteAttackData_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe8\xbf\x9c\xe7\xa8\x8b\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "EditCondition", "attackType==EGaUnitAttackType::EGUAT_Remote" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitRemoteAttackData = { "gaUnitRemoteAttackData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, gaUnitRemoteAttackData), Z_Construct_UScriptStruct_FGaUnitRemoteAttackData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitRemoteAttackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitRemoteAttackData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackStength_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\x9b\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackStength = { "attackStength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, attackStength), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackStength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackStength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackMaxCount_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe6\xac\xa1\xe6\x95\xb0\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackMaxCount = { "attackMaxCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, attackMaxCount), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackMaxCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackRandomRange_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe6\xac\xa1\xe6\x95\xb0\xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "EditCondition", "attackMaxCount>0" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackRandomRange = { "attackRandomRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, attackRandomRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackRandomRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackRandomRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackInterval_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe9\x97\xb4\xe9\x9a\x94\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackInterval = { "attackInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, attackInterval), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_firstAttackDelay_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x88\x9d\xe6\xac\xa1\xe6\x94\xbb\xe5\x87\xbb\xe5\xbb\xb6\xe6\x97\xb6\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_firstAttackDelay = { "firstAttackDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackData, firstAttackDelay), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_firstAttackDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_firstAttackDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitAttackAnimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_gaUnitRemoteAttackData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackStength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackMaxCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackRandomRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_attackInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::NewProp_firstAttackDelay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitAttackData",
		sizeof(FGaUnitAttackData),
		alignof(FGaUnitAttackData),
		Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitAttackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitAttackData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitAttackData"), sizeof(FGaUnitAttackData), Get_Z_Construct_UScriptStruct_FGaUnitAttackData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitAttackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitAttackData_Hash() { return 1962105300U; }
class UScriptStruct* FGaUnitRemoteAttackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitRemoteAttackData"), sizeof(FGaUnitRemoteAttackData), Get_Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitRemoteAttackData>()
{
	return FGaUnitRemoteAttackData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitRemoteAttackData(FGaUnitRemoteAttackData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitRemoteAttackData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitRemoteAttackData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitRemoteAttackData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitRemoteAttackData")),new UScriptStruct::TCppStructOps<FGaUnitRemoteAttackData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitRemoteAttackData;
	struct Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_removeProjectClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_removeProjectClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attackFarRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_attackFarRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe8\xbf\x9c\xe7\xa8\x8b\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xbf\x9c\xe7\xa8\x8b\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae\xe7\xbb\x93\xe6\x9e\x84" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitRemoteAttackData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_removeProjectClass_MetaData[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xa8\x8b\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe5\xbc\xb9\xe4\xb8\xb8\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_removeProjectClass = { "removeProjectClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitRemoteAttackData, removeProjectClass), Z_Construct_UClass_AGaProjectileActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_removeProjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_removeProjectClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_attackFarRange_MetaData[] = {
		{ "Category", "\xe8\xbf\x9c\xe7\xa8\x8b\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_attackFarRange = { "attackFarRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitRemoteAttackData, attackFarRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_attackFarRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_attackFarRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_removeProjectClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::NewProp_attackFarRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitRemoteAttackData",
		sizeof(FGaUnitRemoteAttackData),
		alignof(FGaUnitRemoteAttackData),
		Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitRemoteAttackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitRemoteAttackData"), sizeof(FGaUnitRemoteAttackData), Get_Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitRemoteAttackData_Hash() { return 2412328776U; }
class UScriptStruct* FGaUnitMoveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitMoveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitMoveData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitMoveData"), sizeof(FGaUnitMoveData), Get_Z_Construct_UScriptStruct_FGaUnitMoveData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitMoveData>()
{
	return FGaUnitMoveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitMoveData(FGaUnitMoveData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitMoveData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitMoveData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitMoveData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitMoveData")),new UScriptStruct::TCppStructOps<FGaUnitMoveData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitMoveData;
	struct Z_Construct_UScriptStruct_FGaUnitMoveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_baseMoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveAccelerate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_moveAccelerate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeedRandomRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_moveSpeedRandomRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitMoveAnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitMoveAnimData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnRun_MetaData[];
#endif
		static void NewProp_bSpawnRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAiMove_MetaData[];
#endif
		static void NewProp_bUseAiMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAiMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNav_MetaData[];
#endif
		static void NewProp_bUseNav_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNav;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitMoveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_baseMoveSpeed_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x9f\xba\xe7\xa1\x80\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_baseMoveSpeed = { "baseMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitMoveData, baseMoveSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_baseMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_baseMoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveAccelerate_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8a\xa0\xe9\x80\x9f\xe5\xba\xa6\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveAccelerate = { "moveAccelerate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitMoveData, moveAccelerate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveAccelerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveAccelerate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveSpeedRandomRange_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveSpeedRandomRange = { "moveSpeedRandomRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitMoveData, moveSpeedRandomRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveSpeedRandomRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveSpeedRandomRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_gaUnitMoveAnimData_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8d\x95\xe5\x85\x83\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_gaUnitMoveAnimData = { "gaUnitMoveAnimData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitMoveData, gaUnitMoveAnimData), Z_Construct_UScriptStruct_FGaUnitMoveAnimData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_gaUnitMoveAnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_gaUnitMoveAnimData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bSpawnRun_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\x94\x9f\xe6\x88\x90\xe5\xb0\xb1\xe5\xbc\x80\xe5\xa7\x8b\xe7\xa7\xbb\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bSpawnRun_SetBit(void* Obj)
	{
		((FGaUnitMoveData*)Obj)->bSpawnRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bSpawnRun = { "bSpawnRun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitMoveData), &Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bSpawnRun_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bSpawnRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bSpawnRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseAiMove_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8""AI\xe7\xa7\xbb\xe5\x8a\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseAiMove_SetBit(void* Obj)
	{
		((FGaUnitMoveData*)Obj)->bUseAiMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseAiMove = { "bUseAiMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitMoveData), &Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseAiMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseAiMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseAiMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseNav_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe5\xaf\xbb\xe8\xb7\xaf\xe5\xaf\xbc\xe8\x88\xaa\xe7\xbd\x91\xe6\xa0\xbc" },
		{ "EditCondition", "bUseAiMove" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseNav_SetBit(void* Obj)
	{
		((FGaUnitMoveData*)Obj)->bUseNav = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseNav = { "bUseNav", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitMoveData), &Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseNav_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseNav_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseNav_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_baseMoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveAccelerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_moveSpeedRandomRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_gaUnitMoveAnimData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bSpawnRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseAiMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::NewProp_bUseNav,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitMoveData",
		sizeof(FGaUnitMoveData),
		alignof(FGaUnitMoveData),
		Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitMoveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitMoveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitMoveData"), sizeof(FGaUnitMoveData), Get_Z_Construct_UScriptStruct_FGaUnitMoveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitMoveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitMoveData_Hash() { return 116308910U; }
class UScriptStruct* FGaUnitInitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitInitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitInitData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitInitData"), sizeof(FGaUnitInitData), Get_Z_Construct_UScriptStruct_FGaUnitInitData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitInitData>()
{
	return FGaUnitInitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitInitData(FGaUnitInitData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitInitData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitInitData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitInitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitInitData")),new UScriptStruct::TCppStructOps<FGaUnitInitData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitInitData;
	struct Z_Construct_UScriptStruct_FGaUnitInitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnitInitAnimData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gaUnitInitAnimData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitInitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitInitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitInitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitInitData_Statics::NewProp_gaUnitInitAnimData_MetaData[] = {
		{ "Category", "\xe5\x88\x9d\xe5\xa7\x8b\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitInitData_Statics::NewProp_gaUnitInitAnimData = { "gaUnitInitAnimData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitInitData, gaUnitInitAnimData), Z_Construct_UScriptStruct_FGaUnitInitAnimData, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitInitData_Statics::NewProp_gaUnitInitAnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitData_Statics::NewProp_gaUnitInitAnimData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitInitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitInitData_Statics::NewProp_gaUnitInitAnimData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitInitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitInitData",
		sizeof(FGaUnitInitData),
		alignof(FGaUnitInitData),
		Z_Construct_UScriptStruct_FGaUnitInitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitInitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitInitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitInitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitInitData"), sizeof(FGaUnitInitData), Get_Z_Construct_UScriptStruct_FGaUnitInitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitInitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitInitData_Hash() { return 460384462U; }
class UScriptStruct* FGaUnitDeadAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitDeadAnimData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitDeadAnimData"), sizeof(FGaUnitDeadAnimData), Get_Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitDeadAnimData>()
{
	return FGaUnitDeadAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitDeadAnimData(FGaUnitDeadAnimData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitDeadAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitDeadAnimData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitDeadAnimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitDeadAnimData")),new UScriptStruct::TCppStructOps<FGaUnitDeadAnimData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitDeadAnimData;
	struct Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_deadAnim_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_deadAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_deadAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomIndex_MetaData[];
#endif
		static void NewProp_bUseRandomIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomAnimSpeed_MetaData[];
#endif
		static void NewProp_bUseRandomAnimSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomAnimSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_randomAnimSpeedRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitDeadAnimData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_deadAnim_Inner = { "deadAnim", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_deadAnim_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_deadAnim = { "deadAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitDeadAnimData, deadAnim), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_deadAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_deadAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomIndex_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe4\xbd\xbf\xe7\x94\xa8\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomIndex_SetBit(void* Obj)
	{
		((FGaUnitDeadAnimData*)Obj)->bUseRandomIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomIndex = { "bUseRandomIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitDeadAnimData), &Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe6\x98\xaf\xe5\x90\xa6\xe9\x9a\x8f\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit(void* Obj)
	{
		((FGaUnitDeadAnimData*)Obj)->bUseRandomAnimSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomAnimSpeed = { "bUseRandomAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitDeadAnimData), &Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData[] = {
		{ "Category", "\xe6\xad\xbb\xe4\xba\xa1\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x9c\x80\xe5\xb0\x8f\xe6\x9c\x80\xe5\xa4\xa7\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "EditCondition", "bUseRandomAnimSpeed" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_randomAnimSpeedRange = { "randomAnimSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitDeadAnimData, randomAnimSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_deadAnim_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_deadAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_bUseRandomAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::NewProp_randomAnimSpeedRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitDeadAnimData",
		sizeof(FGaUnitDeadAnimData),
		alignof(FGaUnitDeadAnimData),
		Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitDeadAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitDeadAnimData"), sizeof(FGaUnitDeadAnimData), Get_Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitDeadAnimData_Hash() { return 1213191774U; }
class UScriptStruct* FGaUnitAttackAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitAttackAnimData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitAttackAnimData"), sizeof(FGaUnitAttackAnimData), Get_Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitAttackAnimData>()
{
	return FGaUnitAttackAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitAttackAnimData(FGaUnitAttackAnimData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitAttackAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitAttackAnimData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitAttackAnimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitAttackAnimData")),new UScriptStruct::TCppStructOps<FGaUnitAttackAnimData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitAttackAnimData;
	struct Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackAnim_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomIndex_MetaData[];
#endif
		static void NewProp_bUseRandomIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomAnimSpeed_MetaData[];
#endif
		static void NewProp_bUseRandomAnimSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomAnimSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_randomAnimSpeedRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitAttackAnimData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_AttackAnim_Inner = { "AttackAnim", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_AttackAnim_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_AttackAnim = { "AttackAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackAnimData, AttackAnim), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_AttackAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_AttackAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomIndex_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe4\xbd\xbf\xe7\x94\xa8\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomIndex_SetBit(void* Obj)
	{
		((FGaUnitAttackAnimData*)Obj)->bUseRandomIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomIndex = { "bUseRandomIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitAttackAnimData), &Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe6\x98\xaf\xe5\x90\xa6\xe9\x9a\x8f\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit(void* Obj)
	{
		((FGaUnitAttackAnimData*)Obj)->bUseRandomAnimSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomAnimSpeed = { "bUseRandomAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitAttackAnimData), &Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData[] = {
		{ "Category", "\xe6\x94\xbb\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x9c\x80\xe5\xb0\x8f\xe6\x9c\x80\xe5\xa4\xa7\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "EditCondition", "bUseRandomAnimSpeed" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_randomAnimSpeedRange = { "randomAnimSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitAttackAnimData, randomAnimSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_AttackAnim_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_AttackAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_bUseRandomAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::NewProp_randomAnimSpeedRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitAttackAnimData",
		sizeof(FGaUnitAttackAnimData),
		alignof(FGaUnitAttackAnimData),
		Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitAttackAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitAttackAnimData"), sizeof(FGaUnitAttackAnimData), Get_Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitAttackAnimData_Hash() { return 174930124U; }
class UScriptStruct* FGaUnitMoveAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitMoveAnimData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitMoveAnimData"), sizeof(FGaUnitMoveAnimData), Get_Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitMoveAnimData>()
{
	return FGaUnitMoveAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitMoveAnimData(FGaUnitMoveAnimData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitMoveAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitMoveAnimData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitMoveAnimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitMoveAnimData")),new UScriptStruct::TCppStructOps<FGaUnitMoveAnimData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitMoveAnimData;
	struct Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_moveAnim_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_moveAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomIndex_MetaData[];
#endif
		static void NewProp_bUseRandomIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomAnimSpeed_MetaData[];
#endif
		static void NewProp_bUseRandomAnimSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomAnimSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_randomAnimSpeedRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitMoveAnimData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_moveAnim_Inner = { "moveAnim", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_moveAnim_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_moveAnim = { "moveAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitMoveAnimData, moveAnim), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_moveAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_moveAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomIndex_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe4\xbd\xbf\xe7\x94\xa8\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomIndex_SetBit(void* Obj)
	{
		((FGaUnitMoveAnimData*)Obj)->bUseRandomIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomIndex = { "bUseRandomIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitMoveAnimData), &Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe6\x98\xaf\xe5\x90\xa6\xe9\x9a\x8f\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit(void* Obj)
	{
		((FGaUnitMoveAnimData*)Obj)->bUseRandomAnimSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomAnimSpeed = { "bUseRandomAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitMoveAnimData), &Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData[] = {
		{ "Category", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x9c\x80\xe5\xb0\x8f\xe6\x9c\x80\xe5\xa4\xa7\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "EditCondition", "bUseRandomAnimSpeed" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_randomAnimSpeedRange = { "randomAnimSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitMoveAnimData, randomAnimSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_moveAnim_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_moveAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_bUseRandomAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::NewProp_randomAnimSpeedRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitMoveAnimData",
		sizeof(FGaUnitMoveAnimData),
		alignof(FGaUnitMoveAnimData),
		Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitMoveAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitMoveAnimData"), sizeof(FGaUnitMoveAnimData), Get_Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitMoveAnimData_Hash() { return 2809801816U; }
class UScriptStruct* FGaUnitInitAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GROUPACTION_API uint32 Get_Z_Construct_UScriptStruct_FGaUnitInitAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaUnitInitAnimData, Z_Construct_UPackage__Script_groupAction(), TEXT("GaUnitInitAnimData"), sizeof(FGaUnitInitAnimData), Get_Z_Construct_UScriptStruct_FGaUnitInitAnimData_Hash());
	}
	return Singleton;
}
template<> GROUPACTION_API UScriptStruct* StaticStruct<FGaUnitInitAnimData>()
{
	return FGaUnitInitAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGaUnitInitAnimData(FGaUnitInitAnimData::StaticStruct, TEXT("/Script/groupAction"), TEXT("GaUnitInitAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_groupAction_StaticRegisterNativesFGaUnitInitAnimData
{
	FScriptStruct_groupAction_StaticRegisterNativesFGaUnitInitAnimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GaUnitInitAnimData")),new UScriptStruct::TCppStructOps<FGaUnitInitAnimData>);
	}
} ScriptStruct_groupAction_StaticRegisterNativesFGaUnitInitAnimData;
	struct Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_initAnim_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_initAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomIndex_MetaData[];
#endif
		static void NewProp_bUseRandomIndex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomAnimSpeed_MetaData[];
#endif
		static void NewProp_bUseRandomAnimSpeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomAnimSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomAnimSpeedRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_randomAnimSpeedRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaUnitInitAnimData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_initAnim_Inner = { "initAnim", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_initAnim_MetaData[] = {
		{ "Category", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_initAnim = { "initAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitInitAnimData, initAnim), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_initAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_initAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomIndex_MetaData[] = {
		{ "Category", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe4\xbd\xbf\xe7\x94\xa8\xe5\x8a\xa8\xe7\x94\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomIndex_SetBit(void* Obj)
	{
		((FGaUnitInitAnimData*)Obj)->bUseRandomIndex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomIndex = { "bUseRandomIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitInitAnimData), &Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData[] = {
		{ "Category", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe6\x98\xaf\xe5\x90\xa6\xe9\x9a\x8f\xe6\x9c\xba" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit(void* Obj)
	{
		((FGaUnitInitAnimData*)Obj)->bUseRandomAnimSpeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomAnimSpeed = { "bUseRandomAnimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGaUnitInitAnimData), &Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomAnimSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomAnimSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData[] = {
		{ "Category", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8a\xa8\xe7\x94\xbb\xe6\x95\xb0\xe6\x8d\xae" },
		{ "DisplayName", "\xe5\x8a\xa8\xe7\x94\xbb\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\xe9\x9a\x8f\xe6\x9c\xba\xe6\x9c\x80\xe5\xb0\x8f\xe6\x9c\x80\xe5\xa4\xa7\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_randomAnimSpeedRange = { "randomAnimSpeedRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGaUnitInitAnimData, randomAnimSpeedRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_randomAnimSpeedRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_initAnim_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_initAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_bUseRandomAnimSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::NewProp_randomAnimSpeedRange,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
		nullptr,
		&NewStructOps,
		"GaUnitInitAnimData",
		sizeof(FGaUnitInitAnimData),
		alignof(FGaUnitInitAnimData),
		Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGaUnitInitAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGaUnitInitAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GaUnitInitAnimData"), sizeof(FGaUnitInitAnimData), Get_Z_Construct_UScriptStruct_FGaUnitInitAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGaUnitInitAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGaUnitInitAnimData_Hash() { return 599776283U; }
	void UGroupActionSaveGame::StaticRegisterNativesUGroupActionSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UGroupActionSaveGame_NoRegister()
	{
		return UGroupActionSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UGroupActionSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_saveUnitData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_saveUnitData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_saveUnitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_saveUnitData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_saveFormationData_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_saveFormationData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_saveFormationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_saveFormationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupActionSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GaGroupUnit.h" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData_ValueProp = { "saveUnitData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGaUnitSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData_Key_KeyProp = { "saveUnitData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData = { "saveUnitData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroupActionSaveGame, saveUnitData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData_ValueProp = { "saveFormationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGaFormationSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData_Key_KeyProp = { "saveFormationData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData = { "saveFormationData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroupActionSaveGame, saveFormationData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupActionSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveUnitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionSaveGame_Statics::NewProp_saveFormationData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupActionSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupActionSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGroupActionSaveGame_Statics::ClassParams = {
		&UGroupActionSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroupActionSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionSaveGame_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupActionSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupActionSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGroupActionSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGroupActionSaveGame, 4292320873);
	template<> GROUPACTION_API UClass* StaticClass<UGroupActionSaveGame>()
	{
		return UGroupActionSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGroupActionSaveGame(Z_Construct_UClass_UGroupActionSaveGame, &UGroupActionSaveGame::StaticClass, TEXT("/Script/groupAction"), TEXT("UGroupActionSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupActionSaveGame);
	DEFINE_FUNCTION(ABaseFormationBuilder::execLoadUnitData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadUnitData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execSaveUnitData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveUnitData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execSpawnCharacter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCharacter(Z_Param_characterId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execBuildFormation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildFormation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execLoadFormationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFormationData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execSaveFormationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveFormationData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execShowHideFormation)
	{
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowHideFormation_Implementation(Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execGetRandomCharacterData)
	{
		P_GET_OBJECT(UClass,Z_Param_gaCharClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGaCharacterData*)Z_Param__Result=P_THIS->GetRandomCharacterData(Z_Param_gaCharClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execisBoundSphereIntersect)
	{
		P_GET_STRUCT(FBoxSphereBounds,Z_Param_bound1);
		P_GET_STRUCT(FBoxSphereBounds,Z_Param_bound2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isBoundSphereIntersect(Z_Param_bound1,Z_Param_bound2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execIsBoundBoxIntersect)
	{
		P_GET_STRUCT(FBoxSphereBounds,Z_Param_bound1);
		P_GET_STRUCT(FBoxSphereBounds,Z_Param_bound2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBoundBoxIntersect(Z_Param_bound1,Z_Param_bound2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execGetRandomPointInCircle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetRandomPointInCircle(Z_Param_radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execGetFormationLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_OBJECT(AGaGroupUnit,Z_Param_unit);
		P_GET_OBJECT(AGaTargetPointActor,Z_Param_target);
		P_GET_UBOOL_REF(Z_Param_Out_bHaveResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFormationLocation_Implementation(Z_Param_id,Z_Param_unit,Z_Param_target,Z_Param_Out_bHaveResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execRefreshFormationHash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshFormationHash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execSetIdLocationMap)
	{
		P_GET_TMAP(int32,FVector,Z_Param_retMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIdLocationMap(Z_Param_retMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execGetIdLocationMap)
	{
		P_GET_TMAP_REF(int32,FVector,Z_Param_Out_retMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetIdLocationMap(Z_Param_Out_retMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseFormationBuilder::execGetFormationGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetFormationGuid();
		P_NATIVE_END;
	}
	static FName NAME_ABaseFormationBuilder_AddFormationInstance = FName(TEXT("AddFormationInstance"));
	int32 ABaseFormationBuilder::AddFormationInstance(FVector location)
	{
		BaseFormationBuilder_eventAddFormationInstance_Parms Parms;
		Parms.location=location;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_AddFormationInstance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseFormationBuilder_BuildSpawnFormation = FName(TEXT("BuildSpawnFormation"));
	TArray<FFormationBuildUnitData> ABaseFormationBuilder::BuildSpawnFormation(bool& bWorldSpace)
	{
		BaseFormationBuilder_eventBuildSpawnFormation_Parms Parms;
		Parms.bWorldSpace=bWorldSpace ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_BuildSpawnFormation),&Parms);
		bWorldSpace=Parms.bWorldSpace;
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseFormationBuilder_ChangeInstanceSize = FName(TEXT("ChangeInstanceSize"));
	void ABaseFormationBuilder::ChangeInstanceSize(float size)
	{
		BaseFormationBuilder_eventChangeInstanceSize_Parms Parms;
		Parms.size=size;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_ChangeInstanceSize),&Parms);
	}
	static FName NAME_ABaseFormationBuilder_GetFormationLocation = FName(TEXT("GetFormationLocation"));
	FVector ABaseFormationBuilder::GetFormationLocation(int32 id, AGaGroupUnit* unit, AGaTargetPointActor* target, bool& bHaveResult)
	{
		BaseFormationBuilder_eventGetFormationLocation_Parms Parms;
		Parms.id=id;
		Parms.unit=unit;
		Parms.target=target;
		Parms.bHaveResult=bHaveResult ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_GetFormationLocation),&Parms);
		bHaveResult=Parms.bHaveResult;
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseFormationBuilder_GetFormationoBuilderAllCount = FName(TEXT("GetFormationoBuilderAllCount"));
	int32 ABaseFormationBuilder::GetFormationoBuilderAllCount()
	{
		BaseFormationBuilder_eventGetFormationoBuilderAllCount_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_GetFormationoBuilderAllCount),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseFormationBuilder_GetInstanceComponent = FName(TEXT("GetInstanceComponent"));
	UInstancedStaticMeshComponent* ABaseFormationBuilder::GetInstanceComponent()
	{
		BaseFormationBuilder_eventGetInstanceComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_GetInstanceComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseFormationBuilder_LoadFormationData = FName(TEXT("LoadFormationData"));
	void ABaseFormationBuilder::LoadFormationData()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_LoadFormationData),NULL);
	}
	static FName NAME_ABaseFormationBuilder_LoadUnitData = FName(TEXT("LoadUnitData"));
	void ABaseFormationBuilder::LoadUnitData()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_LoadUnitData),NULL);
	}
	static FName NAME_ABaseFormationBuilder_RemoveFormationInstance = FName(TEXT("RemoveFormationInstance"));
	FVector ABaseFormationBuilder::RemoveFormationInstance(int32 id)
	{
		BaseFormationBuilder_eventRemoveFormationInstance_Parms Parms;
		Parms.id=id;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_RemoveFormationInstance),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseFormationBuilder_SaveFormationData = FName(TEXT("SaveFormationData"));
	void ABaseFormationBuilder::SaveFormationData()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_SaveFormationData),NULL);
	}
	static FName NAME_ABaseFormationBuilder_SaveUnitData = FName(TEXT("SaveUnitData"));
	void ABaseFormationBuilder::SaveUnitData()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_SaveUnitData),NULL);
	}
	static FName NAME_ABaseFormationBuilder_ShowHideFormation = FName(TEXT("ShowHideFormation"));
	void ABaseFormationBuilder::ShowHideFormation(bool bShow)
	{
		BaseFormationBuilder_eventShowHideFormation_Parms Parms;
		Parms.bShow=bShow ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_ShowHideFormation),&Parms);
	}
	static FName NAME_ABaseFormationBuilder_spawnCharacterEvent = FName(TEXT("spawnCharacterEvent"));
	void ABaseFormationBuilder::spawnCharacterEvent(AGaCharacter* character)
	{
		BaseFormationBuilder_eventspawnCharacterEvent_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_spawnCharacterEvent),&Parms);
	}
	static FName NAME_ABaseFormationBuilder_UpdateFormationNumber = FName(TEXT("UpdateFormationNumber"));
	void ABaseFormationBuilder::UpdateFormationNumber(int32 newNum)
	{
		BaseFormationBuilder_eventUpdateFormationNumber_Parms Parms;
		Parms.newNum=newNum;
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_UpdateFormationNumber),&Parms);
	}
	static FName NAME_ABaseFormationBuilder_UpdateIdMapToFormation = FName(TEXT("UpdateIdMapToFormation"));
	void ABaseFormationBuilder::UpdateIdMapToFormation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseFormationBuilder_UpdateIdMapToFormation),NULL);
	}
	void ABaseFormationBuilder::StaticRegisterNativesABaseFormationBuilder()
	{
		UClass* Class = ABaseFormationBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildFormation", &ABaseFormationBuilder::execBuildFormation },
			{ "GetFormationGuid", &ABaseFormationBuilder::execGetFormationGuid },
			{ "GetFormationLocation", &ABaseFormationBuilder::execGetFormationLocation },
			{ "GetIdLocationMap", &ABaseFormationBuilder::execGetIdLocationMap },
			{ "GetRandomCharacterData", &ABaseFormationBuilder::execGetRandomCharacterData },
			{ "GetRandomPointInCircle", &ABaseFormationBuilder::execGetRandomPointInCircle },
			{ "IsBoundBoxIntersect", &ABaseFormationBuilder::execIsBoundBoxIntersect },
			{ "isBoundSphereIntersect", &ABaseFormationBuilder::execisBoundSphereIntersect },
			{ "LoadFormationData", &ABaseFormationBuilder::execLoadFormationData },
			{ "LoadUnitData", &ABaseFormationBuilder::execLoadUnitData },
			{ "RefreshFormationHash", &ABaseFormationBuilder::execRefreshFormationHash },
			{ "SaveFormationData", &ABaseFormationBuilder::execSaveFormationData },
			{ "SaveUnitData", &ABaseFormationBuilder::execSaveUnitData },
			{ "SetIdLocationMap", &ABaseFormationBuilder::execSetIdLocationMap },
			{ "ShowHideFormation", &ABaseFormationBuilder::execShowHideFormation },
			{ "SpawnCharacter", &ABaseFormationBuilder::execSpawnCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventAddFormationInstance_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventAddFormationInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "AddFormationInstance", nullptr, nullptr, sizeof(BaseFormationBuilder_eventAddFormationInstance_Parms), Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "Comment", "/*********************\xe5\x90\x88        \xe5\xb9\xb6****************************************///\xe6\x9e\x84\xe5\xbb\xba\xe9\x98\xb5\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "******************\xe5\x90\x88        \xe5\xb9\xb6***************************************//\xe6\x9e\x84\xe5\xbb\xba\xe9\x98\xb5\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "BuildFormation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics
	{
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((BaseFormationBuilder_eventBuildSpawnFormation_Parms*)Obj)->bWorldSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFormationBuilder_eventBuildSpawnFormation_Parms), &Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFormationBuildUnitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventBuildSpawnFormation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_bWorldSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "formation build data" },
		{ "Comment", "//\xe6\x9e\x84\xe5\xbb\xba\xe5\x88\x9d\xe5\xa7\x8b\xe9\x98\xb5\xe5\x9e\x8b\n//UFUNCTION(BlueprintNativeEvent)\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x9e\x84\xe5\xbb\xba\xe5\x88\x9d\xe5\xa7\x8b\xe9\x98\xb5\xe5\x9e\x8b\nUFUNCTION(BlueprintNativeEvent)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "BuildSpawnFormation", nullptr, nullptr, sizeof(BaseFormationBuilder_eventBuildSpawnFormation_Parms), Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventChangeInstanceSize_Parms, size), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::NewProp_size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "ChangeInstanceSize", nullptr, nullptr, sizeof(BaseFormationBuilder_eventChangeInstanceSize_Parms), Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics
	{
		struct BaseFormationBuilder_eventGetFormationGuid_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetFormationGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "baseFormationBuilder" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "GetFormationGuid", nullptr, nullptr, sizeof(BaseFormationBuilder_eventGetFormationGuid_Parms), Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static void NewProp_bHaveResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHaveResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetFormationLocation_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetFormationLocation_Parms, unit), Z_Construct_UClass_AGaGroupUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetFormationLocation_Parms, target), Z_Construct_UClass_AGaTargetPointActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_bHaveResult_SetBit(void* Obj)
	{
		((BaseFormationBuilder_eventGetFormationLocation_Parms*)Obj)->bHaveResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_bHaveResult = { "bHaveResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFormationBuilder_eventGetFormationLocation_Parms), &Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_bHaveResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetFormationLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_unit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_bHaveResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aID\xe9\x98\xb5\xe5\x9e\x8b\xe4\xbd\x8d\xe7\xbd\xae\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aID\xe9\x98\xb5\xe5\x9e\x8b\xe4\xbd\x8d\xe7\xbd\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "GetFormationLocation", nullptr, nullptr, sizeof(BaseFormationBuilder_eventGetFormationLocation_Parms), Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetFormationoBuilderAllCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8\xe6\x9e\x84\xe5\xbb\xba\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8\xe6\x9e\x84\xe5\xbb\xba\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "GetFormationoBuilderAllCount", nullptr, nullptr, sizeof(BaseFormationBuilder_eventGetFormationoBuilderAllCount_Parms), Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics
	{
		struct BaseFormationBuilder_eventGetIdLocationMap_Parms
		{
			TMap<int32,FVector> retMap;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_retMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_retMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_retMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::NewProp_retMap_ValueProp = { "retMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::NewProp_retMap_Key_KeyProp = { "retMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::NewProp_retMap = { "retMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetIdLocationMap_Parms, retMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::NewProp_retMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::NewProp_retMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::NewProp_retMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "baseFormationBuilder" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "GetIdLocationMap", nullptr, nullptr, sizeof(BaseFormationBuilder_eventGetIdLocationMap_Parms), Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetInstanceComponent_Parms, ReturnValue), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "GetInstanceComponent", nullptr, nullptr, sizeof(BaseFormationBuilder_eventGetInstanceComponent_Parms), Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics
	{
		struct BaseFormationBuilder_eventGetRandomCharacterData_Parms
		{
			TSubclassOf<AGaCharacter>  gaCharClass;
			FGaCharacterData ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_gaCharClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::NewProp_gaCharClass = { "gaCharClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetRandomCharacterData_Parms, gaCharClass), Z_Construct_UClass_AGaCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetRandomCharacterData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGaCharacterData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::NewProp_gaCharClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9a\x8f\xe6\x9c\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9a\x8f\xe6\x9c\xba\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "GetRandomCharacterData", nullptr, nullptr, sizeof(BaseFormationBuilder_eventGetRandomCharacterData_Parms), Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics
	{
		struct BaseFormationBuilder_eventGetRandomPointInCircle_Parms
		{
			float radius;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetRandomPointInCircle_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventGetRandomPointInCircle_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\x9c\x86\xe5\x9c\x88\xe5\x86\x85\xe9\x9a\x8f\xe6\x9c\xba\xe7\x82\xb9\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x9c\x86\xe5\x9c\x88\xe5\x86\x85\xe9\x9a\x8f\xe6\x9c\xba\xe7\x82\xb9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "GetRandomPointInCircle", nullptr, nullptr, sizeof(BaseFormationBuilder_eventGetRandomPointInCircle_Parms), Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics
	{
		struct BaseFormationBuilder_eventIsBoundBoxIntersect_Parms
		{
			FBoxSphereBounds bound1;
			FBoxSphereBounds bound2;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bound1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bound2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_bound1 = { "bound1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventIsBoundBoxIntersect_Parms, bound1), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_bound2 = { "bound2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventIsBoundBoxIntersect_Parms, bound2), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFormationBuilder_eventIsBoundBoxIntersect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFormationBuilder_eventIsBoundBoxIntersect_Parms), &Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_bound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_bound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "IsBoundBoxIntersect", nullptr, nullptr, sizeof(BaseFormationBuilder_eventIsBoundBoxIntersect_Parms), Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics
	{
		struct BaseFormationBuilder_eventisBoundSphereIntersect_Parms
		{
			FBoxSphereBounds bound1;
			FBoxSphereBounds bound2;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bound1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bound2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_bound1 = { "bound1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventisBoundSphereIntersect_Parms, bound1), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_bound2 = { "bound2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventisBoundSphereIntersect_Parms, bound2), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseFormationBuilder_eventisBoundSphereIntersect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFormationBuilder_eventisBoundSphereIntersect_Parms), &Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_bound1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_bound2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "isBoundSphereIntersect", nullptr, nullptr, sizeof(BaseFormationBuilder_eventisBoundSphereIntersect_Parms), Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "LoadFormationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "LoadUnitData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash_Statics::Function_MetaDataParams[] = {
		{ "Category", "baseFormationBuilder" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "RefreshFormationHash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventRemoveFormationInstance_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventRemoveFormationInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "RemoveFormationInstance", nullptr, nullptr, sizeof(BaseFormationBuilder_eventRemoveFormationInstance_Parms), Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "SaveFormationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "SaveUnitData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics
	{
		struct BaseFormationBuilder_eventSetIdLocationMap_Parms
		{
			TMap<int32,FVector> retMap;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_retMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_retMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_retMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::NewProp_retMap_ValueProp = { "retMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::NewProp_retMap_Key_KeyProp = { "retMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::NewProp_retMap = { "retMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventSetIdLocationMap_Parms, retMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::NewProp_retMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::NewProp_retMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::NewProp_retMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "baseFormationBuilder" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "SetIdLocationMap", nullptr, nullptr, sizeof(BaseFormationBuilder_eventSetIdLocationMap_Parms), Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics
	{
		static void NewProp_bShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((BaseFormationBuilder_eventShowHideFormation_Parms*)Obj)->bShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseFormationBuilder_eventShowHideFormation_Parms), &Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "ShowHideFormation", nullptr, nullptr, sizeof(BaseFormationBuilder_eventShowHideFormation_Parms), Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics
	{
		struct BaseFormationBuilder_eventSpawnCharacter_Parms
		{
			int32 characterId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::NewProp_characterId = { "characterId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventSpawnCharacter_Parms, characterId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::NewProp_characterId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "Comment", "/************************************************************************///\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x92\xe8\x89\xb2\n" },
		{ "CPP_Default_characterId", "0" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "********************************************************************//\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x92\xe8\x89\xb2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "SpawnCharacter", nullptr, nullptr, sizeof(BaseFormationBuilder_eventSpawnCharacter_Parms), Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventspawnCharacterEvent_Parms, character), Z_Construct_UClass_AGaCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "spawnCharacterEvent", nullptr, nullptr, sizeof(BaseFormationBuilder_eventspawnCharacterEvent_Parms), Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::NewProp_newNum = { "newNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseFormationBuilder_eventUpdateFormationNumber_Parms, newNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::NewProp_newNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "UpdateFormationNumber", nullptr, nullptr, sizeof(BaseFormationBuilder_eventUpdateFormationNumber_Parms), Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseFormationBuilder, nullptr, "UpdateIdMapToFormation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseFormationBuilder_NoRegister()
	{
		return ABaseFormationBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ABaseFormationBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSpawnCaCharacter_MetaData[];
#endif
		static void NewProp_bCanSpawnCaCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSpawnCaCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlreadSpawnCharacter_MetaData[];
#endif
		static void NewProp_bAlreadSpawnCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlreadSpawnCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDestroyGaCharaceter_MetaData[];
#endif
		static void NewProp_bCanDestroyGaCharaceter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDestroyGaCharaceter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlreadDestroyCharacter_MetaData[];
#endif
		static void NewProp_bAlreadDestroyCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlreadDestroyCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSequencerChangeProperty_MetaData[];
#endif
		static void NewProp_bUseSequencerChangeProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSequencerChangeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpecialSpawnRotator_MetaData[];
#endif
		static void NewProp_bUseSpecialSpawnRotator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpecialSpawnRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomSpawnRotator_MetaData[];
#endif
		static void NewProp_bUseRandomSpawnRotator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomSpawnRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_viewPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_viewPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomDeadRotation_MetaData[];
#endif
		static void NewProp_randomDeadRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_randomDeadRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeedMultiValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeedMultiValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specialSpawnRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_specialSpawnRotator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPointArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPointArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_targetPointArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delaySpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_delaySpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_idLocationMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_idLocationMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idLocationMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_idLocationMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedRefresh_MetaData[];
#endif
		static void NewProp_bNeedRefresh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedRefresh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_formationBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_formationBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentifyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdentifyMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupUnitDeadmanInstanceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_groupUnitDeadmanInstanceComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_idFormationBuildUnitData_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_idFormationBuildUnitData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idFormationBuildUnitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_idFormationBuildUnitData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aliveCharacterSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliveCharacterSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_aliveCharacterSet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterIdMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_characterIdMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterIdMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_characterIdMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterScaleMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_characterScaleMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterScaleMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_characterScaleMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebgCloseMdoe_MetaData[];
#endif
		static void NewProp_bEnableDebgCloseMdoe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebgCloseMdoe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnCharWhenBegin_MetaData[];
#endif
		static void NewProp_bSpawnCharWhenBegin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnCharWhenBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnCharacterOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnCharacterOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseFormationBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseFormationBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseFormationBuilder_AddFormationInstance, "AddFormationInstance" }, // 4187451041
		{ &Z_Construct_UFunction_ABaseFormationBuilder_BuildFormation, "BuildFormation" }, // 474513710
		{ &Z_Construct_UFunction_ABaseFormationBuilder_BuildSpawnFormation, "BuildSpawnFormation" }, // 3671693633
		{ &Z_Construct_UFunction_ABaseFormationBuilder_ChangeInstanceSize, "ChangeInstanceSize" }, // 1489066639
		{ &Z_Construct_UFunction_ABaseFormationBuilder_GetFormationGuid, "GetFormationGuid" }, // 1431074405
		{ &Z_Construct_UFunction_ABaseFormationBuilder_GetFormationLocation, "GetFormationLocation" }, // 3284222796
		{ &Z_Construct_UFunction_ABaseFormationBuilder_GetFormationoBuilderAllCount, "GetFormationoBuilderAllCount" }, // 3798309656
		{ &Z_Construct_UFunction_ABaseFormationBuilder_GetIdLocationMap, "GetIdLocationMap" }, // 3461127564
		{ &Z_Construct_UFunction_ABaseFormationBuilder_GetInstanceComponent, "GetInstanceComponent" }, // 485051523
		{ &Z_Construct_UFunction_ABaseFormationBuilder_GetRandomCharacterData, "GetRandomCharacterData" }, // 1851781814
		{ &Z_Construct_UFunction_ABaseFormationBuilder_GetRandomPointInCircle, "GetRandomPointInCircle" }, // 2610293629
		{ &Z_Construct_UFunction_ABaseFormationBuilder_IsBoundBoxIntersect, "IsBoundBoxIntersect" }, // 3344423368
		{ &Z_Construct_UFunction_ABaseFormationBuilder_isBoundSphereIntersect, "isBoundSphereIntersect" }, // 1024262322
		{ &Z_Construct_UFunction_ABaseFormationBuilder_LoadFormationData, "LoadFormationData" }, // 1887269483
		{ &Z_Construct_UFunction_ABaseFormationBuilder_LoadUnitData, "LoadUnitData" }, // 3175337155
		{ &Z_Construct_UFunction_ABaseFormationBuilder_RefreshFormationHash, "RefreshFormationHash" }, // 2806163403
		{ &Z_Construct_UFunction_ABaseFormationBuilder_RemoveFormationInstance, "RemoveFormationInstance" }, // 3316504884
		{ &Z_Construct_UFunction_ABaseFormationBuilder_SaveFormationData, "SaveFormationData" }, // 290876639
		{ &Z_Construct_UFunction_ABaseFormationBuilder_SaveUnitData, "SaveUnitData" }, // 2473570274
		{ &Z_Construct_UFunction_ABaseFormationBuilder_SetIdLocationMap, "SetIdLocationMap" }, // 3552508538
		{ &Z_Construct_UFunction_ABaseFormationBuilder_ShowHideFormation, "ShowHideFormation" }, // 2237500450
		{ &Z_Construct_UFunction_ABaseFormationBuilder_SpawnCharacter, "SpawnCharacter" }, // 187154073
		{ &Z_Construct_UFunction_ABaseFormationBuilder_spawnCharacterEvent, "spawnCharacterEvent" }, // 3658047769
		{ &Z_Construct_UFunction_ABaseFormationBuilder_UpdateFormationNumber, "UpdateFormationNumber" }, // 1350795240
		{ &Z_Construct_UFunction_ABaseFormationBuilder_UpdateIdMapToFormation, "UpdateIdMapToFormation" }, // 4037186887
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8\n" },
		{ "IncludePath", "GaGroupUnit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanSpawnCaCharacter_MetaData[] = {
		{ "Category", "C\xe5\xb1\x9e\xe6\x80\xa7\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8|\xe7\xbe\xa4\xe7\xbb\x84\xe6\x80\xbb\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "Comment", "/**********************************************************************///\xe5\x90\x88\xe5\xb9\xb6  property\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "******************************************************************//\xe5\x90\x88\xe5\xb9\xb6  property" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanSpawnCaCharacter_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bCanSpawnCaCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanSpawnCaCharacter = { "bCanSpawnCaCharacter", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanSpawnCaCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanSpawnCaCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanSpawnCaCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadSpawnCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadSpawnCharacter_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bAlreadSpawnCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadSpawnCharacter = { "bAlreadSpawnCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadSpawnCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadSpawnCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadSpawnCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanDestroyGaCharaceter_MetaData[] = {
		{ "Category", "C\xe5\xb1\x9e\xe6\x80\xa7\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8|\xe7\xbe\xa4\xe7\xbb\x84\xe6\x80\xbb\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x94\x80\xe6\xaf\x81\xe7\xbe\xa4\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanDestroyGaCharaceter_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bCanDestroyGaCharaceter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanDestroyGaCharaceter = { "bCanDestroyGaCharaceter", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanDestroyGaCharaceter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanDestroyGaCharaceter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanDestroyGaCharaceter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadDestroyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadDestroyCharacter_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bAlreadDestroyCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadDestroyCharacter = { "bAlreadDestroyCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadDestroyCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadDestroyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadDestroyCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSequencerChangeProperty_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8K\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSequencerChangeProperty_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bUseSequencerChangeProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSequencerChangeProperty = { "bUseSequencerChangeProperty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSequencerChangeProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSequencerChangeProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSequencerChangeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSpecialSpawnRotator_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\x9f\xe6\x88\x90\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSpecialSpawnRotator_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bUseSpecialSpawnRotator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSpecialSpawnRotator = { "bUseSpecialSpawnRotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSpecialSpawnRotator_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSpecialSpawnRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSpecialSpawnRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseRandomSpawnRotator_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe9\x9a\x8f\xe6\x9c\xba\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseRandomSpawnRotator_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bUseRandomSpawnRotator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseRandomSpawnRotator = { "bUseRandomSpawnRotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseRandomSpawnRotator_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseRandomSpawnRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseRandomSpawnRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_viewPort_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe8\xa7\x92\xe8\x89\xb2\xe6\x9e\x84\xe9\x80\xa0\xe5\x8f\x82\xe6\x95\xb0" },
		{ "Comment", "/*****************\xe8\xa7\x92 \xe8\x89\xb2 \xe6\x9e\x84 \xe9\x80\xa0 \xe5\x8f\x82 \xe6\x95\xb0*************************/" },
		{ "DisplayName", "\xe8\xa7\x86\xe7\x82\xb9" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "**************\xe8\xa7\x92 \xe8\x89\xb2 \xe6\x9e\x84 \xe9\x80\xa0 \xe5\x8f\x82 \xe6\x95\xb0************************" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_viewPort = { "viewPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, viewPort), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_viewPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_viewPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_randomDeadRotation_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe8\xa7\x92\xe8\x89\xb2\xe6\x9e\x84\xe9\x80\xa0\xe5\x8f\x82\xe6\x95\xb0" },
		{ "DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe6\xad\xbb\xe4\xba\xa1\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_randomDeadRotation_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->randomDeadRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_randomDeadRotation = { "randomDeadRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_randomDeadRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_randomDeadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_randomDeadRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_moveSpeedMultiValue_MetaData[] = {
		{ "Category", "D\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8K\xe5\x86\x85\xe9\x83\xa8\xe7\x94\xa8" },
		{ "Comment", "/************************************************************************/" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\xe6\xaf\x94\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_moveSpeedMultiValue = { "moveSpeedMultiValue", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, moveSpeedMultiValue), METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_moveSpeedMultiValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_moveSpeedMultiValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_specialSpawnRotator_MetaData[] = {
		{ "Category", "C\xe5\xb1\x9e\xe6\x80\xa7\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x94\x9f\xe6\x88\x90\xe6\x97\x8b\xe8\xbd\xac\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xb9\xe5\x90\x91\n" },
		{ "DisplayName", "\xe6\x97\x8b\xe8\xbd\xac\xe6\x96\xb9\xe5\x90\x91\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x94\x9f\xe6\x88\x90\xe6\x97\x8b\xe8\xbd\xac\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xb9\xe5\x90\x91" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_specialSpawnRotator = { "specialSpawnRotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, specialSpawnRotator), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_specialSpawnRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_specialSpawnRotator_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_targetPointArr_Inner = { "targetPointArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGaTargetPointActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_targetPointArr_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_targetPointArr = { "targetPointArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, targetPointArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_targetPointArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_targetPointArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_delaySpawn_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe9\x97\xb4\xe9\x9a\x94\xe7\x94\x9f\xe6\x88\x90" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe9\x97\xb4\xe9\x9a\x94\xe7\x94\x9f\xe6\x88\x90\n" },
		{ "DisplayName", "\xe9\x97\xb4\xe9\x9a\x94\xe7\x94\x9f\xe6\x88\x90\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x97\xb4\xe9\x9a\x94\xe7\x94\x9f\xe6\x88\x90" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_delaySpawn = { "delaySpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, delaySpawn), Z_Construct_UScriptStruct_FGaUnitDelaySpawn, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_delaySpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_delaySpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_guid_MetaData[] = {
		{ "Comment", "/***************************************************************************///guid\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "***********************************************************************//guid" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_guid_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap_ValueProp = { "idLocationMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap_Key_KeyProp = { "idLocationMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap_MetaData[] = {
		{ "Comment", "//id\xe5\xaf\xb9\xe5\xba\x94\xe4\xbd\x8d\xe7\xbd\xaemap\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "id\xe5\xaf\xb9\xe5\xba\x94\xe4\xbd\x8d\xe7\xbd\xaemap" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap = { "idLocationMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, idLocationMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bNeedRefresh_MetaData[] = {
		{ "Category", "baseFormationBuilder" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bNeedRefresh_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bNeedRefresh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bNeedRefresh = { "bNeedRefresh", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bNeedRefresh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bNeedRefresh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bNeedRefresh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_formationBuilder_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe9\x98\xb5\xe5\x9e\x8b\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_formationBuilder = { "formationBuilder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, formationBuilder), Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_formationBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_formationBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_IdentifyMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_IdentifyMeshComponent = { "IdentifyMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, IdentifyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_IdentifyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_IdentifyMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_groupUnitDeadmanInstanceComponent_MetaData[] = {
		{ "Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe6\x9c\xa8\xe6\xa1\xa9 mesh\xe5\xae\x9e\xe4\xbe\x8b\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe6\x9c\xa8\xe6\xa1\xa9 mesh\xe5\xae\x9e\xe4\xbe\x8b" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_groupUnitDeadmanInstanceComponent = { "groupUnitDeadmanInstanceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, groupUnitDeadmanInstanceComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_groupUnitDeadmanInstanceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_groupUnitDeadmanInstanceComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData_ValueProp = { "idFormationBuildUnitData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFormationBuildUnitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData_Key_KeyProp = { "idFormationBuildUnitData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData_MetaData[] = {
		{ "Comment", "//\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84ID\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xaeMAP\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84ID\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xaeMAP" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData = { "idFormationBuildUnitData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, idFormationBuildUnitData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_aliveCharacterSet_ElementProp = { "aliveCharacterSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_aliveCharacterSet_MetaData[] = {
		{ "Comment", "//\xe5\xad\x98\xe5\x9c\xa8\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86set\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe5\xad\x98\xe5\x9c\xa8\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86set" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_aliveCharacterSet = { "aliveCharacterSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, aliveCharacterSet), METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_aliveCharacterSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_aliveCharacterSet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap_ValueProp = { "characterIdMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap_Key_KeyProp = { "characterIdMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2ID \xe5\xbc\x95\xe7\x94\xa8 map\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2ID \xe5\xbc\x95\xe7\x94\xa8 map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap = { "characterIdMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, characterIdMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap_ValueProp = { "characterScaleMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap_Key_KeyProp = { "characterScaleMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2ID \xe7\xbc\xa9\xe6\x94\xbe map\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2ID \xe7\xbc\xa9\xe6\x94\xbe map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap = { "characterScaleMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, characterScaleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bEnableDebgCloseMdoe_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe8\xb0\x83\xe8\xaf\x95\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe5\xbc\x80\xe5\x90\xaf\xe8\xb0\x83\xe8\xaf\x95\xe5\x85\xb3\xe9\x97\xad\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bEnableDebgCloseMdoe_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bEnableDebgCloseMdoe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bEnableDebgCloseMdoe = { "bEnableDebgCloseMdoe", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bEnableDebgCloseMdoe_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bEnableDebgCloseMdoe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bEnableDebgCloseMdoe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bSpawnCharWhenBegin_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe7\x94\x9f\xe6\x88\x90\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bSpawnCharWhenBegin_SetBit(void* Obj)
	{
		((ABaseFormationBuilder*)Obj)->bSpawnCharWhenBegin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bSpawnCharWhenBegin = { "bSpawnCharWhenBegin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseFormationBuilder), &Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bSpawnCharWhenBegin_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bSpawnCharWhenBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bSpawnCharWhenBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_spawnCharacterOffset_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe7\x94\x9f\xe6\x88\x90\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe7\x94\x9f\xe6\x88\x90\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_spawnCharacterOffset = { "spawnCharacterOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseFormationBuilder, spawnCharacterOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_spawnCharacterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_spawnCharacterOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseFormationBuilder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanSpawnCaCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadSpawnCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bCanDestroyGaCharaceter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bAlreadDestroyCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSequencerChangeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseSpecialSpawnRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bUseRandomSpawnRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_viewPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_randomDeadRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_moveSpeedMultiValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_specialSpawnRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_targetPointArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_targetPointArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_delaySpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idLocationMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bNeedRefresh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_formationBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_IdentifyMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_groupUnitDeadmanInstanceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_idFormationBuildUnitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_aliveCharacterSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_aliveCharacterSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterIdMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_characterScaleMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bEnableDebgCloseMdoe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_bSpawnCharWhenBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseFormationBuilder_Statics::NewProp_spawnCharacterOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseFormationBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseFormationBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseFormationBuilder_Statics::ClassParams = {
		&ABaseFormationBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseFormationBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseFormationBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseFormationBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseFormationBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseFormationBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseFormationBuilder, 1093885444);
	template<> GROUPACTION_API UClass* StaticClass<ABaseFormationBuilder>()
	{
		return ABaseFormationBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseFormationBuilder(Z_Construct_UClass_ABaseFormationBuilder, &ABaseFormationBuilder::StaticClass, TEXT("/Script/groupAction"), TEXT("ABaseFormationBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseFormationBuilder);
	DEFINE_FUNCTION(AGaGroupUnit::execLoadUnitData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadUnitData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaGroupUnit::execSaveUnitData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveUnitData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaGroupUnit::execSpawnCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaGroupUnit::execSetGuid)
	{
		P_GET_STRUCT(FGuid,Z_Param_inguid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGuid(Z_Param_inguid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaGroupUnit::execRefreshFormation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshFormation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaGroupUnit::execBuildFormation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildFormation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaGroupUnit::execRemoveAliveCharacter)
	{
		P_GET_OBJECT(AGaCharacter,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAliveCharacter(Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaGroupUnit::execGetAliveCharacterSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<ACharacter*>*)Z_Param__Result=P_THIS->GetAliveCharacterSet();
		P_NATIVE_END;
	}
	static FName NAME_AGaGroupUnit_LoadUnitData = FName(TEXT("LoadUnitData"));
	void AGaGroupUnit::LoadUnitData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGaGroupUnit_LoadUnitData),NULL);
	}
	static FName NAME_AGaGroupUnit_SaveUnitData = FName(TEXT("SaveUnitData"));
	void AGaGroupUnit::SaveUnitData()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGaGroupUnit_SaveUnitData),NULL);
	}
	static FName NAME_AGaGroupUnit_spawnCharacterEvent = FName(TEXT("spawnCharacterEvent"));
	void AGaGroupUnit::spawnCharacterEvent(AGaCharacter* character)
	{
		GaGroupUnit_eventspawnCharacterEvent_Parms Parms;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_AGaGroupUnit_spawnCharacterEvent),&Parms);
	}
	void AGaGroupUnit::StaticRegisterNativesAGaGroupUnit()
	{
		UClass* Class = AGaGroupUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildFormation", &AGaGroupUnit::execBuildFormation },
			{ "GetAliveCharacterSet", &AGaGroupUnit::execGetAliveCharacterSet },
			{ "LoadUnitData", &AGaGroupUnit::execLoadUnitData },
			{ "RefreshFormation", &AGaGroupUnit::execRefreshFormation },
			{ "RemoveAliveCharacter", &AGaGroupUnit::execRemoveAliveCharacter },
			{ "SaveUnitData", &AGaGroupUnit::execSaveUnitData },
			{ "SetGuid", &AGaGroupUnit::execSetGuid },
			{ "SpawnCharacter", &AGaGroupUnit::execSpawnCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGaGroupUnit_BuildFormation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_BuildFormation_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "Comment", "//\xe6\x9e\x84\xe5\xbb\xba\xe9\x98\xb5\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x9e\x84\xe5\xbb\xba\xe9\x98\xb5\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_BuildFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "BuildFormation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_BuildFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_BuildFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_BuildFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_BuildFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics
	{
		struct GaGroupUnit_eventGetAliveCharacterSet_Parms
		{
			TSet<ACharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaGroupUnit_eventGetAliveCharacterSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "gaUnit" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb4\xbb\xe7\x9d\x80\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xb4\xbb\xe7\x9d\x80\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "GetAliveCharacterSet", nullptr, nullptr, sizeof(GaGroupUnit_eventGetAliveCharacterSet_Parms), Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_LoadUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_LoadUnitData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_LoadUnitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "LoadUnitData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_LoadUnitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_LoadUnitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_LoadUnitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_LoadUnitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_RefreshFormation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_RefreshFormation_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_RefreshFormation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "RefreshFormation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_RefreshFormation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_RefreshFormation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_RefreshFormation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_RefreshFormation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics
	{
		struct GaGroupUnit_eventRemoveAliveCharacter_Parms
		{
			AGaCharacter* character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaGroupUnit_eventRemoveAliveCharacter_Parms, character), Z_Construct_UClass_AGaCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "gaUnit" },
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe6\xb4\xbb\xe7\x9d\x80\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe6\xb4\xbb\xe7\x9d\x80\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "RemoveAliveCharacter", nullptr, nullptr, sizeof(GaGroupUnit_eventRemoveAliveCharacter_Parms), Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_SaveUnitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_SaveUnitData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "C\xe5\x87\xbd\xe6\x95\xb0\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8" },
		{ "Comment", "/************************************************************************/" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_SaveUnitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "SaveUnitData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_SaveUnitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_SaveUnitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_SaveUnitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_SaveUnitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics
	{
		struct GaGroupUnit_eventSetGuid_Parms
		{
			FGuid inguid;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inguid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::NewProp_inguid = { "inguid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaGroupUnit_eventSetGuid_Parms, inguid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::NewProp_inguid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "SetGuid", nullptr, nullptr, sizeof(GaGroupUnit_eventSetGuid_Parms), Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_SetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_SetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "Comment", "/************************************************************************///\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x92\xe8\x89\xb2\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "********************************************************************//\xe7\x94\x9f\xe6\x88\x90\xe8\xa7\x92\xe8\x89\xb2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "SpawnCharacter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaGroupUnit_eventspawnCharacterEvent_Parms, character), Z_Construct_UClass_AGaCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "group action unit" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaGroupUnit, nullptr, "spawnCharacterEvent", nullptr, nullptr, sizeof(GaGroupUnit_eventspawnCharacterEvent_Parms), Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGaGroupUnit_NoRegister()
	{
		return AGaGroupUnit::StaticClass();
	}
	struct Z_Construct_UClass_AGaGroupUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnCharWhenBegin_MetaData[];
#endif
		static void NewProp_bSpawnCharWhenBegin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnCharWhenBegin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnCharacterOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnCharacterOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_formationBuilder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_formationBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanSpawnCaCharacter_MetaData[];
#endif
		static void NewProp_bCanSpawnCaCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanSpawnCaCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlreadSpawnCharacter_MetaData[];
#endif
		static void NewProp_bAlreadSpawnCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlreadSpawnCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDestroyGaCharaceter_MetaData[];
#endif
		static void NewProp_bCanDestroyGaCharaceter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDestroyGaCharaceter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlreadDestroyCharacter_MetaData[];
#endif
		static void NewProp_bAlreadDestroyCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlreadDestroyCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetPointArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetPointArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_targetPointArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollisionOtherPawn_MetaData[];
#endif
		static void NewProp_bCollisionOtherPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollisionOtherPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSequencerChangeProperty_MetaData[];
#endif
		static void NewProp_bUseSequencerChangeProperty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSequencerChangeProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpecialSpawnRotator_MetaData[];
#endif
		static void NewProp_bUseSpecialSpawnRotator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpecialSpawnRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomSpawnRotator_MetaData[];
#endif
		static void NewProp_bUseRandomSpawnRotator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomSpawnRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdentifyMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdentifyMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebgCloseMdoe_MetaData[];
#endif
		static void NewProp_bEnableDebgCloseMdoe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebgCloseMdoe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moveSpeedMultiValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moveSpeedMultiValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_specialSpawnRotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_specialSpawnRotator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupUnitDeadmanInstanceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_groupUnitDeadmanInstanceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_allGroupUnitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_allGroupUnitCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_characterIdMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_characterIdMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterIdMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_characterIdMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterScaleMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_characterScaleMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterScaleMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_characterScaleMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aliveCharacterSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aliveCharacterSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_aliveCharacterSet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_idFormationBuildUnitData_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_idFormationBuildUnitData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_idFormationBuildUnitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_idFormationBuildUnitData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaGroupUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGaGroupUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGaGroupUnit_BuildFormation, "BuildFormation" }, // 62609737
		{ &Z_Construct_UFunction_AGaGroupUnit_GetAliveCharacterSet, "GetAliveCharacterSet" }, // 1711277399
		{ &Z_Construct_UFunction_AGaGroupUnit_LoadUnitData, "LoadUnitData" }, // 2318738211
		{ &Z_Construct_UFunction_AGaGroupUnit_RefreshFormation, "RefreshFormation" }, // 3664181096
		{ &Z_Construct_UFunction_AGaGroupUnit_RemoveAliveCharacter, "RemoveAliveCharacter" }, // 1396866496
		{ &Z_Construct_UFunction_AGaGroupUnit_SaveUnitData, "SaveUnitData" }, // 3271360455
		{ &Z_Construct_UFunction_AGaGroupUnit_SetGuid, "SetGuid" }, // 1212445133
		{ &Z_Construct_UFunction_AGaGroupUnit_SpawnCharacter, "SpawnCharacter" }, // 484763153
		{ &Z_Construct_UFunction_AGaGroupUnit_spawnCharacterEvent, "spawnCharacterEvent" }, // 1975438381
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GaGroupUnit.h" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_guid_MetaData[] = {
		{ "Comment", "//\xe5\x8d\x95\xe5\x85\x83ID\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe5\x8d\x95\xe5\x85\x83ID" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bSpawnCharWhenBegin_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe7\x94\x9f\xe6\x88\x90\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe7\xab\x8b\xe5\x8d\xb3\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bSpawnCharWhenBegin_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bSpawnCharWhenBegin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bSpawnCharWhenBegin = { "bSpawnCharWhenBegin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bSpawnCharWhenBegin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bSpawnCharWhenBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bSpawnCharWhenBegin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_spawnCharacterOffset_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe7\x94\x9f\xe6\x88\x90\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe7\x94\x9f\xe6\x88\x90\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_spawnCharacterOffset = { "spawnCharacterOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, spawnCharacterOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_spawnCharacterOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_spawnCharacterOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_formationBuilder_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe9\x98\xb5\xe5\x9e\x8b\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_formationBuilder = { "formationBuilder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, formationBuilder), Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_formationBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_formationBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanSpawnCaCharacter_MetaData[] = {
		{ "Category", "C\xe5\xb1\x9e\xe6\x80\xa7\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8|\xe7\xbe\xa4\xe7\xbb\x84\xe6\x80\xbb\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe7\x94\x9f\xe6\x88\x90\xe7\xbe\xa4\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanSpawnCaCharacter_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bCanSpawnCaCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanSpawnCaCharacter = { "bCanSpawnCaCharacter", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanSpawnCaCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanSpawnCaCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanSpawnCaCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadSpawnCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadSpawnCharacter_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bAlreadSpawnCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadSpawnCharacter = { "bAlreadSpawnCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadSpawnCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadSpawnCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadSpawnCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanDestroyGaCharaceter_MetaData[] = {
		{ "Category", "C\xe5\xb1\x9e\xe6\x80\xa7\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8|\xe7\xbe\xa4\xe7\xbb\x84\xe6\x80\xbb\xe6\x8e\xa7\xe5\x88\xb6" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe9\x94\x80\xe6\xaf\x81\xe7\xbe\xa4\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanDestroyGaCharaceter_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bCanDestroyGaCharaceter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanDestroyGaCharaceter = { "bCanDestroyGaCharaceter", nullptr, (EPropertyFlags)0x0010040200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanDestroyGaCharaceter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanDestroyGaCharaceter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanDestroyGaCharaceter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadDestroyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadDestroyCharacter_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bAlreadDestroyCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadDestroyCharacter = { "bAlreadDestroyCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadDestroyCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadDestroyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadDestroyCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_targetPointArr_Inner = { "targetPointArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGaTargetPointActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_targetPointArr_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe7\x9b\xae\xe6\xa0\x87\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_targetPointArr = { "targetPointArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, targetPointArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_targetPointArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_targetPointArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCollisionOtherPawn_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe8\xa7\x92\xe8\x89\xb2\xe4\xb9\x8b\xe9\x97\xb4\xe4\xba\x92\xe7\x9b\xb8\xe6\x98\xaf\xe5\x90\xa6\xe6\x9c\x89\xe7\xa2\xb0\xe6\x92\x9e" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCollisionOtherPawn_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bCollisionOtherPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCollisionOtherPawn = { "bCollisionOtherPawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCollisionOtherPawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCollisionOtherPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCollisionOtherPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSequencerChangeProperty_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8K\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSequencerChangeProperty_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bUseSequencerChangeProperty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSequencerChangeProperty = { "bUseSequencerChangeProperty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSequencerChangeProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSequencerChangeProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSequencerChangeProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSpecialSpawnRotator_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\x8c\x87\xe5\xae\x9a\xe7\x94\x9f\xe6\x88\x90\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSpecialSpawnRotator_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bUseSpecialSpawnRotator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSpecialSpawnRotator = { "bUseSpecialSpawnRotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSpecialSpawnRotator_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSpecialSpawnRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSpecialSpawnRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseRandomSpawnRotator_MetaData[] = {
		{ "Category", "\xe8\xa7\x92\xe8\x89\xb2\xe5\xb1\x9e\xe6\x80\xa7|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe9\x9a\x8f\xe6\x9c\xba\xe6\x97\x8b\xe8\xbd\xac" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseRandomSpawnRotator_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bUseRandomSpawnRotator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseRandomSpawnRotator = { "bUseRandomSpawnRotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseRandomSpawnRotator_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseRandomSpawnRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseRandomSpawnRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_IdentifyMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_IdentifyMeshComponent = { "IdentifyMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, IdentifyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_IdentifyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_IdentifyMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bEnableDebgCloseMdoe_MetaData[] = {
		{ "Category", "A\xe5\xb1\x9e\xe6\x80\xa7|\xe8\xb0\x83\xe8\xaf\x95\xe6\xa8\xa1\xe5\xbc\x8f\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe5\xbc\x80\xe5\x90\xaf\xe8\xb0\x83\xe8\xaf\x95\xe5\x85\xb3\xe9\x97\xad\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bEnableDebgCloseMdoe_SetBit(void* Obj)
	{
		((AGaGroupUnit*)Obj)->bEnableDebgCloseMdoe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bEnableDebgCloseMdoe = { "bEnableDebgCloseMdoe", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaGroupUnit), &Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bEnableDebgCloseMdoe_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bEnableDebgCloseMdoe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bEnableDebgCloseMdoe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_moveSpeedMultiValue_MetaData[] = {
		{ "Category", "D\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8K\xe5\x86\x85\xe9\x83\xa8\xe7\x94\xa8" },
		{ "Comment", "/************************************************************************/" },
		{ "DisplayName", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\xe6\xaf\x94\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_moveSpeedMultiValue = { "moveSpeedMultiValue", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, moveSpeedMultiValue), METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_moveSpeedMultiValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_moveSpeedMultiValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_specialSpawnRotator_MetaData[] = {
		{ "Category", "C\xe5\xb1\x9e\xe6\x80\xa7\xe5\x86\x85\xe9\x83\xa8\xe8\xb0\x83\xe7\x94\xa8|\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x94\x9f\xe6\x88\x90\xe6\x97\x8b\xe8\xbd\xac\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xb9\xe5\x90\x91\n" },
		{ "DisplayName", "\xe6\x97\x8b\xe8\xbd\xac\xe6\x96\xb9\xe5\x90\x91\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe7\x94\x9f\xe6\x88\x90\xe6\x97\x8b\xe8\xbd\xac\xe7\x9b\xae\xe6\xa0\x87\xe6\x96\xb9\xe5\x90\x91" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_specialSpawnRotator = { "specialSpawnRotator", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, specialSpawnRotator), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_specialSpawnRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_specialSpawnRotator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_groupUnitDeadmanInstanceComponent_MetaData[] = {
		{ "Comment", "//\xe6\x99\xae\xe9\x80\x9a\xe6\x9c\xa8\xe6\xa1\xa9 mesh\xe5\xae\x9e\xe4\xbe\x8b\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x99\xae\xe9\x80\x9a\xe6\x9c\xa8\xe6\xa1\xa9 mesh\xe5\xae\x9e\xe4\xbe\x8b" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_groupUnitDeadmanInstanceComponent = { "groupUnitDeadmanInstanceComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, groupUnitDeadmanInstanceComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_groupUnitDeadmanInstanceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_groupUnitDeadmanInstanceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_allGroupUnitCount_MetaData[] = {
		{ "Comment", "//\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x89\x80\xe6\x9c\x89\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_allGroupUnitCount = { "allGroupUnitCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, allGroupUnitCount), METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_allGroupUnitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_allGroupUnitCount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap_ValueProp = { "characterIdMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap_Key_KeyProp = { "characterIdMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2ID \xe5\xbc\x95\xe7\x94\xa8 map\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2ID \xe5\xbc\x95\xe7\x94\xa8 map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap = { "characterIdMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, characterIdMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap_ValueProp = { "characterScaleMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap_Key_KeyProp = { "characterScaleMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2ID \xe5\xbc\x95\xe7\x94\xa8 map\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2ID \xe5\xbc\x95\xe7\x94\xa8 map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap = { "characterScaleMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, characterScaleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_aliveCharacterSet_ElementProp = { "aliveCharacterSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_aliveCharacterSet_MetaData[] = {
		{ "Comment", "//\xe5\xad\x98\xe5\x9c\xa8\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86set\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe5\xad\x98\xe5\x9c\xa8\xe8\xa7\x92\xe8\x89\xb2\xe5\x90\x88\xe9\x9b\x86set" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_aliveCharacterSet = { "aliveCharacterSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, aliveCharacterSet), METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_aliveCharacterSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_aliveCharacterSet_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData_ValueProp = { "idFormationBuildUnitData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFormationBuildUnitData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData_Key_KeyProp = { "idFormationBuildUnitData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData_MetaData[] = {
		{ "Comment", "//\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84ID\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xaeMAP\n" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84ID\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xaeMAP" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData = { "idFormationBuildUnitData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaGroupUnit, idFormationBuildUnitData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaGroupUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bSpawnCharWhenBegin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_spawnCharacterOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_formationBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanSpawnCaCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadSpawnCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCanDestroyGaCharaceter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bAlreadDestroyCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_targetPointArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_targetPointArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bCollisionOtherPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSequencerChangeProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseSpecialSpawnRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bUseRandomSpawnRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_IdentifyMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_bEnableDebgCloseMdoe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_moveSpeedMultiValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_specialSpawnRotator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_groupUnitDeadmanInstanceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_allGroupUnitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterIdMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_characterScaleMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_aliveCharacterSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_aliveCharacterSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaGroupUnit_Statics::NewProp_idFormationBuildUnitData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaGroupUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaGroupUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaGroupUnit_Statics::ClassParams = {
		&AGaGroupUnit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGaGroupUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaGroupUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaGroupUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaGroupUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaGroupUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaGroupUnit, 1196021003);
	template<> GROUPACTION_API UClass* StaticClass<AGaGroupUnit>()
	{
		return AGaGroupUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaGroupUnit(Z_Construct_UClass_AGaGroupUnit, &AGaGroupUnit::StaticClass, TEXT("/Script/groupAction"), TEXT("AGaGroupUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaGroupUnit);
	DEFINE_FUNCTION(UGaSettingObject::execChangeBrushRadisu)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_changeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBrushRadisu(Z_Param_changeValue);
		P_NATIVE_END;
	}
	void UGaSettingObject::StaticRegisterNativesUGaSettingObject()
	{
		UClass* Class = UGaSettingObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBrushRadisu", &UGaSettingObject::execChangeBrushRadisu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics
	{
		struct GaSettingObject_eventChangeBrushRadisu_Parms
		{
			float changeValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_changeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::NewProp_changeValue = { "changeValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaSettingObject_eventChangeBrushRadisu_Parms, changeValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::NewProp_changeValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGaSettingObject, nullptr, "ChangeBrushRadisu", nullptr, nullptr, sizeof(GaSettingObject_eventChangeBrushRadisu_Parms), Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGaSettingObject_NoRegister()
	{
		return UGaSettingObject::StaticClass();
	}
	struct Z_Construct_UClass_UGaSettingObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_egcm_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_egcm_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_egcm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSinglePaintMode_MetaData[];
#endif
		static void NewProp_bSinglePaintMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSinglePaintMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFormationBuilder_MetaData[];
#endif
		static void NewProp_bShowFormationBuilder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFormationBuilder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGaUnit_MetaData[];
#endif
		static void NewProp_bShowGaUnit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGaUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowGaUnitWhenLeaveGaMode_MetaData[];
#endif
		static void NewProp_bShowGaUnitWhenLeaveGaMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowGaUnitWhenLeaveGaMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPaintSkeletalMesh_MetaData[];
#endif
		static void NewProp_bPaintSkeletalMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPaintSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateGUID_MetaData[];
#endif
		static void NewProp_bAutoCreateGUID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brushRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_brushRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_density_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_density;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGaSettingObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGaSettingObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGaSettingObject_ChangeBrushRadisu, "ChangeBrushRadisu" }, // 3316575330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\xe7\xbe\xa4\xe7\xbb\x84\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "IncludePath", "GaGroupUnit.h" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe7\xbe\xa4\xe7\xbb\x84\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_egcm_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_egcm_MetaData[] = {
		{ "Category", "\xe6\x93\x8d\xe6\x8e\xa7\xe8\xae\xbe\xe7\xbd\xae" },
		{ "DisplayName", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x93\x8d\xe6\x8e\xa7\xe6\xa8\xa1\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_egcm = { "egcm", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGaSettingObject, egcm), Z_Construct_UEnum_groupAction_EGaControlMode, METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_egcm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_egcm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bSinglePaintMode_MetaData[] = {
		{ "Category", "\xe6\x93\x8d\xe6\x8e\xa7\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\x8d\x95\xe7\x82\xb9\xe7\xbb\x98\xe5\x88\xb6\xe6\xa8\xa1\xe5\xbc\x8f\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xad\xe5\xbf\x83\xe5\x8d\x95\xe7\x82\xb9\xe7\xbb\x98\xe5\x88\xb6" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\x8d\x95\xe7\x82\xb9\xe7\xbb\x98\xe5\x88\xb6\xe6\xa8\xa1\xe5\xbc\x8f" },
	};
#endif
	void Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bSinglePaintMode_SetBit(void* Obj)
	{
		((UGaSettingObject*)Obj)->bSinglePaintMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bSinglePaintMode = { "bSinglePaintMode", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGaSettingObject), &Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bSinglePaintMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bSinglePaintMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bSinglePaintMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowFormationBuilder_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe9\x98\xb5\xe5\x9e\x8b\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe6\x9e\x84\xe5\xbb\xba\xe5\x99\xa8" },
	};
#endif
	void Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowFormationBuilder_SetBit(void* Obj)
	{
		((UGaSettingObject*)Obj)->bShowFormationBuilder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowFormationBuilder = { "bShowFormationBuilder", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGaSettingObject), &Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowFormationBuilder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowFormationBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowFormationBuilder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnit_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe6\x9e\x84\xe5\xbb\xba\xe5\xa5\xbd\xe7\x9a\x84\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84\xe5\x8d\x95\xe5\x85\x83" },
	};
#endif
	void Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnit_SetBit(void* Obj)
	{
		((UGaSettingObject*)Obj)->bShowGaUnit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnit = { "bShowGaUnit", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGaSettingObject), &Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe7\xa6\xbb\xe5\xbc\x80\xe7\xbe\xa4\xe7\xbb\x84\xe6\x93\x8d\xe4\xbd\x9c\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x90\x8e\xe7\xbb\xa7\xe7\xbb\xad\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84unit\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe7\xa6\xbb\xe5\xbc\x80\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x90\x8e\xe7\xbb\xa7\xe7\xbb\xad\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x9c\xa8\xe7\xa6\xbb\xe5\xbc\x80\xe7\xbe\xa4\xe7\xbb\x84\xe6\x93\x8d\xe4\xbd\x9c\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x90\x8e\xe7\xbb\xa7\xe7\xbb\xad\xe6\x98\xbe\xe7\xa4\xba\xe7\xbe\xa4\xe7\xbb\x84unit" },
	};
#endif
	void Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_SetBit(void* Obj)
	{
		((UGaSettingObject*)Obj)->bShowGaUnitWhenLeaveGaMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnitWhenLeaveGaMode = { "bShowGaUnitWhenLeaveGaMode", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGaSettingObject), &Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnitWhenLeaveGaMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bPaintSkeletalMesh_MetaData[] = {
		{ "Category", "\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\xe7\xbb\x98\xe5\x88\xb6" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe7\xbb\x98\xe5\x88\xb6\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
	};
#endif
	void Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bPaintSkeletalMesh_SetBit(void* Obj)
	{
		((UGaSettingObject*)Obj)->bPaintSkeletalMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bPaintSkeletalMesh = { "bPaintSkeletalMesh", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGaSettingObject), &Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bPaintSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bPaintSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bPaintSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bAutoCreateGUID_MetaData[] = {
		{ "Category", "\xe5\x85\xb6\xe4\xbb\x96\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90GUID\n" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe7\xbb\x99\xe7\xbe\xa4\xe7\xbb\x84\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90GUID" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\x87\xaa\xe5\x8a\xa8\xe7\x94\x9f\xe6\x88\x90GUID" },
	};
#endif
	void Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bAutoCreateGUID_SetBit(void* Obj)
	{
		((UGaSettingObject*)Obj)->bAutoCreateGUID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bAutoCreateGUID = { "bAutoCreateGUID", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGaSettingObject), &Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bAutoCreateGUID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bAutoCreateGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bAutoCreateGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_brushRadius_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe7\xbb\x98\xe5\x88\xb6\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe5\x88\xb7\xe5\xad\x90\xe5\x8d\x8a\xe5\xbe\x84\n" },
		{ "DisplayName", "\xe7\xac\x94\xe5\x88\xb7\xe5\x8d\x8a\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe5\x88\xb7\xe5\xad\x90\xe5\x8d\x8a\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_brushRadius = { "brushRadius", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGaSettingObject, brushRadius), METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_brushRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_brushRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGaSettingObject_Statics::NewProp_density_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe7\xbb\x98\xe5\x88\xb6\xe8\xae\xbe\xe7\xbd\xae" },
		{ "Comment", "//\xe7\xbb\x98\xe5\x88\xb6\xe5\xaf\x86\xe5\xba\xa6\n" },
		{ "DisplayName", "\xe7\xbb\x98\xe5\x88\xb6\xe5\xaf\x86\xe5\xba\xa6" },
		{ "ModuleRelativePath", "Public/GaGroupUnit.h" },
		{ "ToolTip", "\xe7\xbb\x98\xe5\x88\xb6\xe5\xaf\x86\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGaSettingObject_Statics::NewProp_density = { "density", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGaSettingObject, density), METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_density_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::NewProp_density_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGaSettingObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_egcm_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_egcm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bSinglePaintMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowFormationBuilder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bShowGaUnitWhenLeaveGaMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bPaintSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_bAutoCreateGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_brushRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGaSettingObject_Statics::NewProp_density,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGaSettingObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaSettingObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGaSettingObject_Statics::ClassParams = {
		&UGaSettingObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGaSettingObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGaSettingObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGaSettingObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGaSettingObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGaSettingObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGaSettingObject, 2894854820);
	template<> GROUPACTION_API UClass* StaticClass<UGaSettingObject>()
	{
		return UGaSettingObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGaSettingObject(Z_Construct_UClass_UGaSettingObject, &UGaSettingObject::StaticClass, TEXT("/Script/groupAction"), TEXT("UGaSettingObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGaSettingObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
