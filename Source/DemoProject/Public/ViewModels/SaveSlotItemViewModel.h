// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SaveSlotItemViewModel.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DEMOPROJECT_API USaveSlotItemViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

private:
	void SetItemName(const FString& newItemName);
	void SetItemIcon(TSoftObjectPtr<UTexture2D> newItemIcon);

	UFUNCTION()
	void GrantItemIconDeferred();

	void SetItemAmount(const int32& newItemAmount);
	
public:
	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateItemName() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FSlateBrush UpdateItemIcon() const;
	
	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateItemAmount() const;

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	FString ItemName;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	TSoftObjectPtr<UTexture2D> ItemIcon;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	int32 ItemAmount;

private:
	TSoftObjectPtr<UTexture2D> TempItemIcon;
};
