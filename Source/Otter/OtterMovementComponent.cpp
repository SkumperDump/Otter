// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterMovementComponent.h"
#include "Planet.h"
#include "SolarSystem.h"


void UOtterMovementComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UOtterMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	// Get a pointer to the mesh for the planet we are a part of
	auto ParentPlanetMesh {Cast<UStaticMeshComponent>(GetOwner()->GetRootComponent())};

	if (ParentPlanetMesh != nullptr)
	{
		// Get vector of mesh root component location relative to world origin
		auto DistanceFromSun = ParentPlanetMesh->GetComponentLocation();

		// Convert to unit vector
		auto GravityUnitVector = DistanceFromSun / DistanceFromSun.Size();

		// Reverse and mult to produce vector representing the acceleration due to gravity for our planet
		auto GravityVector = GravityUnitVector * (-10);

		UE_LOG(LogTemp, Warning, TEXT("GravityVector is: %s"), *GravityVector.ToString());

		// Add velocity towards world origin (should be the sun)
		// Impulse (kg * m/s) but disregarding mass
		ParentPlanetMesh->AddImpulse(GravityVector, FName {}, true); // Mesh must already have physics enabled 

		// Set velocity to apply to orthogonal vector producing planar cicular motion
		ParentPlanetMesh->AddImpulse(GravityUnitVector.CrossProduct(GravityUnitVector, FVector {0, 0, 1}), FName {}, true);
	}
}
