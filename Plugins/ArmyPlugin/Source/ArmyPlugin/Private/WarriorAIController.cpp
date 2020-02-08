// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorAIController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Warrior.h"

AWarriorAIController::AWarriorAIController()
{

}

void AWarriorAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	this->SetMovementToCurrentTarget();
}

void AWarriorAIController::SwapStrategies()
{
	Swap(Strategy, AltStrategy);
}

void AWarriorAIController::OnPossess(APawn* Pawn)
{
	Super::OnPossess(Pawn);

	if (IsValid(BehaviourTree))
	{
		BlackboardComponent->InitializeBlackboard(*BehaviourTree->BlackboardAsset);
		BehaviourTreeComponent->StartTree(*BehaviourTree);
	}
}

void AWarriorAIController::SetMovementToCurrentTarget()
{
	AWarrior* const MyWarrior = Cast<AWarrior>(GetPawn());
	if (MyWarrior->HasNewTarget())
	{
		FVector Destination = MyWarrior->GetCurrentTarget()->GetActorLocation();

		if (MyWarrior)
		{
			float const Distance = FVector::Dist(Destination, MyWarrior->GetActorLocation());

			if ((Distance > MinDistanceToTarget))
			{
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, Destination);
			}
		}
	}
}

void AWarriorAIController::ActivateAbility(int index, AWarrior* Target)
{
	AWarrior* Warrior = Cast<AWarrior>(GetPawn());

	if (Warrior->WarriorAbilityInstances.Num() < index && index >= 0)
	{
		if (Target == nullptr)
		{
			Warrior->WarriorAbilityInstances[index]->Activate(Warrior->GetCurrentTarget());
		}
		else
		{
			Warrior->WarriorAbilityInstances[index]->Activate(Target);
		}
	}
}