// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MainChar_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class TEST_C_API AMainChar_GameMode : public AGameMode
{
	GENERATED_BODY()

	AMainChar_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerRecharge;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> PlayerSpeed;

	float Spawn_Z =500.0f;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Min;
	UPROPERTY(EditAnywhere)
		float Spawn_X_Max;
	
	UPROPERTY(EditAnywhere)
		float Spawn_Y_Min;
	UPROPERTY(EditAnywhere)
		float Spawn_Y_Max;

	void SpawnPlayerRecharge();


	float Addloop = 0.0f;
	float loop_New = 1.0f;

	float Spawn_ZZ = 450.0f;

	UPROPERTY(EditAnywhere)
		float Spawn_XX_Min;
	UPROPERTY(EditAnywhere)
		float Spawn_XX_Max;

	UPROPERTY(EditAnywhere)
		float Spawn_YY_Min;
	UPROPERTY(EditAnywhere)
		float Spawn_YY_Max;

	void SpawnPlayerSpeed();
	
};
