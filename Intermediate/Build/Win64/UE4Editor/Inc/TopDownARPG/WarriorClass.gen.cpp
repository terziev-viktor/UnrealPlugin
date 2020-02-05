// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownARPG/Plugin/WarriorClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorClass() {}
// Cross Module References
	TOPDOWNARPG_API UEnum* Z_Construct_UEnum_TopDownARPG_WarriorClass();
	UPackage* Z_Construct_UPackage__Script_TopDownARPG();
// End Cross Module References
	static UEnum* WarriorClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TopDownARPG_WarriorClass, Z_Construct_UPackage__Script_TopDownARPG(), TEXT("WarriorClass"));
		}
		return Singleton;
	}
	template<> TOPDOWNARPG_API UEnum* StaticEnum<WarriorClass>()
	{
		return WarriorClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_WarriorClass(WarriorClass_StaticEnum, TEXT("/Script/TopDownARPG"), TEXT("WarriorClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TopDownARPG_WarriorClass_Hash() { return 1250792648U; }
	UEnum* Z_Construct_UEnum_TopDownARPG_WarriorClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TopDownARPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("WarriorClass"), 0, Get_Z_Construct_UEnum_TopDownARPG_WarriorClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WarriorClass::Tank", (int64)WarriorClass::Tank },
				{ "WarriorClass::DPS", (int64)WarriorClass::DPS },
				{ "WarriorClass::Healer", (int64)WarriorClass::Healer },
				{ "WarriorClass::Leader", (int64)WarriorClass::Leader },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "DPS.Comment", "/**\n * \n */" },
				{ "DPS.DisplayName", "DPS" },
				{ "DPS.Name", "WarriorClass::DPS" },
				{ "Healer.Comment", "/**\n * \n */" },
				{ "Healer.DisplayeName", "Healer" },
				{ "Healer.Name", "WarriorClass::Healer" },
				{ "Leader.Comment", "/**\n * \n */" },
				{ "Leader.DisplaName", "Leader" },
				{ "Leader.Name", "WarriorClass::Leader" },
				{ "ModuleRelativePath", "Plugin/WarriorClass.h" },
				{ "Tank.Comment", "/**\n * \n */" },
				{ "Tank.DisplayName", "Tank" },
				{ "Tank.Name", "WarriorClass::Tank" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TopDownARPG,
				nullptr,
				"WarriorClass",
				"WarriorClass",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
