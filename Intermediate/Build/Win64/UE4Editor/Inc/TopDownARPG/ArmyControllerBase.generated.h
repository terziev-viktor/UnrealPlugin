// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef TOPDOWNARPG_ArmyControllerBase_generated_h
#error "ArmyControllerBase.generated.h already included, missing '#pragma once' in ArmyControllerBase.h"
#endif
#define TOPDOWNARPG_ArmyControllerBase_generated_h

#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnAllWarriors) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnAllWarriors(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSPawnNextWarrior) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SPawnNextWarrior(Z_Param_Location); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnAllWarriors) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnAllWarriors(Z_Param_Location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSPawnNextWarrior) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SPawnNextWarrior(Z_Param_Location); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmyControllerBase(); \
	friend struct Z_Construct_UClass_AArmyControllerBase_Statics; \
public: \
	DECLARE_CLASS(AArmyControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmyControllerBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAArmyControllerBase(); \
	friend struct Z_Construct_UClass_AArmyControllerBase_Statics; \
public: \
	DECLARE_CLASS(AArmyControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmyControllerBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmyControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmyControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmyControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmyControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmyControllerBase(AArmyControllerBase&&); \
	NO_API AArmyControllerBase(const AArmyControllerBase&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmyControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmyControllerBase(AArmyControllerBase&&); \
	NO_API AArmyControllerBase(const AArmyControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmyControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmyControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmyControllerBase)


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_PRIVATE_PROPERTY_OFFSET
#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_12_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class AArmyControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_ArmyControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
