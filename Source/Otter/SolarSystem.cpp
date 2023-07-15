// Fill out your copyright notice in the Description page of Project Settings.


#include "SolarSystem.h"
#include "Components/SphereComponent.h"
#include "Planet.h"
#include <cstdlib>
#include <ctime>

// Sets default values
ASolarSystem::ASolarSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup center of solar system
	Sun = CreateDefaultSubobject<USphereComponent>(FName{"Sun"});
	Sun->SetupAttachment(GetRootComponent());
}

void ASolarSystem::OnConstruction(const FTransform& Transform)
{
	// Kinda abusing the above function to only change this stuff when number of planets changes
	if (PlanetArray.Num() != PlanetCount)
	{
		// Clear PlanetArray
		for (auto Planet : PlanetArray)
		{	
			PlanetArray.Pop();
		}

		// Make array of length PlanetCount of APlanet instances on the heap
		for (int i = 0; i < PlanetCount; i++)
		{
			auto temp {NewObject<APlanet>(this)};
			temp->PlanetMesh->SetStaticMesh(PlanetBaseMesh);
			temp->PlanetMesh->SetMaterial(0, PlanetBaseMaterialInstance);
			PlanetArray.Push(temp);
		}
	}
}

// Called when the game starts or when spawned
void ASolarSystem::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASolarSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (auto& Planet : PlanetArray)
	{
		Planet->PlanetMesh->MoveComponent(
				FVector{GetRandomFloat(), 0.0f, GetRandomFloat()},
				FQuat{},
				true
				);
	}
}

float ASolarSystem::GetRandomFloat()
{
	int factor {10000000};
	return std::rand()/factor;
}

// TODO
// Create orbit function
// orbit function will move planet around world origin
// will be done with physics enabled unless gravity is constant relative to world origin
// Looks like I will have to do it manually
