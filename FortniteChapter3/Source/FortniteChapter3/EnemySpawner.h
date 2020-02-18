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
	UPROPERTY()
		float health = 100;
	//UPROPERTY()
		//class UMainInstance* instance = NULL;
	UPROPERTY()
		float waveSpawnSpeed = 5;
	UPROPERTY()
		int spawnSpotCount = 0;
	UPROPERTY()
		TArray<USceneComponent*> allComponents;
	UPROPERTY(EditAnywhere)
		class UMaterialInterface* redMaterial;
	UPROPERTY(EditAnywhere)
		class UMaterialInterface* yellowMaterial;
	UPROPERTY(EditAnywhere)
		class UMaterialInterface* greenMaterial;
	UPROPERTY()
		int stage = 1;
	UPROPERTY()
		UStaticMeshComponent* spawnerMesh;
	UFUNCTION()
		void TakeDamage(float damage);
	
};
