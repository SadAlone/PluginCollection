// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "groupAction/Public/groupActionGISS.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegroupActionGISS() {}
// Cross Module References
	GROUPACTION_API UClass* Z_Construct_UClass_UGroupActionGISS_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UGroupActionGISS();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_groupAction();
	GROUPACTION_API UClass* Z_Construct_UClass_UGroupActionEngineSS_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UGroupActionEngineSS();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	GROUPACTION_API UClass* Z_Construct_UClass_ABaseFormationBuilder_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_AGaGroupUnit_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaFormationSaveData();
	GROUPACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGaUnitSaveData();
	GROUPACTION_API UClass* Z_Construct_UClass_UGroupActionSaveGame_NoRegister();
	GROUPACTION_API UClass* Z_Construct_UClass_UGaSettingObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGroupActionGISS::execDisposeLandscapeCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisposeLandscapeCollision();
		P_NATIVE_END;
	}
	void UGroupActionGISS::StaticRegisterNativesUGroupActionGISS()
	{
		UClass* Class = UGroupActionGISS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisposeLandscapeCollision", &UGroupActionGISS::execDisposeLandscapeCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionGISS, nullptr, "DisposeLandscapeCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGroupActionGISS_NoRegister()
	{
		return UGroupActionGISS::StaticClass();
	}
	struct Z_Construct_UClass_UGroupActionGISS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeInit_MetaData[];
#endif
		static void NewProp_bLandscapeInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeInit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupActionGISS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroupActionGISS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroupActionGISS_DisposeLandscapeCollision, "DisposeLandscapeCollision" }, // 3598658720
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionGISS_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "groupActionGISS.h" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionGISS_Statics::NewProp_bLandscapeInit_MetaData[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	void Z_Construct_UClass_UGroupActionGISS_Statics::NewProp_bLandscapeInit_SetBit(void* Obj)
	{
		((UGroupActionGISS*)Obj)->bLandscapeInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupActionGISS_Statics::NewProp_bLandscapeInit = { "bLandscapeInit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGroupActionGISS), &Z_Construct_UClass_UGroupActionGISS_Statics::NewProp_bLandscapeInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupActionGISS_Statics::NewProp_bLandscapeInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionGISS_Statics::NewProp_bLandscapeInit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupActionGISS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionGISS_Statics::NewProp_bLandscapeInit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupActionGISS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupActionGISS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGroupActionGISS_Statics::ClassParams = {
		&UGroupActionGISS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGroupActionGISS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionGISS_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupActionGISS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionGISS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupActionGISS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGroupActionGISS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGroupActionGISS, 1552709028);
	template<> GROUPACTION_API UClass* StaticClass<UGroupActionGISS>()
	{
		return UGroupActionGISS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGroupActionGISS(Z_Construct_UClass_UGroupActionGISS, &UGroupActionGISS::StaticClass, TEXT("/Script/groupAction"), TEXT("UGroupActionGISS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupActionGISS);
	DEFINE_FUNCTION(UGroupActionEngineSS::execLcChangeFormationGuid)
	{
		P_GET_OBJECT(ABaseFormationBuilder,Z_Param_formation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LcChangeFormationGuid(Z_Param_formation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execLoadGroupActionSettingSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGroupActionSettingSave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execLoadGroupActionUnitSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGroupActionUnitSave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execGetUnitSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGroupActionSaveGame**)Z_Param__Result=P_THIS->GetUnitSaveGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execAddFormationSaveDataAndSave)
	{
		P_GET_OBJECT(ABaseFormationBuilder,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFormationSaveDataAndSave(Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execAddUnitSaveDataAndSaveUn)
	{
		P_GET_OBJECT(AGaGroupUnit,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUnitSaveDataAndSaveUn(Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execAddUnitSaveDataAndSaveBF)
	{
		P_GET_OBJECT(ABaseFormationBuilder,Z_Param_unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUnitSaveDataAndSaveBF(Z_Param_unit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execGetSpeicailGuidFormationSaveData)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGaFormationSaveData*)Z_Param__Result=P_THIS->GetSpeicailGuidFormationSaveData(Z_Param_Out_guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroupActionEngineSS::execGetSpeicailGuidUnitSaveData)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGaUnitSaveData*)Z_Param__Result=P_THIS->GetSpeicailGuidUnitSaveData(Z_Param_Out_guid);
		P_NATIVE_END;
	}
	void UGroupActionEngineSS::StaticRegisterNativesUGroupActionEngineSS()
	{
		UClass* Class = UGroupActionEngineSS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFormationSaveDataAndSave", &UGroupActionEngineSS::execAddFormationSaveDataAndSave },
			{ "AddUnitSaveDataAndSaveBF", &UGroupActionEngineSS::execAddUnitSaveDataAndSaveBF },
			{ "AddUnitSaveDataAndSaveUn", &UGroupActionEngineSS::execAddUnitSaveDataAndSaveUn },
			{ "GetSpeicailGuidFormationSaveData", &UGroupActionEngineSS::execGetSpeicailGuidFormationSaveData },
			{ "GetSpeicailGuidUnitSaveData", &UGroupActionEngineSS::execGetSpeicailGuidUnitSaveData },
			{ "GetUnitSaveGame", &UGroupActionEngineSS::execGetUnitSaveGame },
			{ "LcChangeFormationGuid", &UGroupActionEngineSS::execLcChangeFormationGuid },
			{ "LoadGroupActionSettingSave", &UGroupActionEngineSS::execLoadGroupActionSettingSave },
			{ "LoadGroupActionUnitSave", &UGroupActionEngineSS::execLoadGroupActionUnitSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics
	{
		struct GroupActionEngineSS_eventAddFormationSaveDataAndSave_Parms
		{
			ABaseFormationBuilder* unit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventAddFormationSaveDataAndSave_Parms, unit), Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe9\x98\xb5\xe5\x9e\x8b\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe5\x88\xb0map\xe9\xa1\xba\xe4\xbe\xbf\xe4\xbf\x9d\xe5\xad\x98\n" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe9\x98\xb5\xe5\x9e\x8b\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe5\x88\xb0map\xe9\xa1\xba\xe4\xbe\xbf\xe4\xbf\x9d\xe5\xad\x98" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "AddFormationSaveDataAndSave", nullptr, nullptr, sizeof(GroupActionEngineSS_eventAddFormationSaveDataAndSave_Parms), Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics
	{
		struct GroupActionEngineSS_eventAddUnitSaveDataAndSaveBF_Parms
		{
			ABaseFormationBuilder* unit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventAddUnitSaveDataAndSaveBF_Parms, unit), Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0unit\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe5\x88\xb0map\xe9\xa1\xba\xe4\xbe\xbf\xe4\xbf\x9d\xe5\xad\x98\n" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0unit\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe5\x88\xb0map\xe9\xa1\xba\xe4\xbe\xbf\xe4\xbf\x9d\xe5\xad\x98" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "AddUnitSaveDataAndSaveBF", nullptr, nullptr, sizeof(GroupActionEngineSS_eventAddUnitSaveDataAndSaveBF_Parms), Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics
	{
		struct GroupActionEngineSS_eventAddUnitSaveDataAndSaveUn_Parms
		{
			AGaGroupUnit* unit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::NewProp_unit = { "unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventAddUnitSaveDataAndSaveUn_Parms, unit), Z_Construct_UClass_AGaGroupUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::NewProp_unit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "AddUnitSaveDataAndSaveUn", nullptr, nullptr, sizeof(GroupActionEngineSS_eventAddUnitSaveDataAndSaveUn_Parms), Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics
	{
		struct GroupActionEngineSS_eventGetSpeicailGuidFormationSaveData_Parms
		{
			FGuid guid;
			FGaFormationSaveData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventGetSpeicailGuidFormationSaveData_Parms, guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventGetSpeicailGuidFormationSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGaFormationSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::NewProp_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aguid\xe4\xbf\x9d\xe5\xad\x98\xe9\x98\xb5\xe5\x9e\x8b\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aguid\xe4\xbf\x9d\xe5\xad\x98\xe9\x98\xb5\xe5\x9e\x8b\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "GetSpeicailGuidFormationSaveData", nullptr, nullptr, sizeof(GroupActionEngineSS_eventGetSpeicailGuidFormationSaveData_Parms), Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics
	{
		struct GroupActionEngineSS_eventGetSpeicailGuidUnitSaveData_Parms
		{
			FGuid guid;
			FGaUnitSaveData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventGetSpeicailGuidUnitSaveData_Parms, guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventGetSpeicailGuidUnitSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGaUnitSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::NewProp_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aguid\xe4\xbf\x9d\xe5\xad\x98\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\x8c\x87\xe5\xae\x9aguid\xe4\xbf\x9d\xe5\xad\x98\xe5\x8d\x95\xe5\x85\x83\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "GetSpeicailGuidUnitSaveData", nullptr, nullptr, sizeof(GroupActionEngineSS_eventGetSpeicailGuidUnitSaveData_Parms), Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics
	{
		struct GroupActionEngineSS_eventGetUnitSaveGame_Parms
		{
			UGroupActionSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventGetUnitSaveGame_Parms, ReturnValue), Z_Construct_UClass_UGroupActionSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbf\x9d\xe5\xad\x98\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbf\x9d\xe5\xad\x98\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "GetUnitSaveGame", nullptr, nullptr, sizeof(GroupActionEngineSS_eventGetUnitSaveGame_Parms), Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics
	{
		struct GroupActionEngineSS_eventLcChangeFormationGuid_Parms
		{
			ABaseFormationBuilder* formation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_formation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::NewProp_formation = { "formation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GroupActionEngineSS_eventLcChangeFormationGuid_Parms, formation), Z_Construct_UClass_ABaseFormationBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::NewProp_formation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "LcChangeFormationGuid", nullptr, nullptr, sizeof(GroupActionEngineSS_eventLcChangeFormationGuid_Parms), Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "LoadGroupActionSettingSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "groupActionGISS" },
		{ "Comment", "//\xe8\xbd\xbd\xe5\x85\xa5\xe7\xbe\xa4\xe7\xbb\x84\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
		{ "ToolTip", "\xe8\xbd\xbd\xe5\x85\xa5\xe7\xbe\xa4\xe7\xbb\x84\xe4\xbf\x9d\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroupActionEngineSS, nullptr, "LoadGroupActionUnitSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGroupActionEngineSS_NoRegister()
	{
		return UGroupActionEngineSS::StaticClass();
	}
	struct Z_Construct_UClass_UGroupActionEngineSS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unitSaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_unitSaveGame;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_unitSaveDataMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_unitSaveDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unitSaveDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_unitSaveDataMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_formationSaveDataMap_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_formationSaveDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_formationSaveDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_formationSaveDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gaSettingObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gaSettingObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupActionEngineSS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_groupAction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroupActionEngineSS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroupActionEngineSS_AddFormationSaveDataAndSave, "AddFormationSaveDataAndSave" }, // 3796907313
		{ &Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveBF, "AddUnitSaveDataAndSaveBF" }, // 2971506754
		{ &Z_Construct_UFunction_UGroupActionEngineSS_AddUnitSaveDataAndSaveUn, "AddUnitSaveDataAndSaveUn" }, // 207609559
		{ &Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidFormationSaveData, "GetSpeicailGuidFormationSaveData" }, // 2545407659
		{ &Z_Construct_UFunction_UGroupActionEngineSS_GetSpeicailGuidUnitSaveData, "GetSpeicailGuidUnitSaveData" }, // 3888960644
		{ &Z_Construct_UFunction_UGroupActionEngineSS_GetUnitSaveGame, "GetUnitSaveGame" }, // 28920593
		{ &Z_Construct_UFunction_UGroupActionEngineSS_LcChangeFormationGuid, "LcChangeFormationGuid" }, // 3851987052
		{ &Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionSettingSave, "LoadGroupActionSettingSave" }, // 1443146240
		{ &Z_Construct_UFunction_UGroupActionEngineSS_LoadGroupActionUnitSave, "LoadGroupActionUnitSave" }, // 3768191810
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionEngineSS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "groupActionGISS.h" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveGame_MetaData[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveGame = { "unitSaveGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroupActionEngineSS, unitSaveGame), Z_Construct_UClass_UGroupActionSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveGame_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap_ValueProp = { "unitSaveDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGaUnitSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap_Key_KeyProp = { "unitSaveDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap_MetaData[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap = { "unitSaveDataMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroupActionEngineSS, unitSaveDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap_ValueProp = { "formationSaveDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGaFormationSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap_Key_KeyProp = { "formationSaveDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap_MetaData[] = {
		{ "Category", "groupActionGISS" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap = { "formationSaveDataMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroupActionEngineSS, formationSaveDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_gaSettingObj_MetaData[] = {
		{ "Category", "\xe7\xbe\xa4\xe7\xbb\x84\xe6\x98\xbe\xe7\xa4\xba\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/groupActionGISS.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_gaSettingObj = { "gaSettingObj", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGroupActionEngineSS, gaSettingObj), Z_Construct_UClass_UGaSettingObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_gaSettingObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_gaSettingObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupActionEngineSS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_unitSaveDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_formationSaveDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupActionEngineSS_Statics::NewProp_gaSettingObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupActionEngineSS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupActionEngineSS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGroupActionEngineSS_Statics::ClassParams = {
		&UGroupActionEngineSS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGroupActionEngineSS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionEngineSS_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupActionEngineSS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupActionEngineSS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupActionEngineSS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGroupActionEngineSS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGroupActionEngineSS, 3700965527);
	template<> GROUPACTION_API UClass* StaticClass<UGroupActionEngineSS>()
	{
		return UGroupActionEngineSS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGroupActionEngineSS(Z_Construct_UClass_UGroupActionEngineSS, &UGroupActionEngineSS::StaticClass, TEXT("/Script/groupAction"), TEXT("UGroupActionEngineSS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupActionEngineSS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
