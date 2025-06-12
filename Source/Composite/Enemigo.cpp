#include "Enemigo.h"

AEnemigo::AEnemigo()
{
    PrimaryActorTick.bCanEverTick = true;

    // Crear componente raíz
    RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = RootComp;

    // Crear y configurar el componente Static Mesh
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    MeshComponent->SetupAttachment(RootComponent);

    // Cargar el mesh del Goomba desde el contenido
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));

    if (MeshAsset.Succeeded())
    {
        MeshComponent->SetStaticMesh(MeshAsset.Object);
        MeshComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
        MeshComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
    }

}

void AEnemigo::StartPatrol()
{
}

