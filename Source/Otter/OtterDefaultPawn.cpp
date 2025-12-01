// Fill out your copyright notice in the Description page of Project Settings.

#include "OtterDefaultPawn.h"

#include "Components/ArrowComponent.h"
#include "OtterOverlapComponent.h"
#include "OtterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"

// Sets default values
AOtterDefaultPawn::AOtterDefaultPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	OtterMovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName{"Move Component"});

	// Overlap
	OtterOverlapComponent = CreateDefaultSubobject<UOtterOverlapComponent>(FName{"Overlap Component"});
	OtterOverlapComponent->SetupAttachment(GetRootComponent());

	// Arrow
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName{"Arrow Component"});
	ArrowComponent->SetupAttachment(OtterOverlapComponent);

	// Mesh
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName{"StaticMesh"});
	OtterOverlapComponent->SetupAttachment(StaticMesh);
	SetRootComponent(StaticMesh);
	SetDefaultPrimitiveComponent(Cast<UPrimitiveComponent>(StaticMesh));

	// Camera Boom
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(FName{"Camera Boom"});
	SpringArm->SetupAttachment(StaticMesh);

	// Camera
	Camera = CreateDefaultSubobject<UCameraComponent>(FName{"Camera"});
	Camera->SetupAttachment(SpringArm);
}

void AOtterDefaultPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	GetDefaultPrimitiveComponent()->SetSimulatePhysics(true);
	GetDefaultPrimitiveComponent()->SetEnableGravity(false);
}

void AOtterDefaultPawn::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (auto EnhancedInputComponent{Cast<UEnhancedInputComponent>(PlayerInputComponent)})
	{
		UE_LOG(LogTemp, Warning, TEXT("Possessing a %s"), *this->GetClass()->GetName());

		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AOtterDefaultPawn::Interact);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AOtterDefaultPawn::Look);
		EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Triggered, this, &AOtterDefaultPawn::Look);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Enhanced Input Component"));
	}
}

void AOtterDefaultPawn::Interact(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Interact Value: %s"), *Value.ToString());

	// if Actor then add to inventory
	if (auto Actor{GetOverlapComponent()->GetOverlappingActor()})
	{
		Inventory.Push(Actor);

		// if OtterDefaultPawn then call OnInteract for it
		if (auto DefaultPawn = Cast<AOtterDefaultPawn>(Actor))
		{
			DefaultPawn->OnInteract(this);
		}
	}
}
