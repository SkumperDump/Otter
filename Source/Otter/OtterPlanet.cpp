// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlanet.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AOtterPlanet::AOtterPlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	OtterPlanetMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName { "OtterPlanet Mesh" });
	
	// Use static to improve performance (only have to lookup mesh once)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));	check(MeshAsset.Succeeded())
	OtterPlanetMesh->SetStaticMesh(MeshAsset.Object);
	SetRootComponent(OtterPlanetMesh);
	SetDefaultPrimitiveComponent(OtterPlanetMesh);

	//TODO
	// Scale OtterPlanets
}
