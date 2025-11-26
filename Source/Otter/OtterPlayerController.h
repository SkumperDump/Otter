// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OtterPlayerController.generated.h"

UCLASS()
class OTTER_API AOtterPlayerController : public APlayerController
{
	GENERATED_BODY()

	virtual void OnPossess(APawn *PawnToPossess) override;
};
