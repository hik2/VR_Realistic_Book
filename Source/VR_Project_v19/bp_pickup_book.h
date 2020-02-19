// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "bp_pickup_book.generated.h"

/**
 * 
 */
UCLASS()
class VR_PROJECT_V19_API Ubp_pickup_book : public USkeletalMeshComponent
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
