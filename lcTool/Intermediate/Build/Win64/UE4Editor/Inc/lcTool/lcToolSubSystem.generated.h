// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UlcBpBridge;
enum class ELevelCommandType : uint8;
class UWorld;
class USkeletalMesh;
class ALandscape;
class UMaterialInterface;
class AActor;
class UMaterialInstance;
class UMaterialFunction;
class UMaterial;
class UMovieSceneCameraCutTrack;
struct FMovieSceneObjectBindingID;
enum class ELcTransformType : uint8;
enum class ELcVectorType : uint8;
class UlcImportFileSystem;
#ifdef LCTOOL_lcToolSubSystem_generated_h
#error "lcToolSubSystem.generated.h already included, missing '#pragma once' in lcToolSubSystem.h"
#endif
#define LCTOOL_lcToolSubSystem_generated_h

#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestImportFile); \
	DECLARE_FUNCTION(execGetBridgetPtr); \
	DECLARE_FUNCTION(execfunctionPtrTets2); \
	DECLARE_FUNCTION(execfunctionPtrTets); \
	DECLARE_FUNCTION(exectestFeature); \
	DECLARE_FUNCTION(execSetLevelCommand); \
	DECLARE_FUNCTION(execLcSaveAll); \
	DECLARE_FUNCTION(execLcAddLevelToWorld); \
	DECLARE_FUNCTION(execImportAnimation); \
	DECLARE_FUNCTION(execClearLandscapeMat); \
	DECLARE_FUNCTION(execSetLandscapeMat); \
	DECLARE_FUNCTION(execLcRunCmdWithSave); \
	DECLARE_FUNCTION(execLcOpenLevelAndBindCamera); \
	DECLARE_FUNCTION(execLockActorArrMovement); \
	DECLARE_FUNCTION(execLcMainmapLevelAutoDispose); \
	DECLARE_FUNCTION(execLockSpecialNameLevels); \
	DECLARE_FUNCTION(execAddLevelToSpecialPathFolder); \
	DECLARE_FUNCTION(execSetMaterialProperty); \
	DECLARE_FUNCTION(execSetMaterialFunctionAllParameterInSameGroup); \
	DECLARE_FUNCTION(execSetMaterialAllParameterInSameGroup); \
	DECLARE_FUNCTION(execAddMaterialFunctionParameterNodePrefixInSelect); \
	DECLARE_FUNCTION(execAddMaterialParameterNodePrefixInSelect); \
	DECLARE_FUNCTION(execAddMaterialFunctionParameterNodePrefix); \
	DECLARE_FUNCTION(execAddMaterialParameterNodePrefix); \
	DECLARE_FUNCTION(execSetMaterialFunctionParameterNodeNameInSelect); \
	DECLARE_FUNCTION(execSetMaterialParameterNodeNameInSelect); \
	DECLARE_FUNCTION(execDeleteMatFunSpecialPrefixNodePrefix); \
	DECLARE_FUNCTION(execDeleteSpecialPrefixNodePrefix); \
	DECLARE_FUNCTION(execSelectAllMatFunParamter); \
	DECLARE_FUNCTION(execSelectAllParamter); \
	DECLARE_FUNCTION(execSelectAllMatFunSpecialPrefixNode); \
	DECLARE_FUNCTION(execSelectALlSpecialPrefixNode); \
	DECLARE_FUNCTION(execSetMaterialFunctionAllParameterNodeName); \
	DECLARE_FUNCTION(execSetMaterialAllParameterNodeName); \
	DECLARE_FUNCTION(execLcAddNewCameraCut); \
	DECLARE_FUNCTION(execAddActorsToSequencerRecorder); \
	DECLARE_FUNCTION(execselectSpecialNameTrackInAllBinding); \
	DECLARE_FUNCTION(execselectSpecialNameTrackInHighLightsBinding); \
	DECLARE_FUNCTION(execselectSpecialTransofrmChildNodeInSelection); \
	DECLARE_FUNCTION(execselectAllNodeIncludeSpecialNameInSelection); \
	DECLARE_FUNCTION(execLcGetSpecialPathFileList); \
	DECLARE_FUNCTION(execClearExportDir); \
	DECLARE_FUNCTION(execcreateMultiThread); \
	DECLARE_FUNCTION(execImportSpecialFileFoliageInfo); \
	DECLARE_FUNCTION(execExportCurrentLevelFoliageInfo); \
	DECLARE_FUNCTION(execLcExportTextureAsset); \
	DECLARE_FUNCTION(execLcOpenGetMultiSystemDirPathDialog); \
	DECLARE_FUNCTION(execLcOpenGetSystemDirPathDialog); \
	DECLARE_FUNCTION(execLcOpenGetSystemFilePathDialog); \
	DECLARE_FUNCTION(execLcOpenGetEngineDirDialog); \
	DECLARE_FUNCTION(execLcImportCameraAnimFbx); \
	DECLARE_FUNCTION(execLcImportAnimFbx); \
	DECLARE_FUNCTION(execLcImportRigFbxArray); \
	DECLARE_FUNCTION(execLcImportRigFbx); \
	DECLARE_FUNCTION(execLcOnCreateJobFromAsset); \
	DECLARE_FUNCTION(execLcDeleteMovieSequence); \
	DECLARE_FUNCTION(execLcImportMovieSequence); \
	DECLARE_FUNCTION(execGetImportFileSystemPtr);


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestImportFile); \
	DECLARE_FUNCTION(execGetBridgetPtr); \
	DECLARE_FUNCTION(execfunctionPtrTets2); \
	DECLARE_FUNCTION(execfunctionPtrTets); \
	DECLARE_FUNCTION(exectestFeature); \
	DECLARE_FUNCTION(execSetLevelCommand); \
	DECLARE_FUNCTION(execLcSaveAll); \
	DECLARE_FUNCTION(execLcAddLevelToWorld); \
	DECLARE_FUNCTION(execImportAnimation); \
	DECLARE_FUNCTION(execClearLandscapeMat); \
	DECLARE_FUNCTION(execSetLandscapeMat); \
	DECLARE_FUNCTION(execLcRunCmdWithSave); \
	DECLARE_FUNCTION(execLcOpenLevelAndBindCamera); \
	DECLARE_FUNCTION(execLockActorArrMovement); \
	DECLARE_FUNCTION(execLcMainmapLevelAutoDispose); \
	DECLARE_FUNCTION(execLockSpecialNameLevels); \
	DECLARE_FUNCTION(execAddLevelToSpecialPathFolder); \
	DECLARE_FUNCTION(execSetMaterialProperty); \
	DECLARE_FUNCTION(execSetMaterialFunctionAllParameterInSameGroup); \
	DECLARE_FUNCTION(execSetMaterialAllParameterInSameGroup); \
	DECLARE_FUNCTION(execAddMaterialFunctionParameterNodePrefixInSelect); \
	DECLARE_FUNCTION(execAddMaterialParameterNodePrefixInSelect); \
	DECLARE_FUNCTION(execAddMaterialFunctionParameterNodePrefix); \
	DECLARE_FUNCTION(execAddMaterialParameterNodePrefix); \
	DECLARE_FUNCTION(execSetMaterialFunctionParameterNodeNameInSelect); \
	DECLARE_FUNCTION(execSetMaterialParameterNodeNameInSelect); \
	DECLARE_FUNCTION(execDeleteMatFunSpecialPrefixNodePrefix); \
	DECLARE_FUNCTION(execDeleteSpecialPrefixNodePrefix); \
	DECLARE_FUNCTION(execSelectAllMatFunParamter); \
	DECLARE_FUNCTION(execSelectAllParamter); \
	DECLARE_FUNCTION(execSelectAllMatFunSpecialPrefixNode); \
	DECLARE_FUNCTION(execSelectALlSpecialPrefixNode); \
	DECLARE_FUNCTION(execSetMaterialFunctionAllParameterNodeName); \
	DECLARE_FUNCTION(execSetMaterialAllParameterNodeName); \
	DECLARE_FUNCTION(execLcAddNewCameraCut); \
	DECLARE_FUNCTION(execAddActorsToSequencerRecorder); \
	DECLARE_FUNCTION(execselectSpecialNameTrackInAllBinding); \
	DECLARE_FUNCTION(execselectSpecialNameTrackInHighLightsBinding); \
	DECLARE_FUNCTION(execselectSpecialTransofrmChildNodeInSelection); \
	DECLARE_FUNCTION(execselectAllNodeIncludeSpecialNameInSelection); \
	DECLARE_FUNCTION(execLcGetSpecialPathFileList); \
	DECLARE_FUNCTION(execClearExportDir); \
	DECLARE_FUNCTION(execcreateMultiThread); \
	DECLARE_FUNCTION(execImportSpecialFileFoliageInfo); \
	DECLARE_FUNCTION(execExportCurrentLevelFoliageInfo); \
	DECLARE_FUNCTION(execLcExportTextureAsset); \
	DECLARE_FUNCTION(execLcOpenGetMultiSystemDirPathDialog); \
	DECLARE_FUNCTION(execLcOpenGetSystemDirPathDialog); \
	DECLARE_FUNCTION(execLcOpenGetSystemFilePathDialog); \
	DECLARE_FUNCTION(execLcOpenGetEngineDirDialog); \
	DECLARE_FUNCTION(execLcImportCameraAnimFbx); \
	DECLARE_FUNCTION(execLcImportAnimFbx); \
	DECLARE_FUNCTION(execLcImportRigFbxArray); \
	DECLARE_FUNCTION(execLcImportRigFbx); \
	DECLARE_FUNCTION(execLcOnCreateJobFromAsset); \
	DECLARE_FUNCTION(execLcDeleteMovieSequence); \
	DECLARE_FUNCTION(execLcImportMovieSequence); \
	DECLARE_FUNCTION(execGetImportFileSystemPtr);


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUlcToolSubSystem(); \
	friend struct Z_Construct_UClass_UlcToolSubSystem_Statics; \
public: \
	DECLARE_CLASS(UlcToolSubSystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(UlcToolSubSystem)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_INCLASS \
private: \
	static void StaticRegisterNativesUlcToolSubSystem(); \
	friend struct Z_Construct_UClass_UlcToolSubSystem_Statics; \
public: \
	DECLARE_CLASS(UlcToolSubSystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/lcTool"), NO_API) \
	DECLARE_SERIALIZER(UlcToolSubSystem)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlcToolSubSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UlcToolSubSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlcToolSubSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlcToolSubSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlcToolSubSystem(UlcToolSubSystem&&); \
	NO_API UlcToolSubSystem(const UlcToolSubSystem&); \
public:


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UlcToolSubSystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UlcToolSubSystem(UlcToolSubSystem&&); \
	NO_API UlcToolSubSystem(const UlcToolSubSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UlcToolSubSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UlcToolSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UlcToolSubSystem)


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_287_PROLOG
#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_INCLASS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h_290_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LCTOOL_API UClass* StaticClass<class UlcToolSubSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_lcTool_Public_lcToolSubSystem_h


#define FOREACH_ENUM_ELEVELCOMMANDTYPE(op) \
	op(ELevelCommandType::EAllShadow) \
	op(ELevelCommandType::EToonShadow) \
	op(ELevelCommandType::ELightVog) \
	op(ELevelCommandType::EGroomDebug) 

enum class ELevelCommandType : uint8;
template<> LCTOOL_API UEnum* StaticEnum<ELevelCommandType>();

#define FOREACH_ENUM_ELCVECTORTYPE(op) \
	op(ELcVectorType::EAll) \
	op(ELcVectorType::EX) \
	op(ELcVectorType::EY) \
	op(ELcVectorType::EZ) 

enum class ELcVectorType : uint8;
template<> LCTOOL_API UEnum* StaticEnum<ELcVectorType>();

#define FOREACH_ENUM_ELCTRANSFORMTYPE(op) \
	op(ELcTransformType::ELocation) \
	op(ELcTransformType::ERotation) \
	op(ELcTransformType::EScale) 

enum class ELcTransformType : uint8;
template<> LCTOOL_API UEnum* StaticEnum<ELcTransformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
