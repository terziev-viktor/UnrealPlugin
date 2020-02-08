// Fill out your copyright notice in the Description page of Project Settings.

#include "Army.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "ArmyController.h"
#include "Components/DecalComponent.h"
#include "TimerManager.h"
#include "Engine/StaticMesh.h"

// Sets default values
AArmy::AArmy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = Mesh;

	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(RootComponent, USpringArmComponent::SocketName);

	CursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	CursorToWorld->SetupAttachment(RootComponent);
	CursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	CursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());

	DeltaCameraMoveDefault.X = 350.f;
	DeltaCameraMoveDefault.Y = 350.f;
	DeltaCameraMoveDefault.Z = 0.f;

	DeltaCameraMove.X = DeltaCameraMoveDefault.X;
	DeltaCameraMove.Y = DeltaCameraMoveDefault.Y;
	DeltaCameraMove.Z = DeltaCameraMoveDefault.Z;
}

void AArmy::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (CursorToWorld != nullptr)
	{
		if (AArmyController* AC = Cast<AArmyController>(GetController()))
		{
			FHitResult TraceHitResult;
			AC->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
			FVector CursorFV = TraceHitResult.ImpactNormal;
			FRotator CursorR = CursorFV.Rotation();
			CursorToWorld->SetWorldLocation(TraceHitResult.Location);
			CursorToWorld->SetWorldRotation(CursorR);
		}
	}

	if (IndexNextToSpawn >= WarriorTemplates.Num())
	{
		if (this->TimerManager)
		{
			TimerManager->ClearTimer(TimerHandle);
			this->TimerManager = nullptr;
		}
	}

	DeltaCameraMove.X = (bMovingBack * -DeltaCameraMoveDefault.X) + DeltaCameraMoveDefault.X * bMovingForward;
	DeltaCameraMove.Y = (bMovingLeft * -DeltaCameraMoveDefault.Y) + DeltaCameraMoveDefault.Y * bMovingRight;

	TopDownCameraComponent->AddRelativeLocation(DeltaCameraMove * DeltaSeconds);
}

void AArmy::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	if (IsValid(World))
	{
		TimerManager = &World->GetTimerManager();
		TimerManager->SetTimer(TimerHandle, this, &AArmy::SpawnNextWarrior, SpawnRate, true, SpawnRate);
	}
}

void AArmy::BeginDestroy()
{
	Super::BeginDestroy();

	if (this->TimerManager)
	{
		this->TimerManager->ClearTimer(this->TimerHandle);
		this->TimerManager = nullptr;
	}
}

void AArmy::SpawnNextWarrior()
{
	if (IndexNextToSpawn < WarriorTemplates.Num())
	{
		this->SpawnWarrior(this->GetActorLocation() + FVector(rand() % 400, rand() % 400, 1.f));
	}
}

void AArmy::SPawnAllWarriors()
{
	for (size_t i = IndexNextToSpawn; i < WarriorTemplates.Num(); i++)
	{
		this->SpawnWarrior(this->GetActorLocation() + FVector(rand() % 400, rand() % 400, 5.f));
	}
}

AWarrior* AArmy::GetLeader()
{
	if (IndexOfLeader == -1)
	{
		return nullptr;
	}
	return Warriors[IndexOfLeader];
}

void AArmy::SetMoveForward(bool value)
{
	bMovingForward = value;
}

void AArmy::SetMoveBack(bool value)
{
	bMovingBack = value;
}

void AArmy::SetMoveRight(bool value)
{
	bMovingRight = value;
}

void AArmy::SetMoveLeft(bool value)
{
	bMovingLeft = value;
}

void AArmy::SpawnWarrior(FVector Location)
{
	UWorld* World = GetWorld();
	if (IsValid(World))
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AWarrior* SpawnedWarrior = World->SpawnActor<AWarrior>(WarriorTemplates[IndexNextToSpawn], Location, this->GetActorRotation(), SpawnParams);
		
		this->IncrementIndexNextToSpawn();
		if (IsValid(SpawnedWarrior))
		{
			SpawnedWarrior->Army = this;
			Warriors.Add(SpawnedWarrior);
			if (SpawnedWarrior->Class == WarriorClass::Leader)
			{
				IndexOfLeader = Warriors.Num() - 1;
			}
		}
		else
		{
			this->DecrementIndexNextToSpawn();
		}
	}
}
