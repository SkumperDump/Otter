// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "OtterController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/LocalPlayer.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


// Sets default values
AOtterPlayer::AOtterPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// No grabbable item at start
	GrabbableItem = nullptr;

	PlayerSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName {"Player Mesh"});
	SetRootComponent(PlayerSkeletalMesh);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName {"Camera Spring Arm"});
	CameraBoom->SetupAttachment(PlayerSkeletalMesh);

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(FName {"Player Camera"});
	PlayerCamera->SetupAttachment(CameraBoom);
}

void AOtterPlayer::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	if (auto PawnController = Cast<AOtterController>(Controller))
	{
		// Get enhanced input subsys for player associated with our controller
		if (auto Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PawnController->GetLocalPlayer()))
		{
			// Add mapping context and give it highest priority (0)
			UE_LOG(LogTemp, Warning, TEXT("Setting Mapping Context"));
			Subsystem->AddMappingContext(PawnController->GetDefaultMappingContext(), 0);
		}
	} 
}

void AOtterPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
