// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OtterItem.h"
#include "OtterThruster.generated.h"

class UNiagaraComponent;

/**
 * 
 */
UCLASS()
class OTTER_API AOtterThruster : public AOtterItem
{
	GENERATED_BODY()

	// OtterItem editable components
	UPROPERTY(EditAnywhere)
	TObjectPtr<UNiagaraComponent> Exhaust;
	
	AOtterThruster();
};
