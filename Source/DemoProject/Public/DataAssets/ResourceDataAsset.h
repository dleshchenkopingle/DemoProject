// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResourceDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DEMOPROJECT_API UResourceDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Resource Item")
	FText GetResourceName() const { return ResourceName; }

	UFUNCTION(BlueprintPure, Category = "Resource Item")
	TSoftObjectPtr<UTexture2D> GetResourceIcon() const { return ResourceIcon; }

	UFUNCTION(BlueprintPure, Category = "Resource Item")
	int32 GetCurrentResourceAmount() const { return CurrentResourceAmount; };

	UFUNCTION(BlueprintPure, Category = "Resource Item")
	int32 GetMaxResourceAmount() const { return MaxResourceAmount; }

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	FText ResourceName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	TSoftObjectPtr<UTexture2D> ResourceIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	int32 CurrentResourceAmount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource")
	int32 MaxResourceAmount;
};
