// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyptRaiderGameMode.h"
#include "CyptRaiderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyptRaiderGameMode::ACyptRaiderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
