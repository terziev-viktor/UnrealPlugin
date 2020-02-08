// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmyWidget.h"
#include "Engine/World.h"

void UArmyWidget::SetCurrentTarget()
{
	UWorld* World = GetWorld();
	if (IsValid(World))
	{
		AArmyController* Controller = Cast<AArmyController>(World->GetFirstPlayerController());
		Controller->SetCurrentTarget();
	}
}

void UArmyWidget::SetNewStrategy()
{
	UWorld* World = GetWorld();
	if (IsValid(World))
	{
		AArmyController* Controller = Cast<AArmyController>(World->GetFirstPlayerController());
		Controller->SetNewStrategy();
	}
}
