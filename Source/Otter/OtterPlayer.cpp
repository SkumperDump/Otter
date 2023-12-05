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
	SetDefaultPrimComp(PlayerMesh);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Player Camera Boom"}); 
	CameraBoom->SetupAttachment(PlayerMesh);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Player Camera"}); 
	PlayerCamera->SetupAttachment(CameraBoom);
}

void AOtterPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	check(GetDefaultPrimComp() != nullptr);
	GetDefaultPrimComp()->SetSimulatePhysics(true);
	GetDefaultPrimComp()->SetEnableGravity(false);
}

void AOtterPlayer::BeginPlay()
{
	Super::BeginPlay();

	// TODO
	// I really like this but it looks ugly so maybe clean up
	// At the very least maybe leave a nice comment explaining
	auto OtterController { Cast<AOtterPlayerController>(Controller) };	check(OtterController != nullptr);
	OtterController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(MappingContext, 0);
}

void AOtterPlayer::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Look"));
	GetDefaultPrimComp()->AddLocalRotation(FRotator { Value.Get<FVector>().Y, Value.Get<FVector>().X, 0 });
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
