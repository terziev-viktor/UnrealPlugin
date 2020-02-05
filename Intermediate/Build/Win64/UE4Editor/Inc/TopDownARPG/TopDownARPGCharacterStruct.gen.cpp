// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/DataTables/TopDownARPGCharacterStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownARPGCharacterStruct() {}
// Cross Module References
	TOPDOWNARPG_API UScriptStruct* Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UAbility_NoRegister();
// End Cross Module References
class UScriptStruct* FTopDownARPGCharacterStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOPDOWNARPG_API uint32 Get_Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct, Z_Construct_UPackage__Script_TopDownARPG(), TEXT("TopDownARPGCharacterStruct"), sizeof(FTopDownARPGCharacterStruct), Get_Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Hash());
	}
	return Singleton;
}
template<> TOPDOWNARPG_API UScriptStruct* StaticStruct<FTopDownARPGCharacterStruct>()
{
	return FTopDownARPGCharacterStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTopDownARPGCharacterStruct(FTopDownARPGCharacterStruct::StaticStruct, TEXT("/Script/TopDownARPG"), TEXT("TopDownARPGCharacterStruct"), false, nullptr, nullptr);
static struct FScriptStruct_TopDownARPG_StaticRegisterNativesFTopDownARPGCharacterStruct
{
	FScriptStruct_TopDownARPG_StaticRegisterNativesFTopDownARPGCharacterStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TopDownARPGCharacterStruct")),new UScriptStruct::TCppStructOps<FTopDownARPGCharacterStruct>);
	}
} ScriptStruct_TopDownARPG_StaticRegisterNativesFTopDownARPGCharacterStruct;
	struct Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityTemplates;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AbilityTemplates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumHealth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DataTables/TopDownARPGCharacterStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTopDownARPGCharacterStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_AbilityTemplates_MetaData[] = {
		{ "Category", "TopDownARPGCharacterStruct" },
		{ "ModuleRelativePath", "DataTables/TopDownARPGCharacterStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_AbilityTemplates = { "AbilityTemplates", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTopDownARPGCharacterStruct, AbilityTemplates), METADATA_PARAMS(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_AbilityTemplates_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_AbilityTemplates_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_AbilityTemplates_Inner = { "AbilityTemplates", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_MaximumHealth_MetaData[] = {
		{ "Category", "TopDownARPGCharacterStruct" },
		{ "ModuleRelativePath", "DataTables/TopDownARPGCharacterStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_MaximumHealth = { "MaximumHealth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTopDownARPGCharacterStruct, MaximumHealth), METADATA_PARAMS(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_MaximumHealth_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_MaximumHealth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_AbilityTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_AbilityTemplates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::NewProp_MaximumHealth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TopDownARPGCharacterStruct",
		sizeof(FTopDownARPGCharacterStruct),
		alignof(FTopDownARPGCharacterStruct),
		Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownARPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TopDownARPGCharacterStruct"), sizeof(FTopDownARPGCharacterStruct), Get_Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTopDownARPGCharacterStruct_Hash() { return 3405912111U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
