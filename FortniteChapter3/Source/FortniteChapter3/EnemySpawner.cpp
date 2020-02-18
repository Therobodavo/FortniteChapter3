// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "BaseEnemy.h"
#include "MainInstance.h"
#include "Engine/World.h"
#include "Engine.h"

FTimerHandle spawnerTimer;

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	GetRootComponent()->GetChildrenComponents(true, allComponents);
	for (USceneComponent* c : allComponents)
	{
		if (c->ComponentHasTag("Spawner")) 
		{
			spawnerMesh = Cast<UStaticMeshComponent>(c);
		}
		if (c->ComponentHasTag("SpawnSpot"))
		{
			spawnSpotCount++;
		}
	}

	instance = Cast<UMainInstance>(GetGameInstance());
	GetWorldTimerManager().SetTimer(spawnerTimer, this, &AEnemySpawner::SpawnWave, waveSpawnSpeed, true, 0);
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (health >= 66) 
	{
		if (greenMaterial) 
		{
			spawnerMesh->SetMaterial(0,greenMaterial);
			stage = 1;
		}
	}
	else if (health >= 33 && health < 66) 
	{
		if (yellowMaterial) 
		{
			spawnerMesh->SetMaterial(0, yellowMaterial);
			stage = 2;
		}
	}
	else if (health > 0 && health < 33) 
	{
		if (redMaterial) 
		{
			spawnerMesh->SetMaterial(0, redMaterial);
			stage = 3;
		}
	}
	else if (health <= 0) 
	{
		Destroy();
	}


}

void AEnemySpawner::SpawnEnemy()
{
	FVector Location = GetActorLocation();
	FRotator Rotation = GetActorRotation();

	//Get spawning info 
	int spawnSpotIndex = FMath::FRand() * spawnSpotCount;

	int indexCount = 0;
	for (USceneComponent* c : allComponents) 
	{
		if (c->ComponentHasTag("SpawnSpot")) 
		{
			indexCount++;
			if (indexCount == spawnSpotIndex) 
			{
				Location = c->GetComponentLocation();
				Rotation = c->GetComponentRotation();
				break;
			}
		}
	}



	FActorSpawnParameters SpawnInfo{};
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnInfo.Owner = this;

	//Spawns enemy
	GetWorld()->SpawnActor<ABaseEnemy>(instance->enemy1BP->GeneratedClass, Location, Rotation, SpawnInfo);
}

void AEnemySpawner::SpawnWave()
{
	//Get random # from a to (a+b)
	int num = ((spawnSpotCount/2) + (FMath::FRand() * ((spawnSpotCount / 2) - (spawnSpotCount / 4))));

	//run spawnenemy that many times
	for (int i = 0; i < num; i++) 
	{
		SpawnEnemy();
	}
}

void AEnemySpawner::TakeDamage(float damage)
{
	health -= damage;
}

