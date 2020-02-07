// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LeaderController.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNARPG_API ALeaderController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void OnPossess(APawn* Leader) override;

	void SetCurrentTarget(class AWarrior* Warrior, AWarrior * Target);

	void SetStrategy(AWarrior* Warrior, class UStrategyComponent* NewStrategy);
};
