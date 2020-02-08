// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WarriorClass.h"
#include "WarriorAbility.h"
#include "Warrior.generated.h"


UCLASS(Blueprintable)
class ARMYPLUGIN_API AWarrior : public ACharacter
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
		float Health = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
		float MaxHealth = 100.f;

	// Rage, Mana, Energy etc
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
		float Resource = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
		float MaxResource = 100.f;

	UPROPERTY(EditAnywhere, Category = "Army")
		TArray<TSubclassOf<UWarriorAbility>> WarriorAbilityTemplates;

	UPROPERTY(VisibleAnywhere, Category = "Army")
		TArray<UWarriorAbility*> WarriorAbilityInstances;

	UFUNCTION(BlueprintCallable)
		void SetCurrentTarget(AWarrior* Target);

	UFUNCTION(BlueprintCallable)
		AWarrior* GetCurrentTarget();

	bool HasNewTarget() const { return bIsNewTarget; }

	class AArmy* Army;

	//// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	AWarrior* CurrentTarget = nullptr;

	bool bIsNewTarget = false;
};
