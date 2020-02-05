// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
#ifdef TOPDOWNARPG_Ability_generated_h
#error "Ability.generated.h already included, missing '#pragma once' in Ability.h"
#endif
#define TOPDOWNARPG_Ability_generated_h

#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_RPC_WRAPPERS \
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
		P_GET_STRUCT(FVector,Z_Param_AimLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Activate(Z_Param_AimLocation); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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
		P_GET_STRUCT(FVector,Z_Param_AimLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Activate(Z_Param_AimLocation); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_EVENT_PARMS \
	struct Ability_eventOnActivateBlueprint_Parms \
	{ \
		AActor* Source; \
	};


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_CALLBACK_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAbility(); \
	friend struct Z_Construct_UClass_UAbility_Statics; \
public: \
	DECLARE_CLASS(UAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UAbility)


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbility(UAbility&&); \
	NO_API UAbility(const UAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbility)


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_PRIVATE_PROPERTY_OFFSET
#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_12_PROLOG \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_EVENT_PARMS


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_CALLBACK_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class UAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Abilities_Ability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
