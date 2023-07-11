// Copyright Epic Games, Inc. All Rights Reserved.

#include "OtterGameMode.h"
#include "OtterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOtterGameMode::AOtterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
