// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterDefaultPawn.generated.h"

class UArrowComponent;
class UOtterMovementComponent;
class UOtterOverlapComponent;
class UInputMappingContext;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterDefaultPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UOtterMovementComponent> MovementComponent;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> MappingContext;

	// Arrow indicating forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;

	// Detect overlaps
	UPROPERTY(EditAnywhere)
	TObjectPtr<UOtterOverlapComponent> OverlapComponent;

	virtual void PostInitializeComponents() override;

public:	

	AOtterDefaultPawn();

	// FUNCTIONS BOUND TO INPUT ACTIONS
	// All should be callable but it is up to derrived classes to override them and implement functionality
	// TODO
	// Maybe move this to an interface
	virtual void Move(const FInputActionValue& Value) {};
	virtual void Look(const FInputActionValue& Value) {};
	virtual void SwapCamera(const FInputActionValue& Value) {};
	virtual void Interact(const FInputActionValue& Value) {};
	virtual void Thrust(const FInputActionValue& Value) {};

	const auto GetOverlapComponent() { return OverlapComponent; }
};
