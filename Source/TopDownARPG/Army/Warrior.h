// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WarriorClass.h"
#include "WarriorAbility.h"
#include "Warrior.generated.h"


UCLASS(Blueprintable)
class AWarrior : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties

	AWarrior();

	AWarrior(WarriorClass Class);

	UPROPERTY(EditAnywhere, Category = "Army")
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

	UFUNCTION(BlueprintCallable)
	bool AreFriends(const AWarrior* Other) const;

#pragma endregion

	UPROPERTY(EditAnywhere, Category = "Army")
	TArray<TSubclassOf<UWarriorAbility>> WarriorAbilityTemplates;

	UPROPERTY(VisibleAnywhere, Category = "Army")
	TArray<UWarriorAbility*> WarriorAbilityInstances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
	class UStrategyComponent* Strategy;

	UFUNCTION(BlueprintCallable)
	void SetCurrentTarget(AWarrior* Target) { CurrentTarget = Target; }

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AWarrior* CurrentTarget = nullptr;
};
