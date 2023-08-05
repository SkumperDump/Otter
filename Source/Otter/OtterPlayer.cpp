// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "OtterVehicle.h"
#include "OtterMovementComponent.h"
#include "Item.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


#define MOVEMENT_SCALE float {10.0f}


AOtterPlayer::AOtterPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName {"Player Move Component"}); 

	PlayerHitbox = CreateDefaultSubobject<UCapsuleComponent>(FName {"Player Hitbox"}); 
	SetRootComponent(PlayerHitbox);

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName {"Player Forward Arrow"}); 
	ArrowComponent->SetupAttachment(PlayerHitbox);
 
	PlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName {"Player Mesh"}); 
	PlayerMesh->SetupAttachment(PlayerHitbox);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Player Camera Boom"}); 
	CameraBoom->SetupAttachment(PlayerHitbox);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Player Camera"}); 
	PlayerCamera->SetupAttachment(CameraBoom);
}

void AOtterPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (auto PawnController = Cast<APlayerController>(Controller))
	{
		// Get enhanced input subsys for player associated with our controller
		if (auto Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PawnController->GetLocalPlayer()))
		{
			// Add mapping context and give it highest priority (0)
			UE_LOG(LogTemp, Warning, TEXT("Setting Mapping Context"));
			Subsystem->AddMappingContext(OtterDefaultMappingContext, 0);
		}
	} 
}

void AOtterPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Cast<UPrimitiveComponent>(GetRootComponent())->SetSimulatePhysics(true);
	Cast<UPrimitiveComponent>(GetRootComponent())->SetEnableGravity(false);
}

void AOtterPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UE_LOG(LogTemp, Warning, TEXT("Setting Up Input Component"));

	// Cast AActor::InputComponent and then setup action bindings
	if (auto EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Look);
		EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Completed, this, &AOtterPlayer::SwapCamera);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Interact);
	}
}

void AOtterPlayer::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Move Value: %s"), *Value.ToString());

	// Add XYZ movement
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(GetActorRightVector() * Value.Get<FVector>().X);
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(GetActorForwardVector() * Value.Get<FVector>().Y);
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(GetActorUpVector() * Value.Get<FVector>().Z);
}

void AOtterPlayer::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Look"));
	AddActorLocalRotation(FRotator { Value.Get<FVector>().Y, Value.Get<FVector>().X, 0 });
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

void AOtterPlayer::Interact()
{
	UE_LOG(LogTemp, Warning, TEXT("Interact"));

	if (OverlappingActor != nullptr)
	{
		PlayerInventory.Push(OverlappingActor);

		// TODO
		// Would be so clean to make one call to PlayerInteract()
		if (const auto Item { Cast<AItem>(OverlappingActor) })
		{
			Item->PlayerInteract();
		}

		if (const auto Vehicle { Cast<AOtterVehicle>(OverlappingActor) })
		{
			Vehicle->PlayerInteract();
		}
	}
}
