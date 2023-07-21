// Fill out your copyright notice in the Description page of Project Settings.


#include "Planet.h"
#include "Components/StaticMeshComponent.h"
#include "OtterMovementComponent.h"


// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup class default subobjects
	PlanetStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(FName{"Planet Mesh"});
	PlanetMovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName{"Planet Movement"});

	// Setup root component and attachments
	RootComponent = PlanetStaticMeshComponent;

}
