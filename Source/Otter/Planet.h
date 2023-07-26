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
	TObjectPtr<UStaticMeshComponent> PlanetStaticMeshComponent;

	// Planet motion
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UOtterMovementComponent> PlanetMovementComponent;

	// Solar system that planet is in
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<ASolarSystem> ParentSolarSystemActor;

protected:

	// Once components are setup setup physics
	virtual void PostInitializeComponents() override;

public:

	// Sets default values for this actor's properties
	APlanet();

	auto GetPlanetStaticMeshComponent() {return PlanetStaticMeshComponent;}

};
