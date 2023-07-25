// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterPlayer.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
class AItem;

UCLASS()
class OTTER_API AOtterPlayer : public APawn
{
	GENERATED_BODY()

	// Bool for switching camera
	bool bUseFirstPersonCamera;

	// Player skeleton mesh
	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> PlayerSkeletalMesh;

	// Spring arm for camera
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

protected:

	// Mapping context applied here
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	// Sets default values for this actor's properties
	AOtterPlayer();

	auto GetGrabbableItem() { return GrabbableItem; }
};
