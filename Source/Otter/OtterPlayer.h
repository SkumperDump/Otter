// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterPlayer.generated.h"

class UCameraComponent;
class UStaticMeshComponent;
class USpringArmComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterPlayer : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// Bool for switching camera
	bool bUseFirstPersonCamera;

	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<AActor>> PlayerInventory;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> PlayerMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> PlayerCamera;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
public:
	AOtterPlayer();

	virtual void SwapCamera(const FInputActionValue& Value) override;
	virtual void Interact(const FInputActionValue& Value) override;
};
