// Fill out your copyright notice in the Description page of Project Settings.


#include "Planet.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlanetMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName { "Planet Mesh" });
	
	// Use static to improve performance (only have to lookup mesh once)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));	check(MeshAsset.Succeeded())
	PlanetMesh->SetStaticMesh(MeshAsset.Object);
	SetRootComponent(PlanetMesh);
	SetDefaultPrimComp(PlanetMesh);

	//TODO
	// Scale Planets
}

void APlanet::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	GetDefaultPrimComp()->SetSimulatePhysics(true);
	GetDefaultPrimComp()->SetEnableGravity(false);
}
