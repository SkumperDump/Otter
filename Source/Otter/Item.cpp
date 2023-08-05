// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "OtterPlayer.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"


AItem::AItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	OverlapSphere = CreateDefaultSubobject<USphereComponent>(FName { "Overlap Sphere" });
	SetRootComponent(OverlapSphere);

	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName { "Item Mesh" });
	ItemMesh->SetupAttachment(OverlapSphere);

	// Beginning of overlap event with this component
	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnItemBeginOverlap);

	// End of overlap event with this component
	OverlapSphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnItemEndOverlap);
}

// TODO
// Make both of these functions (and similar ones in other classes) into part of custom overlap sphere component
void AItem::OnItemBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("BEGIN ITEM OVERLAP"));

	if (auto Player {Cast<AOtterPlayer>(OtherActor)})
	{
		Player->SetOverlappingActor(this);
	}
}

void AItem::OnItemEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("END ITEM OVERLAP"));

	// When done overlapping, if our grabbable item is still this item, set grabbable item to nullptr
	if (auto Player {Cast<AOtterPlayer>(OtherActor)})
	{
		Player->SetOverlappingActor(nullptr);
	}
}

void AItem::PlayerInteract()
{
	// TODO
	// Do whatever needs to be done for item to be represented as in players posession
}
