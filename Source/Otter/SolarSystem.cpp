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

	Sun = CreateDefaultSubobject<UStaticMeshComponent>(FName{"Sun"});
	SetRootComponent(Sun);

	PlanetCount = 5;

	// Default planet blueprint class
	// TODO
	// Remove this reference to blueprint stuff and replace with an instance of our otter planets
	static ConstructorHelpers::FClassFinder<APawn> PlanetBPClass(TEXT("/Game/Blueprints/BP_Planet"));
	DefaultPlanetClass = PlanetBPClass.Class;
}

void ASolarSystem::BeginPlay()
{
	Super::BeginPlay();

	// Seed random number generator
	std::srand(time(nullptr));

	// Initialzie array with BP class
	if (DefaultPlanetClass != nullptr)
	{
		for (int i = 0; i < PlanetCount; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("Spawning Planets"));
			// Spawn planets at random locations in x-y plane
			FTransform PlanetSpawnLocation { FVector { RANDNUM, RANDNUM, 0 }};
			PlanetArray.Push(GetWorld()->SpawnActor<APawn>(DefaultPlanetClass, PlanetSpawnLocation));
		}
	}
}
