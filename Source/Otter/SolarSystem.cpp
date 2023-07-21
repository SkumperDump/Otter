// Fill out your copyright notice in the Description page of Project Settings.


#include "SolarSystem.h"
#include "Components/SphereComponent.h"
#include "Planet.h"
#include <cstdlib>
#include <ctime>

#define RANDOMDELTA std::rand()/100000

ASolarSystem::ASolarSystem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup center of solar system
	Sun = CreateDefaultSubobject<USphereComponent>(FName{"Sun"});
	RootComponent = Sun;

	// Default planet count
	PlanetCount = 5;

	// Default planet blueprint class
	static ConstructorHelpers::FClassFinder<AActor> PlanetBPClass(TEXT("/Game/Blueprints/BP_Planet"));
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
			// Spawn planet actor blueprint clasees
			TObjectPtr<AActor> ActorPtr {GetWorld()->SpawnActor<AActor>(DefaultPlanetClass, FTransform {})};
			TObjectPtr<APlanet> PlanetActor {Cast<APlanet>(ActorPtr)};

			// Reference in our planet array
			PlanetArray.Push(ActorPtr);

			if (PlanetActor != nullptr)
			{
				// Start by placing planets arbitrary distance from sun in straight line
				PlanetActor->GetRootComponent()->AddRelativeLocation(FVector {0, RANDOMDELTA, 0});
			}
		}
	}
}

void ASolarSystem::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Destroy planets once game is over
	for (auto Planet : PlanetArray)
	{
		Planet->Destroy();
	}
}

void ASolarSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// TODO
	// Need to implement custom physics
	// Time to read up on orbital mechanics!
	// Set acceleration back towards sun
	// Set initial velocity tangent to acceleration vector in unified directiion for planets
}
