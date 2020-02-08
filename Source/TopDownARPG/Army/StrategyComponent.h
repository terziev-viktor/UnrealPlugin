// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StrategyComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TOPDOWNARPG_API UStrategyComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UStrategyComponent();

	UFUNCTION(BlueprintCallable)
	virtual class AWarrior* Decide(TArray<AWarrior*>& Friendly,  TArray<AWarrior*>& Enemy);

	UFUNCTION(BlueprintCallable)
	virtual AWarrior* DecideByEnemies(TArray<AWarrior*>& Enemy);

	UFUNCTION(BlueprintCallable)
	virtual AWarrior* DecideByFriendly(TArray<AWarrior*>& Friendly);

	UFUNCTION(BlueprintImplementableEvent)
	AWarrior* OnDecideBlueprint(TArray<AWarrior*>& Friendly, TArray<AWarrior*>& Enemy);

	UFUNCTION(BlueprintImplementableEvent)
	AWarrior* OnDecideByEnemiesBlueprint(TArray<AWarrior*>& Enemy);

	UFUNCTION(BlueprintImplementableEvent)
	AWarrior* OnDecideByFriendlyBlueprint(TArray<AWarrior*>& Enemy);
};
