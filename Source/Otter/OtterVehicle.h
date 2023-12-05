// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterInteractInterface.h"
#include "OtterVehicle.generated.h"

class USkeletalMeshComponent;
class UParticleSystemComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterVehicle : public AOtterDefaultPawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<USkeletalMeshComponent> VehicleMesh;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UParticleSystemComponent> VehicleExhaust;
	
	virtual void OnInteract(TObjectPtr<AActor> Actor) override;
public:	

	AOtterVehicle();

	virtual void Move(const FInputActionValue& Value) override;
	virtual void Thrust(const FInputActionValue& Value) override;
};
