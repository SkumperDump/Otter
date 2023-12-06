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

	// Indicates forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;

	// Detect overlaps
	UPROPERTY(EditAnywhere)
	TObjectPtr<UOtterOverlapComponent> OverlapComponent;

	// Used to scale movement inputs
	UPROPERTY(EditAnywhere)
	float MovementScale { 10.0f };

	// CDO constructor
	AOtterDefaultPawn();
	
	// Default do nothing
	// Constant reference because we want to call Actor functions not change actor
	virtual void OnInteract(TObjectPtr<AActor> Actor) {};

	// Public so any pawn can have one but not all need one, thus up to child classes to redefine
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> MappingContext {nullptr};

	// Functions associated with user input
	virtual void Move(const FInputActionValue& Value);
	virtual void Look(const FInputActionValue& Value);
	virtual void SwapCamera(const FInputActionValue& Value) {};
	virtual void Interact(const FInputActionValue& Value) {};
	virtual void Thrust(const FInputActionValue& Value) {};

	// Mutators
	const auto GetOverlapComponent() { return OverlapComponent; };
	const auto GetDefaultPrimComp() { return DefaultPrimComp; };
	void SetDefaultPrimComp(TObjectPtr<UPrimitiveComponent> Subclass) { DefaultPrimComp = Subclass; };
};
