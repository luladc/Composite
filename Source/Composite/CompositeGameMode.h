// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CompositeGameMode.generated.h"
class AEnemigo1; class AGrupoEnemigos;
UCLASS(minimalapi)
class ACompositeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACompositeGameMode();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AGrupoEnemigos> ClaseGrupoEnemigos;
};



