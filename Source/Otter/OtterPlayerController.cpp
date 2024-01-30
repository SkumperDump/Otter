// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayerController.h"
#include "OtterDefaultPawn.h"
#include "EnhancedInputComponent.h"

/*
 * When interacting with a menu this class should be used for interaction with UI elements
 */

void AOtterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto EnhancedInputComponent { Cast<UEnhancedInputComponent>(InputComponent) };	check(EnhancedInputComponent != nullptr);

	auto OtterDefaultPawn { Cast<AOtterDefaultPawn>(GetPawn()) }; check(OtterDefaultPawn != nullptr);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Move" });
	EnhancedInputComponent->BindAction(ThrustAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Thrust" });
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Look" });
	EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "SwapCamera" });
	EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Interact" });
}
