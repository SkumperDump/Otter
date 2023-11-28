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

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName {"Arrow Component"}); 
	ArrowComponent->SetupAttachment(GetRootComponent());

	OverlapComponent = CreateDefaultSubobject<UOtterOverlapComponent>(FName {"Overlap Component"}); 
	OverlapComponent->SetupAttachment(ArrowComponent);

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName {"Move Component"}); 
}
