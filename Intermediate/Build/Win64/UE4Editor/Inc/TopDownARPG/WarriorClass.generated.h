// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNARPG_WarriorClass_generated_h
#error "WarriorClass.generated.h already included, missing '#pragma once' in WarriorClass.h"
#endif
#define TOPDOWNARPG_WarriorClass_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealPlugin_Source_TopDownARPG_Plugin_WarriorClass_h


#define FOREACH_ENUM_WARRIORCLASS(op) \
	op(WarriorClass::Tank) \
	op(WarriorClass::DPS) \
	op(WarriorClass::Healer) \
	op(WarriorClass::Leader) 

enum class WarriorClass : uint8;
template<> TOPDOWNARPG_API UEnum* StaticEnum<WarriorClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
