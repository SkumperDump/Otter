// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterDefaultPawn.h"
#include "OtterInteractInterface.h"
#include "OtterItem.generated.h"


class UOtterOverlapComponent;
class UStaticMeshComponent;


/**
 * 
 */
UCLASS()
class OTTER_API AOtterItem : public AOtterDefaultPawn
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<UStaticMeshComponent> ItemMesh;

	virtual void OnInteract(TObjectPtr<AActor> Actor) override;
public:

	AOtterItem();
};
