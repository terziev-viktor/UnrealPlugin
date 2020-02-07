#include "Warrior.h"
#include "StrategyComponent.h"
#include "WarriorAbility.h"

AWarrior::AWarrior()
{
	PrimaryActorTick.bCanEverTick = false;
}

// Sets default values
AWarrior::AWarrior(WarriorClass Class)
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	this->Class = Class;

}

// Called when the game starts or when spawned
void AWarrior::BeginPlay()
{
	Super::BeginPlay();

	for (auto& Template : WarriorAbilityTemplates)
	{
		WarriorAbilityInstances.Add(NewObject<UWarriorAbility>(this, Template));
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