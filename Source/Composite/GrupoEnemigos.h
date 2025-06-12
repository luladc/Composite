// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "Enemigo1.h"
#include "IEnemigo.h"	
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrupoEnemigos.generated.h"

UCLASS()
class COMPOSITE_API AGrupoEnemigos : public AActor, public IIEnemigo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrupoEnemigos ();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, Category = "Grupo Enemigos")
	TArray<AEnemigo1*> Enemigos;

	// Ordena a todos los enemigos que persigan al objetivo dado
	UFUNCTION()
	void StartPatrol() override;

public:
	UPROPERTY(EditAnywhere, Category = "Grupo")
	TSubclassOf<class AEnemigo1> ClaseEnemigo1;

	UPROPERTY(EditAnywhere, Category = "Grupo")
	int32 CantidadEnemigos = 5;

	UPROPERTY(EditAnywhere, Category = "Grupo")
	float Separacion = 150.0f; // distancia entre enemigos

};
