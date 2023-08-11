// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "OtterInteractInterface.h"
#include "OtterOverlapComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Subsystems/LocalPlayerSubsystem.h"


AOtterPlayer::AOtterPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName {"Player Mesh"}); 
	PlayerMesh->SetupAttachment(GetRootComponent());

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Player Camera Boom"}); 
	CameraBoom->SetupAttachment(GetRootComponent());

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Player Camera"}); 
	PlayerCamera->SetupAttachment(CameraBoom);
}

void AOtterPlayer::BeginPlay()
{
	Super::BeginPlay();
	// Get enhanced input subsys for player associated with our controller
	//TODO
	// One or more of these casts are failing and inner code is not being executed
	UE_LOG(LogTemp, Warning, TEXT("Before First Cast"));

	if (auto LocalPlayer { Cast<ULocalPlayer>(GetNetOwningPlayer()) })
	{
		UE_LOG(LogTemp, Warning, TEXT("First Cast"));
		if (auto Subsystem { LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>() })
		{
			{
				UE_LOG(LogTemp, Warning, TEXT("Setting Mapping Context"));
				Subsystem->AddMappingContext(OtterPlayerMappingContext, 0);
			}
		}
	}
}

void AOtterPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UE_LOG(LogTemp, Warning, TEXT("Setting Up Input Component"));

	// Cast AActor::InputComponent and then setup action bindings
	if (auto EnhancedInputComponent { CastChecked<UEnhancedInputComponent>(PlayerInputComponent) })
	{
		EnhancedInputComponent->BindAction(PlayerMoveAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Move);
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

	if (auto Actor { GetOverlapComponent()->GetOverlappingActor() })
	{
		if (Actor.IsA(AActor::StaticClass()))
		{
			PlayerInventory.Push(Actor);
			if (const auto ActorInterface { Cast<IOtterInteractInterface>(Actor) })
			{
				ActorInterface->PlayerInteract();
			}
		}
	}
}

