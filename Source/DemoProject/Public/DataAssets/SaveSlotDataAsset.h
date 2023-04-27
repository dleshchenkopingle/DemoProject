// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Kismet/KismetMathLibrary.h"
#include "SaveSlotDataAsset.generated.h"

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
	TArray<TSoftObjectPtr<class UInventoryItemDataAsset>> InventoryItems;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	TArray<TSoftObjectPtr<class UResourceDataAsset>> ResourceItems;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save Slot")
	bool bIsInitialized;
};
