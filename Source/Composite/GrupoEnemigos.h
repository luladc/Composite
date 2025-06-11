// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
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
	AGrupoEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void AgregarEnemigo(AActor* Enemigo);
	virtual void Perseguir(AActor* Objetivo) override;

private:
	UPROPERTY()
	TArray<AActor*> Enemigos;
};
