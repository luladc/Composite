// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo1.h"

AEnemigo1::AEnemigo1()
{
    PrimaryActorTick.bCanEverTick = true;

    // Inicializar propiedades de movimiento
    MovementSpeed = 100.0f;
    PatrolRadius = 200.0f;
    bMovingRight = true;
}

void AEnemigo1::BeginPlay()
{
    Super::BeginPlay();

    // Guardar la posici�n inicial
    InitialPosition = GetActorLocation();

    // Iniciar el movimiento de patrulla
    StartPatrol();
}

void AEnemigo1::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Implementar el movimiento de patrulla (ir a la derecha, dar la vuelta y retornar)
    FVector CurrentLocation = GetActorLocation();
    FVector Direction;

    if (bMovingRight)
    {
        Direction = FVector(1.0f, 0.0f, 0.0f); // Direcci�n hacia la derecha

        // Si alcanza el l�mite del radio de patrulla, cambiar direcci�n
        if (CurrentLocation.X >= InitialPosition.X + PatrolRadius)
        {
            bMovingRight = false;

            // Girar el Goomba 180 grados
            SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
        }
    }
    else
    {
        Direction = FVector(-1.0f, 0.0f, 0.0f); // Direcci�n hacia la izquierda

        // Si vuelve al punto inicial o sobrepasa el l�mite izquierdo, cambiar direcci�n
        if (CurrentLocation.X <= InitialPosition.X - PatrolRadius)
        {
            bMovingRight = true;

            // Girar el Goomba a la posici�n original
            SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
        }
    }

    // Calcular el desplazamiento en este frame
    FVector NewLocation = CurrentLocation + (Direction * MovementSpeed * DeltaTime);

    // Actualizar la posici�n del actor
    SetActorLocation(NewLocation);
}

// M�todo para iniciar el movimiento de patrulla
void AEnemigo1::StartPatrol()
{
    // Guardar la posici�n actual como punto inicial de patrulla
    InitialPosition = GetActorLocation();

    // Configurar para comenzar movi�ndose hacia la derecha
    bMovingRight = true;

    // Asegurar que el Tick est� habilitado
    SetActorTickEnabled(true);
}

// M�todo para detener el movimiento de patrulla
void AEnemigo1::StopPatrol()
{
    // Desactivar el Tick para detener el movimiento
    SetActorTickEnabled(false);
}