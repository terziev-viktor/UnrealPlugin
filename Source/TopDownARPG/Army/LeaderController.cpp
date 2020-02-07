// Fill out your copyright notice in the Description page of Project Settings.


#include "LeaderController.h"
#include "Warrior.h"
#include "ArmyHUD.h"

void ALeaderController::OnPossess(APawn* Leader)
{
	Super::OnPossess(Leader);
}

void ALeaderController::SetCurrentTarget(AWarrior* Warrior, AWarrior* Target)
{
	Warrior->SetCurrentTarget(Target);
}

void ALeaderController::SetStrategy(AWarrior* Warrior, UStrategyComponent* NewStrategy)
{
	Warrior->Strategy = NewStrategy;
}
