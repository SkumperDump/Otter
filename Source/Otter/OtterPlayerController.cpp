// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayerController.h"
#include "OtterDefaultPawn.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"


/* - Player keyboard/controller input captured by system/engine and given to this class (with priority below AActor)
 * - This class contains a pointer to an AOtterDefaultPawn
 * - This pointer should be the vptr to the vtable of virtual functions we wish to call for our possessed pawn
 * - When no pawn is posessed (game is paused, interacting with a menu, etc..) this class will be used for interaction with UI elements
 */


// Used by to-be posessed actors to set a mapping context associated with this controller
void AOtterPlayerController::SetMappingContext(TObjectPtr<UInputMappingContext> IMC, int index)
{
	if (auto Subsystem { GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>() })
	{
		{
			Subsystem->AddMappingContext(IMC, index);
		}
	}
}

void AOtterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (AOtterDefaultPawn* OtterDefaultPawn {})
	{
		if (auto EnhancedInputComponent { Cast<UEnhancedInputComponent>(InputComponent) })
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Move);
			EnhancedInputComponent->BindAction(ThrustAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Thrust);
			EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Look);
			EnhancedInputComponent->BindAction(SwapCameraAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::SwapCamera);
			EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, OtterDefaultPawn, &AOtterDefaultPawn::Interact);
		}
	}
}
