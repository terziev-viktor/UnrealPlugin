// Fill out your copyright notice in the Description page of Project Settings.
#include "BTTask_ChooseNewTargetForTank.h"
#include "WarriorAIController.h"
#include "StrategyComponent.h"
#include "Army.h"
#include "Warrior.h"

EBTNodeResult::Type UBTTask_ChooseNewTargetForTank::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AWarriorAIController* Controller = Cast<AWarriorAIController>(OwnerComp.GetOwner());
	AWarrior* Pawn = Cast<AWarrior>(Controller->GetPawn());
	if (IsValid(Pawn))
	{
		if (Pawn->GetCurrentTarget())
		{
			Pawn->SetCurrentTarget(Controller->Strategy.GetDefaultObject()->DecideByEnemies(Pawn->GetCurrentTarget()->Army->Warriors));
		}
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
}