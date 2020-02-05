// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNARPG_BoltAbility_generated_h
#error "BoltAbility.generated.h already included, missing '#pragma once' in BoltAbility.h"
#endif
#define TOPDOWNARPG_BoltAbility_generated_h

#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_RPC_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoltAbility(); \
	friend struct Z_Construct_UClass_UBoltAbility_Statics; \
public: \
	DECLARE_CLASS(UBoltAbility, UAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UBoltAbility)


#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUBoltAbility(); \
	friend struct Z_Construct_UClass_UBoltAbility_Statics; \
public: \
	DECLARE_CLASS(UBoltAbility, UAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(UBoltAbility)


#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoltAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoltAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoltAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoltAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoltAbility(UBoltAbility&&); \
	NO_API UBoltAbility(const UBoltAbility&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoltAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoltAbility(UBoltAbility&&); \
	NO_API UBoltAbility(const UBoltAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoltAbility); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoltAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoltAbility)


#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(UBoltAbility, ProjectileClass); }


#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_12_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class UBoltAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Abilities_BoltAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
