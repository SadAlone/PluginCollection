// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LcRuntimeLibrary/Public/LcRuntimeLibraryBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLcRuntimeLibraryBPLibrary() {}
// Cross Module References
	LCRUNTIMELIBRARY_API UClass* Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_NoRegister();
	LCRUNTIMELIBRARY_API UClass* Z_Construct_UClass_ULcRuntimeLibraryBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_LcRuntimeLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULcRuntimeLibraryBPLibrary::execLcMinimumAreaRectangle)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InVerts);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SampleSurfaceNormal);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRectCenter);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRectRotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSideLengthX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSideLengthY);
		P_GET_UBOOL(Z_Param_bDebugDraw);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULcRuntimeLibraryBPLibrary::LcMinimumAreaRectangle(Z_Param_WorldContextObject,Z_Param_Out_InVerts,Z_Param_Out_SampleSurfaceNormal,Z_Param_Out_OutRectCenter,Z_Param_Out_OutRectRotation,Z_Param_Out_OutSideLengthX,Z_Param_Out_OutSideLengthY,Z_Param_bDebugDraw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULcRuntimeLibraryBPLibrary::execSetSKin)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULcRuntimeLibraryBPLibrary::SetSKin(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULcRuntimeLibraryBPLibrary::execLcCreateLevelSequenceAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=ULcRuntimeLibraryBPLibrary::LcCreateLevelSequenceAsset(Z_Param_Name,Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULcRuntimeLibraryBPLibrary::execChangeMovementRadius)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_movementComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_radiusValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULcRuntimeLibraryBPLibrary::ChangeMovementRadius(Z_Param_movementComponent,Z_Param_radiusValue);
		P_NATIVE_END;
	}
	void ULcRuntimeLibraryBPLibrary::StaticRegisterNativesULcRuntimeLibraryBPLibrary()
	{
		UClass* Class = ULcRuntimeLibraryBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMovementRadius", &ULcRuntimeLibraryBPLibrary::execChangeMovementRadius },
			{ "LcCreateLevelSequenceAsset", &ULcRuntimeLibraryBPLibrary::execLcCreateLevelSequenceAsset },
			{ "LcMinimumAreaRectangle", &ULcRuntimeLibraryBPLibrary::execLcMinimumAreaRectangle },
			{ "SetSKin", &ULcRuntimeLibraryBPLibrary::execSetSKin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics
	{
		struct LcRuntimeLibraryBPLibrary_eventChangeMovementRadius_Parms
		{
			UCharacterMovementComponent* movementComponent;
			float radiusValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movementComponent;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radiusValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::NewProp_movementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::NewProp_movementComponent = { "movementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventChangeMovementRadius_Parms, movementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::NewProp_movementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::NewProp_movementComponent_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::NewProp_radiusValue = { "radiusValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventChangeMovementRadius_Parms, radiusValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::NewProp_movementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::NewProp_radiusValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcToolFunctionLibrary" },
		{ "ModuleRelativePath", "Public/LcRuntimeLibraryBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULcRuntimeLibraryBPLibrary, nullptr, "ChangeMovementRadius", nullptr, nullptr, sizeof(LcRuntimeLibraryBPLibrary_eventChangeMovementRadius_Parms), Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics
	{
		struct LcRuntimeLibraryBPLibrary_eventLcCreateLevelSequenceAsset_Parms
		{
			FString Name;
			FString Path;
			ULevelSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcCreateLevelSequenceAsset_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcCreateLevelSequenceAsset_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcCreateLevelSequenceAsset_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcToolFunctionLibrary" },
		{ "ModuleRelativePath", "Public/LcRuntimeLibraryBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULcRuntimeLibraryBPLibrary, nullptr, "LcCreateLevelSequenceAsset", nullptr, nullptr, sizeof(LcRuntimeLibraryBPLibrary_eventLcCreateLevelSequenceAsset_Parms), Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics
	{
		struct LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms
		{
			UObject* WorldContextObject;
			TArray<FVector> InVerts;
			FVector SampleSurfaceNormal;
			FVector OutRectCenter;
			FRotator OutRectRotation;
			float OutSideLengthX;
			float OutSideLengthY;
			bool bDebugDraw;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVerts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InVerts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleSurfaceNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SampleSurfaceNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRectCenter;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutRectRotation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutSideLengthY;
		static void NewProp_bDebugDraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_InVerts_Inner = { "InVerts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_InVerts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_InVerts = { "InVerts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms, InVerts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_InVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_InVerts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal = { "SampleSurfaceNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms, SampleSurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutRectCenter = { "OutRectCenter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms, OutRectCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutRectRotation = { "OutRectRotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms, OutRectRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutSideLengthX = { "OutSideLengthX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms, OutSideLengthX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutSideLengthY = { "OutSideLengthY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms, OutSideLengthY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
	{
		((LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms*)Obj)->bDebugDraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms), &Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_InVerts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_InVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_SampleSurfaceNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutRectCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutRectRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutSideLengthX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_OutSideLengthY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::NewProp_bDebugDraw,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcToolFunctionLibrary" },
		{ "ModuleRelativePath", "Public/LcRuntimeLibraryBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULcRuntimeLibraryBPLibrary, nullptr, "LcMinimumAreaRectangle", nullptr, nullptr, sizeof(LcRuntimeLibraryBPLibrary_eventLcMinimumAreaRectangle_Parms), Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics
	{
		struct LcRuntimeLibraryBPLibrary_eventSetSKin_Parms
		{
			USkeletalMeshComponent* component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LcRuntimeLibraryBPLibrary_eventSetSKin_Parms, component), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::NewProp_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcToolFunctionLibrary" },
		{ "ModuleRelativePath", "Public/LcRuntimeLibraryBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULcRuntimeLibraryBPLibrary, nullptr, "SetSKin", nullptr, nullptr, sizeof(LcRuntimeLibraryBPLibrary_eventSetSKin_Parms), Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_NoRegister()
	{
		return ULcRuntimeLibraryBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LcRuntimeLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_ChangeMovementRadius, "ChangeMovementRadius" }, // 3815101980
		{ &Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcCreateLevelSequenceAsset, "LcCreateLevelSequenceAsset" }, // 2559278202
		{ &Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_LcMinimumAreaRectangle, "LcMinimumAreaRectangle" }, // 4092258964
		{ &Z_Construct_UFunction_ULcRuntimeLibraryBPLibrary_SetSKin, "SetSKin" }, // 1450596851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LcRuntimeLibraryBPLibrary.h" },
		{ "ModuleRelativePath", "Public/LcRuntimeLibraryBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULcRuntimeLibraryBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::ClassParams = {
		&ULcRuntimeLibraryBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULcRuntimeLibraryBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULcRuntimeLibraryBPLibrary, 1800970566);
	template<> LCRUNTIMELIBRARY_API UClass* StaticClass<ULcRuntimeLibraryBPLibrary>()
	{
		return ULcRuntimeLibraryBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULcRuntimeLibraryBPLibrary(Z_Construct_UClass_ULcRuntimeLibraryBPLibrary, &ULcRuntimeLibraryBPLibrary::StaticClass, TEXT("/Script/LcRuntimeLibrary"), TEXT("ULcRuntimeLibraryBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULcRuntimeLibraryBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
