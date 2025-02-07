// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Trigger.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
	// TriggerActor가 설정되지 않았다면 로그를 출력
	if (!TriggerActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("TriggerActor가 설정되지 않았습니다."));
	}

	CheckUnlock();
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::CheckUnlock()
{
	if (TriggerActor && TriggerActor->Unlock)
	{
		// Unlock이 true일 때 실행할 코드
		UE_LOG(LogTemp, Warning, TEXT("Unlock 상태입니다."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Unlock 상태가 아닙니다."));
	}
}
