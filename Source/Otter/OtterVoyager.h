// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterVoyager.generated.h"

struct FInputActionValue;

UCLASS()
class OTTER_API AOtterVoyager : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// Bool for switching camera
	bool bUseFirstPersonCamera;

	virtual void PostInitializeComponents() override;

public:

	virtual void Move(const FInputActionValue& Value) override;
	virtual void Look(const FInputActionValue& Value) override;
	virtual void SwapCamera(const FInputActionValue& Value) override;
};
