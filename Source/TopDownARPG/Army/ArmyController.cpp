// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmyController.h"
#include "Army.h"

void AArmyController::SetCurrentTarget()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		AWarrior* Leader = Army->GetLeader();
		if (IsValid(Leader))
		{
			FHitResult Hit;
			GetHitResultUnderCursor(ECC_Visibility, false, Hit);

			if (Hit.bBlockingHit && Hit.Actor.IsValid())
			{
				AWarrior* HitWarrior = Cast<AWarrior>(Hit.Actor.Get());
				if (HitWarrior && HitWarrior != Leader && !HitWarrior->AreFriends(Leader))
				{
					for (auto& Warrior : Army->Warriors)
					{
						Warrior->SetCurrentTarget(HitWarrior);
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Invalid Hit Actor under cursor"));
			}
		}
	}
}

void AArmyController::SetNewStrategy()
{
	// TODO
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		AWarrior* Leader = Army->GetLeader();
		if (IsValid(Leader))
		{
			UE_LOG(LogTemp, Display, TEXT("AArmyController::SetNewStrategy() Executed!"));
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("IsValid(Leader) == false"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("AArmyController::SetNewStrategy() -> IsValid(Army) == false"));
	}
}

void AArmyController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("SetCurrentTarget", IE_Pressed, this, &AArmyController::SetCurrentTarget);
	InputComponent->BindAction("SetNewStrategy", IE_Pressed, this, &AArmyController::SetNewStrategy);

	InputComponent->BindAction("MoveForward", IE_Pressed, this, &AArmyController::SetMoveForward);
	InputComponent->BindAction("MoveForward", IE_Released, this, &AArmyController::SetNotMoveForward);

	InputComponent->BindAction("MoveBack", IE_Pressed, this, &AArmyController::SetMoveBack);
	InputComponent->BindAction("MoveBack", IE_Released, this, &AArmyController::SetNotMoveBack);

	InputComponent->BindAction("MoveRight", IE_Pressed, this, &AArmyController::SetMoveRight);
	InputComponent->BindAction("MoveRight", IE_Released, this, &AArmyController::SetNotMoveRight);

	InputComponent->BindAction("MoveLeft", IE_Pressed, this, &AArmyController::SetMoveLeft);
	InputComponent->BindAction("MoveLeft", IE_Released, this, &AArmyController::SetNotMoveLeft);
}

void AArmyController::SetMoveForward()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveForward(true);
	}
}

void AArmyController::SetNotMoveForward()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveForward(false);
	}
}

void AArmyController::SetMoveBack()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveBack(true);
	}
}

void AArmyController::SetNotMoveBack()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveBack(false);
	}
}


void AArmyController::SetMoveRight()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveRight(true);
	}
}

void AArmyController::SetNotMoveRight()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveRight(false);
	}
}

void AArmyController::SetMoveLeft()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveLeft(true);
	}
}

void AArmyController::SetNotMoveLeft()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		Army->SetMoveLeft(false);
	}
}
