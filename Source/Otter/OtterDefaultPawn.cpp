// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterDefaultPawn.h"

#include "OtterOverlapComponent.h"
#include "OtterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/ArrowComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
AOtterDefaultPawn::AOtterDefaultPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName { "Move Component" }); 

	// Overlap
	OverlapComponent = CreateDefaultSubobject<UOtterOverlapComponent>(FName { "Overlap Component" }); 
	OverlapComponent->SetupAttachment(GetRootComponent());

	// Arrow
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName { "Arrow Component" }); 
	ArrowComponent->SetupAttachment(OverlapComponent);

	// Mesh
	PawnMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName { "Mesh" }); 
	OverlapComponent->SetupAttachment(PawnMesh);
	SetRootComponent(PawnMesh);
	SetDefaultPrimComp(Cast<UPrimitiveComponent>(PawnMesh));

	// Camera Boom
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName { "Camera Boom" }); 
	CameraBoom->SetupAttachment(PawnMesh);

	// Camera
	PawnCamera = CreateDefaultSubobject<UCameraComponent>(FName { "Camera" }); 
	PawnCamera->SetupAttachment(CameraBoom);
}

void AOtterDefaultPawn::Interact(const FInputActionValue& Value)
{
	// if Actor then add to inventory
	if (auto Actor { GetOverlapComponent()->GetOverlappingActor() })
	{
		Inventory.Push(Actor);

		// if OtterDefaultPawn then call OnInteract for it
		if (auto DefaultPawn = Cast<AOtterDefaultPawn>(Actor))
		{
			DefaultPawn->OnInteract(this);
		}
	}
}
