// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ULevelSequence;
class UlcBpBridge;
class UObject;
#ifdef LCTOOL_lcLevelToolLibrary_generated_h
#error "lcLevelToolLibrary.generated.h already included, missing '#pragma once' in lcLevelToolLibrary.h"
#endif
#define LCTOOL_lcLevelToolLibrary_generated_h

#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLcSimpleDialog); \
	DECLARE_FUNCTION(execLcSplitString); \
	DECLARE_FUNCTION(execLcRefreshActor); \
	DECLARE_FUNCTION(execLcSequencerConvertToPossessable); \
	DECLARE_FUNCTION(execbpBridgetObjIsValid); \
	DECLARE_FUNCTION(execsetBpBridgetObj); \
	DECLARE_FUNCTION(execSetBpLsObj); \
	DECLARE_FUNCTION(execGetBpLsObj); \
	DECLARE_FUNCTION(execGetBpBridgeObj);


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLcSimpleDialog); \
	DECLARE_FUNCTION(execLcSplitString); \
	DECLARE_FUNCTION(execLcRefreshActor); \
	DECLARE_FUNCTION(execLcSequencerConvertToPossessable); \
	DECLARE_FUNCTION(execbpBridgetObjIsValid); \
	DECLARE_FUNCTION(execsetBpBridgetObj); \
	DECLARE_FUNCTION(execSetBpLsObj); \
	DECLARE_FUNCTION(execGetBpLsObj); \
	DECLARE_FUNCTION(execGetBpBridgeObj);


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUlcLevelToolLibrary(); \
	friend struct Z_Construct_UClass_UlcLevelToolLibrary_Statics; \
public: \
	DECLARE_CLASS(UlcLevelToolLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(UlcLevelToolLibrary)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUlcLevelToolLibrary(); \
	friend struct Z_Construct_UClass_UlcLevelToolLibrary_Statics; \
public: \
	DECLARE_CLASS(UlcLevelToolLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(UlcLevelToolLibrary)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlcLevelToolLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UlcLevelToolLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlcLevelToolLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlcLevelToolLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlcLevelToolLibrary(UlcLevelToolLibrary&&); \
	NO_API UlcLevelToolLibrary(const UlcLevelToolLibrary&); \
public:


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlcLevelToolLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlcLevelToolLibrary(UlcLevelToolLibrary&&); \
	NO_API UlcLevelToolLibrary(const UlcLevelToolLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlcLevelToolLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlcLevelToolLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UlcLevelToolLibrary)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_16_PROLOG
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_INCLASS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LCTOOL_API UClass* StaticClass<class UlcLevelToolLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_lcTool_Public_lcLevelToolLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
