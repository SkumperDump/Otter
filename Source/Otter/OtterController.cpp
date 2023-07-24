// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterController.h"
#include "Components/InputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "OtterPlayer.h"

AOtterController::AOtterController()
{
	// Get owner of this actor
	// TODO may have to set manually
	OwnerPtr = GetOwner();

	// Start in first person
	bUseFirstPersonCamera = true;
}

void AOtterController::SetupInputComponent()
{
	Super::SetupInputComponent();

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

		// TODO
		// Once all binds are set get input stack
		// if input stack is empty, push to input stack
	}
}

void AOtterController::Jump()
{
	// Add impulse upwards
	AddImpulseToRootPrimitive(FVector {0, 0, 1});
}

void AOtterController::Move(const FInputActionValue& Value)
{
	// Add impulse in direction of movement
	AddImpulseToRootPrimitive(Value.Get<FVector>());
}

void AOtterController::Look(const FInputActionValue& Value)
{
	// Rotate camera
}

void AOtterController::SwapCamera(const FInputActionValue& Value)
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

void AOtterController::Interact(const FInputActionValue& Value)
{
	if (Cast<AOtterPlayer>(OwnerPtr)->GetGrabbableItem() != nullptr)
	{
		// Attatch item mesh to our character mesh
		// Put item in our inventory
	}
}

void AOtterController::AddImpulseToRootPrimitive(const FVector& ImpulseVector)
{
	Cast<UPrimitiveComponent>(OwnerPtr)->AddImpulse(ImpulseVector);
}
