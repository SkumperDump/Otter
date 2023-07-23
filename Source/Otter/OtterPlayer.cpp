// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h" 
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


// Sets default values
AOtterPlayer::AOtterPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// No grabbable item at start
	GrabbableItem = nullptr;

	// TODO
	// Setup member variables

}

void AOtterPlayer::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	/* TODO saving for controller component
	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	*/
}

/* TODO saving for later when making controller component
void AOtterPlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Look);

		// Swap Camera
		// Completed so switches once per key-stroke
		EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Completed, this, &AOtterPlayer::SwapCamera);

		// Interact with a given volume using capsule component
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AOtterPlayer::Interact);
	}
}

void AOtterPlayer::Move(const FInputActionValue& Value)
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

void AOtterPlayer::Look(const FInputActionValue& Value)
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

void AOtterPlayer::SwapCamera(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		if (bUseFirstPersonCamera)
		{
			// First person mode
			// Currently must get socket name from editor 
			PlayerCamera->AttachToComponent(PlayerSkeletalMesh, FAttachmentTransformRules {EAttachmentRule::KeepRelative, false}, FName {"headSocket"});

			// Controller rotates actor yaw
			bUseControllerRotationYaw = true;

			// Controller rotates camera pitch
			PlayerCamera->bUsePawnControlRotation = true;
		}
		else
		{
			// Third person mode
			PlayerCamera->AttachToComponent(CameraBoom, FAttachmentTransformRules {EAttachmentRule::KeepRelative, false});

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

void AOtterPlayer::Interact(const FInputActionValue& Value)
{
	if (Controller != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Interact Key Pressed"));

		if (GrabbableItem != nullptr)
		{
			// Attatch item mesh to our character mesh
			GrabbableItem->AttachToComponent(PlayerSkeletalMesh, FAttachmentTransformRules { EAttachmentRule::SnapToTarget, true }, FName { "GripPoint" });
			// Put item in our inventory
			PlayerInventory.Add(GrabbableItem->GetAttachParentActor());
		}
	}
}
*/

void AOtterPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
