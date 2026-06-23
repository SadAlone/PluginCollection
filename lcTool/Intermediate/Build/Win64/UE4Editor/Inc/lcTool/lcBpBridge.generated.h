// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UDataTable;
class UGroomAsset; class UGroomBindingAsset;
struct FFeather;
class AActor;
class UStaticMesh;
class USkeletalMesh;
#ifdef LCTOOL_lcBpBridge_generated_h
#error "lcBpBridge.generated.h already included, missing '#pragma once' in lcBpBridge.h"
#endif
#define LCTOOL_lcBpBridge_generated_h

#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorOutputUnitSave_Statics; \
	LCTOOL_API static class UScriptStruct* StaticStruct();


template<> LCTOOL_API UScriptStruct* StaticStruct<struct FColorOutputUnitSave>();

#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeather_Statics; \
	LCTOOL_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> LCTOOL_API UScriptStruct* StaticStruct<struct FFeather>();

#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSelectSet_Statics; \
	LCTOOL_API static class UScriptStruct* StaticStruct();


template<> LCTOOL_API UScriptStruct* StaticStruct<struct FLevelSelectSet>();

#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcallUpdateExe); \
	DECLARE_FUNCTION(execRequestServerPluginVersion); \
	DECLARE_FUNCTION(execRequestServerCode); \
	DECLARE_FUNCTION(execsettingEnableStencil); \
	DECLARE_FUNCTION(execclearSpecialIdColorOutputSet); \
	DECLARE_FUNCTION(execclearAllColorOuputSet); \
	DECLARE_FUNCTION(execaddContentToSpecialColorSet); \
	DECLARE_FUNCTION(execgetAllColorId); \
	DECLARE_FUNCTION(execgetSpecialIdColorouputContent); \
	DECLARE_FUNCTION(execdelColorOutputSet); \
	DECLARE_FUNCTION(execaddNewColorOuputSet); \
	DECLARE_FUNCTION(execgetSpecialIdColor); \
	DECLARE_FUNCTION(execClearLevelSelectSet); \
	DECLARE_FUNCTION(execgetAllSetName); \
	DECLARE_FUNCTION(execsetSpecialNameToNewSetName); \
	DECLARE_FUNCTION(execremoveSpecialSetNameContent); \
	DECLARE_FUNCTION(execgetSelectContentBySetName); \
	DECLARE_FUNCTION(execaddContentToSpecialSet); \
	DECLARE_FUNCTION(execaddNewSelectSet); \
	DECLARE_FUNCTION(execGetAllSqPtrBinddingsName); \
	DECLARE_FUNCTION(execRemoveAllNodeEqualSpecialName); \
	DECLARE_FUNCTION(execRemoveAllNodeContainSpecialName); \
	DECLARE_FUNCTION(execgetTableAllGroomAsset); \
	DECLARE_FUNCTION(execdeleteDataTableValue); \
	DECLARE_FUNCTION(execaddDataTableValue); \
	DECLARE_FUNCTION(execgetAllFileOnDirectory); \
	DECLARE_FUNCTION(execGetLevelMesh); \
	DECLARE_FUNCTION(execsetMesh); \
	DECLARE_FUNCTION(execGetSetArray); \
	DECLARE_FUNCTION(execEmptyPathSet); \
	DECLARE_FUNCTION(execDelDirPathToSet); \
	DECLARE_FUNCTION(execCallAddPitch); \
	DECLARE_FUNCTION(execsetMeshType); \
	DECLARE_FUNCTION(execClearMeshAllMat); \
	DECLARE_FUNCTION(execReplaceLevelMeshMat); \
	DECLARE_FUNCTION(execReplaceMeshMat);


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcallUpdateExe); \
	DECLARE_FUNCTION(execRequestServerPluginVersion); \
	DECLARE_FUNCTION(execRequestServerCode); \
	DECLARE_FUNCTION(execsettingEnableStencil); \
	DECLARE_FUNCTION(execclearSpecialIdColorOutputSet); \
	DECLARE_FUNCTION(execclearAllColorOuputSet); \
	DECLARE_FUNCTION(execaddContentToSpecialColorSet); \
	DECLARE_FUNCTION(execgetAllColorId); \
	DECLARE_FUNCTION(execgetSpecialIdColorouputContent); \
	DECLARE_FUNCTION(execdelColorOutputSet); \
	DECLARE_FUNCTION(execaddNewColorOuputSet); \
	DECLARE_FUNCTION(execgetSpecialIdColor); \
	DECLARE_FUNCTION(execClearLevelSelectSet); \
	DECLARE_FUNCTION(execgetAllSetName); \
	DECLARE_FUNCTION(execsetSpecialNameToNewSetName); \
	DECLARE_FUNCTION(execremoveSpecialSetNameContent); \
	DECLARE_FUNCTION(execgetSelectContentBySetName); \
	DECLARE_FUNCTION(execaddContentToSpecialSet); \
	DECLARE_FUNCTION(execaddNewSelectSet); \
	DECLARE_FUNCTION(execGetAllSqPtrBinddingsName); \
	DECLARE_FUNCTION(execRemoveAllNodeEqualSpecialName); \
	DECLARE_FUNCTION(execRemoveAllNodeContainSpecialName); \
	DECLARE_FUNCTION(execgetTableAllGroomAsset); \
	DECLARE_FUNCTION(execdeleteDataTableValue); \
	DECLARE_FUNCTION(execaddDataTableValue); \
	DECLARE_FUNCTION(execgetAllFileOnDirectory); \
	DECLARE_FUNCTION(execGetLevelMesh); \
	DECLARE_FUNCTION(execsetMesh); \
	DECLARE_FUNCTION(execGetSetArray); \
	DECLARE_FUNCTION(execEmptyPathSet); \
	DECLARE_FUNCTION(execDelDirPathToSet); \
	DECLARE_FUNCTION(execCallAddPitch); \
	DECLARE_FUNCTION(execsetMeshType); \
	DECLARE_FUNCTION(execClearMeshAllMat); \
	DECLARE_FUNCTION(execReplaceLevelMeshMat); \
	DECLARE_FUNCTION(execReplaceMeshMat);


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUlcBpBridge(); \
	friend struct Z_Construct_UClass_UlcBpBridge_Statics; \
public: \
	DECLARE_CLASS(UlcBpBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(UlcBpBridge)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUlcBpBridge(); \
	friend struct Z_Construct_UClass_UlcBpBridge_Statics; \
public: \
	DECLARE_CLASS(UlcBpBridge, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(UlcBpBridge)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlcBpBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UlcBpBridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlcBpBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlcBpBridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlcBpBridge(UlcBpBridge&&); \
	NO_API UlcBpBridge(const UlcBpBridge&); \
public:


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlcBpBridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlcBpBridge(UlcBpBridge&&); \
	NO_API UlcBpBridge(const UlcBpBridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlcBpBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlcBpBridge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UlcBpBridge)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_77_PROLOG
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_INCLASS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LCTOOL_API UClass* StaticClass<class UlcBpBridge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_lcTool_Public_lcBpBridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
