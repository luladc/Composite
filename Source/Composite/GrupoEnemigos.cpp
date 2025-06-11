// Fill out your copyright notice in the Description page of Project Settings.


#include "GrupoEnemigos.h"
#include "IEnemigo.h"

AGrupoEnemigos::AGrupoEnemigos()
{
}

void AGrupoEnemigos::BeginPlay()
{
}

void AGrupoEnemigos::Tick(float DeltaTime)
{
}

void AGrupoEnemigos::AgregarEnemigo(AActor* Enemigo)
{
    if (Enemigo && Enemigo->GetClass()->ImplementsInterface(UIEnemigo::StaticClass()))
    {
        Enemigos.Add(Enemigo);
    }
}

void AGrupoEnemigos::Perseguir(AActor* Objetivo)
{
    for (AActor* Enemigo : Enemigos)
    {
        if (IIEnemigo* IE = Cast<IIEnemigo>(Enemigo))
        {
            IE->Perseguir(Objetivo);
        }
    }
}