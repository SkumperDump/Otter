// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterOverlapComponent.h"
#include "OtterPlayer.h"


UOtterOverlapComponent::UOtterOverlapComponent()
{
	OnComponentBeginOverlap.AddDynamic(this, &UOtterOverlapComponent::OnBeginOverlap);
	OnComponentEndOverlap.AddDynamic(this, &UOtterOverlapComponent::OnEndOverlap);
}

void UOtterOverlapComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OverlappingActor = OtherActor;
}

void UOtterOverlapComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Prevent setting to null if overlapping something else
	if(OverlappingActor == OtherActor)
	{
		OverlappingActor = nullptr;
	}
}
