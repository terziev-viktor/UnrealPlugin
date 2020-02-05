// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarrior;
#ifdef TOPDOWNARPG_StrategyComponent_generated_h
#error "StrategyComponent.generated.h already included, missing '#pragma once' in StrategyComponent.h"
#endif
#define TOPDOWNARPG_StrategyComponent_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecideByFriendly) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Friendly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->DecideByFriendly(Z_Param_Out_Friendly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecideByEnemies) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Enemy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->DecideByEnemies(Z_Param_Out_Enemy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecide) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Friendly); \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Enemy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->Decide(Z_Param_Out_Friendly,Z_Param_Out_Enemy); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecideByFriendly) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Friendly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->DecideByFriendly(Z_Param_Out_Friendly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecideByEnemies) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Enemy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->DecideByEnemies(Z_Param_Out_Enemy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecide) \
	{ \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Friendly); \
		P_GET_TARRAY_REF(AWarrior*,Z_Param_Out_Enemy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWarrior**)Z_Param__Result=P_THIS->Decide(Z_Param_Out_Friendly,Z_Param_Out_Enemy); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_EVENT_PARMS \
	struct StrategyComponent_eventOnDecideBlueprint_Parms \
	{ \
		TArray<AWarrior*> Friendly; \
		TArray<AWarrior*> Enemy; \
		AWarrior* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StrategyComponent_eventOnDecideBlueprint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct StrategyComponent_eventOnDecideByEnemiesBlueprint_Parms \
	{ \
		TArray<AWarrior*> Enemy; \
		AWarrior* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StrategyComponent_eventOnDecideByEnemiesBlueprint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct StrategyComponent_eventOnDecideByFriendlyBlueprint_Parms \
	{ \
		TArray<AWarrior*> Enemy; \
		AWarrior* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		StrategyComponent_eventOnDecideByFriendlyBlueprint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_CALLBACK_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrategyComponent(); \
	friend struct Z_Construct_UClass_UStrategyComponent_Statics; \
public: \
	DECLARE_CLASS(UStrategyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UStrategyComponent)


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUStrategyComponent(); \
	friend struct Z_Construct_UClass_UStrategyComponent_Statics; \
public: \
	DECLARE_CLASS(UStrategyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UStrategyComponent)


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrategyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrategyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrategyComponent(UStrategyComponent&&); \
	NO_API UStrategyComponent(const UStrategyComponent&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStrategyComponent(UStrategyComponent&&); \
	NO_API UStrategyComponent(const UStrategyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrategyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStrategyComponent)


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_11_PROLOG \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_EVENT_PARMS


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class UStrategyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_StrategyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
