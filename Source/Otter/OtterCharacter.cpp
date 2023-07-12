// Copyright Epic Games, Inc. All Rights Reserved.

#include "OtterCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


//////////////////////////////////////////////////////////////////////////
// AOtterCharacter

AOtterCharacter::AOtterCharacter()
{
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Start with third person camera
	bUseFirstPersonCamera = false;

	// Controller cannot change roll or pitch of actor
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...

	// Create a camera boom (pulls in towards the player if there is a collision)
	ThirdPersonCameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonCameraBoom"));
	ThirdPersonCameraBoom->SetupAttachment(RootComponent);
	ThirdPersonCameraBoom->bUsePawnControlRotation = true; // Controller rotates boom

	// Create a player camera
	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	PlayerCamera->SetupAttachment(ThirdPersonCameraBoom, USpringArmComponent::SocketName);

}

void AOtterCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void AOtterCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AOtterCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AOtterCharacter::Look);

		// Swap Camera
		// Completed so switches once per key-stroke
		EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Completed, this, &AOtterCharacter::SwapCamera);

		// Interact with a given volume using capsule component
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AOtterCharacter::Interact);
	}
}

void AOtterCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AOtterCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AOtterCharacter::SwapCamera(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		if (bUseFirstPersonCamera)
		{
			// First person mode
			// Currently must get socket name from editor 
			PlayerCamera->AttachToComponent(GetMesh(), FAttachmentTransformRules {EAttachmentRule::KeepRelative, false}, FName {"headSocket"});

			// Controller rotates actor yaw
			bUseControllerRotationYaw = true;

			// Controller rotates camera pitch
			PlayerCamera->bUsePawnControlRotation = true;
		}
		else
		{
			// Third person mode
			PlayerCamera->AttachToComponent(ThirdPersonCameraBoom, FAttachmentTransformRules {EAttachmentRule::KeepRelative, false});

			// Reset camera rotation relative to actor space
			PlayerCamera->SetRelativeRotation(FRotator {}, false);

			// Controller wont yaw whole actor 
			bUseControllerRotationYaw = false;
			
			// Camera does not rotate relative to arm
			PlayerCamera->bUsePawnControlRotation = false;
		}
		bUseFirstPersonCamera = !bUseFirstPersonCamera;
	}
}

void AOtterCharacter::Interact(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		// grab overlapping component
		GetCapsuleComponent()->GetOverlappingActors(ItemArray);
		UE_LOG(LogTemp, Warning, TEXT("Testing"));
	}
}

void AOtterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
