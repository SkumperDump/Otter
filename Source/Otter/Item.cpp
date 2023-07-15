// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "OtterCharacter.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup item mesh
	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName {"Item Mesh"});
	ItemMesh->SetupAttachment(GetRootComponent());

	// Setup overlap sphere
	OverlapSphere = CreateDefaultSubobject<USphereComponent>(FName {"Overlap Sphere"});
	OverlapSphere->SetupAttachment(ItemMesh);
	
	// OnBeginOverlap called for beginning of overlap event with this component
	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnBeginOverlap);
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin Overlap With AItem"));

	auto Character {Cast<AOtterCharacter>(OtherActor)};

	// Assign item to character 
	if (Character != nullptr)
	{
		Character->GrabbableItem = ItemMesh;
	}

}
