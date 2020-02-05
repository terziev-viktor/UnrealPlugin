// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Abilities/Ability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbility() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UAbility_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UAbility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UAbility_Activate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UAbility_IsOffCooldown();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UAbility_OnActivateBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UAbility_OnActivateBlueprint = FName(TEXT("OnActivateBlueprint"));
	void UAbility::OnActivateBlueprint(AActor* Source)
	{
		Ability_eventOnActivateBlueprint_Parms Parms;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_UAbility_OnActivateBlueprint),&Parms);
	}
	void UAbility::StaticRegisterNativesUAbility()
	{
		UClass* Class = UAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UAbility::execActivate },
			{ "IsOffCooldown", &UAbility::execIsOffCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbility_Activate_Statics
	{
		struct Ability_eventActivate_Parms
		{
			FVector AimLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventActivate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Ability_eventActivate_Parms), &Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_AimLocation = { "AimLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventActivate_Parms, AimLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_Activate_Statics::NewProp_AimLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "Activate", nullptr, nullptr, sizeof(Ability_eventActivate_Parms), Z_Construct_UFunction_UAbility_Activate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_IsOffCooldown_Statics
	{
		struct Ability_eventIsOffCooldown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Ability_eventIsOffCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Ability_eventIsOffCooldown_Parms), &Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "IsOffCooldown", nullptr, nullptr, sizeof(Ability_eventIsOffCooldown_Parms), Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_IsOffCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_IsOffCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Ability_eventOnActivateBlueprint_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbility, nullptr, "OnActivateBlueprint", nullptr, nullptr, sizeof(Ability_eventOnActivateBlueprint_Parms), Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbility_OnActivateBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbility_OnActivateBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbility_NoRegister()
	{
		return UAbility::StaticClass();
	}
	struct Z_Construct_UClass_UAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbility_Activate, "Activate" }, // 2475530053
		{ &Z_Construct_UFunction_UAbility_IsOffCooldown, "IsOffCooldown" }, // 2175374042
		{ &Z_Construct_UFunction_UAbility_OnActivateBlueprint, "OnActivateBlueprint" }, // 690232339
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/Ability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Abilities/Ability.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTime_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Abilities/Ability.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbility, CooldownTime), METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbility_Statics::NewProp_CooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbility_Statics::ClassParams = {
		&UAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbility_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbility, 3405092766);
	template<> TOPDOWNARPG_API UClass* StaticClass<UAbility>()
	{
		return UAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbility(Z_Construct_UClass_UAbility, &UAbility::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("UAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
