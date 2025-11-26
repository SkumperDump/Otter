// Fill out your copyright notice in the Description page of Project Settings.

#include "OtterPlayerController.h"
#include "OtterDefaultPawn.h"
#include "EnhancedInputSubsystems.h"

/*
 * When interacting with a menu this class should be used for interaction with UI elements
 * Not fully working yet need to play around with
 */

void AOtterPlayerController::OnPossess(APawn *PawnToPossess)
{
	Super::OnPossess(PawnToPossess);
	GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(Cast<AOtterDefaultPawn>(PawnToPossess)->MappingContext, 0);
}