// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "Planet.generated.h"

class UStaticMeshComponent;
class UOtterMovementComponent;
class ASolarSystem;

UCLASS()
class OTTER_API APlanet : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// Terrain of planet
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> PlanetMesh;

public:

	APlanet();
};
