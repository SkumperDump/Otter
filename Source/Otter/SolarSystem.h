// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SolarSystem.generated.h"

class UStaticMeshComponent;

UCLASS()
class OTTER_API ASolarSystem : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int PlanetCount;

	// Center of the solar system
	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> Sun;
	
	// Default planet blueprint class
	TSubclassOf<APawn> DefaultPlanetClass;
	
	// Array of pointers to planet blueprint classes
	UPROPERTY(VisibleAnywhere)
	TArray<TObjectPtr<APawn>> PlanetArray;

protected:

	virtual void BeginPlay() override;

public:	

	ASolarSystem();
};
