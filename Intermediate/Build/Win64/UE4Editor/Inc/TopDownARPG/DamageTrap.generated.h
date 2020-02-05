// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TOPDOWNARPG_DamageTrap_generated_h
#error "DamageTrap.generated.h already included, missing '#pragma once' in DamageTrap.h"
#endif
#define TOPDOWNARPG_DamageTrap_generated_h

#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_Other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamageTrap(); \
	friend struct Z_Construct_UClass_ADamageTrap_Statics; \
public: \
	DECLARE_CLASS(ADamageTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(ADamageTrap)


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADamageTrap(); \
	friend struct Z_Construct_UClass_ADamageTrap_Statics; \
public: \
	DECLARE_CLASS(ADamageTrap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownARPG"), NO_API) \
	DECLARE_SERIALIZER(ADamageTrap)


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADamageTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADamageTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageTrap(ADamageTrap&&); \
	NO_API ADamageTrap(const ADamageTrap&); \
public:


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageTrap(ADamageTrap&&); \
	NO_API ADamageTrap(const ADamageTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamageTrap)


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(ADamageTrap, Damage); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ADamageTrap, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__OnOverlapParticle() { return STRUCT_OFFSET(ADamageTrap, OnOverlapParticle); }


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_9_PROLOG
#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_RPC_WRAPPERS \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_INCLASS \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_INCLASS_NO_PURE_DECLS \
	UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNARPG_API UClass* StaticClass<class ADamageTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Triggers_DamageTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
