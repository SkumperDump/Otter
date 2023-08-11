// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterDefaultPawn.h"
#include "OtterMovementComponent.h"
#include "OtterOverlapComponent.h"
#include "Components/ArrowComponent.h"


// Sets default values
AOtterDefaultPawn::AOtterDefaultPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName {"Move Component"}); 

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName {"Arrow Component"}); 
	SetRootComponent(ArrowComponent);

	OverlapComponent = CreateDefaultSubobject<UOtterOverlapComponent>(FName {"Overlap Component"}); 
	OverlapComponent->SetupAttachment(ArrowComponent);
}

void AOtterDefaultPawn::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Cast<UPrimitiveComponent>(GetRootComponent())->SetSimulatePhysics(true);
	Cast<UPrimitiveComponent>(GetRootComponent())->SetEnableGravity(false);
}
