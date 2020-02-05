// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/WarriorAIControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorAIControllerBase() {}
// Cross Module References
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarriorAIControllerBase_NoRegister();
	TOPDOWNARPG_API UClass* Z_Construct_UClass_AWarriorAIControllerBase();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AWarriorAIControllerBase::StaticRegisterNativesAWarriorAIControllerBase()
	{
	}
	UClass* Z_Construct_UClass_AWarriorAIControllerBase_NoRegister()
	{
		return AWarriorAIControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AWarriorAIControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviourTreeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviourTreeComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviourTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviourTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarriorAIControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorAIControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Plugin/WarriorAIControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Plugin/WarriorAIControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTreeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Plugin/WarriorAIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTreeComponent = { "BehaviourTreeComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarriorAIControllerBase, BehaviourTreeComponent), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTreeComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTreeComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Plugin/WarriorAIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarriorAIControllerBase, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BlackboardComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BlackboardComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTree_MetaData[] = {
		{ "Category", "WarriorAIControllerBase" },
		{ "ModuleRelativePath", "Plugin/WarriorAIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTree = { "BehaviourTree", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarriorAIControllerBase, BehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTree_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorAIControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTreeComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BlackboardComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorAIControllerBase_Statics::NewProp_BehaviourTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarriorAIControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorAIControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarriorAIControllerBase_Statics::ClassParams = {
		&AWarriorAIControllerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWarriorAIControllerBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AWarriorAIControllerBase_Statics::PropPointers),
		0,
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWarriorAIControllerBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWarriorAIControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarriorAIControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWarriorAIControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWarriorAIControllerBase, 1142881890);
	template<> TOPDOWNARPG_API UClass* StaticClass<AWarriorAIControllerBase>()
	{
		return AWarriorAIControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarriorAIControllerBase(Z_Construct_UClass_AWarriorAIControllerBase, &AWarriorAIControllerBase::StaticClass, TEXT("/Script/TopDownARPG"), TEXT("AWarriorAIControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorAIControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
