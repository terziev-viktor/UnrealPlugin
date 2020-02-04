// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WarriorAbilityBase.generated.h"

/**
 * 
 */

UCLASS(Blueprintable)
class UWarriorAbilityBase : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	float CooldownTime = 1.f;

	UFUNCTION(BlueprintCallable)
	virtual bool Activate(class AWarrior* Target);

	UFUNCTION(BlueprintImplementableEvent)
	bool OnActivateBlueprint(AWarrior* Target);

	UFUNCTION(BlueprintCallable)
	bool IsOffCooldown() const { return bIsOffCooldown; }

	virtual void BeginDestroy();

private:
	bool bIsOffCooldown = true;
	FTimerManager* TimerManager = nullptr;
	FTimerHandle CooldownTimerHandle;

	void OnCooldownTimerExpired();
};
