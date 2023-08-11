// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterPlayer.generated.h"

class UCameraComponent;
class UCapsuleComponent;
class UInputAction;
class UInputMappingContext;
class USpringArmComponent;
class USkeletalMeshComponent;
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
	TObjectPtr<USkeletalMeshComponent> PlayerMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> PlayerCamera;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	/*INPUT*/

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> OtterPlayerMappingContext;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> PlayerMoveAction;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> LookAction;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> SwapCameraAction;
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> InteractAction;

	virtual void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void SwapCamera(const FInputActionValue& Value);
	void Interact();

protected:

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

public:
	AOtterPlayer();
};
