// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVehicle.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "OtterMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


// Sets default values
AOtterVehicle::AOtterVehicle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VehicleStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName {"Vehicle Mesh"});
	SetRootComponent(VehicleStaticMeshComponent);

	VehicleEhxaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleEhxaust->SetupAttachment(VehicleStaticMeshComponent);

	VehicleMovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName{"Vehicle Movement"});

	VehicleCameraComponent = CreateDefaultSubobject<UCameraComponent>(FName{"Vehicle Camera"});
	VehicleCameraComponent->SetupAttachment(CameraBoom);
	
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName{"Vehicle Camera Boom"});
	CameraBoom->SetupAttachment(VehicleStaticMeshComponent);
}

// Called when the game starts or when spawned
void AOtterVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOtterVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOtterVehicle::Thrust(const FInputActionValue& Value)
{
	// Add thrust
	UE_LOG(LogTemp, Warning, TEXT("THRUSTING"));
}
