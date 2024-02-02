// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayerController.h"
#include "OtterDefaultPawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

/*
 * When interacting with a menu this class should be used for interaction with UI elements
 */

void AOtterPlayerController::OnPossess(APawn* PawnToPossess)
{
	Super::OnPossess(PawnToPossess);

	//TODO: Consider moving this outside of this function
	auto EnhancedInputComponent { Cast<UEnhancedInputComponent>(InputComponent) };	check(EnhancedInputComponent != nullptr);

	auto OtterDefaultPawn { Cast<AOtterDefaultPawn>(PawnToPossess) }; check(OtterDefaultPawn != nullptr);

	/*
	 * Spelling must be exact
	 */
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Move" });
	EnhancedInputComponent->BindAction(ThrustAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Thrust" });
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Look" });
	EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "SwapCamera" });
	EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, OtterDefaultPawn, FName { "Interact" });

	GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(OtterDefaultPawn->MappingContext, 0);
}
