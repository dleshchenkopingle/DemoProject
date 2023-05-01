// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SaveSlotInfoViewModel.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DEMOPROJECT_API USaveSlotInfoViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()
	
private:
	void SetCurrentFloor(const FString& newCurrentFloor);
	void SetAvailableFloors(const int32& newAvailableFloors);
	void SetLivesLeft(const int32& newLivesLeft);
	void SetbIsInitialized(bool newbIsInitialized);

	//void SetInventoryItems(TArray<TSoftObjectPtr<class UInventoryItemDataAsset>>& newInventoryItems);
	//void SetResourceItems(TArray<TSoftObjectPtr<class UInventoryItemDataAsset>>& newResourceItems);

public:
	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateCurrentFloor() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateAvailableFloors() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateLivesLeft() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	ESlateVisibility UpdateInitializedSlotInfoVisibility() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	ESlateVisibility UpdateUninitializedSlotInfoVisibility() const;
	
	//UFUNCTION(BlueprintPure, FieldNotify)
	//FText UpdateInventoryItems() const;

	//UFUNCTION(BlueprintPure, FieldNotify)
	//FText UpdateResourceItems() const;

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	FString CurrentFloor;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	int32 AvailableFloors;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	int32 LivesLeft;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	bool bIsInitialized;

	//UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	//TArray<TSoftObjectPtr<class UInventoryItemDataAsset>> InventoryItems;

	//UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	//TArray<TSoftObjectPtr<class UResourceDataAsset>> ResourceItems;
};
