// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVehicle.h"
#include "OtterPlayerController.h"
#include "OtterOverlapComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "InputActionValue.h"
#include "Math/TransformNonVectorized.h"


AOtterVehicle::AOtterVehicle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VehicleExhaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleExhaust->SetupAttachment(PawnMesh);
}

void AOtterVehicle::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Move Value: %s"), *Value.ToString());
	
	// TODO Apply movement to either rcs components or vectored thruster
	// Is being weird and rotates faster when ship is already moving
	
	// Scale rotation vector
	auto GlobalSpaceRotationVector = Value.Get<FVector>() * RotationScale;

	// This transforms our rotation vector from global to local space
	auto LocalSpaceRotationVector = TransformVector(GetActorTransform(), GlobalSpaceRotationVector);

	// Add angular impulse using local space rotation vector
	GetDefaultPrimComp()->AddAngularImpulseInDegrees(LocalSpaceRotationVector);
}

void AOtterVehicle::Thrust(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Thrust Value: %s"), *(Value * MovementScale).ToString());
	
	// TODO create logic so vehicle can only reverse thrust if has opposing thrusters
	GetDefaultPrimComp()->AddImpulse(Value.Get<FVector>() * MovementScale * GetActorForwardVector());
}

void AOtterVehicle::OnInteract(TObjectPtr<AOtterDefaultPawn> Pawn)
{
	// TODO: This pawn "transports" Actor
	// TODO: Starting voyager pawn still moves after possession

	GetWorld()->GetFirstPlayerController()->Possess(this);
	Pawn->Destroy();
}
