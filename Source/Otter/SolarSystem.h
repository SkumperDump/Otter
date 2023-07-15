// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SolarSystem.generated.h"

class USphereComponent;
class APlanet;

UCLASS()
class OTTER_API ASolarSystem : public AActor
{
	GENERATED_BODY()

	// Used to generate a random floating point number
	float GetRandomFloat();

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called on editor recompile
	virtual void OnConstruction(const FTransform& Transform);

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this actor's properties
	ASolarSystem();
	
	// Number of planets in solar system
	UPROPERTY(EditAnywhere)
	int PlanetCount;

	// This will represent the center of the solar system
	UPROPERTY(EditAnywhere)
	USphereComponent* Sun;
	
	// Base mesh to use for planets
	UPROPERTY(EditAnywhere)
	UStaticMesh* PlanetBaseMesh;

	// Base material to use for planets
	UPROPERTY(EditAnywhere)
	UMaterialInstance* PlanetBaseMaterialInstance;
	
	// Array will hold parent class of (BP_Planet)
	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<APlanet>> PlanetArray;
};
