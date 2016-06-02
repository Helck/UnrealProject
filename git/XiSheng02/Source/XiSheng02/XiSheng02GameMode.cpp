// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "XiSheng02.h"
#include "XiSheng02GameMode.h"
#include "XiSheng02Character.h"

AXiSheng02GameMode::AXiSheng02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
