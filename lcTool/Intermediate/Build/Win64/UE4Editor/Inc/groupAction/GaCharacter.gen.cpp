// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/GaCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGaCharacter() {}
// Cross Module References
	GROUPACTION_API UEnum* Z_Construct_UEnum_groupAction_EGaCharacterSmType();
	UPackage* Z_Construct_UPackage__Script_groupAction();
	GROUPACTION_API UClass* Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UBaseGaCharacterSmUnit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaCharacter_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UDeadGaCharacterSmUnit_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UDeadGaCharacterSmUnit();
	GROUPACTION_API UClass* Z_Construct_UClass_UAttackGaCharacterSmUnit_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UAttackGaCharacterSmUnit();
	GROUPACTION_API UClass* Z_Construct_UClass_UMoveGaCharacterSmUnit_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UMoveGaCharacterSmUnit();
	GROUPACTION_API UClass* Z_Construct_UClass_UIdleGaCharacterSmUnit_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UIdleGaCharacterSmUnit();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaCharacterData();
	GROUPACTION_API UClass* Z_Construct_UClass_ABaseFormationBuilder_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaGroupUnit_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaTargetPointActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EGaCharacterSmType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_groupAction_EGaCharacterSmType, Z_Construct_UPackage__Script_groupAction(), TEXT("EGaCharacterSmType"));
		}
		return Singleton;
	}
	template<> GROUPACTION_API UEnum* StaticEnum<EGaCharacterSmType>()
	{
		return EGaCharacterSmType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGaCharacterSmType(EGaCharacterSmType_StaticEnum, TEXT("/Script/groupAction"), TEXT("EGaCharacterSmType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_groupAction_EGaCharacterSmType_Hash() { return 889362974U; }
	UEnum* Z_Construct_UEnum_groupAction_EGaCharacterSmType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_groupAction();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGaCharacterSmType"), 0, Get_Z_Construct_UEnum_groupAction_EGaCharacterSmType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGaCharacterSmType::EGCMAT_Idle", (int64)EGaCharacterSmType::EGCMAT_Idle },
				{ "EGaCharacterSmType::EGCMAT_Move", (int64)EGaCharacterSmType::EGCMAT_Move },
				{ "EGaCharacterSmType::EGCMAT_Attack", (int64)EGaCharacterSmType::EGCMAT_Attack },
				{ "EGaCharacterSmType::EGCMAT_Dead", (int64)EGaCharacterSmType::EGCMAT_Dead },
				{ "EGaCharacterSmType::EGCMAT_BeAttack", (int64)EGaCharacterSmType::EGCMAT_BeAttack },
				{ "EGaCharacterSmType::EGCMAT_RunAway", (int64)EGaCharacterSmType::EGCMAT_RunAway },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "//\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8a\xa8\xe7\x94\xbb\xe7\xb1\xbb\xe5\x9e\x8b\n" },
				{ "EGCMAT_Attack.Name", "EGaCharacterSmType::EGCMAT_Attack" },
				{ "EGCMAT_BeAttack.Comment", "//\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb\n" },
				{ "EGCMAT_BeAttack.Name", "EGaCharacterSmType::EGCMAT_BeAttack" },
				{ "EGCMAT_BeAttack.ToolTip", "\xe8\xa2\xab\xe6\x94\xbb\xe5\x87\xbb" },
				{ "EGCMAT_Dead.Name", "EGaCharacterSmType::EGCMAT_Dead" },
				{ "EGCMAT_Idle.Name", "EGaCharacterSmType::EGCMAT_Idle" },
				{ "EGCMAT_Move.Name", "EGaCharacterSmType::EGCMAT_Move" },
				{ "EGCMAT_RunAway.Comment", "//\xe9\x80\x83\xe8\xb7\x91\n" },
				{ "EGCMAT_RunAway.Name", "EGaCharacterSmType::EGCMAT_RunAway" },
				{ "EGCMAT_RunAway.ToolTip", "\xe9\x80\x83\xe8\xb7\x91" },
				{ "ModuleRelativePath", "Public/GaCharacter.h" },
				{ "ToolTip", "\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8a\xa8\xe7\x94\xbb\xe7\xb1\xbb\xe5\x9e\x8b" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_groupAction,
				nullptr,
				"EGaCharacterSmType",
				"EGaCharacterSmType",
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
	DEFINE_FUNCTION(UBaseGaCharacterSmUnit::execBootCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->BootCheck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseGaCharacterSmUnit::execSmUnitTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SmUnitTick_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseGaCharacterSmUnit::execExitSmUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitSmUnit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseGaCharacterSmUnit::execBootSmUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BootSmUnit_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UBaseGaCharacterSmUnit_BootCheck = FName(TEXT("BootCheck"));
	int32 UBaseGaCharacterSmUnit::BootCheck()
	{
		BaseGaCharacterSmUnit_eventBootCheck_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UBaseGaCharacterSmUnit_BootCheck),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseGaCharacterSmUnit_BootSmUnit = FName(TEXT("BootSmUnit"));
	void UBaseGaCharacterSmUnit::BootSmUnit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseGaCharacterSmUnit_BootSmUnit),NULL);
	}
	static FName NAME_UBaseGaCharacterSmUnit_ExitSmUnit = FName(TEXT("ExitSmUnit"));
	void UBaseGaCharacterSmUnit::ExitSmUnit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseGaCharacterSmUnit_ExitSmUnit),NULL);
	}
	static FName NAME_UBaseGaCharacterSmUnit_SmUnitTick = FName(TEXT("SmUnitTick"));
	void UBaseGaCharacterSmUnit::SmUnitTick()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseGaCharacterSmUnit_SmUnitTick),NULL);
	}
	void UBaseGaCharacterSmUnit::StaticRegisterNativesUBaseGaCharacterSmUnit()
	{
		UClass* Class = UBaseGaCharacterSmUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BootCheck", &UBaseGaCharacterSmUnit::execBootCheck },
			{ "BootSmUnit", &UBaseGaCharacterSmUnit::execBootSmUnit },
			{ "ExitSmUnit", &UBaseGaCharacterSmUnit::execExitSmUnit },
			{ "SmUnitTick", &UBaseGaCharacterSmUnit::execSmUnitTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseGaCharacterSmUnit_eventBootCheck_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGaCharacterSmUnit, nullptr, "BootCheck", nullptr, nullptr, sizeof(BaseGaCharacterSmUnit_eventBootCheck_Parms), Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGaCharacterSmUnit, nullptr, "BootSmUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGaCharacterSmUnit, nullptr, "ExitSmUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGaCharacterSmUnit, nullptr, "SmUnitTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister()
	{
		return UBaseGaCharacterSmUnit::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_gaCharacterMcType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaCharacterMcType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gaCharacterMcType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smUnitPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_smUnitPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gaCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootCheck, "BootCheck" }, // 2039950862
		{ &Z_Construct_UFunction_UBaseGaCharacterSmUnit_BootSmUnit, "BootSmUnit" }, // 1815843620
		{ &Z_Construct_UFunction_UBaseGaCharacterSmUnit_ExitSmUnit, "ExitSmUnit" }, // 3326689124
		{ &Z_Construct_UFunction_UBaseGaCharacterSmUnit_SmUnitTick, "SmUnitTick" }, // 2303972584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8d\x95\xe5\x85\x83\n" },
		{ "IncludePath", "GaCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8d\x95\xe5\x85\x83" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacterMcType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacterMcType_MetaData[] = {
		{ "Comment", "//\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacterMcType = { "gaCharacterMcType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGaCharacterSmUnit, gaCharacterMcType), Z_Construct_UEnum_groupAction_EGaCharacterSmType, METADATA_PARAMS(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacterMcType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacterMcType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_smUnitPriority_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_smUnitPriority = { "smUnitPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGaCharacterSmUnit, smUnitPriority), METADATA_PARAMS(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_smUnitPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_smUnitPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe5\x8a\xa8\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe6\x98\xaf\xe5\x90\xa6\xe5\x90\xaf\xe5\x8a\xa8" },
	};
#endif
	void Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UBaseGaCharacterSmUnit*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseGaCharacterSmUnit), &Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacter_MetaData[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe8\xa7\x92\xe8\x89\xb2\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe8\xa7\x92\xe8\x89\xb2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacter = { "gaCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGaCharacterSmUnit, gaCharacter), Z_Construct_UClass_AGaCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacterMcType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacterMcType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_smUnitPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::NewProp_gaCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGaCharacterSmUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::ClassParams = {
		&UBaseGaCharacterSmUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGaCharacterSmUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGaCharacterSmUnit, 1304933128);
	template<> GROUPACTION_API UClass* StaticClass<UBaseGaCharacterSmUnit>()
	{
		return UBaseGaCharacterSmUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGaCharacterSmUnit(Z_Construct_UClass_UBaseGaCharacterSmUnit, &UBaseGaCharacterSmUnit::StaticClass, TEXT("/Script/groupAction"), TEXT("UBaseGaCharacterSmUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGaCharacterSmUnit);
	void UDeadGaCharacterSmUnit::StaticRegisterNativesUDeadGaCharacterSmUnit()
	{
	}
	UClass* Z_Construct_UClass_UDeadGaCharacterSmUnit_NoRegister()
	{
		return UDeadGaCharacterSmUnit::StaticClass();
	}
	struct Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseGaCharacterSmUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\n" },
		{ "IncludePath", "GaCharacter.h" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadGaCharacterSmUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics::ClassParams = {
		&UDeadGaCharacterSmUnit::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadGaCharacterSmUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadGaCharacterSmUnit, 2145840711);
	template<> GROUPACTION_API UClass* StaticClass<UDeadGaCharacterSmUnit>()
	{
		return UDeadGaCharacterSmUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadGaCharacterSmUnit(Z_Construct_UClass_UDeadGaCharacterSmUnit, &UDeadGaCharacterSmUnit::StaticClass, TEXT("/Script/groupAction"), TEXT("UDeadGaCharacterSmUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadGaCharacterSmUnit);
	void UAttackGaCharacterSmUnit::StaticRegisterNativesUAttackGaCharacterSmUnit()
	{
	}
	UClass* Z_Construct_UClass_UAttackGaCharacterSmUnit_NoRegister()
	{
		return UAttackGaCharacterSmUnit::StaticClass();
	}
	struct Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseGaCharacterSmUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\xe6\x94\xbb\xe5\x87\xbb\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\n" },
		{ "IncludePath", "GaCharacter.h" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackGaCharacterSmUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics::ClassParams = {
		&UAttackGaCharacterSmUnit::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackGaCharacterSmUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackGaCharacterSmUnit, 2612237523);
	template<> GROUPACTION_API UClass* StaticClass<UAttackGaCharacterSmUnit>()
	{
		return UAttackGaCharacterSmUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackGaCharacterSmUnit(Z_Construct_UClass_UAttackGaCharacterSmUnit, &UAttackGaCharacterSmUnit::StaticClass, TEXT("/Script/groupAction"), TEXT("UAttackGaCharacterSmUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackGaCharacterSmUnit);
	void UMoveGaCharacterSmUnit::StaticRegisterNativesUMoveGaCharacterSmUnit()
	{
	}
	UClass* Z_Construct_UClass_UMoveGaCharacterSmUnit_NoRegister()
	{
		return UMoveGaCharacterSmUnit::StaticClass();
	}
	struct Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseGaCharacterSmUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\n" },
		{ "IncludePath", "GaCharacter.h" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveGaCharacterSmUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics::ClassParams = {
		&UMoveGaCharacterSmUnit::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveGaCharacterSmUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveGaCharacterSmUnit, 3283694633);
	template<> GROUPACTION_API UClass* StaticClass<UMoveGaCharacterSmUnit>()
	{
		return UMoveGaCharacterSmUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveGaCharacterSmUnit(Z_Construct_UClass_UMoveGaCharacterSmUnit, &UMoveGaCharacterSmUnit::StaticClass, TEXT("/Script/groupAction"), TEXT("UMoveGaCharacterSmUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveGaCharacterSmUnit);
	void UIdleGaCharacterSmUnit::StaticRegisterNativesUIdleGaCharacterSmUnit()
	{
	}
	UClass* Z_Construct_UClass_UIdleGaCharacterSmUnit_NoRegister()
	{
		return UIdleGaCharacterSmUnit::StaticClass();
	}
	struct Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseGaCharacterSmUnit,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe5\xbe\x85\xe6\x9c\xba\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\n" },
		{ "IncludePath", "GaCharacter.h" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe5\xbe\x85\xe6\x9c\xba\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleGaCharacterSmUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics::ClassParams = {
		&UIdleGaCharacterSmUnit::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdleGaCharacterSmUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIdleGaCharacterSmUnit, 2972464635);
	template<> GROUPACTION_API UClass* StaticClass<UIdleGaCharacterSmUnit>()
	{
		return UIdleGaCharacterSmUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIdleGaCharacterSmUnit(Z_Construct_UClass_UIdleGaCharacterSmUnit, &UIdleGaCharacterSmUnit::StaticClass, TEXT("/Script/groupAction"), TEXT("UIdleGaCharacterSmUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleGaCharacterSmUnit);
	DEFINE_FUNCTION(AGaCharacter::execClosePossessAi)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosePossessAi();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execStopStateMachine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopStateMachine_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execStateMachineTickLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StateMachineTickLoop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execinitCharacterStateMachine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->initCharacterStateMachine_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execCanAttackEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAttackEnemy_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execSetCharacterId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterId(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execSetLerpRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_targetRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLerpRotation(Z_Param_targetRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execGetCharacterId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCharacterId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execExitCurrentUnit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitCurrentUnit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execSubCharacterHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_hp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubCharacterHp(Z_Param_hp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execSetIsBakeCharacter)
	{
		P_GET_UBOOL(Z_Param_isBake);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIsBakeCharacter(Z_Param_isBake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGaCharacter::execIsBakeCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBakeCharacter();
		P_NATIVE_END;
	}
	static FName NAME_AGaCharacter_CanAttackEnemy = FName(TEXT("CanAttackEnemy"));
	bool AGaCharacter::CanAttackEnemy()
	{
		GaCharacter_eventCanAttackEnemy_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AGaCharacter_CanAttackEnemy),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AGaCharacter_Dead = FName(TEXT("Dead"));
	void AGaCharacter::Dead()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGaCharacter_Dead),NULL);
	}
	static FName NAME_AGaCharacter_IdChange = FName(TEXT("IdChange"));
	void AGaCharacter::IdChange(int32 newId)
	{
		GaCharacter_eventIdChange_Parms Parms;
		Parms.newId=newId;
		ProcessEvent(FindFunctionChecked(NAME_AGaCharacter_IdChange),&Parms);
	}
	static FName NAME_AGaCharacter_initCharacterStateMachine = FName(TEXT("initCharacterStateMachine"));
	void AGaCharacter::initCharacterStateMachine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGaCharacter_initCharacterStateMachine),NULL);
	}
	static FName NAME_AGaCharacter_StateMachineTickLoop = FName(TEXT("StateMachineTickLoop"));
	void AGaCharacter::StateMachineTickLoop()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGaCharacter_StateMachineTickLoop),NULL);
	}
	static FName NAME_AGaCharacter_StopStateMachine = FName(TEXT("StopStateMachine"));
	void AGaCharacter::StopStateMachine()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGaCharacter_StopStateMachine),NULL);
	}
	void AGaCharacter::StaticRegisterNativesAGaCharacter()
	{
		UClass* Class = AGaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAttackEnemy", &AGaCharacter::execCanAttackEnemy },
			{ "ClosePossessAi", &AGaCharacter::execClosePossessAi },
			{ "ExitCurrentUnit", &AGaCharacter::execExitCurrentUnit },
			{ "GetCharacterId", &AGaCharacter::execGetCharacterId },
			{ "initCharacterStateMachine", &AGaCharacter::execinitCharacterStateMachine },
			{ "IsBakeCharacter", &AGaCharacter::execIsBakeCharacter },
			{ "SetCharacterId", &AGaCharacter::execSetCharacterId },
			{ "SetIsBakeCharacter", &AGaCharacter::execSetIsBakeCharacter },
			{ "SetLerpRotation", &AGaCharacter::execSetLerpRotation },
			{ "StateMachineTickLoop", &AGaCharacter::execStateMachineTickLoop },
			{ "StopStateMachine", &AGaCharacter::execStopStateMachine },
			{ "SubCharacterHp", &AGaCharacter::execSubCharacterHp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaCharacter_eventCanAttackEnemy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GaCharacter_eventCanAttackEnemy_Parms), &Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "gacharacter" },
		{ "Comment", "//\xe8\x83\xbd\xe5\x90\xa6\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\x8c\xe4\xba\xba\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe8\x83\xbd\xe5\x90\xa6\xe6\x94\xbb\xe5\x87\xbb\xe6\x95\x8c\xe4\xba\xba" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "CanAttackEnemy", nullptr, nullptr, sizeof(GaCharacter_eventCanAttackEnemy_Parms), Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_CanAttackEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_CanAttackEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_ClosePossessAi_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_ClosePossessAi_Statics::Function_MetaDataParams[] = {
		{ "Category", "gacharacter" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_ClosePossessAi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "ClosePossessAi", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_ClosePossessAi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_ClosePossessAi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_ClosePossessAi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_ClosePossessAi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_Dead_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_Dead_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xbb\xe4\xba\xa1\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xbb\xe4\xba\xa1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_Dead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "Dead", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_Dead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_Dead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_Dead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_Dead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "GaCharacter" },
		{ "Comment", "//\xe9\x80\x80\xe5\x87\xba\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8d\x95\xe5\x85\x83\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe9\x80\x80\xe5\x87\xba\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8d\x95\xe5\x85\x83" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "ExitCurrentUnit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics
	{
		struct GaCharacter_eventGetCharacterId_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaCharacter_eventGetCharacterId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "GetCharacterId", nullptr, nullptr, sizeof(GaCharacter_eventGetCharacterId_Parms), Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_GetCharacterId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_GetCharacterId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_IdChange_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGaCharacter_IdChange_Statics::NewProp_newId = { "newId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaCharacter_eventIdChange_Parms, newId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_IdChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_IdChange_Statics::NewProp_newId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_IdChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x88\x87\xe6\x8d\xa2\xe6\x96\xb0ID,\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0,\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\x8d\xe6\x9b\xb4\xe6\x94\xb9\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe6\x96\xb0ID,\xe8\x93\x9d\xe5\x9b\xbe\xe5\xae\x9e\xe7\x8e\xb0,\xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\x8d\xe6\x9b\xb4\xe6\x94\xb9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_IdChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "IdChange", nullptr, nullptr, sizeof(GaCharacter_eventIdChange_Parms), Z_Construct_UFunction_AGaCharacter_IdChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_IdChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_IdChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_IdChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_IdChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_IdChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "initCharacterStateMachine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics
	{
		struct GaCharacter_eventIsBakeCharacter_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaCharacter_eventIsBakeCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GaCharacter_eventIsBakeCharacter_Parms), &Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "IsBakeCharacter", nullptr, nullptr, sizeof(GaCharacter_eventIsBakeCharacter_Parms), Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_IsBakeCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_IsBakeCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics
	{
		struct GaCharacter_eventSetCharacterId_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaCharacter_eventSetCharacterId_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::Function_MetaDataParams[] = {
		{ "Category", "GaCharacter" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "SetCharacterId", nullptr, nullptr, sizeof(GaCharacter_eventSetCharacterId_Parms), Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_SetCharacterId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_SetCharacterId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics
	{
		struct GaCharacter_eventSetIsBakeCharacter_Parms
		{
			bool isBake;
			bool ReturnValue;
		};
		static void NewProp_isBake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBake;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_isBake_SetBit(void* Obj)
	{
		((GaCharacter_eventSetIsBakeCharacter_Parms*)Obj)->isBake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_isBake = { "isBake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GaCharacter_eventSetIsBakeCharacter_Parms), &Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_isBake_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GaCharacter_eventSetIsBakeCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GaCharacter_eventSetIsBakeCharacter_Parms), &Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_isBake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "SetIsBakeCharacter", nullptr, nullptr, sizeof(GaCharacter_eventSetIsBakeCharacter_Parms), Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics
	{
		struct GaCharacter_eventSetLerpRotation_Parms
		{
			FRotator targetRotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::NewProp_targetRotation = { "targetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaCharacter_eventSetLerpRotation_Parms, targetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::NewProp_targetRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe7\x9b\xae\xe6\xa0\x87\xe6\x8f\x92\xe5\x80\xbc\xe6\x97\x8b\xe8\xbd\xac\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x9b\xae\xe6\xa0\x87\xe6\x8f\x92\xe5\x80\xbc\xe6\x97\x8b\xe8\xbd\xac" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "SetLerpRotation", nullptr, nullptr, sizeof(GaCharacter_eventSetLerpRotation_Parms), Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_SetLerpRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_SetLerpRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xbatick\xe5\xbe\xaa\xe7\x8e\xaf\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xbatick\xe5\xbe\xaa\xe7\x8e\xaf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "StateMachineTickLoop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_StopStateMachine_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_StopStateMachine_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe5\x81\x9c\xe6\xad\xa2\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_StopStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "StopStateMachine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_StopStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_StopStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_StopStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_StopStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics
	{
		struct GaCharacter_eventSubCharacterHp_Parms
		{
			int32 hp;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_hp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GaCharacter_eventSubCharacterHp_Parms, hp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::NewProp_hp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::Function_MetaDataParams[] = {
		{ "Category", "formation build data" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = \"\xe5\x8f\x98\xe6\x8d\xa2\xe4\xbf\xae\xe6\xad\xa3\"), Category = \"\xe7\x83\x98\xe7\x84\x99\xe4\xbf\xae\xe6\xad\xa3\")\n//\x09""FTransform changeTransform;\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = \"\xe5\x8f\x98\xe6\x8d\xa2\xe4\xbf\xae\xe6\xad\xa3\"), Category = \"\xe7\x83\x98\xe7\x84\x99\xe4\xbf\xae\xe6\xad\xa3\")\n       FTransform changeTransform;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGaCharacter, nullptr, "SubCharacterHp", nullptr, nullptr, sizeof(GaCharacter_eventSubCharacterHp_Parms), Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGaCharacter_SubCharacterHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGaCharacter_SubCharacterHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGaCharacter_NoRegister()
	{
		return AGaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseForBuilderUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_baseForBuilderUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gaUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinish_MetaData[];
#endif
		static void NewProp_bFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[];
#endif
		static void NewProp_bDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomDeadRotation_MetaData[];
#endif
		static void NewProp_randomDeadRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_randomDeadRotation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_targetArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetViewport_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetViewport;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lerpTargetRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lerpTargetRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceIdleStateMachineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_replaceIdleStateMachineClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceMoveStateMachineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_replaceMoveStateMachineClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceDeadStateMachineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_replaceDeadStateMachineClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_replaceAttackStateMachineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_replaceAttackStateMachineClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_smUnitArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_smUnitArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_smUnitArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentSmUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentSmUnit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGaCharacter_CanAttackEnemy, "CanAttackEnemy" }, // 619852771
		{ &Z_Construct_UFunction_AGaCharacter_ClosePossessAi, "ClosePossessAi" }, // 3985476321
		{ &Z_Construct_UFunction_AGaCharacter_Dead, "Dead" }, // 864677257
		{ &Z_Construct_UFunction_AGaCharacter_ExitCurrentUnit, "ExitCurrentUnit" }, // 3079201809
		{ &Z_Construct_UFunction_AGaCharacter_GetCharacterId, "GetCharacterId" }, // 3617216738
		{ &Z_Construct_UFunction_AGaCharacter_IdChange, "IdChange" }, // 403606985
		{ &Z_Construct_UFunction_AGaCharacter_initCharacterStateMachine, "initCharacterStateMachine" }, // 3643027203
		{ &Z_Construct_UFunction_AGaCharacter_IsBakeCharacter, "IsBakeCharacter" }, // 2452189138
		{ &Z_Construct_UFunction_AGaCharacter_SetCharacterId, "SetCharacterId" }, // 665780361
		{ &Z_Construct_UFunction_AGaCharacter_SetIsBakeCharacter, "SetIsBakeCharacter" }, // 1480678066
		{ &Z_Construct_UFunction_AGaCharacter_SetLerpRotation, "SetLerpRotation" }, // 1772636232
		{ &Z_Construct_UFunction_AGaCharacter_StateMachineTickLoop, "StateMachineTickLoop" }, // 1364928630
		{ &Z_Construct_UFunction_AGaCharacter_StopStateMachine, "StopStateMachine" }, // 2176308592
		{ &Z_Construct_UFunction_AGaCharacter_SubCharacterHp, "SubCharacterHp" }, // 2886206789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GaCharacter.h" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_characterData_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "Comment", "//\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\xbe\xa4\xe7\xbb\x84\xe8\xa7\x92\xe8\x89\xb2\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_characterData = { "characterData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, characterData), Z_Construct_UScriptStruct_FGaCharacterData, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_characterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_characterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_baseForBuilderUnit_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_baseForBuilderUnit = { "baseForBuilderUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, baseForBuilderUnit), Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_baseForBuilderUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_baseForBuilderUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_gaUnit_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_gaUnit = { "gaUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, gaUnit), Z_Construct_UClass_AGaGroupUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_gaUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_gaUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentTarget_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentTarget = { "currentTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, currentTarget), Z_Construct_UClass_AGaTargetPointActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_bFinish_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGaCharacter_Statics::NewProp_bFinish_SetBit(void* Obj)
	{
		((AGaCharacter*)Obj)->bFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_bFinish = { "bFinish", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaCharacter), &Z_Construct_UClass_AGaCharacter_Statics::NewProp_bFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_bFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_bFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_bDead_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "Comment", "//\xe6\xad\xbb\xe4\xba\xa1\xe6\xa0\x87\xe5\xbf\x97\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe6\xad\xbb\xe4\xba\xa1\xe6\xa0\x87\xe5\xbf\x97" },
	};
#endif
	void Z_Construct_UClass_AGaCharacter_Statics::NewProp_bDead_SetBit(void* Obj)
	{
		((AGaCharacter*)Obj)->bDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaCharacter), &Z_Construct_UClass_AGaCharacter_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_bDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_bDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_randomDeadRotation_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGaCharacter_Statics::NewProp_randomDeadRotation_SetBit(void* Obj)
	{
		((AGaCharacter*)Obj)->randomDeadRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_randomDeadRotation = { "randomDeadRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGaCharacter), &Z_Construct_UClass_AGaCharacter_Statics::NewProp_randomDeadRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_randomDeadRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_randomDeadRotation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetArr_Inner = { "targetArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGaTargetPointActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetArr_MetaData[] = {
		{ "Category", "\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
		{ "Comment", "//\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe7\xbb\x84\n" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe6\x95\xb0\xe7\xbb\x84" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetArr = { "targetArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, targetArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetViewport_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "Comment", "//\xe7\x9b\xae\xe6\xa0\x87\xe8\xa7\x86\xe7\x82\xb9\n" },
		{ "DisplayName", "\xe7\x9b\xae\xe6\xa0\x87\xe8\xa7\x86\xe7\x82\xb9" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe8\xa7\x86\xe7\x82\xb9" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetViewport = { "targetViewport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, targetViewport), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetViewport_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_lerpTargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_lerpTargetRotation = { "lerpTargetRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, lerpTargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_lerpTargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_lerpTargetRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceIdleStateMachineClass_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "DisplayName", "\xe6\x9b\xbf\xe6\x8d\xa2\xe5\xbe\x85\xe6\x9c\xba\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceIdleStateMachineClass = { "replaceIdleStateMachineClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, replaceIdleStateMachineClass), Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceIdleStateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceIdleStateMachineClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceMoveStateMachineClass_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "DisplayName", "\xe6\x9b\xbf\xe6\x8d\xa2\xe7\xa7\xbb\xe5\x8a\xa8\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceMoveStateMachineClass = { "replaceMoveStateMachineClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, replaceMoveStateMachineClass), Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceMoveStateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceMoveStateMachineClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceDeadStateMachineClass_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "DisplayName", "\xe6\x9b\xbf\xe6\x8d\xa2\xe6\xad\xbb\xe4\xba\xa1\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceDeadStateMachineClass = { "replaceDeadStateMachineClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, replaceDeadStateMachineClass), Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceDeadStateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceDeadStateMachineClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceAttackStateMachineClass_MetaData[] = {
		{ "Category", "GaCharacter" },
		{ "DisplayName", "\xe6\x9b\xbf\xe6\x8d\xa2\xe6\x94\xbb\xe5\x87\xbb\xe5\xbe\x85\xe6\x9c\xba\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceAttackStateMachineClass = { "replaceAttackStateMachineClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, replaceAttackStateMachineClass), Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceAttackStateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceAttackStateMachineClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_smUnitArr_Inner = { "smUnitArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_smUnitArr_MetaData[] = {
		{ "Comment", "//\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe7\xbb\x84\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe7\xbb\x84" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_smUnitArr = { "smUnitArr", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, smUnitArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_smUnitArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_smUnitArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentSmUnit_MetaData[] = {
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\n" },
		{ "ModuleRelativePath", "Public/GaCharacter.h" },
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentSmUnit = { "currentSmUnit", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGaCharacter, currentSmUnit), Z_Construct_UClass_UBaseGaCharacterSmUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentSmUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentSmUnit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGaCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_characterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_baseForBuilderUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_gaUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_bFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_bDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_randomDeadRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_targetViewport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_lerpTargetRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceIdleStateMachineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceMoveStateMachineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceDeadStateMachineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_replaceAttackStateMachineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_smUnitArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_smUnitArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGaCharacter_Statics::NewProp_currentSmUnit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGaCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGaCharacter_Statics::ClassParams = {
		&AGaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGaCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGaCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGaCharacter, 114568818);
	template<> GROUPACTION_API UClass* StaticClass<AGaCharacter>()
	{
		return AGaCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGaCharacter(Z_Construct_UClass_AGaCharacter, &AGaCharacter::StaticClass, TEXT("/Script/groupAction"), TEXT("AGaCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGaCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
