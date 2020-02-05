// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/ArmyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmyHUD() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AArmyHUD_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AArmyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UArmyWidget_NoRegister();
// End Cross Module References
	void AArmyHUD::StaticRegisterNativesAArmyHUD()
	{
	}
	UClass* Z_Construct_UClass_AArmyHUD_NoRegister()
	{
		return AArmyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AArmyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmyWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmyHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Plugin/ArmyHUD.h" },
		{ "ModuleRelativePath", "Plugin/ArmyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmyHUD_Statics::NewProp_ArmyWidget_MetaData[] = {
		{ "Category", "ArmyHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Plugin/ArmyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArmyHUD_Statics::NewProp_ArmyWidget = { "ArmyWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArmyHUD, ArmyWidget), Z_Construct_UClass_UArmyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArmyHUD_Statics::NewProp_ArmyWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AArmyHUD_Statics::NewProp_ArmyWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArmyHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArmyHUD_Statics::NewProp_ArmyWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmyHUD_Statics::ClassParams = {
		&AArmyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArmyHUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AArmyHUD_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArmyHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AArmyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmyHUD, 1748480997);
	template<> TOPDOWNARPG_API UClass* StaticClass<AArmyHUD>()
	{
		return AArmyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmyHUD(Z_Construct_UClass_AArmyHUD, &AArmyHUD::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("AArmyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
