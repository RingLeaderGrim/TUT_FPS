// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TUT_TestingGroundsGameMode.h"
#include "TUT_TestingGroundsHUD.h"
#include "TUT_TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATUT_TestingGroundsGameMode::ATUT_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATUT_TestingGroundsHUD::StaticClass();
}
