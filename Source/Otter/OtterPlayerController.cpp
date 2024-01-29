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

	auto EnhancedInputComponent { Cast<UEnhancedInputComponent>(InputComponent) };	check(EnhancedInputComponent != nullptr);

	auto ControllerPawnPointer { Cast<AOtterDefaultPawn>(GetPawn()) };

	// TODO
	// Currently does not crash game but also does not bind actions to propper functions
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, ControllerPawnPointer, FName { "Move" });
	EnhancedInputComponent->BindAction(ThrustAction, ETriggerEvent::Triggered, ControllerPawnPointer, FName { "Thrust "});
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, ControllerPawnPointer, FName { "Look "});
	EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Triggered, ControllerPawnPointer, FName { "SwapCamera "});
	EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, ControllerPawnPointer, FName { "Interact "});
}
