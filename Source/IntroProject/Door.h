// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

// 전방 선언
class ATrigger;

UCLASS()
class INTROPROJECT_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Trigger 클래스를 참조할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	ATrigger* TriggerActor;

	// Unlock 상태를 확인하는 함수
	void CheckUnlock();
};
