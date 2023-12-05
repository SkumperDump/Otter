// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterMovementComponent.h"
#include "Planet.h"


void UOtterMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	// Gravity();
}

// TODO
// change this to implement gravity for all items in game
// will probably end up only using for objects above a certain "mass" threshold to conserve resources
// function will probably ammount to giving each component affected in the scene an overall movement vector based on these calculations
// function could be like:
// for all items in scene above a certain mass
// sum gravity vectors and apply movement with summation vector
void UOtterMovementComponent::Gravity()
{
	auto ObjectToMove { Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent()) };	check(ObjectToMove != nullptr);

	// Get vector of location relative to world origin (which should be our sun)
	auto DistanceFromSun { ObjectToMove->GetComponentLocation() };

	// Convert to unit vector
	auto GravityUnitVector { DistanceFromSun / DistanceFromSun.Size() };

	// Reverse and mult to produce acceleration vector due to gravity
	auto GravityVector { GravityUnitVector * (-10) };

	// Add impulse (kg * m/s) towards world origin
	ObjectToMove->AddImpulse(GravityVector); // Mesh must have physics enabled 

	// TODO
	// Move this to a seperate function that is optional for a given mesh
	// This function would be some sort of 'constant force function'
	if (GetOwner()->IsA(APlanet::StaticClass()))
	{
		// Set velocity vector for each planet
		// Vector is orthogonal to the plane of the gravity vector and the z-axis
		// TODO if dispersing planets on z axis make sure to change so that planets do not have 'orbital terraces'
		ObjectToMove->AddImpulse(GravityUnitVector.CrossProduct(GravityUnitVector, FVector {0, 0, 1}), FName {}, true);
	}
}
