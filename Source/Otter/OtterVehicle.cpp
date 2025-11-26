// Fill out your copyright notice in the Description page of Project Settings.

#include "OtterVehicle.h"
#include "OtterPlayerController.h"
#include "OtterOverlapComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFrameWork/SpringArmComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"

AOtterVehicle::AOtterVehicle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VehicleExhaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleExhaust->SetupAttachment(PawnMesh);
}

void AOtterVehicle::Look(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Look Value: %s"), *Value.ToString());
	// Look up
	GetCameraBoom()->AddWorldRotation(FQuat{GetCameraBoom()->GetRightVector(), Value.Get<FVector>().Y * LookSensitivity});

	// Look side to side
	GetCameraBoom()->AddWorldRotation(FQuat{GetDefaultPrimComp()->GetUpVector(), Value.Get<FVector>().X * LookSensitivity});
}

void AOtterVehicle::Rotate(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Rotate Value: %s"), *Value.ToString());

	// TODO Apply movement to either rcs components or vectored thruster
	// Is being weird and rotates faster when ship is already moving

	// Scale rotation vector
	auto GlobalSpaceRotationVector = Value.Get<FVector>() * RotationScale;

	// This transforms our rotation vector from global to local space
	auto LocalSpaceRotationVector = GetActorTransform().TransformVector(GlobalSpaceRotationVector);

	// Add angular impulse using local space rotation vector
	GetDefaultPrimComp()->AddAngularImpulseInDegrees(LocalSpaceRotationVector, NAME_None, true);
}

void AOtterVehicle::Thrust(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Thrust Value: %s"), *(Value * MovementScale).ToString());

	// TODO create logic so vehicle can only reverse thrust if has opposing thrusters
	GetDefaultPrimComp()->AddImpulse(Value.Get<FVector>() * MovementScale * GetActorForwardVector());
}

void AOtterVehicle::OnInteract(TObjectPtr<AOtterDefaultPawn> Pawn)
{
	// TODO: This pawn "transports" Actor
	// TODO: Will probably want to keep pawn later

	check(Pawn);

	if (auto Controller = Cast<AOtterPlayerController>(Pawn->GetController()))
	{
		Controller->Possess(this);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AOtterVehicle::OnInteract: Pawn has no controller"));
	}
}

void AOtterVehicle::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (auto EnhancedInputComponent{Cast<UEnhancedInputComponent>(InputComponent)})
	{
		UE_LOG(LogTemp, Warning, TEXT("Possessing a %s"), *this->GetClass()->GetName());

		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Triggered, this, &AOtterVehicle::Rotate);
		EnhancedInputComponent->BindAction(ThrustAction, ETriggerEvent::Triggered, this, &AOtterVehicle::Thrust);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No Enhanced Input Component"));
	}
}