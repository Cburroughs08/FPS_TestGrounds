// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPS_TestGroundsGameMode.h"
#include "FPS_TestGroundsHUD.h"
#include "FPS_TestGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_TestGroundsGameMode::AFPS_TestGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_TestGroundsHUD::StaticClass();
}
