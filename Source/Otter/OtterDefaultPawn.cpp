// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterDefaultPawn.h"
#include "OtterMovementComponent.h"
#include "OtterOverlapComponent.h"
#include "OtterPlayerController.h"
#include "Components/ArrowComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


// Sets default values
AOtterDefaultPawn::AOtterDefaultPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName { "Move Component" }); 

	OverlapComponent = CreateDefaultSubobject<UOtterOverlapComponent>(FName { "Overlap Component" }); 
	OverlapComponent->SetupAttachment(GetRootComponent());

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName { "Arrow Component" }); 
	ArrowComponent->SetupAttachment(OverlapComponent);
}

void AOtterDefaultPawn::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Default Look Value: %s"), *Value.ToString());
	
	// Look up
	AddActorWorldRotation(FQuat { GetActorRightVector(), Value.Get<FVector>().Y / MovementScale });

	// Look side to side
	AddActorWorldRotation(FQuat { GetActorUpVector(), Value.Get<FVector>().X / MovementScale });
}

void AOtterDefaultPawn::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Default Move Value: %s"), *Value.ToString());
	GetDefaultPrimComp()->AddImpulse(FVector { Value.Get<FVector>().Y * MovementScale * GetActorForwardVector() });
	GetDefaultPrimComp()->AddImpulse(FVector { Value.Get<FVector>().X * MovementScale * GetActorRightVector() });
}

