// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/ArmyControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmyControllerBase() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AArmyControllerBase_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AArmyControllerBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOPDOWNARPG_API UFunction* Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior();
// End Cross Module References
	void AArmyControllerBase::StaticRegisterNativesAArmyControllerBase()
	{
		UClass* Class = AArmyControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnAllWarriors", &AArmyControllerBase::execSpawnAllWarriors },
			{ "SPawnNextWarrior", &AArmyControllerBase::execSPawnNextWarrior },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics
	{
		struct ArmyControllerBase_eventSpawnAllWarriors_Parms
		{
			FVector Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArmyControllerBase_eventSpawnAllWarriors_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/ArmyControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmyControllerBase, nullptr, "SpawnAllWarriors", nullptr, nullptr, sizeof(ArmyControllerBase_eventSpawnAllWarriors_Parms), Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics
	{
		struct ArmyControllerBase_eventSPawnNextWarrior_Parms
		{
			FVector Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArmyControllerBase_eventSPawnNextWarrior_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Plugin/ArmyControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArmyControllerBase, nullptr, "SPawnNextWarrior", nullptr, nullptr, sizeof(ArmyControllerBase_eventSPawnNextWarrior_Parms), Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArmyControllerBase_NoRegister()
	{
		return AArmyControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AArmyControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmyControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArmyControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArmyControllerBase_SpawnAllWarriors, "SpawnAllWarriors" }, // 100346228
		{ &Z_Construct_UFunction_AArmyControllerBase_SPawnNextWarrior, "SPawnNextWarrior" }, // 3365432386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmyControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Plugin/ArmyControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Plugin/ArmyControllerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmyControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmyControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmyControllerBase_Statics::ClassParams = {
		&AArmyControllerBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArmyControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmyControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmyControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmyControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmyControllerBase, 2986128028);
	template<> TOPDOWNARPG_API UClass* StaticClass<AArmyControllerBase>()
	{
		return AArmyControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmyControllerBase(Z_Construct_UClass_AArmyControllerBase, &AArmyControllerBase::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("AArmyControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmyControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
