// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputActionValue.h"
#include "OtterPlayer.generated.h"

class UPrimitiveComponent;
class UCameraComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
class UInputAction;
class UInputMappingContext;
class AItem;

UCLASS()
class OTTER_API AOtterPlayer : public AActor
{
	GENERATED_BODY()
	
	// Should we use first person camera
	UPROPERTY(VisibleAnywhere)
	bool bUseFirstPersonCamera;

	// Player skeleton mesh
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* PlayerSkeletalMesh;

	// Camera boom positioning the camera around the character
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	// Player camera
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCamera;

	// Inventory as AActor array
	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> PlayerInventory;

	/**INPUT*/
	
	// MappingContext
	UPROPERTY(EditAnywhere)
	UInputMappingContext* DefaultMappingContext;

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

	// Called for movement input
	void Move(const FInputActionValue& Value);

	// Called for looking input
	void Look(const FInputActionValue& Value);

	// Called to swap camera
	void SwapCamera(const FInputActionValue& Value);
	
	// Called to start an interaction
	void Interact(const FInputActionValue& Value);
	
	// Mapping context applied here
	virtual void BeginPlay();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:

	// Sets default values for this actor's properties
	AOtterPlayer();

	// Item that can be grabbed
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> GrabbableItem;
};
