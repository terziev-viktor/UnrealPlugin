// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "WarriorAIController.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class TOPDOWNARPG_API AWarriorAIController : public AAIController
{
	GENERATED_BODY()

public:
	void ActivateAbility(int Index, class AWarrior* Target);
	
private:
	virtual void OnPossess(APawn* Pawn) override;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTree* BehaviourTree;

	UPROPERTY(EditDefaultsOnly)
	class UBlackboardComponent* BlackboardComponent;

	UPROPERTY(EditDefaultsOnly)
	class UBehaviorTreeComponent* BehaviourTreeComponent;

};
