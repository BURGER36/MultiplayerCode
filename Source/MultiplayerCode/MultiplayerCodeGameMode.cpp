// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerCodeGameMode.h"
#include "MultiplayerCodeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerCodeGameMode::AMultiplayerCodeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
