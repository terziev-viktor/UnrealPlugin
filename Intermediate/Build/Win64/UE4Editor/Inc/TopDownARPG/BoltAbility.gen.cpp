// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Abilities/BoltAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoltAbility() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UBoltAbility_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UBoltAbility();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UAbility();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void UBoltAbility::StaticRegisterNativesUBoltAbility()
	{
	}
	UClass* Z_Construct_UClass_UBoltAbility_NoRegister()
	{
		return UBoltAbility::StaticClass();
	}
	struct Z_Construct_UClass_UBoltAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoltAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoltAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Abilities/BoltAbility.h" },
		{ "ModuleRelativePath", "Abilities/BoltAbility.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoltAbility_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "BoltAbility" },
		{ "ModuleRelativePath", "Abilities/BoltAbility.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBoltAbility_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBoltAbility, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBoltAbility_Statics::NewProp_ProjectileClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBoltAbility_Statics::NewProp_ProjectileClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoltAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoltAbility_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoltAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoltAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBoltAbility_Statics::ClassParams = {
		&UBoltAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoltAbility_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBoltAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoltAbility_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBoltAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoltAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBoltAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBoltAbility, 2419754103);
	template<> TOPDOWNARPG_API UClass* StaticClass<UBoltAbility>()
	{
		return UBoltAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoltAbility(Z_Construct_UClass_UBoltAbility, &UBoltAbility::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("UBoltAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoltAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
