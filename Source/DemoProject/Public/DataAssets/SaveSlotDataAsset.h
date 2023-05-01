// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Kismet/KismetMathLibrary.h"
#include "SaveSlotDataAsset.generated.h"

class UInventoryItemDataAsset;
class UResourceDataAsset;

/**
 * 
 */
UCLASS(Blueprintable)
class DEMOPROJECT_API USaveSlotDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Save Slot")
	FString GetCreationDate() const;

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	FString GetCreationTime() const;

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	FText GetSaveSlotName() const { return SaveSlotName; }

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	FText GetCurrentFloor() const { return CurrentFloor; }

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	FText GetAvailableFloors() const { return AvailableFloors; }

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	FText GetLivesLeft() const { return LivesLeft; }

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	TArray<TSoftObjectPtr<UInventoryItemDataAsset>> GetInventoryItems() const { return InventoryItems; }

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	TArray<TSoftObjectPtr<UResourceDataAsset>> GetResourceItems() const { return ResourceItems; }

	UFUNCTION(BlueprintPure, Category = "Save Slot")
	bool GetIsInitialized() const { return bIsInitialized; };

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	FDateTime CreationDateTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	FText SaveSlotName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	FText CurrentFloor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	FText AvailableFloors;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	FText LivesLeft;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	TArray<TSoftObjectPtr<UInventoryItemDataAsset>> InventoryItems;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	TArray<TSoftObjectPtr<UResourceDataAsset>> ResourceItems;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	bool bIsInitialized;
};
