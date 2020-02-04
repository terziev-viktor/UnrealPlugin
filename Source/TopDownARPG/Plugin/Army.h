// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Warrior.h"
#include "Army.generated.h"

UCLASS()
class TOPDOWNARPG_API AArmy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmy();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AWarrior>> WarriorTemplates;

	UPROPERTY()
	TArray<AWarrior*> Warriors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
