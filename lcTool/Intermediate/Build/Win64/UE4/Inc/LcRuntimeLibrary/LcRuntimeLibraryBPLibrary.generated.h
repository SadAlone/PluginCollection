// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
struct FRotator;
class USkeletalMeshComponent;
class ULevelSequence;
class UCharacterMovementComponent;
#ifdef LCRUNTIMELIBRARY_LcRuntimeLibraryBPLibrary_generated_h
#error "LcRuntimeLibraryBPLibrary.generated.h already included, missing '#pragma once' in LcRuntimeLibraryBPLibrary.h"
#endif
#define LCRUNTIMELIBRARY_LcRuntimeLibraryBPLibrary_generated_h

#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLcMinimumAreaRectangle); \
	DECLARE_FUNCTION(execSetSKin); \
	DECLARE_FUNCTION(execLcCreateLevelSequenceAsset); \
	DECLARE_FUNCTION(execChangeMovementRadius);


#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLcMinimumAreaRectangle); \
	DECLARE_FUNCTION(execSetSKin); \
	DECLARE_FUNCTION(execLcCreateLevelSequenceAsset); \
	DECLARE_FUNCTION(execChangeMovementRadius);


#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULcRuntimeLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(ULcRuntimeLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LcRuntimeLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULcRuntimeLibraryBPLibrary)


#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesULcRuntimeLibraryBPLibrary(); \
	friend struct Z_Construct_UClass_ULcRuntimeLibraryBPLibrary_Statics; \
public: \
	DECLARE_CLASS(ULcRuntimeLibraryBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LcRuntimeLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULcRuntimeLibraryBPLibrary)


#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULcRuntimeLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULcRuntimeLibraryBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULcRuntimeLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULcRuntimeLibraryBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULcRuntimeLibraryBPLibrary(ULcRuntimeLibraryBPLibrary&&); \
	NO_API ULcRuntimeLibraryBPLibrary(const ULcRuntimeLibraryBPLibrary&); \
public:


#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULcRuntimeLibraryBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULcRuntimeLibraryBPLibrary(ULcRuntimeLibraryBPLibrary&&); \
	NO_API ULcRuntimeLibraryBPLibrary(const ULcRuntimeLibraryBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULcRuntimeLibraryBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULcRuntimeLibraryBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULcRuntimeLibraryBPLibrary)


#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_37_PROLOG
#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_INCLASS \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LcRuntimeLibraryBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LCRUNTIMELIBRARY_API UClass* StaticClass<class ULcRuntimeLibraryBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_LcRuntimeLibrary_Public_LcRuntimeLibraryBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
