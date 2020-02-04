// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WarriorAIControllerBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class AWarriorAIControllerBase : public AAIController
{
	GENERATED_BODY()

	virtual void OnPossess(APawn* InPawn) override;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* BehaviourTree;

	UPROPERTY()
	class UBlackboardComponent* BlackboardComponent;

	UPROPERTY()
	class UBehaviorTreeComponent* BehaviourTreeComponent;
public:
	void ActivateAbility(size_t Index, class AWarrior* Target);
};
