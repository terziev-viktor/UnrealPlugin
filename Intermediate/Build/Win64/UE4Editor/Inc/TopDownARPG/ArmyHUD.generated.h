// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNARPG_ArmyHUD_generated_h
#error "ArmyHUD.generated.h already included, missing '#pragma once' in ArmyHUD.h"
#endif
#define TOPDOWNARPG_ArmyHUD_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_RPC_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmyHUD(); \
	friend struct Z_Construct_UClass_AArmyHUD_Statics; \
public: \
	DECLARE_CLASS(AArmyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmyHUD)


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAArmyHUD(); \
	friend struct Z_Construct_UClass_AArmyHUD_Statics; \
public: \
	DECLARE_CLASS(AArmyHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmyHUD)


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmyHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmyHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmyHUD(AArmyHUD&&); \
	NO_API AArmyHUD(const AArmyHUD&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmyHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmyHUD(AArmyHUD&&); \
	NO_API AArmyHUD(const AArmyHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmyHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmyHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmyHUD)


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_12_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class AArmyHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_ArmyHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
