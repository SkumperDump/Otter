// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterVoyager.generated.h"

struct FInputActionValue;
class UInputAction;

UCLASS()
class OTTER_API AOtterVoyager : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// Bool for switching camera
	bool bUseFirstPersonCamera;

public:
	virtual void SetupPlayerInputComponent(UInputComponent *PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> MoveAction;

	virtual void Move(const FInputActionValue &Value);
	virtual void Look(const FInputActionValue &Value) override;
	virtual void SwapCamera(const FInputActionValue &Value) override;
};
