// Fill out your copyright notice in the Description page of Project Settings.


#include "SolarSystem.h"
#include "Components/SphereComponent.h"
#include "Planet.h"
#include <cstdlib>
#include <ctime>

#define RANDNUM std::rand()/100000

ASolarSystem::ASolarSystem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlanetCount = 5;

	Sun = CreateDefaultSubobject<UStaticMeshComponent>(FName{"Sun"});
	SetRootComponent(Sun);

	// TODO
	// this may work
	// prbably using the wrong name for the class
	auto PlanetClassName = TEXT("APlanet");
	//DefaultPlanetClass = LoadClass<APlanet>(nullptr, PlanetClassName);
	//check(DefaultPlanetClass != nullptr);
}

void ASolarSystem::BeginPlay()
{
	Super::BeginPlay();

	// Seed random number generator
	std::srand(time(nullptr));

	for (int i = 0; i < PlanetCount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawning Planets"));
		// Spawn planets at random locations in x-y plane
		FTransform PlanetSpawnLocation { FVector { RANDNUM, RANDNUM, 0 }};
		PlanetArray.Push(GetWorld()->SpawnActor<APawn>(DefaultPlanetClass, PlanetSpawnLocation));
	}
}
