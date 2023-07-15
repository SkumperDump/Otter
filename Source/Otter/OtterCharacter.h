// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "OtterCharacter.generated.h"

class UPrimitiveComponent;
class UCameraComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
class UInputAction;
class UInputMappingContext;
class AItem;

/* This is our game character.
 * Here is where we will store things that relate to our character subclass.
 * TODO
 * -Should be exposed to a widget in the editor for heads up display.*/


UCLASS(config=Game)
class AOtterCharacter : public ACharacter
{
	GENERATED_BODY()

	// Should we use first person camera
	UPROPERTY(VisibleAnywhere)
	bool bUseFirstPersonCamera;

	// Camera boom positioning the camera around the character
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	// Player camera
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCamera;

	// Inventory as AActor array
	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> Inventory;

	/**INPUT*/
	
	// MappingContext
	UPROPERTY(EditAnywhere)
	UInputMappingContext* DefaultMappingContext;

	// Jump Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* JumpAction;

	// Move Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* MoveAction;

	// Look Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* LookAction;

	// Swap Camera Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* SwapCameraAction;

	// Interact Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* InteractAction;

protected:

	// Called for movement input
	void Move(const FInputActionValue& Value);

	// Called for looking input
	void Look(const FInputActionValue& Value);

	// Called to swap camera
	void SwapCamera(const FInputActionValue& Value);
	
	// Called to start an interaction
	void Interact(const FInputActionValue& Value);
			
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	// Mapping context applied here
	virtual void BeginPlay();

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Constructor
	AOtterCharacter();
	
	// Item that can be grabbed
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> GrabbableItem;
};
