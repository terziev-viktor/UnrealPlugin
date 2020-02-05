// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/UI/TopDownRPGHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownRPGHUD() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_ATopDownRPGHUD_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_ATopDownRPGHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
// End Cross Module References
	void ATopDownRPGHUD::StaticRegisterNativesATopDownRPGHUD()
	{
	}
	UClass* Z_Construct_UClass_ATopDownRPGHUD_NoRegister()
	{
		return ATopDownRPGHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownRPGHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownRPGHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownRPGHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/TopDownRPGHUD.h" },
		{ "ModuleRelativePath", "UI/TopDownRPGHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownRPGHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownRPGHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownRPGHUD_Statics::ClassParams = {
		&ATopDownRPGHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownRPGHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATopDownRPGHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownRPGHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownRPGHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownRPGHUD, 1212320720);
	template<> TOPDOWNARPG_API UClass* StaticClass<ATopDownRPGHUD>()
	{
		return ATopDownRPGHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownRPGHUD(Z_Construct_UClass_ATopDownRPGHUD, &ATopDownRPGHUD::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("ATopDownRPGHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownRPGHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
