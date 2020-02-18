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
	currentHealth = max_health;

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

	//Spawn a wave every few seconds (based on waveSpawnSpeed)
	instance = Cast<UMainInstance>(GetGameInstance());
	GetWorldTimerManager().SetTimer(spawnerTimer, this, &AEnemySpawner::SpawnWave, waveSpawnSpeed, true, 0);
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Checks stage based on health
	if (currentHealth >= (max_health / 3) * 2) 
	{
		if (greenMaterial) 
		{
			spawnerMesh->SetMaterial(0,greenMaterial);
			stage = 1;
		}
	}
	else if (currentHealth >= (max_health / 3) && currentHealth < (max_health / 3) * 2)
	{
		if (yellowMaterial) 
		{
			spawnerMesh->SetMaterial(0, yellowMaterial);
			stage = 2;
		}
	}
	else if (currentHealth > 0 && currentHealth < (max_health / 3)) 
	{
		if (redMaterial) 
		{
			spawnerMesh->SetMaterial(0, redMaterial);
			stage = 3;
		}
	}
	else if (currentHealth <= 0) 
	{
		if (isMainSpawner) 
		{
			//Trigger End game and text?
			UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
			//Destroy();
		}
		else 
		{
			Destroy();
		}
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
	if (instance) 
	{
		if (instance->enemy1BP)
		{
			GetWorld()->SpawnActor<ABaseEnemy>(instance->enemy1BP->GeneratedClass, Location, Rotation, SpawnInfo);
		}
	}
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

void AEnemySpawner::TakeDamage(float d)
{
	currentHealth -= d;
}

