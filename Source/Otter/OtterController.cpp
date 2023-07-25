// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterController.h"
#include "OtterPlayer.h"
#include "InputActionValue.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

void AOtterController::SetupInputComponent()
{
	Super::SetupInputComponent();
	UE_LOG(LogTemp, Warning, TEXT("Setting Up Input Component"));

	// Cast AActor::InputComponent and then setup action bindings
	if (auto EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AOtterController::Jump);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AOtterController::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AOtterController::Look);

		// Swap Camera
		// Completed so switches once per key-stroke
		EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Completed, this, &AOtterController::SwapCamera);

		// Interact with a given volume
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AOtterController::Interact);
	}
}

void AOtterController::Jump()
{
	UE_LOG(LogTemp, Warning, TEXT("Jump"));
	// Add impulse upwards
}

void AOtterController::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Move"));
	// Add impulse in direction of movement
}

void AOtterController::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Look"));
	// Rotate camera
}

void AOtterController::SwapCamera(const FInputActionValue& Value)
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

void AOtterController::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Interact"));
	if (Cast<AOtterPlayer>(GetPawn())->GetGrabbableItem() != nullptr)
	{
		// Attatch item mesh to our character mesh
		// Put item in our inventory
	}
}
