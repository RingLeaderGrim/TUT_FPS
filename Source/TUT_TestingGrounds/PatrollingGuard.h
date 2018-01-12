// 2019 EverLife

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

/**
 * 
 */
UCLASS()
class TUT_TESTINGGROUNDS_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

public: //TODO remove or create get
	UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
	TArray<AActor*> PartrolPointsCPP;


	
	
};
