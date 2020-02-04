// Fill out your copyright notice in the Description page of Project Settings.


#include "WarriorAbilityBase.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Warrior.h"

bool UWarriorAbilityBase::Activate(AWarrior* Target)
{
	if (bIsOffCooldown == false)
	{
		return false;
	}

	UWorld* World = GetWorld();
	if (IsValid(World))
	{

		TimerManager = &World->GetTimerManager();
		TimerManager->SetTimer(CooldownTimerHandle, this, &UWarriorAbilityBase::OnCooldownTimerExpired, CooldownTime);
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

void UWarriorAbilityBase::BeginDestroy()
{
	if (TimerManager)
	{
		TimerManager->ClearTimer(CooldownTimerHandle);
		TimerManager = nullptr;
	}
	Super::BeginDestroy();
}

void UWarriorAbilityBase::OnCooldownTimerExpired()
{
	this->bIsOffCooldown = true;
}
