// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "OtterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


// Sets default values
AOtterPlayer::AOtterPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName {"Player Movement"});

	PlayerHitbox = CreateDefaultSubobject<UCapsuleComponent>(FName {"Player Hitbox"});
	SetRootComponent(PlayerHitbox);

	PlayerSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName {"Player Skeletal Mesh"});
	PlayerSkeletalMesh->SetupAttachment(PlayerHitbox);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Camera Spring Arm"});
	CameraBoom->SetupAttachment(PlayerHitbox);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Player Camera"});
	PlayerCamera->SetupAttachment(CameraBoom);
}

void AOtterPlayer::BeginPlay()
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
			Subsystem->AddMappingContext(OtterDefaultMappingContext, 0);
		}
	} 
}

void AOtterPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// We want this pawn (the pawns rendered components) to have physics
	Cast<UPrimitiveComponent>(GetRootComponent())->SetSimulatePhysics(true);
	Cast<UPrimitiveComponent>(GetRootComponent())->SetEnableGravity(false);
}

void AOtterPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UE_LOG(LogTemp, Warning, TEXT("Setting Up Input Component"));

	// Cast AActor::InputComponent and then setup action bindings
	if (auto EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Jump);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Look);

		// Swap Camera on completed so switches once per key-stroke
		EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Completed, this, &AOtterPlayer::SwapCamera);

		// Interact with a given volume
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Interact);
	}
}

void AOtterPlayer::Jump(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Jump Value: %s"), *Value.ToString());
	
	// Add jump/negative jump
	// TODO make normal to surface instead of just z direc
	// Scale by imput valie of jummp (space = 1, ctrl = -1)
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(FVector{0,0,1} * Value.Get<float>() * MovementScale);
}

void AOtterPlayer::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Move Value: %s"), *Value.ToString());

	// Add direction of movement
	Cast<UPrimitiveComponent>(GetRootComponent())->AddImpulse(Value.Get<FVector>() * MovementScale);
}

void AOtterPlayer::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Look"));
	// Rotate camera
}

void AOtterPlayer::SwapCamera(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Swap Camera"));
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

void AOtterPlayer::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Interact"));
	if (GrabbableItem != nullptr)
	{
		// Attatch item mesh to our character mesh
		// Put item in our inventory
	}
}
