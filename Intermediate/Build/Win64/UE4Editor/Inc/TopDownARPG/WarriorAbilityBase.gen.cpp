// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/WarriorAbilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorAbilityBase() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UWarriorAbilityBase_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UWarriorAbilityBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UWarriorAbilityBase_Activate();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarrior_NoRegister();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint();
// End Cross Module References
	static FName NAME_UWarriorAbilityBase_OnActivateBlueprint = FName(TEXT("OnActivateBlueprint"));
	bool UWarriorAbilityBase::OnActivateBlueprint(AWarrior* Target)
	{
		WarriorAbilityBase_eventOnActivateBlueprint_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_UWarriorAbilityBase_OnActivateBlueprint),&Parms);
		return !!Parms.ReturnValue;
	}
	void UWarriorAbilityBase::StaticRegisterNativesUWarriorAbilityBase()
	{
		UClass* Class = UWarriorAbilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &UWarriorAbilityBase::execActivate },
			{ "IsOffCooldown", &UWarriorAbilityBase::execIsOffCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics
	{
		struct WarriorAbilityBase_eventActivate_Parms
		{
			AWarrior* Target;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WarriorAbilityBase_eventActivate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WarriorAbilityBase_eventActivate_Parms), &Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WarriorAbilityBase_eventActivate_Parms, Target), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/WarriorAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorAbilityBase, nullptr, "Activate", nullptr, nullptr, sizeof(WarriorAbilityBase_eventActivate_Parms), Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWarriorAbilityBase_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWarriorAbilityBase_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics
	{
		struct WarriorAbilityBase_eventIsOffCooldown_Parms
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
	void Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WarriorAbilityBase_eventIsOffCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WarriorAbilityBase_eventIsOffCooldown_Parms), &Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/WarriorAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorAbilityBase, nullptr, "IsOffCooldown", nullptr, nullptr, sizeof(WarriorAbilityBase_eventIsOffCooldown_Parms), Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WarriorAbilityBase_eventOnActivateBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WarriorAbilityBase_eventOnActivateBlueprint_Parms), &Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WarriorAbilityBase_eventOnActivateBlueprint_Parms, Target), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/WarriorAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorAbilityBase, nullptr, "OnActivateBlueprint", nullptr, nullptr, sizeof(WarriorAbilityBase_eventOnActivateBlueprint_Parms), Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWarriorAbilityBase_NoRegister()
	{
		return UWarriorAbilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UWarriorAbilityBase_Statics
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
	UObject* (*const Z_Construct_UClass_UWarriorAbilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWarriorAbilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorAbilityBase_Activate, "Activate" }, // 4053157165
		{ &Z_Construct_UFunction_UWarriorAbilityBase_IsOffCooldown, "IsOffCooldown" }, // 1011370789
		{ &Z_Construct_UFunction_UWarriorAbilityBase_OnActivateBlueprint, "OnActivateBlueprint" }, // 2352861302
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWarriorAbilityBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Plugin/WarriorAbilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Plugin/WarriorAbilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWarriorAbilityBase_Statics::NewProp_CooldownTime_MetaData[] = {
		{ "Category", "WarriorAbilityBase" },
		{ "ModuleRelativePath", "Plugin/WarriorAbilityBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWarriorAbilityBase_Statics::NewProp_CooldownTime = { "CooldownTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWarriorAbilityBase, CooldownTime), METADATA_PARAMS(Z_Construct_UClass_UWarriorAbilityBase_Statics::NewProp_CooldownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWarriorAbilityBase_Statics::NewProp_CooldownTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorAbilityBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAbilityBase_Statics::NewProp_CooldownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWarriorAbilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorAbilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWarriorAbilityBase_Statics::ClassParams = {
		&UWarriorAbilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWarriorAbilityBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWarriorAbilityBase_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWarriorAbilityBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWarriorAbilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWarriorAbilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWarriorAbilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWarriorAbilityBase, 1960874406);
	template<> TOPDOWNARPG_API UClass* StaticClass<UWarriorAbilityBase>()
	{
		return UWarriorAbilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWarriorAbilityBase(Z_Construct_UClass_UWarriorAbilityBase, &UWarriorAbilityBase::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("UWarriorAbilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorAbilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
