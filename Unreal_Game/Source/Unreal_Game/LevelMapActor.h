// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include <stdlib.h>
#include <string>
#include <vector>

#include "LevelMapActor.generated.h"

UCLASS()
class UNREAL_GAME_API ALevelMapActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelMapActor();

	double map[20][20];
	FString coded_map[20][20];
	USceneComponent* SceneComponent;
	UStaticMeshComponent* mesh_map[20][20];

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void createMap();
	void decodeMap();
	void createMeshMap();

	UPROPERTY(EditAnywhere)
	int width;
		
	UPROPERTY(EditAnywhere)
	int height;
		
	UPROPERTY(EditAnywhere)
	int shape;

	UPROPERTY(EditAnywhere)
	double start_percent;
		
	UPROPERTY(EditAnywhere)
	double percent_decrease;
};
