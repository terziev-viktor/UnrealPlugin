// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/AI/BTTask_ActivateSkill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ActivateSkill() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UBTTask_ActivateSkill_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_UBTTask_ActivateSkill();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
// End Cross Module References
	void UBTTask_ActivateSkill::StaticRegisterNativesUBTTask_ActivateSkill()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_ActivateSkill_NoRegister()
	{
		return UBTTask_ActivateSkill::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_ActivateSkill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_ActivateSkill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_ActivateSkill_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_ActivateSkill.h" },
		{ "ModuleRelativePath", "AI/BTTask_ActivateSkill.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_ActivateSkill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ActivateSkill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ActivateSkill_Statics::ClassParams = {
		&UBTTask_ActivateSkill::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_ActivateSkill_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_ActivateSkill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_ActivateSkill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_ActivateSkill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_ActivateSkill, 731829750);
	template<> TOPDOWNARPG_API UClass* StaticClass<UBTTask_ActivateSkill>()
	{
		return UBTTask_ActivateSkill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_ActivateSkill(Z_Construct_UClass_UBTTask_ActivateSkill, &UBTTask_ActivateSkill::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("UBTTask_ActivateSkill"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ActivateSkill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
