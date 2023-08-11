// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterItem.h"
#include "OtterPlayer.h"
#include "OtterOverlapComponent.h"
#include "OtterMovementComponent.h"
#include "Components/StaticMeshComponent.h"

AOtterItem::AOtterItem()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName { "Item Mesh" });
	ItemMesh->SetupAttachment(GetRootComponent());
}

void AOtterItem::PlayerInteract()
{
	if (auto Player { Cast<AOtterPlayer>(GetOverlapComponent()->GetOverlappingActor()) })
	{
		ItemMesh->AttachToComponent(Player->GetRootComponent(), FAttachmentTransformRules { EAttachmentRule::SnapToTarget, false });
	}
	// TODO
	// Call any item specific functionality
}


