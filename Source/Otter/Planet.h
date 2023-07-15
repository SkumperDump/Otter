// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Planet.generated.h"

class UStaticMeshComponent;
class ASolarSystem;

UCLASS()
class OTTER_API APlanet : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this actor's properties
	APlanet();

	// Terrain of planet
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* PlanetMesh;
	
	// Solar system we are in
	UPROPERTY(EditAnywhere)
	ASolarSystem* SolarSystemActor;
	
};
