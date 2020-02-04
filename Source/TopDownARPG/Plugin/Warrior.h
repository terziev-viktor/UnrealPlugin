// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WarriorClass.h"
#include "WarriorAbilityBase.h"
#include "Warrior.generated.h"

UCLASS(Blueprintable)
class AWarrior : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties

	AWarrior(WarriorClass Class);

	UPROPERTY(EditAnywhere)
	WarriorClass Class;

#pragma region Simplifying Blueprint Calls

	UFUNCTION(BlueprintCallable)
	bool IsTank() const { return this->Class == WarriorClass::Tank; }

	UFUNCTION(BlueprintCallable)
	bool IsDPS() const { return this->Class == WarriorClass::DPS; }

	UFUNCTION(BlueprintCallable)
	bool IsHealer() const { return this->Class == WarriorClass::Healer; }

	UFUNCTION(BlueprintCallable)
	bool IsLeader() const { return this->Class == WarriorClass::Leader; }

#pragma endregion

	UFUNCTION(BlueprintCallable) 
	bool AreFriends(const AWarrior* Other) const;

	UPROPERTY(EditAnywhere, Category = "Custom")
	class UStrategyComponent* Decide;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UWarriorAbilityBase>> WarriorAbilityTemplates;

	UPROPERTY()
	TArray<UWarriorAbilityBase*> WarriorAbilityInstances;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AWarrior();

};
