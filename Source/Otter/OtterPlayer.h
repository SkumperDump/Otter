// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterPlayer.generated.h"

class UArrowComponent;
class UCameraComponent;
class UCapsuleComponent;
class UInputAction;
class UInputMappingContext;
class UOtterMovementComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterPlayer : public APawn
{
	GENERATED_BODY()

	// Bool for switching camera
	bool bUseFirstPersonCamera;

	TArray<TObjectPtr<AActor>> PlayerInventory;

	TObjectPtr<AActor> OverlappingActor;

	TObjectPtr<UOtterMovementComponent> MovementComponent;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UCapsuleComponent> PlayerHitbox;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> PlayerMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> PlayerCamera;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	// Arrow for forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;

	/*INPUT*/

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> OtterDefaultMappingContext;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> LookAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> SwapCameraAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> InteractAction;

	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void SwapCamera(const FInputActionValue& Value);
	void Interact();

protected:

	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void PostInitializeComponents() override;

public:
	AOtterPlayer();

	auto GetOverlappingActor() { return OverlappingActor; }
	void SetOverlappingActor(TObjectPtr<AActor> Actor) { OverlappingActor = Actor; }
};
