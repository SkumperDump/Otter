// Fill out your copyright notice in the Description page of Project Settings.

#include "OtterVoyager.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"

void AOtterVoyager::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (auto EnhancedInputComponent{Cast<UEnhancedInputComponent>(PlayerInputComponent)})
	{
		UE_LOG(LogTemp, Warning, TEXT("Possessing a %s"), *this->GetClass()->GetName());

		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AOtterVoyager::Move);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Enhanced Input Component"));
	}
}

void AOtterVoyager::Look(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Voyager Look Value: %s"), *Value.ToString());
	GetDefaultPrimitiveComponent()->AddWorldRotation(FQuat{GetActorRightVector(), Value.Get<FVector>().Y * GetLookSensitivity()});
	GetDefaultPrimitiveComponent()->AddWorldRotation(FQuat{GetActorUpVector(), Value.Get<FVector>().X * GetLookSensitivity()});
}

void AOtterVoyager::Move(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Voyager Move Value: %s"), *Value.ToString());
	GetDefaultPrimitiveComponent()->AddImpulse(FVector{Value.Get<FVector>().X * GetMovementScale() * GetActorForwardVector()});
	GetDefaultPrimitiveComponent()->AddImpulse(FVector{Value.Get<FVector>().Y * GetMovementScale() * GetActorRightVector()});
}

void AOtterVoyager::SwapCamera(const FInputActionValue &Value)
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
