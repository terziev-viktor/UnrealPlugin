// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNARPG_Army_generated_h
#error "Army.generated.h already included, missing '#pragma once' in Army.h"
#endif
#define TOPDOWNARPG_Army_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_RPC_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmy(); \
	friend struct Z_Construct_UClass_AArmy_Statics; \
public: \
	DECLARE_CLASS(AArmy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmy)


#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArmy(); \
	friend struct Z_Construct_UClass_AArmy_Statics; \
public: \
	DECLARE_CLASS(AArmy, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmy)


#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmy(AArmy&&); \
	NO_API AArmy(const AArmy&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmy(AArmy&&); \
	NO_API AArmy(const AArmy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArmy)


#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AArmy, CursorToWorld); }


#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_9_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Army_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class AArmy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_Army_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
