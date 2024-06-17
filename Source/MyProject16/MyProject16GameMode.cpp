// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject16GameMode.h"
#include "MyProject16Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject16GameMode::AMyProject16GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
