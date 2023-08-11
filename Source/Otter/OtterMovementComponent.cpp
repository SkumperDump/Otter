// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterMovementComponent.h"
#include "Planet.h"


void UOtterMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Gravity();
}

void UOtterMovementComponent::Gravity()
{
	if (auto ActorRootPrimitive { Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent()) })
	{
		// Get vector of location relative to world origin (which should be our sun)
		auto DistanceFromSun { ActorRootPrimitive->GetComponentLocation() };

		// Convert to unit vector
		auto GravityUnitVector { DistanceFromSun / DistanceFromSun.Size() };

		// Reverse and mult to produce acceleration vector due to gravity
		auto GravityVector { GravityUnitVector * (-1) };

		// Add impulse (kg * m/s) towards world origin
		ActorRootPrimitive->AddImpulse(GravityVector); // Mesh must have physics enabled 

		if (GetOwner()->IsA(APlanet::StaticClass()))
		{
			// Set velocity vector for each planet
			// Vector is orthogonal to the plane of the gravity vector and the z-axis
			// TODO if dispersing planets on z axis make sure to change so that planets do not have 'orbital terraces'
			ActorRootPrimitive->AddImpulse(GravityUnitVector.CrossProduct(GravityUnitVector, FVector {0, 0, 1}), FName {}, true);
		}
	}
}
