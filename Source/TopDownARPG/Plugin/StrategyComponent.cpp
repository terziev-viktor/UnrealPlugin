// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyComponent.h"
#include "Warrior.h"
#include "Army.h"

// Sets default values for this component's properties
UStrategyComponent::UStrategyComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

AWarrior* UStrategyComponent::Decide(TArray<AWarrior*>& Friendly, TArray<AWarrior*>& Enemy)
{
	AWarrior* Me = Cast<AWarrior>(GetOuter());
	this->OnDecideBlueprint(Friendly, Enemy);
	if (Me->Class == WarriorClass::Healer)
	{
		if (Friendly.Num() > 0 && Me != Friendly[0])
		{
			return Friendly[0];
		}
		else if (Friendly.Num() > 1)
		{
			return Friendly[1];
		}
		else
		{
			return nullptr;
		}
	}
	else
	{
		if (Enemy.Num() > 0 && Me != Enemy[0])
		{
			return Enemy[0];
		}
		else if (Enemy.Num() > 1)
		{
			return Enemy[1];
		}
		else
		{
			return nullptr;
		}
	}
}
