// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Planet.h"
#include "SolarSystem.generated.h"

class USphereComponent;

UCLASS()
class OTTER_API ASolarSystem : public AActor
{
	GENERATED_BODY()

	// Used to generate a random floating point number
	float GetRandomFloat();

	// This will represent the center of the solar system
	UPROPERTY(EditAnywhere)
	USphereComponent* Sun;
	
	// TODO
	// Initialize this array in AActor::OnConstrucion() function for in editor proc-gen
	// Array will hold Planet Class (BP_Planet)
	UPROPERTY(EditAnywhere)
	TArray<APlanet*> PlanetArray;
	
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this actor's properties
	ASolarSystem();
};
