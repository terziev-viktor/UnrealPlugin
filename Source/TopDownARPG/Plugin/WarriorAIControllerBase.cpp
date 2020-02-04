// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorAIControllerBase.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Warrior.h"

void AWarriorAIControllerBase::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (IsValid(BehaviourTree))
	{
		BlackboardComponent->InitializeBlackboard(*BehaviourTree->BlackboardAsset);
		BehaviourTreeComponent->StartTree(*BehaviourTree);
	}
}

void AWarriorAIControllerBase::ActivateAbility(size_t Index, class AWarrior* Target)
{
	AWarrior* Warrior = Cast<AWarrior>(GetPawn());
	if (IsValid(Warrior))
	{
		if (Warrior->WarriorAbilityInstances.Num() < Index)
		{
			UWarriorAbilityBase* Ability = Warrior->WarriorAbilityInstances[Index];
			if (IsValid(Ability))
			{
				Ability->Activate(Target);
			}
		}
	}
}
