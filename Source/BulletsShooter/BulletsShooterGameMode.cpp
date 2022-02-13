// Copyright Epic Games, Inc. All Rights Reserved.

#include "BulletsShooterGameMode.h"
#include "BulletsShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABulletsShooterGameMode::ABulletsShooterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
