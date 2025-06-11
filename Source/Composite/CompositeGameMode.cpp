// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompositeGameMode.h"
#include "CompositeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GrupoEnemigos.h"
#include "Enemigo.h"
#include "IEnemigo.h"

ACompositeGameMode::ACompositeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ACompositeGameMode::BeginPlay()
{
	Super::BeginPlay();

	AGrupoEnemigos* Grupo = GetWorld()->SpawnActor<AGrupoEnemigos>();
	Grupo->AgregarEnemigo(Enemigo1);
	Grupo->AgregarEnemigo(Enemigo2);

	Grupo->Perseguir(Jugador);
}