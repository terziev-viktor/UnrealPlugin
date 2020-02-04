// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StrategyComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UStrategyComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UStrategyComponent();

	UFUNCTION(BlueprintCallable)
	virtual AWarrior* Decide(TArray<AWarrior*>& Friendly, TArray<AWarrior*>& Enemy);

	UFUNCTION(BlueprintImplementableEvent)
	AWarrior* OnDecideBlueprint(TArray<AWarrior*>& Friently, TArray<AWarrior*>& Enemy);
};
