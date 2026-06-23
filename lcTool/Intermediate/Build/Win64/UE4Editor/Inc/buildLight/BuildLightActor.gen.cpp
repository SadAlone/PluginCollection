// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "buildLight/Public/BuildLightActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildLightActor() {}
// Cross Module References
	BUILDLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSphereLightLayerUnit();
	UPackage* Z_Construct_UPackage__Script_buildLight();
	BUILDLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSphereLightData();
	BUILDLIGHT_API UClass* Z_Construct_UClass_ABuildSpotLight_NoRegister();
	BUILDLIGHT_API UClass* Z_Construct_UClass_ABuildSpotLight();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSphereLightLayerUnit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSphereLightLayerUnit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphereLightLayerUnit, Z_Construct_UPackage__Script_buildLight(), TEXT("SphereLightLayerUnit"), sizeof(FSphereLightLayerUnit), Get_Z_Construct_UScriptStruct_FSphereLightLayerUnit_Hash());
	}
	return Singleton;
}
template<> BUILDLIGHT_API UScriptStruct* StaticStruct<FSphereLightLayerUnit>()
{
	return FSphereLightLayerUnit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSphereLightLayerUnit(FSphereLightLayerUnit::StaticStruct, TEXT("/Script/buildLight"), TEXT("SphereLightLayerUnit"), false, nullptr, nullptr);
static struct FScriptStruct_buildLight_StaticRegisterNativesFSphereLightLayerUnit
{
	FScriptStruct_buildLight_StaticRegisterNativesFSphereLightLayerUnit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SphereLightLayerUnit")),new UScriptStruct::TCppStructOps<FSphereLightLayerUnit>);
	}
} ScriptStruct_buildLight_StaticRegisterNativesFSphereLightLayerUnit;
	struct Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphereLightLayerUnit>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_buildLight,
		nullptr,
		&NewStructOps,
		"SphereLightLayerUnit",
		sizeof(FSphereLightLayerUnit),
		alignof(FSphereLightLayerUnit),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphereLightLayerUnit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSphereLightLayerUnit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_buildLight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SphereLightLayerUnit"), sizeof(FSphereLightLayerUnit), Get_Z_Construct_UScriptStruct_FSphereLightLayerUnit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSphereLightLayerUnit_Hash() { return 5675108U; }
class UScriptStruct* FSphereLightData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSphereLightData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphereLightData, Z_Construct_UPackage__Script_buildLight(), TEXT("SphereLightData"), sizeof(FSphereLightData), Get_Z_Construct_UScriptStruct_FSphereLightData_Hash());
	}
	return Singleton;
}
template<> BUILDLIGHT_API UScriptStruct* StaticStruct<FSphereLightData>()
{
	return FSphereLightData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSphereLightData(FSphereLightData::StaticStruct, TEXT("/Script/buildLight"), TEXT("SphereLightData"), false, nullptr, nullptr);
static struct FScriptStruct_buildLight_StaticRegisterNativesFSphereLightData
{
	FScriptStruct_buildLight_StaticRegisterNativesFSphereLightData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SphereLightData")),new UScriptStruct::TCppStructOps<FSphereLightData>);
	}
} ScriptStruct_buildLight_StaticRegisterNativesFSphereLightData;
	struct Z_Construct_UScriptStruct_FSphereLightData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHalfSphere_MetaData[];
#endif
		static void NewProp_bHalfSphere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHalfSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_layerNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lightNumberOneLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lightNumberOneLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShadow_MetaData[];
#endif
		static void NewProp_bShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShadow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereLightData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe9\x98\xb5\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe9\x98\xb5\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphereLightData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphereLightData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bHalfSphere_MetaData[] = {
		{ "Category", "sphereLightData" },
		{ "Comment", "//\xe7\x81\xaf\xe5\x85\x89\xe5\xb1\x82\xe6\x95\xb0\n//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\x8d\x8a\xe7\x90\x83\xe7\x81\xaf\xe9\x98\xb5\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe7\x81\xaf\xe5\x85\x89\xe5\xb1\x82\xe6\x95\xb0\n\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe5\x8d\x8a\xe7\x90\x83\xe7\x81\xaf\xe9\x98\xb5" },
	};
#endif
	void Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bHalfSphere_SetBit(void* Obj)
	{
		((FSphereLightData*)Obj)->bHalfSphere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bHalfSphere = { "bHalfSphere", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSphereLightData), &Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bHalfSphere_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bHalfSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bHalfSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_layerNum_MetaData[] = {
		{ "Category", "sphereLightData" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_layerNum = { "layerNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphereLightData, layerNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_layerNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_layerNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_lightNumberOneLayer_MetaData[] = {
		{ "Category", "sphereLightData" },
		{ "Comment", "//\xe6\xaf\x8f\xe5\xb1\x82\xe7\x81\xaf\xe6\x95\xb0\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe6\xaf\x8f\xe5\xb1\x82\xe7\x81\xaf\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_lightNumberOneLayer = { "lightNumberOneLayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSphereLightData, lightNumberOneLayer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_lightNumberOneLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_lightNumberOneLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bShadow_MetaData[] = {
		{ "Category", "sphereLightData" },
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf\xe9\x98\xb4\xe5\xbd\xb1\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf\xe9\x98\xb4\xe5\xbd\xb1" },
	};
#endif
	void Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bShadow_SetBit(void* Obj)
	{
		((FSphereLightData*)Obj)->bShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bShadow = { "bShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSphereLightData), &Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bShadow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphereLightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bHalfSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_layerNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_lightNumberOneLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphereLightData_Statics::NewProp_bShadow,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphereLightData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_buildLight,
		nullptr,
		&NewStructOps,
		"SphereLightData",
		sizeof(FSphereLightData),
		alignof(FSphereLightData),
		Z_Construct_UScriptStruct_FSphereLightData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereLightData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphereLightData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphereLightData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphereLightData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSphereLightData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_buildLight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SphereLightData"), sizeof(FSphereLightData), Get_Z_Construct_UScriptStruct_FSphereLightData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSphereLightData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSphereLightData_Hash() { return 3923228606U; }
	DEFINE_FUNCTION(ABuildSpotLight::execHideAllLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideAllLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execSelectAllLayerComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAllLayerComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execSelectSpeicalLayerArrComponent)
	{
		P_GET_TARRAY(int32,Z_Param_layerArr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSpeicalLayerArrComponent(Z_Param_layerArr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execSelectSpecialLayerComponent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_layerNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSpecialLayerComponent(Z_Param_layerNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execGetSphereLightData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSphereLightData*)Z_Param__Result=P_THIS->GetSphereLightData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execSetSphereLightData)
	{
		P_GET_STRUCT(FSphereLightData,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSphereLightData(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execRefreshSphereLightShadow)
	{
		P_GET_TARRAY(int32,Z_Param_selectLightArr);
		P_GET_UBOOL(Z_Param_bShowShadow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSphereLightShadow(Z_Param_selectLightArr,Z_Param_bShowShadow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execRefreshSphereLightRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSphereLightRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildSpotLight::execRefreshBuildSphereLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshBuildSphereLight();
		P_NATIVE_END;
	}
	void ABuildSpotLight::StaticRegisterNativesABuildSpotLight()
	{
		UClass* Class = ABuildSpotLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSphereLightData", &ABuildSpotLight::execGetSphereLightData },
			{ "HideAllLight", &ABuildSpotLight::execHideAllLight },
			{ "RefreshBuildSphereLight", &ABuildSpotLight::execRefreshBuildSphereLight },
			{ "RefreshSphereLightRadius", &ABuildSpotLight::execRefreshSphereLightRadius },
			{ "RefreshSphereLightShadow", &ABuildSpotLight::execRefreshSphereLightShadow },
			{ "SelectAllLayerComponent", &ABuildSpotLight::execSelectAllLayerComponent },
			{ "SelectSpecialLayerComponent", &ABuildSpotLight::execSelectSpecialLayerComponent },
			{ "SelectSpeicalLayerArrComponent", &ABuildSpotLight::execSelectSpeicalLayerArrComponent },
			{ "SetSphereLightData", &ABuildSpotLight::execSetSphereLightData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics
	{
		struct BuildSpotLight_eventGetSphereLightData_Parms
		{
			FSphereLightData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildSpotLight_eventGetSphereLightData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSphereLightData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xbd\x93\xe5\x89\x8d\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "GetSphereLightData", nullptr, nullptr, sizeof(BuildSpotLight_eventGetSphereLightData_Parms), Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_HideAllLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_HideAllLight_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe9\x9a\x90\xe8\x97\x8f\xe6\x89\x80\xe6\x9c\x89\xe7\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe9\x9a\x90\xe8\x97\x8f\xe6\x89\x80\xe6\x9c\x89\xe7\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_HideAllLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "HideAllLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_HideAllLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_HideAllLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_HideAllLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_HideAllLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe6\x9e\x84\xe5\xbb\xba\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe6\x9e\x84\xe5\xbb\xba\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "RefreshBuildSphereLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe5\x8d\x8a\xe5\xbe\x84\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe5\x8d\x8a\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "RefreshSphereLightRadius", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics
	{
		struct BuildSpotLight_eventRefreshSphereLightShadow_Parms
		{
			TArray<int32> selectLightArr;
			bool bShowShadow;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_selectLightArr_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectLightArr;
		static void NewProp_bShowShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowShadow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_selectLightArr_Inner = { "selectLightArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_selectLightArr = { "selectLightArr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildSpotLight_eventRefreshSphereLightShadow_Parms, selectLightArr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_bShowShadow_SetBit(void* Obj)
	{
		((BuildSpotLight_eventRefreshSphereLightShadow_Parms*)Obj)->bShowShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_bShowShadow = { "bShowShadow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BuildSpotLight_eventRefreshSphereLightShadow_Parms), &Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_bShowShadow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_selectLightArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_selectLightArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::NewProp_bShowShadow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe5\x88\xb7\xe6\x96\xb0\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe9\x98\xb4\xe5\xbd\xb1\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe5\x88\xb7\xe6\x96\xb0\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe9\x98\xb4\xe5\xbd\xb1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "RefreshSphereLightShadow", nullptr, nullptr, sizeof(BuildSpotLight_eventRefreshSphereLightShadow_Parms), Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe6\x89\x80\xe6\x9c\x89\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe6\x89\x80\xe6\x9c\x89\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "SelectAllLayerComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics
	{
		struct BuildSpotLight_eventSelectSpecialLayerComponent_Parms
		{
			int32 layerNum;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::NewProp_layerNum = { "layerNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildSpotLight_eventSelectSpecialLayerComponent_Parms, layerNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::NewProp_layerNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe6\x8c\x87\xe5\xae\x9a\xe5\xb1\x82\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe6\x8c\x87\xe5\xae\x9a\xe5\xb1\x82\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "SelectSpecialLayerComponent", nullptr, nullptr, sizeof(BuildSpotLight_eventSelectSpecialLayerComponent_Parms), Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics
	{
		struct BuildSpotLight_eventSelectSpeicalLayerArrComponent_Parms
		{
			TArray<int32> layerArr;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_layerArr_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_layerArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::NewProp_layerArr_Inner = { "layerArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::NewProp_layerArr = { "layerArr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildSpotLight_eventSelectSpeicalLayerArrComponent_Parms, layerArr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::NewProp_layerArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::NewProp_layerArr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe9\x80\x89\xe6\x8b\xa9\xe6\x8c\x87\xe5\xae\x9a\xe5\xb1\x82\xe6\x95\xb0\xe7\xbb\x84\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe9\x80\x89\xe6\x8b\xa9\xe6\x8c\x87\xe5\xae\x9a\xe5\xb1\x82\xe6\x95\xb0\xe7\xbb\x84\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "SelectSpeicalLayerArrComponent", nullptr, nullptr, sizeof(BuildSpotLight_eventSelectSpeicalLayerArrComponent_Parms), Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics
	{
		struct BuildSpotLight_eventSetSphereLightData_Parms
		{
			FSphereLightData data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildSpotLight_eventSetSphereLightData_Parms, data), Z_Construct_UScriptStruct_FSphereLightData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BuildSpotLight" },
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe5\xbd\x93\xe5\x89\x8d\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xbd\x93\xe5\x89\x8d\xe7\x90\x83\xe7\x8a\xb6\xe7\x81\xaf\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildSpotLight, nullptr, "SetSphereLightData", nullptr, nullptr, sizeof(BuildSpotLight_eventSetSphereLightData_Parms), Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABuildSpotLight_NoRegister()
	{
		return ABuildSpotLight::StaticClass();
	}
	struct Z_Construct_UClass_ABuildSpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereLightData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_sphereLightData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spotLightMap_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_spotLightMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spotLightMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_spotLightMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildSpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_buildLight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildSpotLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildSpotLight_GetSphereLightData, "GetSphereLightData" }, // 2611588586
		{ &Z_Construct_UFunction_ABuildSpotLight_HideAllLight, "HideAllLight" }, // 3124404101
		{ &Z_Construct_UFunction_ABuildSpotLight_RefreshBuildSphereLight, "RefreshBuildSphereLight" }, // 3529304826
		{ &Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightRadius, "RefreshSphereLightRadius" }, // 1532882326
		{ &Z_Construct_UFunction_ABuildSpotLight_RefreshSphereLightShadow, "RefreshSphereLightShadow" }, // 3186008280
		{ &Z_Construct_UFunction_ABuildSpotLight_SelectAllLayerComponent, "SelectAllLayerComponent" }, // 2777703318
		{ &Z_Construct_UFunction_ABuildSpotLight_SelectSpecialLayerComponent, "SelectSpecialLayerComponent" }, // 3974688787
		{ &Z_Construct_UFunction_ABuildSpotLight_SelectSpeicalLayerArrComponent, "SelectSpeicalLayerArrComponent" }, // 3262591118
		{ &Z_Construct_UFunction_ABuildSpotLight_SetSphereLightData, "SetSphereLightData" }, // 3351444030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildSpotLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BuildLightActor.h" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereLightData_MetaData[] = {
		{ "Comment", "//\xe7\x90\x83\xe7\x81\xaf\xe6\x95\xb0\xe6\x8d\xae\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe7\x90\x83\xe7\x81\xaf\xe6\x95\xb0\xe6\x8d\xae" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereLightData = { "sphereLightData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildSpotLight, sphereLightData), Z_Construct_UScriptStruct_FSphereLightData, METADATA_PARAMS(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereLightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereLightData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildSpotLight, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereRadius_MetaData[] = {
		{ "Category", "ABuildSpotLight" },
		{ "Comment", "//\xe7\x90\x83\xe5\x8d\x8a\xe5\xbe\x84\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe7\x90\x83\xe5\x8d\x8a\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereRadius = { "sphereRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildSpotLight, sphereRadius), METADATA_PARAMS(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sceneComponent = { "sceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildSpotLight, sceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sceneComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap_ValueProp = { "spotLightMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSphereLightLayerUnit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap_Key_KeyProp = { "spotLightMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap_MetaData[] = {
		{ "Comment", "//\xe8\x81\x9a\xe5\x85\x89\xe7\x81\xaf\xe6\x95\xb0\xe7\xbb\x84\n" },
		{ "ModuleRelativePath", "Public/BuildLightActor.h" },
		{ "ToolTip", "\xe8\x81\x9a\xe5\x85\x89\xe7\x81\xaf\xe6\x95\xb0\xe7\xbb\x84" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap = { "spotLightMap", nullptr, (EPropertyFlags)0x0010000400000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildSpotLight, spotLightMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildSpotLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereLightData,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_sceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildSpotLight_Statics::NewProp_spotLightMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildSpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildSpotLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildSpotLight_Statics::ClassParams = {
		&ABuildSpotLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildSpotLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildSpotLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildSpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildSpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildSpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildSpotLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildSpotLight, 4122715484);
	template<> BUILDLIGHT_API UClass* StaticClass<ABuildSpotLight>()
	{
		return ABuildSpotLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildSpotLight(Z_Construct_UClass_ABuildSpotLight, &ABuildSpotLight::StaticClass, TEXT("/Script/buildLight"), TEXT("ABuildSpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildSpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
