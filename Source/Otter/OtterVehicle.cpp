// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterVehicle.h"
#include "OtterPlayer.h"
#include "OtterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


AOtterVehicle::AOtterVehicle()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName{"Vehicle Movement"});

	VehicleHitbox = CreateDefaultSubobject<UCapsuleComponent>(FName{"Vehicle Hitbox"});
	SetRootComponent(VehicleHitbox);

	VehicleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName{"Vehicle Mesh"});
	VehicleMesh->SetupAttachment(VehicleHitbox);

	VehicleExhaust = CreateDefaultSubobject<UParticleSystemComponent>(FName{"Vehicle Exhaust"});
	VehicleExhaust->SetupAttachment(VehicleMesh);
}

void AOtterVehicle::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	if (auto PawnController = Cast<APlayerController>(Controller))
	{
		// Get enhanced input subsys for player associated with our controller
		if (auto Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PawnController->GetLocalPlayer()))
		{
			// Add mapping context and give it highest priority (0)
			UE_LOG(LogTemp, Warning, TEXT("Setting Mapping Context"));
			Subsystem->AddMappingContext(VehicleMappingContext, 0);
		}
	} 
}

void AOtterVehicle::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Cast<UPrimitiveComponent>(GetRootComponent())->SetSimulatePhysics(true);
	Cast<UPrimitiveComponent>(GetRootComponent())->SetEnableGravity(false);
}

void AOtterVehicle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UE_LOG(LogTemp, Warning, TEXT("Setting Up Input Component"));

	// Cast AActor::InputComponent and then setup action bindings
	if (auto EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AOtterVehicle::Move);

		// Thrusting
		EnhancedInputComponent->BindAction(ThrustAction, ETriggerEvent::Triggered, this, &AOtterVehicle::Thrust);
	}
}

void AOtterVehicle::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Move Value: %s"), *Value.ToString());

	// TODO Apply movement to either rcs components or vectored thruster

	// Component is rotated around a "pin-vector"
	/* Cast<UPrimitiveComponent>(GetRootComponent())->AddRelativeRotation(FQuat { GetActorRightVector() * Value.Get<FVector>().Y });	// Pitch
	   Cast<UPrimitiveComponent>(GetRootComponent())->AddRelativeRotation(FQuat { GetActorForwardVector() * Value.Get<FVector>().X });	// Roll
	   Cast<UPrimitiveComponent>(GetRootComponent())->AddRelativeRotation(FQuat { GetActorUpVector() * Value.Get<FVector>().Z });	// Yaw */
}

void AOtterVehicle::Thrust(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Thrust Value: %s"), *Value.ToString());

	// Set thruster output (possible for vehicle to have reverse thrust)
	// TODO create logic so vehicle can only reverse thrust if has opposing thrusters
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(GetActorForwardVector() * Value.Get<float>());
}

void AOtterVehicle::OnVehicleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Character can enter vehicle
	if (auto Player {Cast<AOtterPlayer>(OtherActor)})
	{
		Player->SetOverlappingActor(this);
	}
}

void AOtterVehicle::OnVehicleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// If other actor still can enter this vehicle once overlap ends, set to nullptr
	if (auto Player {Cast<AOtterPlayer>(OtherActor)})
	{
		if(Player->GetOverlappingActor() == this)
		{
			Player->SetOverlappingActor(nullptr);
		}
	}
}

void AOtterVehicle::PlayerInteract()
{
	// TODO
	// Represent player as in vehicle 
}
