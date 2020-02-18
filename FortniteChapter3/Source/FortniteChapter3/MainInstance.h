// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MainInstance.generated.h"

/**
 *
 */
UCLASS()
class FORTNITECHAPTER3_API UMainInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UMainInstance();

	UFUNCTION()
		void Init();

	UPROPERTY()
		UObject* SpawnActor = NULL;

	UPROPERTY()
		UBlueprint* enemySpawnerBP = NULL;

	UPROPERTY()
		UBlueprint* enemy1BP = NULL;
};
