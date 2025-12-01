// Copyright Epic Games, Inc. All Rights Reserved.

#include "OtterGameMode.h"
#include "OtterDefaultPawn.h"

AOtterGameMode::AOtterGameMode()
{
	// Set default game mode properties
	DefaultPawnClass = AOtterDefaultPawn::StaticClass();
}