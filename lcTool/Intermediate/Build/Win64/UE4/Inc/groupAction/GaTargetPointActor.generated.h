// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ABaseFormationBuilder;
#ifdef GROUPACTION_GaTargetPointActor_generated_h
#error "GaTargetPointActor.generated.h already included, missing '#pragma once' in GaTargetPointActor.h"
#endif
#define GROUPACTION_GaTargetPointActor_generated_h

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaSpecialFrameToggleActiveData_Statics; \
	GROUPACTION_API static class UScriptStruct* StaticStruct();


template<> GROUPACTION_API UScriptStruct* StaticStruct<struct FGaSpecialFrameToggleActiveData>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteRangeAttackTargetData_Statics; \
	GROUPACTION_API static class UScriptStruct* StaticStruct();


template<> GROUPACTION_API UScriptStruct* StaticStruct<struct FRemoteRangeAttackTargetData>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteRangeAttackTargetInterfaceData_Statics; \
	GROUPACTION_API static class UScriptStruct* StaticStruct();


template<> GROUPACTION_API UScriptStruct* StaticStruct<struct FRemoteRangeAttackTargetInterfaceData>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFormationTargetUnitData_Statics; \
	GROUPACTION_API static class UScriptStruct* StaticStruct();


template<> GROUPACTION_API UScriptStruct* StaticStruct<struct FFormationTargetUnitData>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCircleFormationTargetUnitData_Statics; \
	GROUPACTION_API static class UScriptStruct* StaticStruct();


template<> GROUPACTION_API UScriptStruct* StaticStruct<struct FCircleFormationTargetUnitData>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSquareFormationTargetUnitData_Statics; \
	GROUPACTION_API static class UScriptStruct* StaticStruct();


template<> GROUPACTION_API UScriptStruct* StaticStruct<struct FSquareFormationTargetUnitData>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIdleTargetUnitData_Statics; \
	GROUPACTION_API static class UScriptStruct* StaticStruct();


template<> GROUPACTION_API UScriptStruct* StaticStruct<struct FIdleTargetUnitData>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_RPC_WRAPPERS \
	virtual FVector GetTargetFormationWorldLocation_Implementation(ABaseFormationBuilder* gaUnit, int32 id); \
 \
	DECLARE_FUNCTION(execAddEnemyInstance); \
	DECLARE_FUNCTION(execGetInstancesInsideSphere); \
	DECLARE_FUNCTION(execGetTargetFormationWorldLocation);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddEnemyInstance); \
	DECLARE_FUNCTION(execGetInstancesInsideSphere); \
	DECLARE_FUNCTION(execGetTargetFormationWorldLocation);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_EVENT_PARMS \
	struct GaTargetPointActor_eventGetTargetFormationWorldLocation_Parms \
	{ \
		ABaseFormationBuilder* gaUnit; \
		int32 id; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GaTargetPointActor_eventGetTargetFormationWorldLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_CALLBACK_WRAPPERS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGaTargetPointActor(); \
	friend struct Z_Construct_UClass_AGaTargetPointActor_Statics; \
public: \
	DECLARE_CLASS(AGaTargetPointActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(AGaTargetPointActor)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_INCLASS \
private: \
	static void StaticRegisterNativesAGaTargetPointActor(); \
	friend struct Z_Construct_UClass_AGaTargetPointActor_Statics; \
public: \
	DECLARE_CLASS(AGaTargetPointActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(AGaTargetPointActor)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGaTargetPointActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGaTargetPointActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaTargetPointActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaTargetPointActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaTargetPointActor(AGaTargetPointActor&&); \
	NO_API AGaTargetPointActor(const AGaTargetPointActor&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaTargetPointActor(AGaTargetPointActor&&); \
	NO_API AGaTargetPointActor(const AGaTargetPointActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaTargetPointActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaTargetPointActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGaTargetPointActor)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_284_PROLOG \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_EVENT_PARMS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_CALLBACK_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_CALLBACK_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h_287_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class AGaTargetPointActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_groupAction_Public_GaTargetPointActor_h


#define FOREACH_ENUM_EREMOTERANGEATTACKTARGETTYPE(op) \
	op(ERemoteRangeAttackTargetType::ERRATT_Square) \
	op(ERemoteRangeAttackTargetType::ERRATT_Circle) 

enum class ERemoteRangeAttackTargetType : uint8;
template<> GROUPACTION_API UEnum* StaticEnum<ERemoteRangeAttackTargetType>();

#define FOREACH_ENUM_EFORMATIONTARGETTYPE(op) \
	op(EFormationTargetType::EFTT_OriFormation) \
	op(EFormationTargetType::EFTT_FormationBuilder) \
	op(EFormationTargetType::EFTT_SquareFormation) \
	op(EFormationTargetType::EFTT_CircleFormation) 

enum class EFormationTargetType : uint8;
template<> GROUPACTION_API UEnum* StaticEnum<EFormationTargetType>();

#define FOREACH_ENUM_EFORMATIONTARGETFINISHCONDITIONTYPE(op) \
	op(EFormationTargetFinishConditionType::EFTFCT_Immediately) \
	op(EFormationTargetFinishConditionType::EFTFCT_AllArrive) \
	op(EFormationTargetFinishConditionType::EFTFCT_Sequence) 

enum class EFormationTargetFinishConditionType : uint8;
template<> GROUPACTION_API UEnum* StaticEnum<EFormationTargetFinishConditionType>();

#define FOREACH_ENUM_EIDELTARGETFINISHCONDITIONTYPE(op) \
	op(EIdelTargetFinishConditionType::EITFCT_Immediately) \
	op(EIdelTargetFinishConditionType::EITFCT_Delay) \
	op(EIdelTargetFinishConditionType::EITFCT_Sequence) 

enum class EIdelTargetFinishConditionType : uint8;
template<> GROUPACTION_API UEnum* StaticEnum<EIdelTargetFinishConditionType>();

#define FOREACH_ENUM_ETARGETUNITTYPE(op) \
	op(ETargetUnitType::ETUT_Idle) \
	op(ETargetUnitType::ETUT_FormationTarget) \
	op(ETargetUnitType::ETUT_PointTarget) \
	op(ETargetUnitType::ETUT_ActorTarget) \
	op(ETargetUnitType::ETUT_RemoteRangeRandAttackTarget) \
	op(ETargetUnitType::ETUT_CustomTarget) 

enum class ETargetUnitType : uint8;
template<> GROUPACTION_API UEnum* StaticEnum<ETargetUnitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
