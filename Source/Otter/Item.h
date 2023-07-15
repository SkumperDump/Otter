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

	// Detect overlaps with character
	UPROPERTY(VisibleAnywhere)
	USphereComponent* OverlapSphere;

protected:

	// When game starts
	virtual void BeginPlay();

public:	

	// Sets default values for this actor's properties
	AItem();
	
	// Item mesh
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* ItemMesh;
	
	// What to do when overlapping with ItemCharacter
	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
