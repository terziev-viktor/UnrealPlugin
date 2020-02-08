// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "WarriroBTTask_ActivateAbility_0.generated.h"

/**
 * 
 */
UCLASS()
class TOPDOWNARPG_API UWarriroBTTask_ActivateAbility_0 : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};
