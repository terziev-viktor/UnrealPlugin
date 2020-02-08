// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Warrior.h"
#include "Army.generated.h"

UCLASS(Blueprintable)
class ARMYPLUGIN_API AArmy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AArmy();

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector DeltaCameraMoveDefault;

	UPROPERTY(EditAnywhere, Category = "Army")
		TArray<TSubclassOf<AWarrior>> WarriorTemplates;

	UPROPERTY(VisibleAnywhere, Category = "Army")
		TArray<AWarrior*> Warriors;

	UFUNCTION(BlueprintCallable)
		void SpawnNextWarrior();

	UFUNCTION(BlueprintCallable)
		void SPawnAllWarriors();

	UFUNCTION(BlueprintCallable)
		FORCEINLINE int GetIndexOfLeader() const { return this->IndexOfLeader; }

	UFUNCTION(BlueprintCallable)
		AWarrior* GetLeader();

	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }

	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }

	UFUNCTION(BlueprintCallable)
		const int GetIndexNextToSpawn() const { return IndexNextToSpawn; }

	void SetMoveForward(bool value);
	void SetMoveBack(bool value);

	void SetMoveRight(bool value);
	void SetMoveLeft(bool value);

protected:
	FORCEINLINE void IncrementIndexNextToSpawn() { ++IndexNextToSpawn; }

	FORCEINLINE void DecrementIndexNextToSpawn() { --IndexNextToSpawn; }
private:
	UPROPERTY()
		int IndexNextToSpawn = 0;

	UPROPERTY()
		int IndexOfLeader = -1;

	// Intervals of Spawning
	UPROPERTY(EditAnywhere)
		float SpawnRate = 1.f;

	bool bMovingForward = false;
	bool bMovingBack = false;
	bool bMovingRight = false;
	bool bMovingLeft = false;

	FVector DeltaCameraMove;

	FTimerManager* TimerManager = nullptr;
	FTimerHandle TimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* TopDownCameraComponent;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;*/

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UDecalComponent* CursorToWorld;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* Mesh;

	UFUNCTION()
		void SpawnWarrior(FVector Location);
};
