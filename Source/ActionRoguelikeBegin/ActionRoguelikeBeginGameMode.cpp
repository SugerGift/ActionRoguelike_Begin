// Copyright Epic Games, Inc. All Rights Reserved.

#include "ActionRoguelikeBeginGameMode.h"
#include "ActionRoguelikeBeginCharacter.h"
#include "UObject/ConstructorHelpers.h"

AActionRoguelikeBeginGameMode::AActionRoguelikeBeginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
