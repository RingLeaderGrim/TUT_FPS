// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TUT_TestingGroundsHUD.generated.h"

UCLASS()
class ATUT_TestingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATUT_TestingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

