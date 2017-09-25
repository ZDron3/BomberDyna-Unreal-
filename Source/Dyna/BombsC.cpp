// Fill out your copyright notice in the Description page of Project Settings.

#include "Dyna.h"
#include "BombsC.h"


// Sets default values
ABombsC::ABombsC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombsC::BeginPlay()
{
    Super::BeginPlay();

}
// Called every frame
void ABombsC::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

