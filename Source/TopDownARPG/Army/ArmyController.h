// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ArmyController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TOPDOWNARPG_API AArmyController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetCurrentTarget();

	UFUNCTION(BlueprintCallable)
	void SetNewStrategy();

private:
	virtual void SetupInputComponent() override;

	void SetMoveForward();

	void SetNotMoveForward();

	void SetMoveBack();

	void SetNotMoveBack();

	void SetMoveRight();

	void SetNotMoveRight();

	void SetMoveLeft();

	void SetNotMoveLeft();
};
