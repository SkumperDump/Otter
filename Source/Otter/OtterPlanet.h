// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterPlanet.generated.h"

class UStaticMeshComponent;

UCLASS()
class OTTER_API AOtterPlanet : public AOtterDefaultPawn
{
	GENERATED_BODY()

	// Size of planet
	UPROPERTY(EditAnywhere)
	float OtterPlanetScale;

	// OtterPlanet Mesh
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> OtterPlanetMesh;

public:

	AOtterPlanet();

	virtual void PostInitializeComponents() override;
};
