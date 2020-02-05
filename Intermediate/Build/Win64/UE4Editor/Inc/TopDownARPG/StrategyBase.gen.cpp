// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/StrategyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrategyBase() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UStrategyBase_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UStrategyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyBase_Decide();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarrior_NoRegister();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint();
// End Cross Module References
	static FName NAME_UStrategyBase_OnDecideBlueprint = FName(TEXT("OnDecideBlueprint"));
	AWarrior* UStrategyBase::OnDecideBlueprint(TArray<AWarrior*>& EnemyWarriors, TArray<AWarrior*>& FriendlyWarriors) const
	{
		StrategyBase_eventOnDecideBlueprint_Parms Parms;
		Parms.EnemyWarriors=EnemyWarriors;
		Parms.FriendlyWarriors=FriendlyWarriors;
		const_cast<UStrategyBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UStrategyBase_OnDecideBlueprint),&Parms);
		EnemyWarriors=Parms.EnemyWarriors;
		FriendlyWarriors=Parms.FriendlyWarriors;
		return Parms.ReturnValue;
	}
	void UStrategyBase::StaticRegisterNativesUStrategyBase()
	{
		UClass* Class = UStrategyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Decide", &UStrategyBase::execDecide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStrategyBase_Decide_Statics
	{
		struct StrategyBase_eventDecide_Parms
		{
			TArray<AWarrior*> EnemyWarriors;
			TArray<AWarrior*> FriendlyWarriors;
			AWarrior* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FriendlyWarriors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendlyWarriors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyWarriors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyWarriors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyBase_eventDecide_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_FriendlyWarriors = { "FriendlyWarriors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyBase_eventDecide_Parms, FriendlyWarriors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_FriendlyWarriors_Inner = { "FriendlyWarriors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_EnemyWarriors = { "EnemyWarriors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyBase_eventDecide_Parms, EnemyWarriors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_EnemyWarriors_Inner = { "EnemyWarriors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyBase_Decide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_FriendlyWarriors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_FriendlyWarriors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_EnemyWarriors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_Decide_Statics::NewProp_EnemyWarriors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyBase_Decide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyBase_Decide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyBase, nullptr, "Decide", nullptr, nullptr, sizeof(StrategyBase_eventDecide_Parms), Z_Construct_UFunction_UStrategyBase_Decide_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyBase_Decide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyBase_Decide_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyBase_Decide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyBase_Decide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyBase_Decide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FriendlyWarriors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendlyWarriors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemyWarriors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyWarriors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyBase_eventOnDecideBlueprint_Parms, ReturnValue), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_FriendlyWarriors = { "FriendlyWarriors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyBase_eventOnDecideBlueprint_Parms, FriendlyWarriors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_FriendlyWarriors_Inner = { "FriendlyWarriors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_EnemyWarriors = { "EnemyWarriors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StrategyBase_eventOnDecideBlueprint_Parms, EnemyWarriors), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_EnemyWarriors_Inner = { "EnemyWarriors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_FriendlyWarriors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_FriendlyWarriors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_EnemyWarriors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::NewProp_EnemyWarriors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/StrategyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStrategyBase, nullptr, "OnDecideBlueprint", nullptr, nullptr, sizeof(StrategyBase_eventOnDecideBlueprint_Parms), Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStrategyBase_NoRegister()
	{
		return UStrategyBase::StaticClass();
	}
	struct Z_Construct_UClass_UStrategyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStrategyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStrategyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStrategyBase_Decide, "Decide" }, // 1073902435
		{ &Z_Construct_UFunction_UStrategyBase_OnDecideBlueprint, "OnDecideBlueprint" }, // 3171300960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStrategyBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Plugin/StrategyBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Plugin/StrategyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStrategyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStrategyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStrategyBase_Statics::ClassParams = {
		&UStrategyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStrategyBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStrategyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStrategyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStrategyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStrategyBase, 581904976);
	template<> TOPDOWNARPG_API UClass* StaticClass<UStrategyBase>()
	{
		return UStrategyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStrategyBase(Z_Construct_UClass_UStrategyBase, &UStrategyBase::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("UStrategyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStrategyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
