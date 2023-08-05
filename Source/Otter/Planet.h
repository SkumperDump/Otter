// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Planet.generated.h"

class UStaticMeshComponent;
class UOtterMovementComponent;
class ASolarSystem;

UCLASS()
class OTTER_API APlanet : public APawn
{
	GENERATED_BODY()

	// Terrain of planet
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> PlanetMesh;

	// Planet motion
	TObjectPtr<UOtterMovementComponent> MovementComponent;

protected:

	virtual void PostInitializeComponents() override;

public:

	APlanet();
};
