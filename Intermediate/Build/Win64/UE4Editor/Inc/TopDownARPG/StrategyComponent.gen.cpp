// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/StrategyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyComponent() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UStrategyComponent_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UStrategyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyComponent_Decide();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarrior_NoRegister();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyComponent_DecideByEnemies();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyComponent_DecideByFriendly();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint();
// End Cross Module References
	static FName NAME_UStrategyComponent_OnDecideBlueprint = FName(TEXT("OnDecideBlueprint"));
	AWarrior* UStrategyComponent::OnDecideBlueprint(TArray<AWarrior*>& Friendly, TArray<AWarrior*>& Enemy)
	{
		StrategyComponent_eventOnDecideBlueprint_Parms Parms;
		Parms.Friendly=Friendly;
		Parms.Enemy=Enemy;
		ProcessEvent(FindFunctionChecked(NAME_UStrategyComponent_OnDecideBlueprint),&Parms);
		Friendly=Parms.Friendly;
		Enemy=Parms.Enemy;
		return Parms.ReturnValue;
	}
	static FName NAME_UStrategyComponent_OnDecideByEnemiesBlueprint = FName(TEXT("OnDecideByEnemiesBlueprint"));
	AWarrior* UStrategyComponent::OnDecideByEnemiesBlueprint(TArray<AWarrior*>& Enemy)
	{
		StrategyComponent_eventOnDecideByEnemiesBlueprint_Parms Parms;
		Parms.Enemy=Enemy;
		ProcessEvent(FindFunctionChecked(NAME_UStrategyComponent_OnDecideByEnemiesBlueprint),&Parms);
		Enemy=Parms.Enemy;
		return Parms.ReturnValue;
	}
	static FName NAME_UStrategyComponent_OnDecideByFriendlyBlueprint = FName(TEXT("OnDecideByFriendlyBlueprint"));
	AWarrior* UStrategyComponent::OnDecideByFriendlyBlueprint(TArray<AWarrior*>& Enemy)
	{
		StrategyComponent_eventOnDecideByFriendlyBlueprint_Parms Parms;
		Parms.Enemy=Enemy;
		ProcessEvent(FindFunctionChecked(NAME_UStrategyComponent_OnDecideByFriendlyBlueprint),&Parms);
		Enemy=Parms.Enemy;
		return Parms.ReturnValue;
	}
	void UStrategyComponent::StaticRegisterNativesUStrategyComponent()
	{
		UClass* Class = UStrategyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Decide", &UStrategyComponent::execDecide },
			{ "DecideByEnemies", &UStrategyComponent::execDecideByEnemies },
			{ "DecideByFriendly", &UStrategyComponent::execDecideByFriendly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStrategyComponent_Decide_Statics
	{
		struct StrategyComponent_eventDecide_Parms
		{
			TArray<AWarrior*> Friendly;
			TArray<AWarrior*> Enemy;
			AWarrior* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Friendly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Friendly_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventDecide_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventDecide_Parms, Enemy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Enemy_Inner = { "Enemy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Friendly = { "Friendly", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventDecide_Parms, Friendly), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Friendly_Inner = { "Friendly", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyComponent_Decide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Enemy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Friendly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_Decide_Statics::NewProp_Friendly_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyComponent_Decide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyComponent_Decide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyComponent, nullptr, "Decide", nullptr, nullptr, sizeof(StrategyComponent_eventDecide_Parms), Z_Construct_UFunction_UStrategyComponent_Decide_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_Decide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyComponent_Decide_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_Decide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyComponent_Decide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyComponent_Decide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics
	{
		struct StrategyComponent_eventDecideByEnemies_Parms
		{
			TArray<AWarrior*> Enemy;
			AWarrior* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventDecideByEnemies_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventDecideByEnemies_Parms, Enemy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::NewProp_Enemy_Inner = { "Enemy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::NewProp_Enemy_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyComponent, nullptr, "DecideByEnemies", nullptr, nullptr, sizeof(StrategyComponent_eventDecideByEnemies_Parms), Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyComponent_DecideByEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyComponent_DecideByEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics
	{
		struct StrategyComponent_eventDecideByFriendly_Parms
		{
			TArray<AWarrior*> Friendly;
			AWarrior* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Friendly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Friendly_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventDecideByFriendly_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::NewProp_Friendly = { "Friendly", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventDecideByFriendly_Parms, Friendly), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::NewProp_Friendly_Inner = { "Friendly", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::NewProp_Friendly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::NewProp_Friendly_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyComponent, nullptr, "DecideByFriendly", nullptr, nullptr, sizeof(StrategyComponent_eventDecideByFriendly_Parms), Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyComponent_DecideByFriendly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyComponent_DecideByFriendly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Friendly;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Friendly_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventOnDecideBlueprint_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventOnDecideBlueprint_Parms, Enemy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Enemy_Inner = { "Enemy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Friendly = { "Friendly", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventOnDecideBlueprint_Parms, Friendly), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Friendly_Inner = { "Friendly", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Enemy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Friendly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::NewProp_Friendly_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyComponent, nullptr, "OnDecideBlueprint", nullptr, nullptr, sizeof(StrategyComponent_eventOnDecideBlueprint_Parms), Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventOnDecideByEnemiesBlueprint_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventOnDecideByEnemiesBlueprint_Parms, Enemy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::NewProp_Enemy_Inner = { "Enemy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::NewProp_Enemy_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyComponent, nullptr, "OnDecideByEnemiesBlueprint", nullptr, nullptr, sizeof(StrategyComponent_eventOnDecideByEnemiesBlueprint_Parms), Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Enemy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Enemy_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventOnDecideByFriendlyBlueprint_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyComponent_eventOnDecideByFriendlyBlueprint_Parms, Enemy), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::NewProp_Enemy_Inner = { "Enemy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::NewProp_Enemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::NewProp_Enemy_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyComponent, nullptr, "OnDecideByFriendlyBlueprint", nullptr, nullptr, sizeof(StrategyComponent_eventOnDecideByFriendlyBlueprint_Parms), Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStrategyComponent_NoRegister()
	{
		return UStrategyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStrategyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrategyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStrategyComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStrategyComponent_Decide, "Decide" }, // 3071940027
		{ &Z_Construct_UFunction_UStrategyComponent_DecideByEnemies, "DecideByEnemies" }, // 1257152998
		{ &Z_Construct_UFunction_UStrategyComponent_DecideByFriendly, "DecideByFriendly" }, // 38471863
		{ &Z_Construct_UFunction_UStrategyComponent_OnDecideBlueprint, "OnDecideBlueprint" }, // 1879691611
		{ &Z_Construct_UFunction_UStrategyComponent_OnDecideByEnemiesBlueprint, "OnDecideByEnemiesBlueprint" }, // 3347258605
		{ &Z_Construct_UFunction_UStrategyComponent_OnDecideByFriendlyBlueprint, "OnDecideByFriendlyBlueprint" }, // 1862092071
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrategyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Plugin/StrategyComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Plugin/StrategyComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrategyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrategyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrategyComponent_Statics::ClassParams = {
		&UStrategyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStrategyComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStrategyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrategyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrategyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrategyComponent, 355870129);
	template<> TOPDOWNARPG_API UClass* StaticClass<UStrategyComponent>()
	{
		return UStrategyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrategyComponent(Z_Construct_UClass_UStrategyComponent, &UStrategyComponent::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("UStrategyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrategyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
