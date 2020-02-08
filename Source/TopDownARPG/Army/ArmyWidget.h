// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ArmyController.h"
#include "ArmyWidget.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TOPDOWNARPG_API UArmyWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	// Call on button click or something idk
	UFUNCTION(BlueprintCallable)
	void SetCurrentTarget();

	UFUNCTION(BlueprintCallable)
	void SetNewStrategy();

};
