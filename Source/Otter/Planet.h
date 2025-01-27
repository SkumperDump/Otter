// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "Planet.generated.h"

class UStaticMeshComponent;

UCLASS()
class OTTER_API APlanet : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// Size of planet
	UPROPERTY(EditAnywhere)
	float PlanetScale;

	// Planet Mesh
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> PlanetMesh;

public:

	APlanet();

	virtual void PostInitializeComponents() override;
};
