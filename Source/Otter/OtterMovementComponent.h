// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "OtterMovementComponent.generated.h"

class APlanet;
class ASolarSystem;

UCLASS()
class OTTER_API UOtterMovementComponent : public UMovementComponent
{
	GENERATED_BODY()

	// Component tick function
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	// Gravity function for affected actors
	void Gravity();
};
