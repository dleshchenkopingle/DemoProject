// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SaveSlotInfoBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API USaveSlotInfoBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadWrite, Category = "Inventory Items")
	TArray<TSoftObjectPtr<class UInventoryItemDataAsset>> InventoryItems;
};
