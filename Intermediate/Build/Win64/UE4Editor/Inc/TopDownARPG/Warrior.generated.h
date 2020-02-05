// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWarrior;
#ifdef TOPDOWNARPG_Warrior_generated_h
#error "Warrior.generated.h already included, missing '#pragma once' in Warrior.h"
#endif
#define TOPDOWNARPG_Warrior_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAreFriends) \
	{ \
		P_GET_OBJECT(AWarrior,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreFriends(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLeader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHealer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHealer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTank(); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAreFriends) \
	{ \
		P_GET_OBJECT(AWarrior,Z_Param_Other); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreFriends(Z_Param_Other); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLeader) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsLeader(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHealer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHealer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDPS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDPS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTank) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTank(); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarrior(); \
	friend struct Z_Construct_UClass_AWarrior_Statics; \
public: \
	DECLARE_CLASS(AWarrior, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AWarrior)


#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWarrior(); \
	friend struct Z_Construct_UClass_AWarrior_Statics; \
public: \
	DECLARE_CLASS(AWarrior, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AWarrior)


#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarrior(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarrior) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarrior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarrior); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarrior(AWarrior&&); \
	NO_API AWarrior(const AWarrior&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarrior(AWarrior&&); \
	NO_API AWarrior(const AWarrior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarrior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarrior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarrior)


#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_11_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class AWarrior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_Warrior_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
