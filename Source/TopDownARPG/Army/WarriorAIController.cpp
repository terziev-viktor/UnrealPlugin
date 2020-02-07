// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorAIController.h"
#include "Warrior.h"

void AWarriorAIController::OnPossess(APawn* Pawn)
{
	Super::OnPossess(Pawn);
}


void AWarriorAIController::ActivateAbility(int index, AWarrior* Target)
{
	AWarrior* Warrior = Cast<AWarrior>(GetPawn());

	if (Warrior->WarriorAbilityInstances.Num() < index && index >= 0)
	{
		Warrior->WarriorAbilityInstances[index]->Activate(Target);
	}

}