#include "Enemigo.h"
#include "AIController.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "NavigationSystem.h"
#include "Engine/TargetPoint.h"
#include "Navigation/PathFollowingComponent.h"
#include "DrawDebugHelpers.h"

AEnemigo::AEnemigo()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    AIControllerClass = AAIController::StaticClass();

    // Crear el componente raíz
    GetMesh()->SetHiddenInGame(true);

    // Crear la malla estática
    Malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla"));
    Malla->SetupAttachment(RootComponent);

    // Configurar la malla estática
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (CuboMesh.Succeeded())
    {
        // Asignar la malla estática
        Malla->SetStaticMesh(CuboMesh.Object);
        // Configurar la escala y la ubicación
        Malla->SetRelativeLocation(FVector(0.0f, 0.0f, 40.0f));
        // Configurar la escala
        Malla->SetWorldScale3D(FVector(1.0f));
        // Configurar la colisión
        //Para que el enemigo colisione con el jugador
        Malla->SetCollisionObjectType(ECC_Pawn);
        // Para que no colisione con lo demas
        Malla->SetCollisionResponseToAllChannels(ECR_Ignore);
        Malla->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
        Malla->SetGenerateOverlapEvents(true);
    }

    // IA
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    AIControllerClass = AAIController::StaticClass();

    // Velocidad de movimiento
    GetCharacterMovement()->MaxWalkSpeed = 200.0f;
    // Sets default values
}

void AEnemigo::Perseguir(AActor* Objetivo)
{
    if (!Objetivo) return;

    AAIController* AIController = Cast<AAIController>(GetController());
    if (AIController)
    {
        AIController->MoveToActor(Objetivo);
    }
}

void AEnemigo::Patrullar()
{
    if (PuntosPatrulla.Num() == 0) return;

    FVector PuntoDestino = PuntosPatrulla[IndicePatrullaActual];
    FVector PosicionActual = GetActorLocation();

    if (FVector::Dist(PosicionActual, PuntoDestino) < 100.f)
    {
        IndicePatrullaActual = (IndicePatrullaActual + 1) % PuntosPatrulla.Num();
    }

    AAIController* AIController = Cast<AAIController>(GetController());
    if (AIController)
    {
        AIController->MoveToLocation(PuntosPatrulla[IndicePatrullaActual]);
    }
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

    PuntosPatrulla.Add(GetActorLocation());
    PuntosPatrulla.Add(GetActorLocation() + FVector(500, 0, 0));
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (!ObjetivoJugador)
    {
        // Buscar al jugador
        for (TActorIterator<APawn> It(GetWorld()); It; ++It)
        {
            if (It->IsPlayerControlled())
            {
                ObjetivoJugador = *It;
                break;
            }
        }
    }

    if (ObjetivoJugador)
    {
        float Distancia = FVector::Dist(GetActorLocation(), ObjetivoJugador->GetActorLocation());

        if (Distancia <= RangoDeteccion)
        {
            Perseguir(ObjetivoJugador);
        }
        else
        {
            Patrullar();
        }
    }
    else
    {
        Patrullar();
    }

}

// Called to bind functionality to input
void AEnemigo::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

} 