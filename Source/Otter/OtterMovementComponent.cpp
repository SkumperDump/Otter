// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterMovementComponent.h"
#include "SolarSystem.h"
#include "Planet.h"


void UOtterMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Gravity();
}

void UOtterMovementComponent::Gravity()
{
	// Get component owner actor root component
	// Cast to primitive component for functions we want to use
	auto ActorRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());

	if (ActorRoot != nullptr)
	{
		// Get vector of location relative to world origin
		auto DistanceFromSun = ActorRoot->GetComponentLocation();

		// Convert to unit vector
		auto GravityUnitVector = DistanceFromSun / DistanceFromSun.Size();

		// Reverse and mult to produce vector representing the acceleration due to gravity
		auto GravityVector = GravityUnitVector * (-10);

		// Add impulse (kg * m/s) towards world origin (should be the sun and or center of solar system)
		ActorRoot->AddImpulse(GravityVector); // Mesh must already have physics enabled 

		// Check if our parent is of type APlanet, otherwise use impulses from exteneral forces only
		if (GetOwner()->IsA(APlanet::StaticClass()))
		{
			// Set velocity vector for each planet that is orthogonal to the plane of the gravity vector and the z-axis
			ActorRoot->AddImpulse(GravityUnitVector.CrossProduct(GravityUnitVector, FVector {0, 0, 1}), FName {}, true);
		}
	}
}
