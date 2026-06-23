// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSphereLightData;
#ifdef BUILDLIGHT_BuildLightActor_generated_h
#error "BuildLightActor.generated.h already included, missing '#pragma once' in BuildLightActor.h"
#endif
#define BUILDLIGHT_BuildLightActor_generated_h

#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphereLightLayerUnit_Statics; \
	BUILDLIGHT_API static class UScriptStruct* StaticStruct();


template<> BUILDLIGHT_API UScriptStruct* StaticStruct<struct FSphereLightLayerUnit>();

#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphereLightData_Statics; \
	BUILDLIGHT_API static class UScriptStruct* StaticStruct();


template<> BUILDLIGHT_API UScriptStruct* StaticStruct<struct FSphereLightData>();

#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideAllLight); \
	DECLARE_FUNCTION(execSelectAllLayerComponent); \
	DECLARE_FUNCTION(execSelectSpeicalLayerArrComponent); \
	DECLARE_FUNCTION(execSelectSpecialLayerComponent); \
	DECLARE_FUNCTION(execGetSphereLightData); \
	DECLARE_FUNCTION(execSetSphereLightData); \
	DECLARE_FUNCTION(execRefreshSphereLightShadow); \
	DECLARE_FUNCTION(execRefreshSphereLightRadius); \
	DECLARE_FUNCTION(execRefreshBuildSphereLight);


#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideAllLight); \
	DECLARE_FUNCTION(execSelectAllLayerComponent); \
	DECLARE_FUNCTION(execSelectSpeicalLayerArrComponent); \
	DECLARE_FUNCTION(execSelectSpecialLayerComponent); \
	DECLARE_FUNCTION(execGetSphereLightData); \
	DECLARE_FUNCTION(execSetSphereLightData); \
	DECLARE_FUNCTION(execRefreshSphereLightShadow); \
	DECLARE_FUNCTION(execRefreshSphereLightRadius); \
	DECLARE_FUNCTION(execRefreshBuildSphereLight);


#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildSpotLight(); \
	friend struct Z_Construct_UClass_ABuildSpotLight_Statics; \
public: \
	DECLARE_CLASS(ABuildSpotLight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/buildLight"), NO_API) \
	DECLARE_SERIALIZER(ABuildSpotLight)


#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_INCLASS \
private: \
	static void StaticRegisterNativesABuildSpotLight(); \
	friend struct Z_Construct_UClass_ABuildSpotLight_Statics; \
public: \
	DECLARE_CLASS(ABuildSpotLight, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/buildLight"), NO_API) \
	DECLARE_SERIALIZER(ABuildSpotLight)


#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildSpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildSpotLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildSpotLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildSpotLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildSpotLight(ABuildSpotLight&&); \
	NO_API ABuildSpotLight(const ABuildSpotLight&); \
public:


#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildSpotLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildSpotLight(ABuildSpotLight&&); \
	NO_API ABuildSpotLight(const ABuildSpotLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildSpotLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildSpotLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildSpotLight)


#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_42_PROLOG
#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_INCLASS \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BuildSpotLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDLIGHT_API UClass* StaticClass<class ABuildSpotLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_buildLight_Public_BuildLightActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
