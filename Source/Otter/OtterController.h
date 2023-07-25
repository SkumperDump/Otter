// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OtterController.generated.h"

class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterController : public APlayerController
{
	GENERATED_BODY()

	// Bool use first person camera 
	bool bUseFirstPersonCamera {false};

	// Initialize input component of our owning actor
	void SetupInputComponent() override;
	
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
	auto GetDefaultMappingContext() { return DefaultMappingContext; }
};
