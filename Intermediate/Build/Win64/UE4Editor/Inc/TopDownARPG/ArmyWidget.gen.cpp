// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/ArmyWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmyWidget() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UArmyWidget_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UArmyWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AArmyControllerBase_NoRegister();
// End Cross Module References
	void UArmyWidget::StaticRegisterNativesUArmyWidget()
	{
	}
	UClass* Z_Construct_UClass_UArmyWidget_NoRegister()
	{
		return UArmyWidget::StaticClass();
	}
	struct Z_Construct_UClass_UArmyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmyController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArmyController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArmyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmyWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Plugin/ArmyWidget.h" },
		{ "ModuleRelativePath", "Plugin/ArmyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArmyWidget_Statics::NewProp_ArmyController_MetaData[] = {
		{ "Category", "ArmyWidget" },
		{ "Comment", "// On button pressed call ArmyController->SpawnNextWarrior(Location) for example.\n" },
		{ "ModuleRelativePath", "Plugin/ArmyWidget.h" },
		{ "ToolTip", "On button pressed call ArmyController->SpawnNextWarrior(Location) for example." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UArmyWidget_Statics::NewProp_ArmyController = { "ArmyController", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UArmyWidget, ArmyController), Z_Construct_UClass_AArmyControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UArmyWidget_Statics::NewProp_ArmyController_MetaData, ARRAY_COUNT(Z_Construct_UClass_UArmyWidget_Statics::NewProp_ArmyController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArmyWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArmyWidget_Statics::NewProp_ArmyController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArmyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArmyWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArmyWidget_Statics::ClassParams = {
		&UArmyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArmyWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UArmyWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UArmyWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UArmyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArmyWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArmyWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArmyWidget, 1043567703);
	template<> TOPDOWNARPG_API UClass* StaticClass<UArmyWidget>()
	{
		return UArmyWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArmyWidget(Z_Construct_UClass_UArmyWidget, &UArmyWidget::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("UArmyWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArmyWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
