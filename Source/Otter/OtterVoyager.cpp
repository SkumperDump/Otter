// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVoyager.h"
#include "OtterPlayerController.h"
#include "InputActionValue.h"


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

void AOtterVoyager::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Voyager Look Value: %s"), *Value.ToString());
	// Look up
	GetDefaultPrimComp()->AddWorldRotation(FQuat { GetActorRightVector(), Value.Get<FVector>().Y / LookSensitivity});

	// Look side to side
	GetDefaultPrimComp()->AddWorldRotation(FQuat { GetActorUpVector(), Value.Get<FVector>().X / LookSensitivity});
}

void AOtterVoyager::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Voyager Move Value: %s"), *Value.ToString());
	GetDefaultPrimComp()->AddImpulse(FVector { Value.Get<FVector>().X * MovementScale * GetActorForwardVector() });
	GetDefaultPrimComp()->AddImpulse(FVector { Value.Get<FVector>().Y * MovementScale * GetActorRightVector() });
}
