// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "Enemigo1.generated.h"

/**
 * 
 */
UCLASS()
class COMPOSITE_API AEnemigo1 : public AEnemigo
{
    GENERATED_BODY()

public:

    AEnemigo1();

protected:
    float MovementSpeed;
    float PatrolRadius;
    FVector InitialPosition;
    bool bMovingRight;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;
public:
	// Método para iniciar el movimiento de patrulla
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StartPatrol() override;

	// Método para detener el movimiento de patrulla
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopPatrol();

	// Getter y Setter para las propiedades
	UFUNCTION(BlueprintCallable, Category = "Properties")
	void SetMovementSpeed(float Speed) { MovementSpeed = Speed; }

	UFUNCTION(BlueprintCallable, Category = "Properties")
	float GetMovementSpeed() const { return MovementSpeed; }

	UFUNCTION(BlueprintCallable, Category = "Properties")
	void SetPatrolRadius(float Radius) { PatrolRadius = Radius; }

	UFUNCTION(BlueprintCallable, Category = "Properties")
	float GetPatrolRadius() const { return PatrolRadius; }
};
