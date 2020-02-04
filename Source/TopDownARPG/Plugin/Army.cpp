// Fill out your copyright notice in the Description page of Project Settings.


#include "Army.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"

// Sets default values
AArmy::AArmy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));

	StaticMeshComponent->SetStaticMesh(NewObject<UStaticMesh>());
}

// Called when the game starts or when spawned
void AArmy::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld * World = GetWorld();

	if (IsValid(World))
	{
		for (auto& Warrior : WarriorTemplates)
		{
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner = this;
			SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AWarrior* SpawnedWarrior = World->SpawnActor<AWarrior>(Warrior, this->GetActorLocation() + FVector(rand() % 600, rand() % 600, 5.f), this->GetActorRotation(), SpawnParameters);
			if (IsValid(SpawnedWarrior))
			{
				this->Warriors.Add(SpawnedWarrior);
			}
			
		}
	}
}
