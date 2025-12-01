// Fill out your copyright notice in the Description page of Project Settings.

#include "OtterVehicle.h"

#include "EnhancedInputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputActionValue.h"
#include "OtterOverlapComponent.h"
#include "OtterPlayerController.h"
#include "Particles/ParticleSystemComponent.h"

AOtterVehicle::AOtterVehicle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VehicleExhaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleExhaust->SetupAttachment(GetDefaultPrimitiveComponent());
}

void AOtterVehicle::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (auto EnhancedInputComponent{Cast<UEnhancedInputComponent>(PlayerInputComponent)})
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

void AOtterVehicle::Look(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Look Value: %s"), *Value.ToString());
	// Look up
	GetSpringArm()->AddWorldRotation(FQuat{GetSpringArm()->GetRightVector(), Value.Get<FVector>().Y * GetLookSensitivity()});

	// Look side to side
	GetSpringArm()->AddWorldRotation(FQuat{GetDefaultPrimitiveComponent()->GetUpVector(), Value.Get<FVector>().X * GetLookSensitivity()});
}

void AOtterVehicle::Rotate(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Rotate Value: %s"), *Value.ToString());

	// TODO Apply movement to either rcs components or vectored thruster
	// Is being weird and rotates faster when ship is already moving

	// Scale rotation vector
	auto GlobalSpaceRotationVector = Value.Get<FVector>() * GetRotationScale();

	// This transforms our rotation vector from global to local space
	auto LocalSpaceRotationVector = GetActorTransform().TransformVector(GlobalSpaceRotationVector);

	// Add angular impulse using local space rotation vector
	GetDefaultPrimitiveComponent()->AddAngularImpulseInDegrees(LocalSpaceRotationVector, NAME_None, true);
}

void AOtterVehicle::Thrust(const FInputActionValue &Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Thrust Value: %s"), *(Value * GetMovementScale()).ToString());

	// TODO create logic so vehicle can only reverse thrust if has opposing thrusters
	GetDefaultPrimitiveComponent()->AddImpulse(Value.Get<FVector>() * GetMovementScale() * GetActorForwardVector());
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
