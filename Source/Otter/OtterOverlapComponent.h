// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "OtterOverlapComponent.generated.h"


UCLASS()
class OTTER_API UOtterOverlapComponent : public USphereComponent
{
	GENERATED_BODY()
	
	TObjectPtr<AActor> OverlappingActor;

	/*DELEGATES*/

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:

	UOtterOverlapComponent();

	auto GetOverlappingActor() { return OverlappingActor; }
};
