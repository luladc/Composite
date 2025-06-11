// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "AIController.h"
#include "IEnemigo.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

UCLASS()
class COMPOSITE_API AEnemigo : public ACharacter, public IIEnemigo
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "IA")
	float RangoDeteccion = 600.0f; // Distancia a la que detecta al jugador

	UPROPERTY(EditAnywhere, Category = "IA")
	TArray<FVector> PuntosPatrulla;

	int32 IndicePatrullaActual = 0;

	AActor* ObjetivoJugador = nullptr;

	UStaticMeshComponent* Malla;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Perseguir(AActor* Objetivo) override;
	void Patrullar();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
