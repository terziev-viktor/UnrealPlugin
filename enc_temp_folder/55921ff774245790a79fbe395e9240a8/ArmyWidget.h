// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ArmyWidget.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNARPG_API UArmyWidget : public UUserWidget
{
	GENERATED_BODY()
public:

	// On button pressed call ArmyController->SpawnNextWarrior(Location) for example.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AArmyControllerBase* ArmyController;
};
