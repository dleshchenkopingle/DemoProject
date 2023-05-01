// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InventoryItemDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DEMOPROJECT_API UInventoryItemDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Inventory Item")
	FText GetInventoryItemName() const { return InventoryItemName; }

	UFUNCTION(BlueprintPure, Category = "Inventory Item")
	TSoftObjectPtr<UTexture2D> GetInventoryItemIcon() const { return InventoryItemIcon; }

	UFUNCTION(BlueprintPure, Category = "Inventory Item")
	bool GetIsConsumable() const { return bIsConsumable; };

	UFUNCTION(BlueprintPure, Category = "Inventory Item")
	int32 GetInventoryItemsAmount() const { return ItemsAmount; }

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	FText InventoryItemName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	TSoftObjectPtr<UTexture2D> InventoryItemIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	bool bIsConsumable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InventoryItem")
	int32 ItemsAmount;
};
