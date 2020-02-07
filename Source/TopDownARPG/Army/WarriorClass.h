// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class WarriorClass : uint8
{
	Tank UMETA(DisplayName = "Tank"),
	DPS UMETA(DisplayName = "DPS"),
	Healer UMETA(DisplayeName = "Healer"),
	Leader UMETA(DisplaName = "Leader")
};
