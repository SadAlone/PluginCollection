// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "lcTool/Public/lcImportFileSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelcImportFileSystem() {}
// Cross Module References
	LCTOOL_API UClass* Z_Construct_UClass_UlcImportFileSystem_NoRegister();
	LCTOOL_API UClass* Z_Construct_UClass_UlcImportFileSystem();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_lcTool();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UlcImportFileSystem::execImportFile)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_filePaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ImportFile(Z_Param_Out_filePaths);
		P_NATIVE_END;
	}
	void UlcImportFileSystem::StaticRegisterNativesUlcImportFileSystem()
	{
		UClass* Class = UlcImportFileSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ImportFile", &UlcImportFileSystem::execImportFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics
	{
		struct lcImportFileSystem_eventImportFile_Parms
		{
			TArray<FString> filePaths;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filePaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filePaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_filePaths;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_filePaths_Inner = { "filePaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_filePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_filePaths = { "filePaths", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(lcImportFileSystem_eventImportFile_Parms, filePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_filePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_filePaths_MetaData)) };
	void Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((lcImportFileSystem_eventImportFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(lcImportFileSystem_eventImportFile_Parms), &Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_filePaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_filePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "lcImportFileSystem" },
		{ "ModuleRelativePath", "Public/lcImportFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlcImportFileSystem, nullptr, "ImportFile", nullptr, nullptr, sizeof(lcImportFileSystem_eventImportFile_Parms), Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlcImportFileSystem_ImportFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlcImportFileSystem_ImportFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UlcImportFileSystem_NoRegister()
	{
		return UlcImportFileSystem::StaticClass();
	}
	struct Z_Construct_UClass_UlcImportFileSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImportUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UlcImportFileSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_lcTool,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UlcImportFileSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UlcImportFileSystem_ImportFile, "ImportFile" }, // 1798243654
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcImportFileSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*FBX\xe5\xa4\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe5\xaf\xbc\xe5\x85\xa5*/" },
		{ "IncludePath", "lcImportFileSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/lcImportFileSystem.h" },
		{ "ToolTip", "FBX\xe5\xa4\x9a\xe7\xba\xbf\xe7\xa8\x8b\xe5\xaf\xbc\xe5\x85\xa5" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlcImportFileSystem_Statics::NewProp_ImportUI_MetaData[] = {
		{ "ModuleRelativePath", "Public/lcImportFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UlcImportFileSystem_Statics::NewProp_ImportUI = { "ImportUI", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UlcImportFileSystem, ImportUI), Z_Construct_UClass_UFbxImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UlcImportFileSystem_Statics::NewProp_ImportUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UlcImportFileSystem_Statics::NewProp_ImportUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UlcImportFileSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UlcImportFileSystem_Statics::NewProp_ImportUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UlcImportFileSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UlcImportFileSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UlcImportFileSystem_Statics::ClassParams = {
		&UlcImportFileSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UlcImportFileSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UlcImportFileSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UlcImportFileSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UlcImportFileSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UlcImportFileSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UlcImportFileSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UlcImportFileSystem, 4062988978);
	template<> LCTOOL_API UClass* StaticClass<UlcImportFileSystem>()
	{
		return UlcImportFileSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UlcImportFileSystem(Z_Construct_UClass_UlcImportFileSystem, &UlcImportFileSystem::StaticClass, TEXT("/Script/lcTool"), TEXT("UlcImportFileSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UlcImportFileSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
