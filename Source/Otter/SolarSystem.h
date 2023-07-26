// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SolarSystem.generated.h"

class USphereComponent;

UCLASS()
class OTTER_API ASolarSystem : public AActor
{
	GENERATED_BODY()
	
	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when game ends
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Number of planets in solar system
	UPROPERTY(EditAnywhere)
	int PlanetCount;

	// Center of the solar system
	UPROPERTY(EditAnywhere)
	USphereComponent* Sun;
	
	// Default planet blueprint class
	TSubclassOf<APawn> DefaultPlanetClass;
	
	// Array of pointers to planet blueprint classes
	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<APawn>> PlanetArray;

public:	

	// Constructor
	ASolarSystem();
};
