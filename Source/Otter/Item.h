// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USkeletalMeshComponent;
class USphereComponent;

UCLASS()
class OTTER_API AItem : public AActor
{
	GENERATED_BODY()

	// Item mesh
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* ItemMesh;

	// Used to detect overlaps
	UPROPERTY(EditAnywhere)
	USphereComponent* OverlapSphere;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this actor's properties
	AItem();
	
};
