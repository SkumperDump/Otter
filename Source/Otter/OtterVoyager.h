// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterVoyager.generated.h"

class UCameraComponent;
class UStaticMeshComponent;
class USpringArmComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterVoyager : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// Bool for switching camera
	bool bUseFirstPersonCamera;

	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<AActor>> VoyagerInventory;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> VoyagerMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> VoyagerCamera;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
public:
	AOtterVoyager();

	virtual void Move(const FInputActionValue& Value) override;
	virtual void Look(const FInputActionValue& Value) override;
	virtual void SwapCamera(const FInputActionValue& Value) override;
	virtual void Interact(const FInputActionValue& Value) override;
};
