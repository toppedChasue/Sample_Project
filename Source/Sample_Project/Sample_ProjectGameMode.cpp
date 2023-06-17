// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sample_ProjectGameMode.h"
#include "Sample_ProjectPlayerController.h"
#include "Sample_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASample_ProjectGameMode::ASample_ProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASample_ProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}