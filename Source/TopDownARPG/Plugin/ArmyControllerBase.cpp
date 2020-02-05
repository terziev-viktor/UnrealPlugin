// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmyControllerBase.h"
#include "Engine/World.h"
#include "Army.h"

void AArmyControllerBase::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	if (bButtonPressed)
	{
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);

		if (Hit.bBlockingHit)
		{
			// We hit something, move there
			this->SPawnNextWarrior(Hit.ImpactPoint);
		}
		
	}
}

void AArmyControllerBase::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("SetSpawnLocation", IE_Pressed, this, &AArmyControllerBase::OnSetSpawnLocationPressed);
	InputComponent->BindAction("SetSpawnLocation", IE_Released, this, &AArmyControllerBase::OnSetSpawnLocationReleased);
}

void AArmyControllerBase::SPawnNextWarrior(FVector Location)
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		if (Army->GetIndexNextToSpawn() < Army->WarriorTemplates.Num())
		{
			UWorld* World = GetWorld();
			if (IsValid(World))
			{
				FActorSpawnParameters SpawnParameters;
				SpawnParameters.Owner = this;
				SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

				AWarrior* SpawnedWarrior = World->SpawnActor<AWarrior>(Army->WarriorTemplates[Army->GetIndexNextToSpawn()], Location, Army->GetActorRotation(), SpawnParameters);
				if (IsValid(SpawnedWarrior))
				{
					Army->Warriors.Add(SpawnedWarrior);
				}
				Army->IncrementIndexNextToSpawn();
			}
		}
	}
}

void AArmyControllerBase::SpawnAllWarriors(FVector Location)
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		UWorld* World = GetWorld();

		for (size_t i = Army->GetIndexNextToSpawn(); i < Army->WarriorTemplates.Num(); i++)
		{
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner = this;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AWarrior* SpawnedWarrior = World->SpawnActor<AWarrior>(Army->WarriorTemplates[i], Location + FVector(rand() % 500, rand() % 500, 5.f), Army->GetActorRotation(), SpawnParameters);
			if (IsValid(SpawnedWarrior))
			{
				Army->Warriors.Add(SpawnedWarrior);
			}
		}
	}
}
