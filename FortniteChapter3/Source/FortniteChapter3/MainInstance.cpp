// Fill out your copyright notice in the Description page of Project Settings.


#include "MainInstance.h"

UMainInstance::UMainInstance()
{
	SpawnActor = Cast<UObject>(StaticLoadObject(UObject::StaticClass(), NULL, TEXT("Blueprint'/Game/ThirdPersonCPP/Blueprints/Enemy.Enemy'")));
	enemy1BP = Cast<UBlueprint>(SpawnActor);
}

void UMainInstance::Init()
{

}
