// Fill out your copyright notice in the Description page of Project Settings.

#include "MainChar_GameMode.h"

#include "GameFramework/Actor.h"


AMainChar_GameMode::AMainChar_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMainChar_GameMode::BeginPlay()
{
	Super::BeginPlay();


	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AMainChar_GameMode::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);
		

		
	
		
}

void AMainChar_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Addloop += DeltaTime * loop_New;

	if (Addloop > 10) {

		AMainChar_GameMode::SpawnPlayerSpeed();
		Addloop = 0.0f;
	}
	
}

void AMainChar_GameMode::SpawnPlayerRecharge()
{

	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}

void AMainChar_GameMode::SpawnPlayerSpeed()
{
	float RandXX = FMath::RandRange(Spawn_XX_Min, Spawn_XX_Max);
	float RandYY = FMath::RandRange(Spawn_YY_Min, Spawn_YY_Max);

	FVector SpawnPosition = FVector(RandXX, RandYY, Spawn_ZZ);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(PlayerSpeed, &SpawnPosition, &SpawnRotation);
}


