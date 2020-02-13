// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FortniteChapter3GameMode.h"
#include "FortniteChapter3Character.h"
#include "UObject/ConstructorHelpers.h"

AFortniteChapter3GameMode::AFortniteChapter3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
