// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterDefaultPawn.generated.h"

class UOtterOverlapComponent;
class UOtterMovementComponent;
class UMeshComponent;
class UArrowComponent;
class UInputMappingContext;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterDefaultPawn : public APawn
{
	GENERATED_BODY()
	
	// Used for movement
	TObjectPtr<UPrimitiveComponent> DefaultPrimComp;

	// Must include for movement as APawn has no move component
	TObjectPtr<UOtterMovementComponent> MovementComponent;

	// Indicates forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;

	// Detect overlaps
	UPROPERTY(EditAnywhere)
	TObjectPtr<UOtterOverlapComponent> OverlapComponent;

public:	

	AOtterDefaultPawn();

	// Public so any pawn can have one but not all need one, thus up to child classes to redefine
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> MappingContext {nullptr};

	// All are be callable because assuming this will prevent game crash if called and not defined (can hit keys that do nothing)
	virtual void Move(const FInputActionValue& Value) {};
	virtual void Look(const FInputActionValue& Value) {};
	virtual void SwapCamera(const FInputActionValue& Value) {};
	virtual void Interact(const FInputActionValue& Value) {};
	virtual void Thrust(const FInputActionValue& Value) {};

	const auto GetOverlapComponent() { return OverlapComponent; };
	const auto GetDefaultPrimComp() { return DefaultPrimComp; };
	void SetDefaultPrimComp(TObjectPtr<UPrimitiveComponent> PrimComp) { DefaultPrimComp = PrimComp; };
};
