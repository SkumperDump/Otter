// Fill out your copyright notice in the Description page of Project Settings.


#include "Planet.h"
#include "Components/StaticMeshComponent.h"
#include "OtterMovementComponent.h"


// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlanetMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName { "Planet Mesh" });
	SetRootComponent(PlanetMesh);

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName{"Planet Movement"});
}

void APlanet::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// Setup physics for planet
	Cast<UPrimitiveComponent>(GetRootComponent())->SetSimulatePhysics(true);
	Cast<UPrimitiveComponent>(GetRootComponent())->SetEnableGravity(false);
}
