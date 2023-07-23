// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InputActionValue.h"
#include "OtterVehicle.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInputAction;
class UInputMappingContext;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UOtterMovementComponent;
class UInputComponent;

UCLASS()
class OTTER_API AOtterVehicle : public AActor
{
	GENERATED_BODY()
	
	// Camera boom for Vehicle 3p
	UPROPERTY(EditAnywhere)
	TObjectPtr<USpringArmComponent> CameraBoom;

	// Camera for Vehicle
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> VehicleCameraComponent;

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
	UInputMappingContext* VehicleMappingContext;

	// Thrust action
	UPROPERTY(EditAnywhere)
	UInputAction* ThrustAction;

	// Called for thrust input
	void Thrust(const FInputActionValue& Value);

public:	
	// When actor spawned into game
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Sets default values for this actor's properties
	AOtterVehicle();

};
