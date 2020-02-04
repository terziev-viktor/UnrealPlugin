// Fill out your copyright notice in the Description page of Project Settings.


#include "Warrior.h"
#include "StrategyComponent.h"
#include "WarriorAbilityBase.h"

AWarrior::AWarrior()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Sets default values
AWarrior::AWarrior(WarriorClass Class)
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->Class = Class;
	// Add default strategy
	Decide = CreateDefaultSubobject<UStrategyComponent>(TEXT("Strategy Component"));
}

// Called when the game starts or when spawned
void AWarrior::BeginPlay()
{
	Super::BeginPlay();

	for (auto& Template : WarriorAbilityTemplates)
	{
		WarriorAbilityInstances.Add(NewObject<UWarriorAbilityBase>(this, Template));
	}
}

bool AWarrior::AreFriends(const AWarrior* Other) const
{
	return GetOuter() == Other->GetOuter();
}

// Called to bind functionality to input
void AWarrior::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


