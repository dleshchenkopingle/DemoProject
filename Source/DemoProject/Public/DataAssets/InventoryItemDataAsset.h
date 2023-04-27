// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InventoryItemDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API UInventoryItemDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "InventoryItem")
	FName GetInventoryItemName() const { return InventoryItemName; }

	UFUNCTION(BlueprintPure, Category = "InventoryItem")
	TSoftObjectPtr<UTexture2D> GetInventoryItemIcon() const { return InventoryItemIcon; }

	UFUNCTION(BlueprintPure, Category = "InventoryItem")
	bool GetIsConsumable() const { return bIsConsumable; };

	UFUNCTION(BlueprintPure, Category = "InventoryItem")
	int32 GetItemsAmount() const { return ItemsAmount; }

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	FName InventoryItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	TSoftObjectPtr<UTexture2D> InventoryItemIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	bool bIsConsumable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	int32 ItemsAmount;
};
