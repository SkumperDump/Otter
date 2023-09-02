// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OtterPlayerController.generated.h"

class UInputAction;

UCLASS()
class OTTER_API AOtterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
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

	virtual void BeginPlay() override;
};
