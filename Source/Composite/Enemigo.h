#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/TargetPoint.h"
#include "AIController.h"
#include "IEnemigo.h"
#include "Enemigo.generated.h"

UCLASS()
class COMPOSITE_API AEnemigo : public AActor, public IIEnemigo
{
    GENERATED_BODY()

public:
    AEnemigo();

	virtual void StartPatrol();

protected:
	
	// Componentes
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* RootComp;
};

