// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriroBTTask_ActivateAbility_0.h"
#include "Army/WarriorAIController.h"
#include "Army/Warrior.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UWarriroBTTask_ActivateAbility_0::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AWarriorAIController* WarriorAIController = Cast<AWarriorAIController>(OwnerComp.GetOwner());
	
	if (IsValid(WarriorAIController))
	{
		AWarrior* Warrior = Cast<AWarrior>(WarriorAIController->GetPawn());
		if (IsValid(Warrior))
		{
			WarriorAIController->ActivateAbility(0, Warrior->GetCurrentTarget());
		}
		return EBTNodeResult::Succeeded;
	}
	else
	{
		return EBTNodeResult::Failed;
	}
}