#include "StrategyComponent.h"

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
	return this->OnDecideBlueprint(Friendly, Enemy);
}

AWarrior* UStrategyComponent::DecideByEnemies(TArray<AWarrior*>& Enemy)
{
	return this->OnDecideByEnemiesBlueprint(Enemy);
}

AWarrior* UStrategyComponent::DecideByFriendly(TArray<AWarrior*>& Friendly)
{
	return this->OnDecideByFriendlyBlueprint(Friendly);
}
