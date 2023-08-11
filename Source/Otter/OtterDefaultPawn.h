// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "OtterDefaultPawn.generated.h"

class UArrowComponent;
class UOtterMovementComponent;
class UOtterOverlapComponent;
struct FInputActionValue;

UCLASS()
class OTTER_API AOtterDefaultPawn : public APawn
{
	GENERATED_BODY()

	TObjectPtr<UOtterMovementComponent> MovementComponent;

	// Arrow for forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UArrowComponent> ArrowComponent;

	// Arrow for forward direction
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UOtterOverlapComponent> OverlapComponent;

	virtual void PostInitializeComponents() override;

public:	

	AOtterDefaultPawn();

	const auto GetOverlapComponent() { return OverlapComponent; }
};
