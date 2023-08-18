// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OtterPlayerController.generated.h"

class AOtterDefaultPawn;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	// INPUT
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> ThrustAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> SwapCameraAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> InteractAction;

	virtual void SetupInputComponent() override;

public:

	void SetMappingContext(TObjectPtr<UInputMappingContext> IMC, int index);
};
