// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELECTRONICNODES_ElectronicNodesSettings_generated_h
#error "ElectronicNodesSettings.generated.h already included, missing '#pragma once' in ElectronicNodesSettings.h"
#endif
#define ELECTRONICNODES_ElectronicNodesSettings_generated_h

#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_RPC_WRAPPERS
#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElectronicNodesSettings(); \
	friend struct Z_Construct_UClass_UElectronicNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UElectronicNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElectronicNodes"), NO_API) \
	DECLARE_SERIALIZER(UElectronicNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUElectronicNodesSettings(); \
	friend struct Z_Construct_UClass_UElectronicNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UElectronicNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ElectronicNodes"), NO_API) \
	DECLARE_SERIALIZER(UElectronicNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElectronicNodesSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElectronicNodesSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElectronicNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElectronicNodesSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElectronicNodesSettings(UElectronicNodesSettings&&); \
	NO_API UElectronicNodesSettings(const UElectronicNodesSettings&); \
public:


#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElectronicNodesSettings(UElectronicNodesSettings&&); \
	NO_API UElectronicNodesSettings(const UElectronicNodesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElectronicNodesSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElectronicNodesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UElectronicNodesSettings)


#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_33_PROLOG
#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_INCLASS \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELECTRONICNODES_API UClass* StaticClass<class UElectronicNodesSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_ElectronicNodes_Public_ElectronicNodesSettings_h


#define FOREACH_ENUM_EBUBBLEMOVEMENTSTYLE(op) \
	op(EBubbleMovementStyle::Linear) \
	op(EBubbleMovementStyle::Cubic) 

enum class EBubbleMovementStyle : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<EBubbleMovementStyle>();

#define FOREACH_ENUM_EWIRESTYLEFOREXEC(op) \
	op(EWireStyleForExec::Same) \
	op(EWireStyleForExec::SimpleCircuit) \
	op(EWireStyleForExec::ComplexCircuit) 

enum class EWireStyleForExec : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyleForExec>();

#define FOREACH_ENUM_EWIRESTYLE(op) \
	op(EWireStyle::Desactivated) \
	op(EWireStyle::SimpleCircuit) \
	op(EWireStyle::ComplexCircuit) 

enum class EWireStyle : uint8;
template<> ELECTRONICNODES_API UEnum* StaticEnum<EWireStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
