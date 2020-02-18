// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class FORTNITECHAPTER3_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void SpawnEnemy();
	UFUNCTION()
		void SpawnWave();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner")
		float max_health = 100;
	UPROPERTY()
		float currentHealth = 100;
	UPROPERTY()
		class UMainInstance* instance = NULL;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner")
		float waveSpawnSpeed = 5;
	UPROPERTY()
		int spawnSpotCount = 0;
	UPROPERTY()
		TArray<USceneComponent*> allComponents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Materials")
		class UMaterialInterface* redMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Materials")
		class UMaterialInterface* yellowMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner Materials")
		class UMaterialInterface* greenMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner")
		int stage = 1;
	UPROPERTY()
		UStaticMeshComponent* spawnerMesh;
	UFUNCTION(BlueprintCallable)
		void TakeDamage(float d);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawner")
		bool isMainSpawner = false;
	
};
