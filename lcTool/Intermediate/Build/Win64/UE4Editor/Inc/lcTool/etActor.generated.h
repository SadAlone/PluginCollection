// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FVector;
#ifdef LCTOOL_etActor_generated_h
#error "etActor.generated.h already included, missing '#pragma once' in etActor.h"
#endif
#define LCTOOL_etActor_generated_h

#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execetSetRotation); \
	DECLARE_FUNCTION(execetSetLocation);


#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execetSetRotation); \
	DECLARE_FUNCTION(execetSetLocation);


#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAetActor(); \
	friend struct Z_Construct_UClass_AetActor_Statics; \
public: \
	DECLARE_CLASS(AetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(AetActor)


#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAetActor(); \
	friend struct Z_Construct_UClass_AetActor_Statics; \
public: \
	DECLARE_CLASS(AetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(AetActor)


#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AetActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AetActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AetActor(AetActor&&); \
	NO_API AetActor(const AetActor&); \
public:


#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AetActor(AetActor&&); \
	NO_API AetActor(const AetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AetActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AetActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AetActor)


#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_9_PROLOG
#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_INCLASS \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LCTOOL_API UClass* StaticClass<class AetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_lcTool_Public_etActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
