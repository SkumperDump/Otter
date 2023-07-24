// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OtterController.generated.h"

class UInputAction;
class UInputMappingContext;
class AOtterPlayer;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterController : public APlayerController
{
	GENERATED_BODY()

	// Our owning actor
	TObjectPtr<AActor> OwnerPtr;

	// Initialize input component of our owning actor
	void SetupInputComponent() override;

	// Bool for camera switch
	bool bUseFirstPersonCamera;

	// Function for moving our associated player
	void AddImpulseToRootPrimitive(const FVector& ImpulseVector);
	
	/** INPUT VARIALBES */
	
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

	/** INPUT FUCTIONS */

	// Called for jump input
	void Jump();

	// Called for movement input
	void Move(const FInputActionValue& Value);

	// Called for looking input
	void Look(const FInputActionValue& Value);

	// Called to swap camera
	void SwapCamera(const FInputActionValue& Value);
	
	// Called to start an interaction
	void Interact(const FInputActionValue& Value);

public:
	AOtterController();
	
	auto GetDefaultMappingContext() { return DefaultMappingContext; }
};
