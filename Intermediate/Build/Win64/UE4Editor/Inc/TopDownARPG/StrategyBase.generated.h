// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarrior;
#ifdef TOPDOWNARPG_StrategyBase_generated_h
#error "StrategyBase.generated.h already included, missing '#pragma once' in StrategyBase.h"
#endif
#define TOPDOWNARPG_StrategyBase_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecide) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_EnemyWarriors); \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_FriendlyWarriors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->Decide(Z_Param_Out_EnemyWarriors,Z_Param_Out_FriendlyWarriors); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecide) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_EnemyWarriors); \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_FriendlyWarriors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->Decide(Z_Param_Out_EnemyWarriors,Z_Param_Out_FriendlyWarriors); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_EVENT_PARMS \
	struct StrategyBase_eventOnDecideBlueprint_Parms \
	{ \
		TArray<AWarrior*> EnemyWarriors; \
		TArray<AWarrior*> FriendlyWarriors; \
		AWarrior* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StrategyBase_eventOnDecideBlueprint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_CALLBACK_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrategyBase(); \
	friend struct Z_Construct_UClass_UStrategyBase_Statics; \
public: \
	DECLARE_CLASS(UStrategyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UStrategyBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUStrategyBase(); \
	friend struct Z_Construct_UClass_UStrategyBase_Statics; \
public: \
	DECLARE_CLASS(UStrategyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UStrategyBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrategyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrategyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrategyBase(UStrategyBase&&); \
	NO_API UStrategyBase(const UStrategyBase&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrategyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrategyBase(UStrategyBase&&); \
	NO_API UStrategyBase(const UStrategyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrategyBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategyBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_13_PROLOG \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_EVENT_PARMS


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class UStrategyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_StrategyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
