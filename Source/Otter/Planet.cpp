// Fill out your copyright notice in the Description page of Project Settings.


#include "Planet.h"
#include "Components/StaticMeshComponent.h"
#include "OtterMovementComponent.h"


// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// TODO
	// NEED TO FIND A WAY TO SET THESE PLANETS
	// CAN MAKE STATIC REFERENCE TO SPHERE AND THEN APPPLY TERRAIN TEXTURES?
	PlanetMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName { "Planet Mesh" });
	PlanetMesh->SetupAttachment(GetRootComponent());
}
