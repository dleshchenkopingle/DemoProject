// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResourceDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API UResourceDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	FName ResourceName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	TSoftObjectPtr<UTexture2D> ResourceIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	int32 CurrentResourceAmount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	int32 MaxResourceAmount;
};
