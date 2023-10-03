// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "OtterInteractInterface.h"
#include "OtterOverlapComponent.h"
#include "OtterMovementComponent.h"
#include "OtterPlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"


AOtterPlayer::AOtterPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Player Camera Boom"}); 
	CameraBoom->SetupAttachment(PlayerMesh);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Player Camera"}); 
	PlayerCamera->SetupAttachment(CameraBoom);

}

void AOtterPlayer::BeginPlay()
{
	Super::BeginPlay();

	// TODO
	// I really like this but it looks ugly so maybe clean up
	auto OtterController { Cast<AOtterPlayerController>(Controller) };	check(OtterController != nullptr);
	OtterController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()->AddMappingContext(MappingContext, 0);
}

void AOtterPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	auto PrimComp { Cast<UPrimitiveComponent>(GetRootComponent())};
	PrimComp->SetSimulatePhysics(true);
	PrimComp->SetEnableGravity(false);
}

void AOtterPlayer::Move(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Move Value: %s"), *Value.ToString());
	// TODO
	// KEEP THIS, THIS SHOULD WORK
	// This function is defined in priv/primcompphys.cpp
	// I think this is not working because that is not being included somehow?
	Cast<UPrimitiveComponent>(GetRootComponent())->GetBodyInstance()->AddImpulse(Value.Get<FVector>() * 100, false);
}

void AOtterPlayer::Look(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Look"));
	AddActorLocalRotation(FRotator { Value.Get<FVector>().Y, Value.Get<FVector>().X, 0 });
}

void AOtterPlayer::SwapCamera(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Swap Camera"));
	if (bUseFirstPersonCamera)
	{
		// First person mode
	}
	else
	{
		// Third person mode
	}
	bUseFirstPersonCamera = !bUseFirstPersonCamera;
}

void AOtterPlayer::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Interact"));

	if (auto Actor { GetOverlapComponent()->GetOverlappingActor() })
	{
		if (Actor.IsA(AActor::StaticClass()))
		{
			PlayerInventory.Push(Actor);
			if (const auto ActorInterface { Cast<IOtterInteractInterface>(Actor) })
			{
				ActorInterface->PlayerInteract();
			}
		}
	}
}
