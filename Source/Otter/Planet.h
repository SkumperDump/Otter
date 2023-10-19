// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterMovementComponent.h"
#include "Planet.generated.h"

class UStaticMeshComponent;

UCLASS()
class OTTER_API APlanet : public AOtterDefaultPawn
{
	GENERATED_BODY()

	TObjectPtr<UOtterMovementComponent> PlanetMoveComp;

	// Terrain of planet
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> PlanetMesh;

	// Size of planet
	UPROPERTY(EditAnywhere)
	float PlanetScale;
public:

	APlanet();
};
