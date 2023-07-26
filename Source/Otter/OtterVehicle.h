// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterVehicle.generated.h"

class UCapsuleComponent;
class UInputAction;
class UInputMappingContext;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UOtterMovementComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterVehicle : public APawn
{
	GENERATED_BODY()

	// Vehicle hitbox
	UPROPERTY(EditAnywhere)
	TObjectPtr<UCapsuleComponent> VehicleHitbox;

	// Vehicle static mesh
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> VehicleStaticMeshComponent;

	// Vehicle exhaust
	UPROPERTY(EditAnywhere)
	TObjectPtr<UParticleSystemComponent> VehicleEhxaust;

	// Otter move component
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UOtterMovementComponent> VehicleMovementComponent;

	/**INPUT*/

	// Mapping context
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> VehicleMappingContext;

	// Thrust action
	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> ThrustAction;

	// Called for thrust input
	void Thrust(const FInputActionValue& Value);

public:	
	// When actor spawned into game
	virtual void BeginPlay() override;

	// Setup things after all components are initialized
	virtual void PostInitializeComponents() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Sets default values for this actor's properties
	AOtterVehicle();
};
