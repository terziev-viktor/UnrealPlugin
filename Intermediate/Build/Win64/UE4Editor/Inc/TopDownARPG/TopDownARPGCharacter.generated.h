// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef TOPDOWNARPG_TopDownARPGCharacter_generated_h
#error "TopDownARPGCharacter.generated.h already included, missing '#pragma once' in TopDownARPGCharacter.h"
#endif
#define TOPDOWNARPG_TopDownARPGCharacter_generated_h

#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigateBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigateBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeAnyDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DamagedActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_OBJECT(AController,Z_Param_InstigateBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigateBy,Z_Param_DamageCauser); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownARPGCharacter(); \
	friend struct Z_Construct_UClass_ATopDownARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(ATopDownARPGCharacter)


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATopDownARPGCharacter(); \
	friend struct Z_Construct_UClass_ATopDownARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopDownARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(ATopDownARPGCharacter)


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownARPGCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownARPGCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownARPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownARPGCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownARPGCharacter(ATopDownARPGCharacter&&); \
	NO_API ATopDownARPGCharacter(const ATopDownARPGCharacter&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownARPGCharacter(ATopDownARPGCharacter&&); \
	NO_API ATopDownARPGCharacter(const ATopDownARPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownARPGCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownARPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownARPGCharacter)


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(ATopDownARPGCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATopDownARPGCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(ATopDownARPGCharacter, CursorToWorld); } \
	FORCEINLINE static uint32 __PPO__AbilityTemplates() { return STRUCT_OFFSET(ATopDownARPGCharacter, AbilityTemplates); } \
	FORCEINLINE static uint32 __PPO__CharacterStatsRow() { return STRUCT_OFFSET(ATopDownARPGCharacter, CharacterStatsRow); } \
	FORCEINLINE static uint32 __PPO__MaximumHealth() { return STRUCT_OFFSET(ATopDownARPGCharacter, MaximumHealth); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ATopDownARPGCharacter, Health); }


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_11_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class ATopDownARPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Characters_TopDownARPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
