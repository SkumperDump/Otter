// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterVehicle.generated.h"

class UParticleSystemComponent;
struct FInputActionValue;
class UInputAction;

UCLASS()
class OTTER_API AOtterVehicle : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// OtterVehicle editable components
	UPROPERTY(EditAnywhere)
	TObjectPtr<UParticleSystemComponent> VehicleExhaust;

	// Input Actions
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> RotateAction;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> ThrustAction;

	// Functions bound to input actions
	virtual void Look(const FInputActionValue &Value) override;
	virtual void Rotate(const FInputActionValue &Value);
	virtual void Thrust(const FInputActionValue &Value);

	// Additional functions
	virtual void OnInteract(TObjectPtr<AOtterDefaultPawn> Pawn) override;

	// Engine overrides
	virtual void SetupPlayerInputComponent(UInputComponent *PlayerInputComponent) override;

public:
	AOtterVehicle();
};
