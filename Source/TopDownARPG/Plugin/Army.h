// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warrior.h"
#include "Army.generated.h"

UCLASS(Blueprintable)
class AArmy : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmy();

	virtual void Tick(float Delta) override;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AWarrior>> WarriorTemplates;

	UPROPERTY(VisibleAnywhere)
	TArray<AWarrior*> Warriors;

	class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }

	const size_t GetIndexNextToSpawn() const { return IndexNextToSpawn; }

	void IncrementIndexNextToSpawn() { ++IndexNextToSpawn; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	size_t IndexNextToSpawn = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UDecalComponent* CursorToWorld;
};
