// Fill out your copyright notice in the Description page of Project Settings.


#include "Mae_BaseCharacter.h"

// Sets default values
AMae_BaseCharacter::AMae_BaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMae_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMae_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMae_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

