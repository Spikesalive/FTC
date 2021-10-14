// Copyright Epic Games, Inc. All Rights Reserved.

#include "BaseProjectGameMode.h"
#include "BaseProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABaseProjectGameMode::ABaseProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
