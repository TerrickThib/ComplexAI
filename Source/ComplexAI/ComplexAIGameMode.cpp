// Copyright Epic Games, Inc. All Rights Reserved.

#include "ComplexAIGameMode.h"
#include "ComplexAICharacter.h"
#include "UObject/ConstructorHelpers.h"

AComplexAIGameMode::AComplexAIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
