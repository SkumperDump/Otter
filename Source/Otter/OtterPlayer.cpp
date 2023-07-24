// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterPlayer.h"
#include "OtterController.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"


// Sets default values
AOtterPlayer::AOtterPlayer()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// No grabbable item at start
	GrabbableItem = nullptr;

	PlayerSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName {"Player Skeletal Mesh"});
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

	// Get enhanced input subsys for the local player of this actor class
	if (auto Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Cast<ULocalPlayer>(this)))
	{
		// Add mapping context and give it highest priority (0)
		Subsystem->AddMappingContext(PlayerController->GetDefaultMappingContext(), 0);
	}
}

void AOtterPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
