// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmyController.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmyController.h"
#include "WarriorAIController.h"
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
			GetHitResultUnderCursor(ECC_Visibility, true, Hit);

			if (Hit.bBlockingHit && Hit.Actor.IsValid())
			{
				AWarrior* HitWarrior = Cast<AWarrior>(Hit.GetActor());

				if (IsValid(HitWarrior) && !HitWarrior->AreFriends(Leader))
				{
					UE_LOG(LogTemp, Display, TEXT("Setting New Target!"));
					for (auto& Warrior : Army->Warriors)
					{
						Warrior->SetCurrentTarget(HitWarrior);
					}
				}
				else
				{
					UE_LOG(LogTemp, Display, TEXT("Hit warrior is invalid or is the leader!"));
				}
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Invalid Hit Actor under cursor"));
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Invalid Army"));
	}
}

void AArmyController::SetNewStrategy()
{
	AArmy* Army = Cast<AArmy>(GetPawn());
	if (IsValid(Army))
	{
		AWarrior* Leader = Army->GetLeader();
		if (IsValid(Leader))
		{
			FHitResult Hit;
			GetHitResultUnderCursor(ECC_Visibility, true, Hit);

			if (Hit.bBlockingHit && Hit.Actor.IsValid())
			{
				AWarrior* HitWarrior = Cast<AWarrior>(Hit.GetActor());

				if (IsValid(HitWarrior) && HitWarrior->AreFriends(Leader))
				{
					UE_LOG(LogTemp, Display, TEXT("Setting New Strategy!"));
					AWarriorAIController* HitWarriorController = Cast<AWarriorAIController>(HitWarrior->GetController());
					HitWarriorController->SwapStrategies();
				}
				else
				{
					UE_LOG(LogTemp, Display, TEXT("Hit warrior is invalid or is the leader!"));
				}
			}
			else
			{
				UE_LOG(LogTemp, Display, TEXT("Invalid Hit Actor under cursor"));
			}
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