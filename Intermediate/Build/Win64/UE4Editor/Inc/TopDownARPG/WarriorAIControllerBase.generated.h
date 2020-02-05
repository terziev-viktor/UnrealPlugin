// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNARPG_WarriorAIControllerBase_generated_h
#error "WarriorAIControllerBase.generated.h already included, missing '#pragma once' in WarriorAIControllerBase.h"
#endif
#define TOPDOWNARPG_WarriorAIControllerBase_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_RPC_WRAPPERS
#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorAIControllerBase(); \
	friend struct Z_Construct_UClass_AWarriorAIControllerBase_Statics; \
public: \
	DECLARE_CLASS(AWarriorAIControllerBase, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AWarriorAIControllerBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWarriorAIControllerBase(); \
	friend struct Z_Construct_UClass_AWarriorAIControllerBase_Statics; \
public: \
	DECLARE_CLASS(AWarriorAIControllerBase, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AWarriorAIControllerBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorAIControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorAIControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorAIControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorAIControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarriorAIControllerBase(AWarriorAIControllerBase&&); \
	NO_API AWarriorAIControllerBase(const AWarriorAIControllerBase&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorAIControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarriorAIControllerBase(AWarriorAIControllerBase&&); \
	NO_API AWarriorAIControllerBase(const AWarriorAIControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorAIControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorAIControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorAIControllerBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BehaviourTree() { return STRUCT_OFFSET(AWarriorAIControllerBase, BehaviourTree); } \
	FORCEINLINE static uint32 __PPO__BlackboardComponent() { return STRUCT_OFFSET(AWarriorAIControllerBase, BlackboardComponent); } \
	FORCEINLINE static uint32 __PPO__BehaviourTreeComponent() { return STRUCT_OFFSET(AWarriorAIControllerBase, BehaviourTreeComponent); }


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_12_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class AWarriorAIControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_WarriorAIControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
