// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorAbility.h"
#include "Engine/World.h"
#include "Warrior.h"

bool UWarriorAbility::Activate(AWarrior* Target)
{
	if (bIsOffCooldown == false)
	{
		return false;
	}

	UWorld* World = GetWorld();
	if (IsValid(World))
	{

		TimerManager = &World->GetTimerManager();
		TimerManager->SetTimer(CooldownTimerHandle, this, &UWarriorAbility::OnCooldownTimerExpired, CooldownTime);
		bIsOffCooldown = false;

		AWarrior* Owner = Cast<AWarrior>(GetOuter());
		if (IsValid(Owner))
		{
			OnActivateBlueprint(Owner);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

void UWarriorAbility::BeginDestroy()
{
	if (TimerManager)
	{
		TimerManager->ClearTimer(CooldownTimerHandle);
		TimerManager = nullptr;
	}
	Super::BeginDestroy();
}

void UWarriorAbility::OnCooldownTimerExpired()
{
	this->bIsOffCooldown = true;
}
