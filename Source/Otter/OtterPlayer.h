// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OtterPlayer.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
class AItem;
class AOtterController;

UCLASS()
class OTTER_API AOtterPlayer : public AActor
{
	GENERATED_BODY()

	// Player skeleton mesh
	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> PlayerSkeletalMesh;

	// Camera boom positioning the camera around the character
	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	// Player camera
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> PlayerCamera;

	// Inventory as AActor array
	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<AActor>> PlayerInventory;

	// Item that can be grabbed
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> GrabbableItem;

	// Player controller
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<AOtterController> PlayerController;

	// Mapping context applied here
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
public:

	// Sets default values for this actor's properties
	AOtterPlayer();

	auto GetGrabbableItem() { return GrabbableItem; }
};
