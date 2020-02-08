// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WarriorAbility.generated.h"

UCLASS(Blueprintable)
class ARMYPLUGIN_API UWarriorAbility : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
		float CooldownTime = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
		float ResourceNeeded = 100.f;

	UFUNCTION(BlueprintCallable)
		virtual bool Activate(class AWarrior* Target);

	UFUNCTION(BlueprintImplementableEvent)
		bool OnActivateBlueprint(AWarrior* Owner);

	UFUNCTION(BlueprintCallable)
		bool IsOffCooldown() const { return bIsOffCooldown; }

	virtual void BeginDestroy();

private:
	bool bIsOffCooldown = true;
	FTimerManager* TimerManager = nullptr;
	FTimerHandle CooldownTimerHandle;

	void OnCooldownTimerExpired();
};
