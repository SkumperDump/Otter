// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterMovementComponent.h"
#include "Planet.h"
#include "SolarSystem.h"


void UOtterMovementComponent::BeginPlay()
{
	Super::BeginPlay();

	// Get planet we are a part of
	auto ParentPlanet {Cast<APlanet>(GetOwner())};

	if (ParentPlanet != nullptr)
	{
		// Get vector from planet to center of solar system
		FVector PlanetLocation = ParentPlanet->GetPlanetStaticMeshComponent()->GetComponentLocation();

		UE_LOG(LogTemp, Warning, TEXT("Planet Location %s"), *PlanetLocation.ToString());

		// Set acceleration of this vector 
		// Set velocity to apply to orthogonal vector producing planar cicular motion
	}
}
