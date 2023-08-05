// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OtterInteractInterface.h"
#include "Item.generated.h"

class USkeletalMeshComponent;
class USphereComponent;

UCLASS()
class OTTER_API AItem : public AActor, public IOtterInteractInterface
{
	GENERATED_BODY()

	// Detect overlaps with character
	UPROPERTY(VisibleAnywhere)
	USphereComponent* OverlapSphere;
	
	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* ItemMesh;

protected:

	UFUNCTION()
	virtual void OnItemBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnItemEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	

	AItem();

	virtual void PlayerInteract() override;
};
