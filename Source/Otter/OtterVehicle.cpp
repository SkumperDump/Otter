// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVehicle.h"
#include "OtterOverlapComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "InputActionValue.h"


AOtterVehicle::AOtterVehicle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VehicleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName{"Vehicle Mesh"});
	SetRootComponent(VehicleMesh);
	SetDefaultPrimComp(VehicleMesh);

	VehicleExhaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleExhaust->SetupAttachment(VehicleMesh);
}

void AOtterVehicle::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Move Value: %s"), *Value.ToString());
	// TODO Apply movement to either rcs components or vectored thruster
	// Component is rotated around a "pin-vector"
	GetDefaultPrimComp()->AddRelativeRotation(FQuat { GetActorRightVector(), Value.Get<FVector>().Y });	// Pitch
	GetDefaultPrimComp()->AddRelativeRotation(FQuat { GetActorForwardVector(), Value.Get<FVector>().X });	// Roll
	GetDefaultPrimComp()->AddRelativeRotation(FQuat { GetActorUpVector(), Value.Get<FVector>().Z });	// Yaw
}

void AOtterVehicle::Thrust(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Thrust Value: %s"), *Value.ToString());
	// TODO create logic so vehicle can only reverse thrust if has opposing thrusters
	GetDefaultPrimComp()->AddImpulse(GetActorForwardVector() * Value.Get<float>());
}

void AOtterVehicle::OnInteract(TObjectPtr<AActor> Actor)
{
	// TODO
	// Setup vehicle camera 
	// Make it so this pawn "transports" Actor
	VehicleMesh->AttachToComponent(Actor->GetRootComponent(), FAttachmentTransformRules { EAttachmentRule::SnapToTarget, false });
}
