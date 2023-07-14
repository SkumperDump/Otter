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
	
	// Register delegate with system
	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnOverlap);


}

void AItem::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

void AItem::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Display to HUD
	UE_LOG(LogTemp, Warning, TEXT("Overlap With AItem"));

	// Down cast to our character
	AOtterCharacter* Character = Cast<AOtterCharacter>(OtherActor);
	
	if(Character != nullptr && Character->GetCharacterInteract())
	{
		// Attatch to our player character
		ItemMesh->AttachToComponent(Character->GetMesh(), FAttachmentTransformRules { EAttachmentRule::SnapToTarget, true }, FName { "GripPoint" });
	}
}
