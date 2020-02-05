// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/Army.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmy() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AArmy_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AArmy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarrior_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AArmy::StaticRegisterNativesAArmy()
	{
	}
	UClass* Z_Construct_UClass_AArmy_NoRegister()
	{
		return AArmy::StaticClass();
	}
	struct Z_Construct_UClass_AArmy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Warriors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Warriors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Warriors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarriorTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WarriorTemplates;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WarriorTemplates_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Plugin/Army.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Plugin/Army.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmy_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Plugin/Army.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmy_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmy, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmy_Statics::NewProp_CursorToWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmy_Statics::NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmy_Statics::NewProp_Warriors_MetaData[] = {
		{ "Category", "Army" },
		{ "ModuleRelativePath", "Plugin/Army.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArmy_Statics::NewProp_Warriors = { "Warriors", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmy, Warriors), METADATA_PARAMS(Z_Construct_UClass_AArmy_Statics::NewProp_Warriors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmy_Statics::NewProp_Warriors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmy_Statics::NewProp_Warriors_Inner = { "Warriors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmy_Statics::NewProp_WarriorTemplates_MetaData[] = {
		{ "Category", "Army" },
		{ "ModuleRelativePath", "Plugin/Army.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArmy_Statics::NewProp_WarriorTemplates = { "WarriorTemplates", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmy, WarriorTemplates), METADATA_PARAMS(Z_Construct_UClass_AArmy_Statics::NewProp_WarriorTemplates_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmy_Statics::NewProp_WarriorTemplates_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArmy_Statics::NewProp_WarriorTemplates_Inner = { "WarriorTemplates", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWarrior_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmy_Statics::NewProp_CursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmy_Statics::NewProp_Warriors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmy_Statics::NewProp_Warriors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmy_Statics::NewProp_WarriorTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmy_Statics::NewProp_WarriorTemplates_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmy_Statics::ClassParams = {
		&AArmy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AArmy_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AArmy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmy, 3703235543);
	template<> TOPDOWNARPG_API UClass* StaticClass<AArmy>()
	{
		return AArmy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmy(Z_Construct_UClass_AArmy, &AArmy::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("AArmy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
