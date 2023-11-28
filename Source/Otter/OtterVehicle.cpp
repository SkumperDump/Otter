// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVehicle.h"
#include "OtterOverlapComponent.h"
#include "OtterPlayerController.h"
#include "Particles/ParticleSystemComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


AOtterVehicle::AOtterVehicle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VehicleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName{"Vehicle Mesh"});
	VehicleMesh->SetupAttachment(GetRootComponent());

	VehicleExhaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleExhaust->SetupAttachment(VehicleMesh);
}

void AOtterVehicle::BeginPlay()
{
	Super::BeginPlay();

	// TODO
	// I really like this but it looks ugly so maybe clean up
	auto OtterController { Cast<AOtterPlayerController>(Controller) };	check(OtterController != nullptr);
	OtterController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(MappingContext, 0);
}

void AOtterVehicle::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Move Value: %s"), *Value.ToString());
	// TODO Apply movement to either rcs components or vectored thruster
	// Component is rotated around a "pin-vector"
	Cast<UPrimitiveComponent>(GetRootComponent())->AddRelativeRotation(FQuat { GetActorRightVector(), Value.Get<FVector>().Y });	// Pitch
	Cast<UPrimitiveComponent>(GetRootComponent())->AddRelativeRotation(FQuat { GetActorForwardVector(), Value.Get<FVector>().X });	// Roll
	Cast<UPrimitiveComponent>(GetRootComponent())->AddRelativeRotation(FQuat { GetActorUpVector(), Value.Get<FVector>().Z });	// Yaw
}

void AOtterVehicle::Thrust(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Vehicle Thrust Value: %s"), *Value.ToString());
	// TODO create logic so vehicle can only reverse thrust if has opposing thrusters
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(GetActorForwardVector() * Value.Get<float>());
}

void AOtterVehicle::PlayerInteract()
{
	if (auto Player { Cast<AActor>(GetOverlapComponent()->GetOverlappingActor()) })
	{
		// TODO
		// Setup vehicle camera 
		// Make it so this pawn "transports" pawn calling PlayerInteract()
		VehicleMesh->AttachToComponent(Player->GetRootComponent(), FAttachmentTransformRules { EAttachmentRule::SnapToTarget, false });
	}
}
