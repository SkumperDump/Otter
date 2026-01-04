// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterDefaultPawn.generated.h"

class UArrowComponent;
class UCameraComponent;
class UInputAction;
class UInputComponent;
class UInputMappingContext;
class UOtterMovementComponent;
class UOtterOverlapComponent;
class USpringArmComponent;
class UStaticMeshComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterDefaultPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<AActor>> Inventory;
	
	// OtterDefaultPawn editable components
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> Camera;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UOtterOverlapComponent> OtterOverlapComponent;
	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	// OtterDefaultPawn viewable components
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UOtterMovementComponent> OtterMovementComponent; // Must include for movement as APawn has no move component
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UPrimitiveComponent> DefaultPrimitiveComponent { nullptr }; // Mainly used as root basis for movement

	// Sensetivities
	UPROPERTY(EditAnywhere)
	float LookSensitivity { 10.0f };
	UPROPERTY(EditAnywhere)
	float MovementScale { 10.0f };
	UPROPERTY(EditAnywhere)
	float RotationScale { 10.0f };

	// All subobjects can have one but not all need one
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> InputMappingContext { nullptr };

	// Input Actions
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> InteractAction;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> LookAction;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> SwapCameraAction;

	// Functions bound to input actions
	virtual void Interact(const FInputActionValue& Value);
	virtual void Look(const FInputActionValue& Value) {};
	virtual void SwapCamera(const FInputActionValue& Value) {};

	// Additional functions
	virtual void OnInteract(TObjectPtr<AOtterDefaultPawn> Pawn) {}; // Default do nothing

	// Engine overrides
	virtual void PostInitializeComponents() override;

protected:

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

public:

	AOtterDefaultPawn();

	// Getters
	const auto GetSpringArm() { return SpringArm; };
	const auto GetDefaultPrimitiveComponent() { return DefaultPrimitiveComponent; };
	const auto GetOverlapComponent() { return OtterOverlapComponent; };
	const auto GetLookSensitivity() { return LookSensitivity; };
	const auto GetMovementScale() { return MovementScale; };
	const auto GetRotationScale() { return RotationScale; };
	const auto GetInputMappingContext() { return InputMappingContext; };

	// Setters
	void SetDefaultPrimitiveComponent(TObjectPtr<UPrimitiveComponent> Subclass) { DefaultPrimitiveComponent = Subclass; };
};
