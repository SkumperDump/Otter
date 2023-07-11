// Fill out your copyright notice in the Description page of Project Settings.


#include "SolarSystem.h"
#include "Components/SphereComponent.h"
#include <cstdlib>
#include <ctime>

// Sets default values
ASolarSystem::ASolarSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sun = CreateDefaultSubobject<USphereComponent>(FName{"Sun"});

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
				FQuat {},
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
