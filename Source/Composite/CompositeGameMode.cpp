// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompositeGameMode.h"
#include "CompositeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GrupoEnemigos.h"
#include "Enemigo.h"
#include "Enemigo1.h"
#include "IEnemigo.h"
#include "Kismet/GameplayStatics.h"

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

	// Creamos un grupo de bloques y agregamos bloques simples a él
	 //GrupoP es el grupo principal que contiene otros grupos de bloques
	AGrupoEnemigos* GrupoP = GetWorld()->SpawnActor<AGrupoEnemigos>();

	//Creamos bloques para el conjuto 1
	for (int i = 0; i < 10; i++) {
		AEnemigo1* B1 = GetWorld()->SpawnActor<AEnemigo1>(AEnemigo1::StaticClass(), FVector(1000 + i * 100, 1000 + i * 100, -10), FRotator::ZeroRotator);
		
	}
	GrupoP->StartPatrol();
}
