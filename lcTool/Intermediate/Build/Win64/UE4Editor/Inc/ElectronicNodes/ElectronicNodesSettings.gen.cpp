// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElectronicNodes/Public/ElectronicNodesSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElectronicNodesSettings() {}
// Cross Module References
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleMovementStyle();
	UPackage* Z_Construct_UPackage__Script_ElectronicNodes();
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyleForExec();
	ELECTRONICNODES_API UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle();
	ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister();
	ELECTRONICNODES_API UClass* Z_Construct_UClass_UElectronicNodesSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* EBubbleMovementStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EBubbleMovementStyle, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EBubbleMovementStyle"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<EBubbleMovementStyle>()
	{
		return EBubbleMovementStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBubbleMovementStyle(EBubbleMovementStyle_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("EBubbleMovementStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_EBubbleMovementStyle_Hash() { return 3772371256U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_EBubbleMovementStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBubbleMovementStyle"), 0, Get_Z_Construct_UEnum_ElectronicNodes_EBubbleMovementStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBubbleMovementStyle::Linear", (int64)EBubbleMovementStyle::Linear },
				{ "EBubbleMovementStyle::Cubic", (int64)EBubbleMovementStyle::Cubic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cubic.Name", "EBubbleMovementStyle::Cubic" },
				{ "Linear.Name", "EBubbleMovementStyle::Linear" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"EBubbleMovementStyle",
				"EBubbleMovementStyle",
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
	static UEnum* EWireStyleForExec_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireStyleForExec, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireStyleForExec"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyleForExec>()
	{
		return EWireStyleForExec_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWireStyleForExec(EWireStyleForExec_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("EWireStyleForExec"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_EWireStyleForExec_Hash() { return 900885580U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyleForExec()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWireStyleForExec"), 0, Get_Z_Construct_UEnum_ElectronicNodes_EWireStyleForExec_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWireStyleForExec::Same", (int64)EWireStyleForExec::Same },
				{ "EWireStyleForExec::SimpleCircuit", (int64)EWireStyleForExec::SimpleCircuit },
				{ "EWireStyleForExec::ComplexCircuit", (int64)EWireStyleForExec::ComplexCircuit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ComplexCircuit.Name", "EWireStyleForExec::ComplexCircuit" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
				{ "Same.Name", "EWireStyleForExec::Same" },
				{ "SimpleCircuit.Name", "EWireStyleForExec::SimpleCircuit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"EWireStyleForExec",
				"EWireStyleForExec",
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
	static UEnum* EWireStyle_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ElectronicNodes_EWireStyle, Z_Construct_UPackage__Script_ElectronicNodes(), TEXT("EWireStyle"));
		}
		return Singleton;
	}
	template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyle>()
	{
		return EWireStyle_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWireStyle(EWireStyle_StaticEnum, TEXT("/Script/ElectronicNodes"), TEXT("EWireStyle"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ElectronicNodes_EWireStyle_Hash() { return 88717794U; }
	UEnum* Z_Construct_UEnum_ElectronicNodes_EWireStyle()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ElectronicNodes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWireStyle"), 0, Get_Z_Construct_UEnum_ElectronicNodes_EWireStyle_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWireStyle::Desactivated", (int64)EWireStyle::Desactivated },
				{ "EWireStyle::SimpleCircuit", (int64)EWireStyle::SimpleCircuit },
				{ "EWireStyle::ComplexCircuit", (int64)EWireStyle::ComplexCircuit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ComplexCircuit.Name", "EWireStyle::ComplexCircuit" },
				{ "Desactivated.Name", "EWireStyle::Desactivated" },
				{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
				{ "SimpleCircuit.Name", "EWireStyle::SimpleCircuit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ElectronicNodes,
				nullptr,
				"EWireStyle",
				"EWireStyle",
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
	void UElectronicNodesSettings::StaticRegisterNativesUElectronicNodesSettings()
	{
	}
	UClass* Z_Construct_UClass_UElectronicNodesSettings_NoRegister()
	{
		return UElectronicNodesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UElectronicNodesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WireStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WireStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WireStyleForExec_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireStyleForExec_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WireStyleForExec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RoundRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_HorizontalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixZoomDisplacement_MetaData[];
#endif
		static void NewProp_FixZoomDisplacement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FixZoomDisplacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivateRibbon_MetaData[];
#endif
		static void NewProp_ActivateRibbon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActivateRibbon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RibbonOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RibbonMergeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RibbonMergeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDrawBubbles_MetaData[];
#endif
		static void NewProp_ForceDrawBubbles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceDrawBubbles;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BubbleMovementStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleMovementStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BubbleMovementStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BubbleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BubbleSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BubbleSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BubbleSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UElectronicNodesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ElectronicNodes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Electronic Nodes Plugin" },
		{ "IncludePath", "ElectronicNodesSettings.h" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Wire style of graph. \"Deactivate\" will totally shutdown the plugin and fallback to previous behaviour. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Wire style of graph. \"Deactivate\" will totally shutdown the plugin and fallback to previous behaviour." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle = { "WireStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyle), Z_Construct_UEnum_ElectronicNodes_EWireStyle, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Specific wire style for exec wires. Default: same */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Specific wire style for exec wires. Default: same" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec = { "WireStyleForExec", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, WireStyleForExec), Z_Construct_UEnum_ElectronicNodes_EWireStyleForExec, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Round radius of the wires. Default: 10 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Round radius of the wires. Default: 10" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius = { "RoundRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, RoundRadius), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Horizontal offset of wires from nodes. Default: 16 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Horizontal offset of wires from nodes. Default: 16" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset = { "HorizontalOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, HorizontalOffset), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_MetaData[] = {
		{ "Category", "Wire Style" },
		{ "Comment", "/* Fix default zoomed-out wire displacement. Default: true */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Fix default zoomed-out wire displacement. Default: true" },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->FixZoomDisplacement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement = { "FixZoomDisplacement", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Activate ribbon cables for overlapping wires. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Activate ribbon cables for overlapping wires." },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->ActivateRibbon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon = { "ActivateRibbon", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Offset between ribbon wires. Default: 4 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Offset between ribbon wires. Default: 4" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset = { "RibbonOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonOffset), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset_MetaData[] = {
		{ "Category", "Ribbon Style (experimental)" },
		{ "Comment", "/* Offset of wires when merge into ribbon. Default: 20 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Offset of wires when merge into ribbon. Default: 20" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset = { "RibbonMergeOffset", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, RibbonMergeOffset), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* Show moving bubbles on the wires. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Show moving bubbles on the wires." },
	};
#endif
	void Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit(void* Obj)
	{
		((UElectronicNodesSettings*)Obj)->ForceDrawBubbles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles = { "ForceDrawBubbles", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UElectronicNodesSettings), &Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleMovementStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleMovementStyle_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "Comment", "/* Bubbles movement style on the wires. */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Bubbles movement style on the wires." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleMovementStyle = { "BubbleMovementStyle", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleMovementStyle), Z_Construct_UEnum_ElectronicNodes_EBubbleMovementStyle, METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleMovementStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleMovementStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/* Size of bubbles on the wires. Default: 2.0 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Size of bubbles on the wires. Default: 2.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize = { "BubbleSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSize), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Speed of bubbles on the wires. Default: 4.0 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Speed of bubbles on the wires. Default: 4.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed = { "BubbleSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpeed), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace_MetaData[] = {
		{ "Category", "Bubbles Style" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/* Space between bubbles on the wires. Default: 20.0 */" },
		{ "ModuleRelativePath", "Public/ElectronicNodesSettings.h" },
		{ "ToolTip", "Space between bubbles on the wires. Default: 20.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace = { "BubbleSpace", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UElectronicNodesSettings, BubbleSpace), METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_WireStyleForExec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RoundRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_HorizontalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_FixZoomDisplacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ActivateRibbon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_RibbonMergeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_ForceDrawBubbles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleMovementStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleMovementStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UElectronicNodesSettings_Statics::NewProp_BubbleSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UElectronicNodesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UElectronicNodesSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams = {
		&UElectronicNodesSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UElectronicNodesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UElectronicNodesSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UElectronicNodesSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UElectronicNodesSettings, 2548298916);
	template<> ELECTRONICNODES_API UClass* StaticClass<UElectronicNodesSettings>()
	{
		return UElectronicNodesSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UElectronicNodesSettings(Z_Construct_UClass_UElectronicNodesSettings, &UElectronicNodesSettings::StaticClass, TEXT("/Script/ElectronicNodes"), TEXT("UElectronicNodesSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UElectronicNodesSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
