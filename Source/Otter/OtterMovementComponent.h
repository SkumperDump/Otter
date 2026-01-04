// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "OtterMovementComponent.generated.h"

/** This is used to represent physics and whatnot for the game */

UCLASS()
class OTTER_API UOtterMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

	// Component tick function
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	// Gravity function for affected actors
	void Gravity();
};
