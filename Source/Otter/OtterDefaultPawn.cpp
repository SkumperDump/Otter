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

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName {"Move Component"}); 

	OverlapComponent = CreateDefaultSubobject<UOtterOverlapComponent>(FName {"Overlap Component"}); 
	SetRootComponent(OverlapComponent);

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName {"Arrow Component"}); 
	ArrowComponent->SetupAttachment(OverlapComponent);
}

/*
void AOtterDefaultPawn::BeginPlay()
{
	Super::BeginPlay();

	// TODO
	// I really like this but it looks ugly so maybe clean up
	// At the very least maybe leave a nice comment explaining
	auto OtterController { Cast<AOtterPlayerController>(Controller) };	check(OtterController != nullptr);
	OtterController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(MappingContext, 0);
}
*/

void AOtterDefaultPawn::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Calling Default Pawn Move Function. Vehicle Move Value: %s"), *Value.ToString());
	DefaultPrimComp->AddImpulse(FVector { Value.Get<FVector>() * MovementScale }); check(DefaultPrimComp != nullptr);
}
