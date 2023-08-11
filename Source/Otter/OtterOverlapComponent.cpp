// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterOverlapComponent.h"
#include "OtterPlayer.h"


UOtterOverlapComponent::UOtterOverlapComponent()
{
	// Beginning of overlap event with this component
	OnComponentBeginOverlap.AddDynamic(this, &UOtterOverlapComponent::OnBeginOverlap);

	// End of overlap event with this component
	OnComponentEndOverlap.AddDynamic(this, &UOtterOverlapComponent::OnEndOverlap);
}

void UOtterOverlapComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OverlappingActor = OtherActor;
}

void UOtterOverlapComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// If player can enter this vehicle when overlap ends, set to nullptr
	if (auto Player { Cast<AOtterPlayer>(OtherActor) })
	{
		if(OverlappingActor == GetOwner())
		{
			OverlappingActor = nullptr;
		}
	}
}
