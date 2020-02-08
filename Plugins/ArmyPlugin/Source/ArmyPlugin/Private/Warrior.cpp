#include "Warrior.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StrategyComponent.h"
#include "Army.h"
#include "WarriorAbility.h"

AWarrior::AWarrior()
{
	PrimaryActorTick.bCanEverTick = false;
}

AWarrior::AWarrior(WarriorClass Class)
{
	PrimaryActorTick.bCanEverTick = false;
	this->Class = Class;

	UCapsuleComponent* Capsule = GetCapsuleComponent();
	Capsule->InitCapsuleSize(42.f, 96.0f);
	Capsule->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);

	Capsule->SetupAttachment(RootComponent);
}

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
	return this->Army == Other->Army;
}

void AWarrior::SetCurrentTarget(AWarrior* Target)
{
	bIsNewTarget = true;
	CurrentTarget = Target;
}

AWarrior* AWarrior::GetCurrentTarget()
{
	bIsNewTarget = false;
	return this->CurrentTarget;
}
