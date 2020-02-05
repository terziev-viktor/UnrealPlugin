// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Controllers/TopDownARPGPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownARPGPlayerController() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_ATopDownARPGPlayerController_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_ATopDownARPGPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
// End Cross Module References
	void ATopDownARPGPlayerController::StaticRegisterNativesATopDownARPGPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATopDownARPGPlayerController_NoRegister()
	{
		return ATopDownARPGPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownARPGPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownARPGPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownARPGPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Controllers/TopDownARPGPlayerController.h" },
		{ "ModuleRelativePath", "Controllers/TopDownARPGPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownARPGPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownARPGPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownARPGPlayerController_Statics::ClassParams = {
		&ATopDownARPGPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownARPGPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATopDownARPGPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownARPGPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownARPGPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownARPGPlayerController, 2123146740);
	template<> TOPDOWNARPG_API UClass* StaticClass<ATopDownARPGPlayerController>()
	{
		return ATopDownARPGPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownARPGPlayerController(Z_Construct_UClass_ATopDownARPGPlayerController, &ATopDownARPGPlayerController::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("ATopDownARPGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownARPGPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
