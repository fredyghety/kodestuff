// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitch.h"

// Sets default values
ALightSwitch::ALightSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	lightBulb = CreateDefaultSubobject<UPointLightComponent>(TEXT("LightBulb"));

	RootComponent = CollisionComponent;
	lightBulb->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ALightSwitch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightSwitch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALightSwitch::Use_Implementation() {
	turnedOn = !turnedOn;
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, .5f, FColor::Yellow, FString::Printf(TEXT("Lights On : "), turnedOn));
	}
	SetActorHiddenInGame(turnedOn);
}

