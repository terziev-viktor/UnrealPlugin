// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/Warrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarrior() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarrior_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarrior();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_AWarrior_AreFriends();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_AWarrior_IsDPS();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_AWarrior_IsHealer();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_AWarrior_IsLeader();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_AWarrior_IsTank();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UWarriorAbilityBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UStrategyComponent_NoRegister();
	TOPDOWNARPG_API UEnum* Z_Construct_UEnum_TopDownARPG_WarriorClass();
// End Cross Module References
	void AWarrior::StaticRegisterNativesAWarrior()
	{
		UClass* Class = AWarrior::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreFriends", &AWarrior::execAreFriends },
			{ "IsDPS", &AWarrior::execIsDPS },
			{ "IsHealer", &AWarrior::execIsHealer },
			{ "IsLeader", &AWarrior::execIsLeader },
			{ "IsTank", &AWarrior::execIsTank },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWarrior_AreFriends_Statics
	{
		struct Warrior_eventAreFriends_Parms
		{
			const AWarrior* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Warrior_eventAreFriends_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Warrior_eventAreFriends_Parms), &Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Warrior_eventAreFriends_Parms, Other), Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_Other_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_Other_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarrior_AreFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarrior_AreFriends_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarrior_AreFriends_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarrior_AreFriends_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarrior, nullptr, "AreFriends", nullptr, nullptr, sizeof(Warrior_eventAreFriends_Parms), Z_Construct_UFunction_AWarrior_AreFriends_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_AreFriends_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarrior_AreFriends_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_AreFriends_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarrior_AreFriends()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarrior_AreFriends_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWarrior_IsDPS_Statics
	{
		struct Warrior_eventIsDPS_Parms
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
	void Z_Construct_UFunction_AWarrior_IsDPS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Warrior_eventIsDPS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarrior_IsDPS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Warrior_eventIsDPS_Parms), &Z_Construct_UFunction_AWarrior_IsDPS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarrior_IsDPS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarrior_IsDPS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarrior_IsDPS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarrior_IsDPS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarrior, nullptr, "IsDPS", nullptr, nullptr, sizeof(Warrior_eventIsDPS_Parms), Z_Construct_UFunction_AWarrior_IsDPS_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsDPS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarrior_IsDPS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsDPS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarrior_IsDPS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarrior_IsDPS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWarrior_IsHealer_Statics
	{
		struct Warrior_eventIsHealer_Parms
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
	void Z_Construct_UFunction_AWarrior_IsHealer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Warrior_eventIsHealer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarrior_IsHealer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Warrior_eventIsHealer_Parms), &Z_Construct_UFunction_AWarrior_IsHealer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarrior_IsHealer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarrior_IsHealer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarrior_IsHealer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarrior_IsHealer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarrior, nullptr, "IsHealer", nullptr, nullptr, sizeof(Warrior_eventIsHealer_Parms), Z_Construct_UFunction_AWarrior_IsHealer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsHealer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarrior_IsHealer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsHealer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarrior_IsHealer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarrior_IsHealer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWarrior_IsLeader_Statics
	{
		struct Warrior_eventIsLeader_Parms
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
	void Z_Construct_UFunction_AWarrior_IsLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Warrior_eventIsLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarrior_IsLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Warrior_eventIsLeader_Parms), &Z_Construct_UFunction_AWarrior_IsLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarrior_IsLeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarrior_IsLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarrior_IsLeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarrior_IsLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarrior, nullptr, "IsLeader", nullptr, nullptr, sizeof(Warrior_eventIsLeader_Parms), Z_Construct_UFunction_AWarrior_IsLeader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsLeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarrior_IsLeader_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsLeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarrior_IsLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarrior_IsLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWarrior_IsTank_Statics
	{
		struct Warrior_eventIsTank_Parms
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
	void Z_Construct_UFunction_AWarrior_IsTank_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Warrior_eventIsTank_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarrior_IsTank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Warrior_eventIsTank_Parms), &Z_Construct_UFunction_AWarrior_IsTank_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarrior_IsTank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarrior_IsTank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWarrior_IsTank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarrior_IsTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarrior, nullptr, "IsTank", nullptr, nullptr, sizeof(Warrior_eventIsTank_Parms), Z_Construct_UFunction_AWarrior_IsTank_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsTank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWarrior_IsTank_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWarrior_IsTank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWarrior_IsTank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWarrior_IsTank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWarrior_NoRegister()
	{
		return AWarrior::StaticClass();
	}
	struct Z_Construct_UClass_AWarrior_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarriorAbilityInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarriorAbilityInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WarriorAbilityInstances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarriorAbilityTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarriorAbilityTemplates;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WarriorAbilityTemplates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Decide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Class_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWarrior_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarrior_AreFriends, "AreFriends" }, // 883112037
		{ &Z_Construct_UFunction_AWarrior_IsDPS, "IsDPS" }, // 933634772
		{ &Z_Construct_UFunction_AWarrior_IsHealer, "IsHealer" }, // 2355818576
		{ &Z_Construct_UFunction_AWarrior_IsLeader, "IsLeader" }, // 3115012825
		{ &Z_Construct_UFunction_AWarrior_IsTank, "IsTank" }, // 2869893037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarrior_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Plugin/Warrior.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityInstances_MetaData[] = {
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityInstances = { "WarriorAbilityInstances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarrior, WarriorAbilityInstances), METADATA_PARAMS(Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityInstances_Inner = { "WarriorAbilityInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWarriorAbilityBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityTemplates_MetaData[] = {
		{ "Category", "Warrior" },
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityTemplates = { "WarriorAbilityTemplates", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarrior, WarriorAbilityTemplates), METADATA_PARAMS(Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityTemplates_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityTemplates_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityTemplates_Inner = { "WarriorAbilityTemplates", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWarriorAbilityBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarrior_Statics::NewProp_Decide_MetaData[] = {
		{ "Category", "Custom" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarrior_Statics::NewProp_Decide = { "Decide", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarrior, Decide), Z_Construct_UClass_UStrategyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWarrior_Statics::NewProp_Decide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarrior_Statics::NewProp_Decide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarrior_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Warrior" },
		{ "ModuleRelativePath", "Plugin/Warrior.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWarrior_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarrior, Class), Z_Construct_UEnum_TopDownARPG_WarriorClass, METADATA_PARAMS(Z_Construct_UClass_AWarrior_Statics::NewProp_Class_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarrior_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWarrior_Statics::NewProp_Class_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarrior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarrior_Statics::NewProp_WarriorAbilityTemplates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarrior_Statics::NewProp_Decide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarrior_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarrior_Statics::NewProp_Class_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarrior_Statics::ClassParams = {
		&AWarrior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWarrior_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWarrior_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWarrior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWarrior, 598800228);
	template<> TOPDOWNARPG_API UClass* StaticClass<AWarrior>()
	{
		return AWarrior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarrior(Z_Construct_UClass_AWarrior, &AWarrior::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("AWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
