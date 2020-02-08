// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WarriorAIController.generated.h"

UCLASS(Blueprintable)
class ARMYPLUGIN_API AWarriorAIController : public AAIController
{
	GENERATED_BODY()

public:
	AWarriorAIController();

	void ActivateAbility(int Index, class AWarrior* Target);

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
		TSubclassOf<class UStrategyComponent> AltStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Army")
		TSubclassOf<UStrategyComponent> Strategy;

	UFUNCTION(BlueprintCallable)
		void SwapStrategies();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MinDistanceToTarget = 120.f;

private:
	virtual void OnPossess(APawn* Pawn) override;

	UPROPERTY(EditDefaultsOnly)
		class UBehaviorTree* BehaviourTree;

	UPROPERTY(EditDefaultsOnly)
		class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(EditDefaultsOnly)
		class UBehaviorTreeComponent* BehaviourTreeComponent;

	void SetMovementToCurrentTarget();
};

