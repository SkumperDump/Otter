// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterInteractInterface.h"
#include "OtterVehicle.generated.h"

class UOtterMovementComponent;
class UOtterOverlapComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterVehicle : public AOtterDefaultPawn, public IOtterInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> VehicleMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UParticleSystemComponent> VehicleExhaust;
	
	/*INPUT*/

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputMappingContext> VehicleMappingContext;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> VehicleMoveAction;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UInputAction> ThrustAction;

	virtual void Move(const FInputActionValue& Value);
	void Thrust(const FInputActionValue& Value);

protected:
	
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	virtual void BeginPlay() override;

public:	

	AOtterVehicle();

	virtual void PlayerInteract() override;
};
