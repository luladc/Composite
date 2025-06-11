// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CompositeGameMode.generated.h"

UCLASS(minimalapi)
class ACompositeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACompositeGameMode();

	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category = "Enemigos")
	AActor* Jugador;
	UPROPERTY(EditAnywhere, Category = "Enemigos")
	AActor* Enemigo1;
	UPROPERTY(EditAnywhere, Category = "Enemigos")
	AActor* Enemigo2;
	UPROPERTY(EditAnywhere, Category = "Enemigos")
	TArray<AActor*> Enemigos;
	UPROPERTY(EditAnywhere, Category = "Enemigos")
	TArray<AActor*> Enemigos2;
};



