// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SwapStrategies.h"
#include "WarriorAIController.h"
#include "Warrior.h"

EBTNodeResult::Type UBTTask_SwapStrategies::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AWarriorAIController* Controller = Cast<AWarriorAIController>(OwnerComp.GetOwner());
	AWarrior* Pawn = Cast<AWarrior>(Controller->GetPawn());
	if (IsValid(Pawn))
	{
		Controller->SwapStrategies();
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
}