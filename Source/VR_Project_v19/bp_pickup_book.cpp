// Fill out your copyright notice in the Description page of Project Settings.

#include "bp_pickup_book.h"
#include "Engine.h"




void Ubp_pickup_book::BeginPlay()
{
	//UE_LOG(LogTemp, Warning, TEXT("Supsupsupupsasupd"));

	USkeletalMeshComponent* pg1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VisualRepresentation"));

	auto tmp = pg1->GetComponentLocation();
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Emerald, FString::Printf(TEXT("Location: %f, %f, %f"), tmp.X, tmp.Y, tmp.Z));
}