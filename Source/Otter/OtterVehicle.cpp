// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVehicle.h"
#include "GameFramework/SpringArmComponent.h"
#include "OtterMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


// Sets default values
AOtterVehicle::AOtterVehicle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VehicleMovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName{"Vehicle Movement"});

	VehicleHitbox = CreateDefaultSubobject<UCapsuleComponent>(FName {"Vehicle Hitbox"});
	SetRootComponent(VehicleHitbox);

	VehicleStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName {"Vehicle Mesh"});
	VehicleStaticMeshComponent->SetupAttachment(VehicleHitbox);

	VehicleEhxaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleEhxaust->SetupAttachment(VehicleStaticMeshComponent);

}

void AOtterVehicle::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// We want this pawn (the pawns components) to have physics
	Cast<UPrimitiveComponent>(GetRootComponent())->SetSimulatePhysics(true);
	Cast<UPrimitiveComponent>(GetRootComponent())->SetEnableGravity(false);
}

// Called when the game starts or when spawned
void AOtterVehicle::BeginPlay()
{
	Super::BeginPlay();
	if (auto PawnController = Cast<APlayerController>(Controller))
	{
		// Get enhanced input subsys for player associated with our controller
		if (auto Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PawnController->GetLocalPlayer()))
		{
			// Add mapping context and give it highest priority (0)
			// TODO will probably have to undo this on vehicle exit
			UE_LOG(LogTemp, Warning, TEXT("Setting Mapping Context"));
			Subsystem->AddMappingContext(VehicleMappingContext, 0);
		}
	} 
}

// Called every frame
void AOtterVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOtterVehicle::Thrust(const FInputActionValue& Value)
{
	// Add thrust
	UE_LOG(LogTemp, Warning, TEXT("Thrust Value: %s"), *Value.ToString());

	// Add direction of movement
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(Value.Get<FVector>());
}
