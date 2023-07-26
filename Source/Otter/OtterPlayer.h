// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterPlayer.generated.h"

class AItem;
class UCameraComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class UInputAction;
class UInputMappingContext;
class UOtterMovementComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterPlayer : public APawn
{
	GENERATED_BODY()

	// Bool for switching camera
	bool bUseFirstPersonCamera;

	float MovementScale = 100.0f;

	// Inventory as AActor array
	TArray<TObjectPtr<AActor>> PlayerInventory;

	// Item that can be grabbed
	TObjectPtr<USkeletalMeshComponent> GrabbableItem;

	// Universal movement characteristics (Gravity)
	TObjectPtr<UOtterMovementComponent> PlayerMovementComponent;

	// Player hitbox
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCapsuleComponent> PlayerHitbox;

	// Player skeleton mesh
	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> PlayerSkeletalMesh;

	// Player camera
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCameraComponent> PlayerCamera;

	// Spring arm for camera
	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	// MappingContext
	UPROPERTY(EditAnywhere)
	UInputMappingContext* OtterDefaultMappingContext;

	// Jump Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* JumpAction;

	// Move Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* MoveAction;

	// Look Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* LookAction;

	// Swap Camera Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* SwapCameraAction;

	// Interact Input Action
	UPROPERTY(EditAnywhere)
	UInputAction* InteractAction;

	// Called for jump input
	void Jump(const FInputActionValue& Value);

	// Called for movement input
	void Move(const FInputActionValue& Value);

	// Called for looking input
	void Look(const FInputActionValue& Value);

	// Called to swap camera
	void SwapCamera(const FInputActionValue& Value);
	
	// Called to start an interaction
	void Interact(const FInputActionValue& Value);

protected:

	// Mapping context applied here
	virtual void BeginPlay() override;

	// Initialize input component of our owning actor
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	// Once components are setup setup physics
	virtual void PostInitializeComponents() override;

public:
	// Sets default values for this actor's properties
	AOtterPlayer();

	auto GetGrabbableItem() { return GrabbableItem; }
};
