// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SaveSlotResourceViewModel.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DEMOPROJECT_API USaveSlotResourceViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()
	
private:
	void SetResourceName(const FString& newResourceName);
	void SetResourceIcon(TSoftObjectPtr<UTexture2D> newResourceIcon);

	UFUNCTION()
	void GrantResourceIconDeferred();

	void SetCurrentResourceAmount(const int32& newCurrentResourceAmount);
	void SetMaxResourceAmount(const int32& newMaxResourceAmount);

public:
	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateResourceName() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FSlateBrush UpdateResourceIcon() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateCurrentResourceAmount() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateMaxResourceAmount() const;

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	FString ResourceName;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	TSoftObjectPtr<UTexture2D> ResourceIcon;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	int32 CurrentResourceAmount;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	int32 MaxResourceAmount;

private:
	TSoftObjectPtr<UTexture2D> TempResourceIcon;
};
