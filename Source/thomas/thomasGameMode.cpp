// Copyright Epic Games, Inc. All Rights Reserved.

#include "thomasGameMode.h"
#include "thomasCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthomasGameMode::AthomasGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
