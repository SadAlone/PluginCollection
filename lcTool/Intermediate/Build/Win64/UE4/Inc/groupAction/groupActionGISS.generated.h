// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseFormationBuilder;
class UGroupActionSaveGame;
class AGaGroupUnit;
struct FGuid;
struct FGaFormationSaveData;
struct FGaUnitSaveData;
#ifdef GROUPACTION_groupActionGISS_generated_h
#error "groupActionGISS.generated.h already included, missing '#pragma once' in groupActionGISS.h"
#endif
#define GROUPACTION_groupActionGISS_generated_h

#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisposeLandscapeCollision);


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisposeLandscapeCollision);


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroupActionGISS(); \
	friend struct Z_Construct_UClass_UGroupActionGISS_Statics; \
public: \
	DECLARE_CLASS(UGroupActionGISS, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UGroupActionGISS)


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGroupActionGISS(); \
	friend struct Z_Construct_UClass_UGroupActionGISS_Statics; \
public: \
	DECLARE_CLASS(UGroupActionGISS, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UGroupActionGISS)


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroupActionGISS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroupActionGISS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroupActionGISS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroupActionGISS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroupActionGISS(UGroupActionGISS&&); \
	NO_API UGroupActionGISS(const UGroupActionGISS&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroupActionGISS() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroupActionGISS(UGroupActionGISS&&); \
	NO_API UGroupActionGISS(const UGroupActionGISS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroupActionGISS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroupActionGISS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGroupActionGISS)


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_17_PROLOG
#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class UGroupActionGISS>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLcChangeFormationGuid); \
	DECLARE_FUNCTION(execLoadGroupActionSettingSave); \
	DECLARE_FUNCTION(execLoadGroupActionUnitSave); \
	DECLARE_FUNCTION(execGetUnitSaveGame); \
	DECLARE_FUNCTION(execAddFormationSaveDataAndSave); \
	DECLARE_FUNCTION(execAddUnitSaveDataAndSaveUn); \
	DECLARE_FUNCTION(execAddUnitSaveDataAndSaveBF); \
	DECLARE_FUNCTION(execGetSpeicailGuidFormationSaveData); \
	DECLARE_FUNCTION(execGetSpeicailGuidUnitSaveData);


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLcChangeFormationGuid); \
	DECLARE_FUNCTION(execLoadGroupActionSettingSave); \
	DECLARE_FUNCTION(execLoadGroupActionUnitSave); \
	DECLARE_FUNCTION(execGetUnitSaveGame); \
	DECLARE_FUNCTION(execAddFormationSaveDataAndSave); \
	DECLARE_FUNCTION(execAddUnitSaveDataAndSaveUn); \
	DECLARE_FUNCTION(execAddUnitSaveDataAndSaveBF); \
	DECLARE_FUNCTION(execGetSpeicailGuidFormationSaveData); \
	DECLARE_FUNCTION(execGetSpeicailGuidUnitSaveData);


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroupActionEngineSS(); \
	friend struct Z_Construct_UClass_UGroupActionEngineSS_Statics; \
public: \
	DECLARE_CLASS(UGroupActionEngineSS, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UGroupActionEngineSS)


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUGroupActionEngineSS(); \
	friend struct Z_Construct_UClass_UGroupActionEngineSS_Statics; \
public: \
	DECLARE_CLASS(UGroupActionEngineSS, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UGroupActionEngineSS)


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroupActionEngineSS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroupActionEngineSS) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroupActionEngineSS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroupActionEngineSS); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroupActionEngineSS(UGroupActionEngineSS&&); \
	NO_API UGroupActionEngineSS(const UGroupActionEngineSS&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroupActionEngineSS() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroupActionEngineSS(UGroupActionEngineSS&&); \
	NO_API UGroupActionEngineSS(const UGroupActionEngineSS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroupActionEngineSS); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroupActionEngineSS); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGroupActionEngineSS)


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_31_PROLOG
#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class UGroupActionEngineSS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_groupAction_Public_groupActionGISS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
