// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterDefaultPawn.generated.h"

class UOtterOverlapComponent;
class UOtterMovementComponent;
class UArrowComponent;
class UInputMappingContext;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterDefaultPawn : public APawn
{
	GENERATED_BODY()
	
	// Mainly used as root basis for movement
	TObjectPtr<UPrimitiveComponent> DefaultPrimComp { nullptr };

	// Must include for movement as APawn has no move component
	TObjectPtr<UOtterMovementComponent> MovementComponent;

public:	

	AOtterDefaultPawn();

	// Indicates forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;

	// Detect overlaps
	UPROPERTY(EditAnywhere)
	TObjectPtr<UOtterOverlapComponent> OverlapComponent;

	// Used to scale movement inputs
	UPROPERTY(EditAnywhere)
	float MovementScale { 10.0f };

	UPROPERTY(EditAnywhere)
	float LookSensitivity { 10.0f };
	
	// Default do nothing
	virtual void OnInteract(TObjectPtr<AActor> Actor) {};

	// All subobjects can have one but not all need one
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> MappingContext { nullptr };

	/*
	 * FUNCTIONS BOUND TO INPUT ACTIONS
	 */
	UFUNCTION()
	virtual void Move(const FInputActionValue& Value) {};

	UFUNCTION()
	virtual void Look(const FInputActionValue& Value) {};

	UFUNCTION()
	virtual void SwapCamera(const FInputActionValue& Value) {};

	UFUNCTION()
	virtual void Interact(const FInputActionValue& Value) {};

	UFUNCTION()
	virtual void Thrust(const FInputActionValue& Value) {};

	// Getters and setters
	const auto GetOverlapComponent() { return OverlapComponent; };
	const auto GetDefaultPrimComp() { return DefaultPrimComp; };

	void SetDefaultPrimComp(TObjectPtr<UPrimitiveComponent> Subclass) { DefaultPrimComp = Subclass; };
};
