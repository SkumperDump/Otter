// Fill out your copyright notice in the Description page of Project Settings.


#include "Planet.h"
#include "Components/StaticMeshComponent.h"
#include "OtterMovementComponent.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlanetMoveComp = CreateDefaultSubobject<UOtterMovementComponent>(FName {"Planet Movement"});

	PlanetMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName { "Planet Mesh" });
	PlanetMesh->SetSimulatePhysics(true);
	PlanetMesh->SetEnableGravity(false);
	SetRootComponent(PlanetMesh);

	// Use static to improve performance (only have to lookup mesh once)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	check(MeshAsset.Succeeded());
	PlanetMesh->SetStaticMesh(MeshAsset.Object);

	//TODO
	// Scale Planets
}
