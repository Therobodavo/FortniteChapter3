// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "EnemySpawner.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	AEnemySpawner* spawner = Cast<AEnemySpawner>(this->GetOwner());
	if (spawner->stage == 1) 
	{
		health = 100;
		speed = 50;
		damage = 2;
	}
	else if (spawner->stage == 2) 
	{
		health = 150;
		speed = 60;
		damage = 5;
	}
	else if (spawner->stage == 3) 
	{
		health = 200;
		speed = 75;
		damage = 8;
	}
}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

