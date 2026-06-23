// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGaSubVolumType : uint8;
#ifdef GROUPACTION_GaSubVolum_generated_h
#error "GaSubVolum.generated.h already included, missing '#pragma once' in GaSubVolum.h"
#endif
#define GROUPACTION_GaSubVolum_generated_h

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSubVolumType);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSubVolumType);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGaSubVolum(); \
	friend struct Z_Construct_UClass_AGaSubVolum_Statics; \
public: \
	DECLARE_CLASS(AGaSubVolum, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(AGaSubVolum)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAGaSubVolum(); \
	friend struct Z_Construct_UClass_AGaSubVolum_Statics; \
public: \
	DECLARE_CLASS(AGaSubVolum, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(AGaSubVolum)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGaSubVolum(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGaSubVolum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaSubVolum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaSubVolum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaSubVolum(AGaSubVolum&&); \
	NO_API AGaSubVolum(const AGaSubVolum&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaSubVolum(AGaSubVolum&&); \
	NO_API AGaSubVolum(const AGaSubVolum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaSubVolum); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaSubVolum); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGaSubVolum)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_19_PROLOG
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class AGaSubVolum>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_groupAction_Public_GaSubVolum_h


#define FOREACH_ENUM_EGASUBVOLUMTYPE(op) \
	op(EGaSubVolumType::EGSVT_Square) \
	op(EGaSubVolumType::EGSVT_Sphere) 

enum class EGaSubVolumType : uint8;
template<> GROUPACTION_API UEnum* StaticEnum<EGaSubVolumType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
