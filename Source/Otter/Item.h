// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USkeletalMeshComponent;
class USphereComponent;
class AOtterCharacter;

UCLASS()
class OTTER_API AItem : public AActor
{
	GENERATED_BODY()

	// Character that is holding this item
	UPROPERTY(EditAnywhere)
	AOtterCharacter* ItemChararcter;

	// Item mesh
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* ItemMesh;

	// Used to detect overlaps
	UPROPERTY(EditAnywhere)
	USphereComponent* OverlapSphere;
	
	// Bool for item and character status
	UPROPERTY(EditAnywhere)
	bool bItemWithCharacter;

	// What to do when overlapping with AOtterCharacter
	// See PrimitiveComponent.h
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int foo, bool poo, const FHitResult& moo);

protected:

	// When game starts
	virtual void BeginPlay();

public:	

	// Sets default values for this actor's properties
	AItem();
	
};
