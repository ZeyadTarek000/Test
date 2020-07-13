// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Test_CGameMode.h"
#include "Test_CCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_CGameMode::ATest_CGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
