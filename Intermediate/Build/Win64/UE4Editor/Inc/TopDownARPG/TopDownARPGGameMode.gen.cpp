// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/GameModes/TopDownARPGGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownARPGGameMode() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_ATopDownARPGGameMode_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_ATopDownARPGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
// End Cross Module References
	void ATopDownARPGGameMode::StaticRegisterNativesATopDownARPGGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATopDownARPGGameMode_NoRegister()
	{
		return ATopDownARPGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownARPGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameTimeInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownARPGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownARPGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModes/TopDownARPGGameMode.h" },
		{ "ModuleRelativePath", "GameModes/TopDownARPGGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownARPGGameMode_Statics::NewProp_GameTimeInSeconds_MetaData[] = {
		{ "Category", "TopDownARPGGameMode" },
		{ "ModuleRelativePath", "GameModes/TopDownARPGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopDownARPGGameMode_Statics::NewProp_GameTimeInSeconds = { "GameTimeInSeconds", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATopDownARPGGameMode, GameTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_ATopDownARPGGameMode_Statics::NewProp_GameTimeInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATopDownARPGGameMode_Statics::NewProp_GameTimeInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownARPGGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownARPGGameMode_Statics::NewProp_GameTimeInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownARPGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownARPGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownARPGGameMode_Statics::ClassParams = {
		&ATopDownARPGGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDownARPGGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATopDownARPGGameMode_Statics::PropPointers),
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATopDownARPGGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATopDownARPGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownARPGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownARPGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownARPGGameMode, 658019921);
	template<> TOPDOWNARPG_API UClass* StaticClass<ATopDownARPGGameMode>()
	{
		return ATopDownARPGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownARPGGameMode(Z_Construct_UClass_ATopDownARPGGameMode, &ATopDownARPGGameMode::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("ATopDownARPGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownARPGGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
