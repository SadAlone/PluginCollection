// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lcTool/Public/lcLevelToolLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelcLevelToolLibrary() {}
// Cross Module References
	LCTOOL_API UClass* Z_Construct_UClass_UlcLevelToolLibrary_NoRegister();
	LCTOOL_API UClass* Z_Construct_UClass_UlcLevelToolLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_lcTool();
	LCTOOL_API UClass* Z_Construct_UClass_UlcBpBridge_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UlcLevelToolLibrary::execLcSimpleDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_msgStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UlcLevelToolLibrary::LcSimpleDialog(Z_Param_msgStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execLcSplitString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_source);
		P_GET_PROPERTY(FStrProperty,Z_Param_splitStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UlcLevelToolLibrary::LcSplitString(Z_Param_source,Z_Param_splitStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execLcRefreshActor)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UlcLevelToolLibrary::LcRefreshActor(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execLcSequencerConvertToPossessable)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_Sequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UlcLevelToolLibrary::LcSequencerConvertToPossessable(Z_Param_Sequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execbpBridgetObjIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UlcLevelToolLibrary::bpBridgetObjIsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execsetBpBridgetObj)
	{
		P_GET_OBJECT(UlcBpBridge,Z_Param_inObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		UlcLevelToolLibrary::setBpBridgetObj(Z_Param_inObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execSetBpLsObj)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		UlcLevelToolLibrary::SetBpLsObj(Z_Param_obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execGetBpLsObj)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UlcLevelToolLibrary::GetBpLsObj();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlcLevelToolLibrary::execGetBpBridgeObj)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UlcBpBridge**)Z_Param__Result=UlcLevelToolLibrary::GetBpBridgeObj();
		P_NATIVE_END;
	}
	void UlcLevelToolLibrary::StaticRegisterNativesUlcLevelToolLibrary()
	{
		UClass* Class = UlcLevelToolLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bpBridgetObjIsValid", &UlcLevelToolLibrary::execbpBridgetObjIsValid },
			{ "GetBpBridgeObj", &UlcLevelToolLibrary::execGetBpBridgeObj },
			{ "GetBpLsObj", &UlcLevelToolLibrary::execGetBpLsObj },
			{ "LcRefreshActor", &UlcLevelToolLibrary::execLcRefreshActor },
			{ "LcSequencerConvertToPossessable", &UlcLevelToolLibrary::execLcSequencerConvertToPossessable },
			{ "LcSimpleDialog", &UlcLevelToolLibrary::execLcSimpleDialog },
			{ "LcSplitString", &UlcLevelToolLibrary::execLcSplitString },
			{ "setBpBridgetObj", &UlcLevelToolLibrary::execsetBpBridgetObj },
			{ "SetBpLsObj", &UlcLevelToolLibrary::execSetBpLsObj },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics
	{
		struct lcLevelToolLibrary_eventbpBridgetObjIsValid_Parms
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
	void Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lcLevelToolLibrary_eventbpBridgetObjIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lcLevelToolLibrary_eventbpBridgetObjIsValid_Parms), &Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "bpBridgetObjIsValid", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventbpBridgetObjIsValid_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics
	{
		struct lcLevelToolLibrary_eventGetBpBridgeObj_Parms
		{
			UlcBpBridge* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventGetBpBridgeObj_Parms, ReturnValue), Z_Construct_UClass_UlcBpBridge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "GetBpBridgeObj", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventGetBpBridgeObj_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics
	{
		struct lcLevelToolLibrary_eventGetBpLsObj_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventGetBpLsObj_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "GetBpLsObj", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventGetBpLsObj_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics
	{
		struct lcLevelToolLibrary_eventLcRefreshActor_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventLcRefreshActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe5\xbd\x93\xe5\x89\x8d""actor\n" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
		{ "ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe5\xbd\x93\xe5\x89\x8d""actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "LcRefreshActor", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventLcRefreshActor_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics
	{
		struct lcLevelToolLibrary_eventLcSequencerConvertToPossessable_Parms
		{
			ULevelSequence* Sequence;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventLcSequencerConvertToPossessable_Parms, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::NewProp_Sequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "Comment", "//\xe8\xbd\xac\xe6\x8d\xa2\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8\xe5\x86\x85\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\xaf\xe7\x94\x9f\xe4\xba\xa7\xe5\x88\xb0\xe5\xb7\xb2\xe7\xbb\x8f\xe9\x99\x84\xe5\x8a\xa0\xe8\xa7\x92\xe8\x89\xb2\n" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
		{ "ToolTip", "\xe8\xbd\xac\xe6\x8d\xa2\xe5\xae\x9a\xe5\xba\x8f\xe5\x99\xa8\xe5\x86\x85\xe6\x89\x80\xe6\x9c\x89\xe5\x8f\xaf\xe7\x94\x9f\xe4\xba\xa7\xe5\x88\xb0\xe5\xb7\xb2\xe7\xbb\x8f\xe9\x99\x84\xe5\x8a\xa0\xe8\xa7\x92\xe8\x89\xb2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "LcSequencerConvertToPossessable", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventLcSequencerConvertToPossessable_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics
	{
		struct lcLevelToolLibrary_eventLcSimpleDialog_Parms
		{
			FString msgStr;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msgStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::NewProp_msgStr = { "msgStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventLcSimpleDialog_Parms, msgStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::NewProp_msgStr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "LcSimpleDialog", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventLcSimpleDialog_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics
	{
		struct lcLevelToolLibrary_eventLcSplitString_Parms
		{
			FString source;
			FString splitStr;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_source;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_splitStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventLcSplitString_Parms, source), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_splitStr = { "splitStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventLcSplitString_Parms, splitStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventLcSplitString_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_splitStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "LcSplitString", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventLcSplitString_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics
	{
		struct lcLevelToolLibrary_eventsetBpBridgetObj_Parms
		{
			UlcBpBridge* inObj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::NewProp_inObj = { "inObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventsetBpBridgetObj_Parms, inObj), Z_Construct_UClass_UlcBpBridge_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::NewProp_inObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "setBpBridgetObj", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventsetBpBridgetObj_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics
	{
		struct lcLevelToolLibrary_eventSetBpLsObj_Parms
		{
			UObject* obj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcLevelToolLibrary_eventSetBpLsObj_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::NewProp_obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcTool" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcLevelToolLibrary, nullptr, "SetBpLsObj", nullptr, nullptr, sizeof(lcLevelToolLibrary_eventSetBpLsObj_Parms), Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UlcLevelToolLibrary_NoRegister()
	{
		return UlcLevelToolLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UlcLevelToolLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UlcLevelToolLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UlcLevelToolLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_bpBridgetObjIsValid, "bpBridgetObjIsValid" }, // 3603976704
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_GetBpBridgeObj, "GetBpBridgeObj" }, // 3230438905
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_GetBpLsObj, "GetBpLsObj" }, // 2664461563
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_LcRefreshActor, "LcRefreshActor" }, // 1521328271
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_LcSequencerConvertToPossessable, "LcSequencerConvertToPossessable" }, // 7485468
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_LcSimpleDialog, "LcSimpleDialog" }, // 2566131757
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_LcSplitString, "LcSplitString" }, // 1232096085
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_setBpBridgetObj, "setBpBridgetObj" }, // 3686098359
		{ &Z_Construct_UFunction_UlcLevelToolLibrary_SetBpLsObj, "SetBpLsObj" }, // 3198083439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcLevelToolLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "lcLevelToolLibrary.h" },
		{ "ModuleRelativePath", "Public/lcLevelToolLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UlcLevelToolLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UlcLevelToolLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UlcLevelToolLibrary_Statics::ClassParams = {
		&UlcLevelToolLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UlcLevelToolLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UlcLevelToolLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UlcLevelToolLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UlcLevelToolLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UlcLevelToolLibrary, 1934292919);
	template<> LCTOOL_API UClass* StaticClass<UlcLevelToolLibrary>()
	{
		return UlcLevelToolLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UlcLevelToolLibrary(Z_Construct_UClass_UlcLevelToolLibrary, &UlcLevelToolLibrary::StaticClass, TEXT("/Script/lcTool"), TEXT("UlcLevelToolLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UlcLevelToolLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
