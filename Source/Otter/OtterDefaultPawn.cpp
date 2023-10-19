// Fill out your copyright notice in the Description page of Project Settings.


#include "OtterDefaultPawn.h"
#include "OtterPlayerController.h"
#include "OtterMovementComponent.h"
#include "OtterOverlapComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SkeletalMeshComponent.h"


// Sets default values
AOtterDefaultPawn::AOtterDefaultPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName {"Player Mesh"}); 
	PlayerMesh->SetSimulatePhysics(true);
	PlayerMesh->SetEnableGravity(false);
	SetRootComponent(PlayerMesh);

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(FName {"Arrow Component"}); 
	ArrowComponent->SetupAttachment(PlayerMesh);

	OverlapComponent = CreateDefaultSubobject<UOtterOverlapComponent>(FName {"Overlap Component"}); 
	OverlapComponent->SetupAttachment(ArrowComponent);

	MovementComponent = CreateDefaultSubobject<UOtterMovementComponent>(FName {"Move Component"}); 
}
