// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarrior;
#ifdef TOPDOWNARPG_WarriorAbilityBase_generated_h
#error "WarriorAbilityBase.generated.h already included, missing '#pragma once' in WarriorAbilityBase.h"
#endif
#define TOPDOWNARPG_WarriorAbilityBase_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOffCooldown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOffCooldown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_GET_OBJECT(AWarrior,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Activate(Z_Param_Target); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOffCooldown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOffCooldown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActivate) \
	{ \
		P_GET_OBJECT(AWarrior,Z_Param_Target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Activate(Z_Param_Target); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_EVENT_PARMS \
	struct WarriorAbilityBase_eventOnActivateBlueprint_Parms \
	{ \
		AWarrior* Target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WarriorAbilityBase_eventOnActivateBlueprint_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_CALLBACK_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorAbilityBase(); \
	friend struct Z_Construct_UClass_UWarriorAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UWarriorAbilityBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UWarriorAbilityBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUWarriorAbilityBase(); \
	friend struct Z_Construct_UClass_UWarriorAbilityBase_Statics; \
public: \
	DECLARE_CLASS(UWarriorAbilityBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UWarriorAbilityBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorAbilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorAbilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWarriorAbilityBase(UWarriorAbilityBase&&); \
	NO_API UWarriorAbilityBase(const UWarriorAbilityBase&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorAbilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWarriorAbilityBase(UWarriorAbilityBase&&); \
	NO_API UWarriorAbilityBase(const UWarriorAbilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorAbilityBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorAbilityBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorAbilityBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_13_PROLOG \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_EVENT_PARMS


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class UWarriorAbilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAbilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
