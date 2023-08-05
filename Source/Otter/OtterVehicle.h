// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterInteractInterface.h"
#include "OtterVehicle.generated.h"

class UOtterMovementComponent;
class UCapsuleComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterVehicle : public APawn, public IOtterInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<UCapsuleComponent> VehicleHitbox;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> VehicleMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UParticleSystemComponent> VehicleExhaust;
	
	// Universal movement properties
	TObjectPtr<UOtterMovementComponent> MovementComponent;
	
	/*DELEGATES*/

	void OnVehicleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void OnVehicleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	/*INPUT*/

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> VehicleMappingContext;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> ThrustAction;

	// Input Functions
	void Move(const FInputActionValue& Value);
	void Thrust(const FInputActionValue& Value);

protected:
	
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

public:	

	AOtterVehicle();

	virtual void PlayerInteract() override;
};
