// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayerController.h"
#include "OtterDefaultPawn.h"
#include "EnhancedInputComponent.h"

/* - Player keyboard/controller input captured by system/engine and given to this class (with priority below AActor)
 * - This class contains a pointer to an AOtterDefaultPawn
 * - This pointer should be the vptr to the vtable of virtual functions we wish to call for our possessed pawn
 * - When no pawn is posessed (game is paused, interacting with a menu, etc..) this class will be used for interaction with UI elements
 */

void AOtterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// This check asserts the fact that there must be something for the player to controll at game start
	auto OtterDefaultPawn { Cast<AOtterDefaultPawn>(GetPawn()) };	check(OtterDefaultPawn != nullptr);

	auto EnhancedInputComponent { Cast<UEnhancedInputComponent>(InputComponent) };	check(EnhancedInputComponent != nullptr);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Move);
	EnhancedInputComponent->BindAction(ThrustAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Thrust);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Look);
	EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::SwapCamera);
	EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Interact);
}
