// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef GROUPACTION_GaCharacter_generated_h
#error "GaCharacter.generated.h already included, missing '#pragma once' in GaCharacter.h"
#endif
#define GROUPACTION_GaCharacter_generated_h

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_RPC_WRAPPERS \
	virtual int32 BootCheck_Implementation(); \
	virtual void SmUnitTick_Implementation(); \
	virtual void ExitSmUnit_Implementation(); \
	virtual void BootSmUnit_Implementation(); \
 \
	DECLARE_FUNCTION(execBootCheck); \
	DECLARE_FUNCTION(execSmUnitTick); \
	DECLARE_FUNCTION(execExitSmUnit); \
	DECLARE_FUNCTION(execBootSmUnit);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBootCheck); \
	DECLARE_FUNCTION(execSmUnitTick); \
	DECLARE_FUNCTION(execExitSmUnit); \
	DECLARE_FUNCTION(execBootSmUnit);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_EVENT_PARMS \
	struct BaseGaCharacterSmUnit_eventBootCheck_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseGaCharacterSmUnit_eventBootCheck_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_CALLBACK_WRAPPERS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UBaseGaCharacterSmUnit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UBaseGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UBaseGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UBaseGaCharacterSmUnit, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UBaseGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGaCharacterSmUnit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGaCharacterSmUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGaCharacterSmUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGaCharacterSmUnit(UBaseGaCharacterSmUnit&&); \
	NO_API UBaseGaCharacterSmUnit(const UBaseGaCharacterSmUnit&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGaCharacterSmUnit(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGaCharacterSmUnit(UBaseGaCharacterSmUnit&&); \
	NO_API UBaseGaCharacterSmUnit(const UBaseGaCharacterSmUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGaCharacterSmUnit); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_30_PROLOG \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_EVENT_PARMS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_CALLBACK_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_CALLBACK_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class UBaseGaCharacterSmUnit>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_RPC_WRAPPERS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeadGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UDeadGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UDeadGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUDeadGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UDeadGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UDeadGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UDeadGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeadGaCharacterSmUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadGaCharacterSmUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadGaCharacterSmUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeadGaCharacterSmUnit(UDeadGaCharacterSmUnit&&); \
	NO_API UDeadGaCharacterSmUnit(const UDeadGaCharacterSmUnit&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeadGaCharacterSmUnit(UDeadGaCharacterSmUnit&&); \
	NO_API UDeadGaCharacterSmUnit(const UDeadGaCharacterSmUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeadGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadGaCharacterSmUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeadGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_78_PROLOG
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class UDeadGaCharacterSmUnit>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_RPC_WRAPPERS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UAttackGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UAttackGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUAttackGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UAttackGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UAttackGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UAttackGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttackGaCharacterSmUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackGaCharacterSmUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackGaCharacterSmUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackGaCharacterSmUnit(UAttackGaCharacterSmUnit&&); \
	NO_API UAttackGaCharacterSmUnit(const UAttackGaCharacterSmUnit&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttackGaCharacterSmUnit(UAttackGaCharacterSmUnit&&); \
	NO_API UAttackGaCharacterSmUnit(const UAttackGaCharacterSmUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackGaCharacterSmUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttackGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_92_PROLOG
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class UAttackGaCharacterSmUnit>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_RPC_WRAPPERS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoveGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UMoveGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UMoveGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUMoveGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UMoveGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UMoveGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UMoveGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoveGaCharacterSmUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveGaCharacterSmUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveGaCharacterSmUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveGaCharacterSmUnit(UMoveGaCharacterSmUnit&&); \
	NO_API UMoveGaCharacterSmUnit(const UMoveGaCharacterSmUnit&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveGaCharacterSmUnit(UMoveGaCharacterSmUnit&&); \
	NO_API UMoveGaCharacterSmUnit(const UMoveGaCharacterSmUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveGaCharacterSmUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoveGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_106_PROLOG
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class UMoveGaCharacterSmUnit>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_RPC_WRAPPERS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIdleGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UIdleGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UIdleGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUIdleGaCharacterSmUnit(); \
	friend struct Z_Construct_UClass_UIdleGaCharacterSmUnit_Statics; \
public: \
	DECLARE_CLASS(UIdleGaCharacterSmUnit, UBaseGaCharacterSmUnit, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(UIdleGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIdleGaCharacterSmUnit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIdleGaCharacterSmUnit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdleGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdleGaCharacterSmUnit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdleGaCharacterSmUnit(UIdleGaCharacterSmUnit&&); \
	NO_API UIdleGaCharacterSmUnit(const UIdleGaCharacterSmUnit&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIdleGaCharacterSmUnit(UIdleGaCharacterSmUnit&&); \
	NO_API UIdleGaCharacterSmUnit(const UIdleGaCharacterSmUnit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIdleGaCharacterSmUnit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIdleGaCharacterSmUnit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIdleGaCharacterSmUnit)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_131_PROLOG
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class UIdleGaCharacterSmUnit>();

#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_SPARSE_DATA
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_RPC_WRAPPERS \
	virtual void StopStateMachine_Implementation(); \
	virtual void StateMachineTickLoop_Implementation(); \
	virtual void initCharacterStateMachine_Implementation(); \
	virtual bool CanAttackEnemy_Implementation(); \
 \
	DECLARE_FUNCTION(execClosePossessAi); \
	DECLARE_FUNCTION(execStopStateMachine); \
	DECLARE_FUNCTION(execStateMachineTickLoop); \
	DECLARE_FUNCTION(execinitCharacterStateMachine); \
	DECLARE_FUNCTION(execCanAttackEnemy); \
	DECLARE_FUNCTION(execSetCharacterId); \
	DECLARE_FUNCTION(execSetLerpRotation); \
	DECLARE_FUNCTION(execGetCharacterId); \
	DECLARE_FUNCTION(execExitCurrentUnit); \
	DECLARE_FUNCTION(execSubCharacterHp); \
	DECLARE_FUNCTION(execSetIsBakeCharacter); \
	DECLARE_FUNCTION(execIsBakeCharacter);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClosePossessAi); \
	DECLARE_FUNCTION(execStopStateMachine); \
	DECLARE_FUNCTION(execStateMachineTickLoop); \
	DECLARE_FUNCTION(execinitCharacterStateMachine); \
	DECLARE_FUNCTION(execCanAttackEnemy); \
	DECLARE_FUNCTION(execSetCharacterId); \
	DECLARE_FUNCTION(execSetLerpRotation); \
	DECLARE_FUNCTION(execGetCharacterId); \
	DECLARE_FUNCTION(execExitCurrentUnit); \
	DECLARE_FUNCTION(execSubCharacterHp); \
	DECLARE_FUNCTION(execSetIsBakeCharacter); \
	DECLARE_FUNCTION(execIsBakeCharacter);


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_EVENT_PARMS \
	struct GaCharacter_eventCanAttackEnemy_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GaCharacter_eventCanAttackEnemy_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GaCharacter_eventIdChange_Parms \
	{ \
		int32 newId; \
	};


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_CALLBACK_WRAPPERS
#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGaCharacter(); \
	friend struct Z_Construct_UClass_AGaCharacter_Statics; \
public: \
	DECLARE_CLASS(AGaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(AGaCharacter)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_INCLASS \
private: \
	static void StaticRegisterNativesAGaCharacter(); \
	friend struct Z_Construct_UClass_AGaCharacter_Statics; \
public: \
	DECLARE_CLASS(AGaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/groupAction"), NO_API) \
	DECLARE_SERIALIZER(AGaCharacter)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaCharacter(AGaCharacter&&); \
	NO_API AGaCharacter(const AGaCharacter&); \
public:


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGaCharacter(AGaCharacter&&); \
	NO_API AGaCharacter(const AGaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGaCharacter)


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__smUnitArr() { return STRUCT_OFFSET(AGaCharacter, smUnitArr); } \
	FORCEINLINE static uint32 __PPO__currentSmUnit() { return STRUCT_OFFSET(AGaCharacter, currentSmUnit); }


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_145_PROLOG \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_EVENT_PARMS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_RPC_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_CALLBACK_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_INCLASS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_SPARSE_DATA \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_CALLBACK_WRAPPERS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUPACTION_API UClass* StaticClass<class AGaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_lcTool_Source_groupAction_Public_GaCharacter_h


#define FOREACH_ENUM_EGACHARACTERSMTYPE(op) \
	op(EGaCharacterSmType::EGCMAT_Idle) \
	op(EGaCharacterSmType::EGCMAT_Move) \
	op(EGaCharacterSmType::EGCMAT_Attack) \
	op(EGaCharacterSmType::EGCMAT_Dead) \
	op(EGaCharacterSmType::EGCMAT_BeAttack) \
	op(EGaCharacterSmType::EGCMAT_RunAway) 

enum class EGaCharacterSmType;
template<> GROUPACTION_API UEnum* StaticEnum<EGaCharacterSmType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
