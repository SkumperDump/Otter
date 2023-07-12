// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemComponent.generated.h"

class USphereComponent;
class USkeletalMeshComponent;

/**
 * 
 */
UCLASS()
class OTTER_API UItemComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()
	
	// ItemComponent mesh
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* ItemComponentMesh;
	
	// Constructor
	UItemComponent();
	
};
