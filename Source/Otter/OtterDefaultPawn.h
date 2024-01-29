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

	AOtterDefaultPawn();
	
	// Default do nothing
	virtual void OnInteract(TObjectPtr<AActor> Actor) {};

	// All subobjects can have one but not all need one
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> MappingContext { nullptr };

	// Functions bound to InputActions
	// If a subclass inherits from AOtterDefaultPawn
	// And has functions that will be called from an AController
	// These functions will need to be defined here and possibly declared
	// This is to ensure one AOtterPlayerController per player that can interact with all AOtterDefaultPawn instances
	// While also removing the need to re-bind functions at runtime
	// The theory is the AOtterPlayerController should have a reference to an AOtterDefaultPawn which can use c++ runtime polymorphism to call correctly bound function at run time
	// The theory is instead of using Unreal Engine and rebinding to seperate function pointer, use c++ compiler to generate code to point to ride object v-table at runtime
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
