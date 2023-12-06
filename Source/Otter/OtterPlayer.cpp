// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "OtterOverlapComponent.h"
#include "OtterPlayerController.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"


AOtterPlayer::AOtterPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName {"Player Mesh"}); 
	SetRootComponent(PlayerMesh);
	OverlapComponent->SetupAttachment(PlayerMesh);
	SetDefaultPrimComp(Cast<UPrimitiveComponent>(PlayerMesh));

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Player Camera Boom"}); 
	CameraBoom->SetupAttachment(PlayerMesh);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Player Camera"}); 
	PlayerCamera->SetupAttachment(CameraBoom);
}

void AOtterPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	GetDefaultPrimComp()->SetSimulatePhysics(true);
	GetDefaultPrimComp()->SetEnableGravity(false);
}

void AOtterPlayer::BeginPlay()
{
	Super::BeginPlay();

	auto OtterController { Cast<AOtterPlayerController>(Controller) };
	OtterController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(MappingContext, 0);
}

void AOtterPlayer::SwapCamera(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Swap Camera"));
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

void AOtterPlayer::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Interact"));

	if (auto Actor { GetOverlapComponent()->GetOverlappingActor() })
	{
		PlayerInventory.Push(Actor);
		if (auto DefaultPawn = Cast<AOtterDefaultPawn>(Actor))
		{
			DefaultPawn->OnInteract(this);
		}
	}
}
