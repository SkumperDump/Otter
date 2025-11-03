// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterDefaultPawn.generated.h"

class UOtterOverlapComponent;
class UOtterMovementComponent;
class UArrowComponent;
class UInputMappingContext;
class UCameraComponent;
class UStaticMeshComponent;
class USpringArmComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterDefaultPawn : public APawn
{
	GENERATED_BODY()
	
	// Mainly used as root basis for movement
	TObjectPtr<UPrimitiveComponent> DefaultPrimComp { nullptr };

	// Must include for movement as APawn has no move component
	TObjectPtr<UOtterMovementComponent> MovementComponent;

	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<AActor>> Inventory;

	virtual void PostInitializeComponents() override;

public:
	AOtterDefaultPawn();

	// Mesh
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> PawnMesh;

	// Camera
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> PawnCamera;

	// Camera boom
	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	// Indicates forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;

	// Detect overlaps
	UPROPERTY(EditAnywhere)
	TObjectPtr<UOtterOverlapComponent> OverlapComponent;

	// Move sens
	UPROPERTY(EditAnywhere)
	float MovementScale { 10.0f };

	// Rotation sens
	UPROPERTY(EditAnywhere)
	float RotationScale { 10.0f };

	// Look sens
	UPROPERTY(EditAnywhere)
	float LookSensitivity { 10.0f };
	
	// Default do nothing
	virtual void OnInteract(TObjectPtr<AOtterDefaultPawn> Pawn) {};

	// All subobjects can have one but not all need one
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> MappingContext { nullptr };

	// FUNCTIONS BOUND TO INPUT ACTIONS
	UFUNCTION()
	virtual void Move(const FInputActionValue& Value) {};

	UFUNCTION()
	virtual void Look(const FInputActionValue& Value) {};

	UFUNCTION()
	virtual void SwapCamera(const FInputActionValue& Value) {};

	UFUNCTION()
	virtual void Interact(const FInputActionValue& Value);

	UFUNCTION()
	virtual void Thrust(const FInputActionValue& Value) {};

	// Getters
	const auto GetOverlapComponent() { return OverlapComponent; };
	const auto GetDefaultPrimComp() { return DefaultPrimComp; };

	// Setters
	void SetDefaultPrimComp(TObjectPtr<UPrimitiveComponent> Subclass) { DefaultPrimComp = Subclass; };
};
