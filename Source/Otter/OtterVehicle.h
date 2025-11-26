// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterInteractInterface.h"
#include "OtterVehicle.generated.h"

class UParticleSystemComponent;
struct FInputActionValue;
class UInputAction;

UCLASS()
class OTTER_API AOtterVehicle : public AOtterDefaultPawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<UParticleSystemComponent> VehicleExhaust;

public:
	AOtterVehicle();

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> ThrustAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> RotateAction;

	virtual void Rotate(const FInputActionValue &Value);
	virtual void Thrust(const FInputActionValue &Value);
	virtual void Look(const FInputActionValue &Value) override;

	virtual void OnInteract(TObjectPtr<AOtterDefaultPawn> Pawn) override;
};
