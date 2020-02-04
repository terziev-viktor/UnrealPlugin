// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Warrior.h"
#include "StrategyBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UStrategyBase : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	AWarrior* Decide(TArray<AWarrior*>& EnemyWarriors, TArray<AWarrior*>& FriendlyWarriors) const;

	UFUNCTION(BlueprintImplementableEvent)
	AWarrior* OnDecideBlueprint(TArray<AWarrior*>& EnemyWarriors, TArray<AWarrior*>& FriendlyWarriors) const;
};
