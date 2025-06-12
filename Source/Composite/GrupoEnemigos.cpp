// Fill out your copyright notice in the Description page of Project Settings.


#include "GrupoEnemigos.h"
#include "IEnemigo.h"
#include "Kismet/GameplayStatics.h"

AGrupoEnemigos::AGrupoEnemigos ()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AGrupoEnemigos::BeginPlay()
{
    Super::BeginPlay();
    
    if (!ClaseEnemigo1) return;

    FVector PosicionBase = GetActorLocation();

    for (int32 i = 0; i < CantidadEnemigos; ++i)
    {
        FVector PosicionSpawn = PosicionBase + FVector(i * Separacion, 0.0f, 0.0f);
        FRotator Rotacion = FRotator::ZeroRotator;

        AEnemigo1* Enemigo = GetWorld()->SpawnActor<AEnemigo1>(ClaseEnemigo1, PosicionSpawn, Rotacion);
        if (Enemigo)
        {
            Enemigos.Add(Enemigo);
        }
    }

}

void AGrupoEnemigos::StartPatrol()
{
    for (AEnemigo1* Enemigo : Enemigos)
    {
        if (Enemigo)
        {
            Enemigo->StartPatrol();
        }
    }
}

