// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "SaveSlotsPanelBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API USaveSlotsPanelBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadWrite, Category = "Save Slots")
	TArray<TSoftObjectPtr<class USaveSlotDataAsset>> SaveSlots;
};
