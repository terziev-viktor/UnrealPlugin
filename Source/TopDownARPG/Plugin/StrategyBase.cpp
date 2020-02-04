// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyBase.h"

AWarrior* UStrategyBase::Decide(TArray<AWarrior*>& EnemyWarriors, TArray<AWarrior*>& FriendlyWarriors) const
{
	AWarrior* Me = Cast<AWarrior>(GetOuter());
	OnDecideBlueprint(EnemyWarriors, FriendlyWarriors);
	if (Me->Class == WarriorClass::Healer)
	{
		return FriendlyWarriors[0];
	}
	else if (Me->Class == WarriorClass::DPS)
	{
		return EnemyWarriors[0];
	}
	else
	{
		return EnemyWarriors[0];
	}

}
