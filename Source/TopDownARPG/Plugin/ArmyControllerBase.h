// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ArmyControllerBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class AArmyControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void PlayerTick(float DeltaTime) override;

	virtual void SetupInputComponent() override;

	UFUNCTION(BlueprintCallable)
	void SPawnNextWarrior(FVector Location);

	UFUNCTION(BlueprintCallable)
	void SpawnAllWarriors(FVector Location);
	
	void MoveToLocation(FVector Location);

	void Retreat();

private:
	bool bButtonPressed = false;

	void OnSetSpawnLocationPressed()
	{
		bButtonPressed = true;
	}

	void OnSetSpawnLocationReleased()
	{
		bButtonPressed = false;
	}
};
