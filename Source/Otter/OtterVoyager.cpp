// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVoyager.h"
#include "OtterOverlapComponent.h"
#include "OtterPlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


AOtterVoyager::AOtterVoyager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VoyagerMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName {"Voyager Mesh"}); 
	SetRootComponent(VoyagerMesh);
	OverlapComponent->SetupAttachment(VoyagerMesh);
	SetDefaultPrimComp(Cast<UPrimitiveComponent>(VoyagerMesh));

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Voyager Camera Boom"}); 
	CameraBoom->SetupAttachment(VoyagerMesh);

	VoyagerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Voyager Camera"}); 
	VoyagerCamera->SetupAttachment(CameraBoom);
}

void AOtterVoyager::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	GetDefaultPrimComp()->SetSimulatePhysics(true);
	GetDefaultPrimComp()->SetEnableGravity(false);
}

void AOtterVoyager::BeginPlay()
{
	Super::BeginPlay();

	auto OtterController { Cast<AOtterPlayerController>(Controller) };
	OtterController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(MappingContext, 0);
}

void AOtterVoyager::SwapCamera(const FInputActionValue& Value)
{
	if (bUseFirstPersonCamera)
	{
		// First person mode
	}
	else
	{
		// Third person mode
	}
	bUseFirstPersonCamera = !bUseFirstPersonCamera;
}

void AOtterVoyager::Interact(const FInputActionValue& Value)
{
	if (auto Actor { GetOverlapComponent()->GetOverlappingActor() })
	{
		VoyagerInventory.Push(Actor);
		if (auto DefaultPawn = Cast<AOtterDefaultPawn>(Actor))
		{
			DefaultPawn->OnInteract(this);
		}
	}
}


void AOtterVoyager::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Voyager Look Value: %s"), *Value.ToString());
	// Look up
	RootComponent->AddWorldRotation(FQuat { GetActorRightVector(), Value.Get<FVector>().Y });

	// Look side to side
	RootComponent->AddWorldRotation(FQuat { GetActorUpVector(), Value.Get<FVector>().X });
}

void AOtterVoyager::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Voyager Move Value: %s"), *Value.ToString());
	GetDefaultPrimComp()->AddImpulse(FVector { Value.Get<FVector>().Y * MovementScale * GetActorForwardVector() });
	GetDefaultPrimComp()->AddImpulse(FVector { Value.Get<FVector>().X * MovementScale * GetActorRightVector() });
}

