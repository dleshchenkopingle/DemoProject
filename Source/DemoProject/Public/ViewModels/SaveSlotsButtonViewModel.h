// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "SaveSlotsButtonViewModel.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DEMOPROJECT_API USaveSlotsButtonViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

private:
	void SetSaveSlotName(const FString& newSaveSlotTitle);
	void SetSaveSlotDate(const FString& newSaveSlotDate);
	void SetSaveSlotTime(const FString& newSaveSlotTime);
	void SetbIsInitialized(bool newIsInitialized);

public:
	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateSaveSlotName() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateSaveSlotDate() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	FText UpdateSaveSlotTime() const;

	UFUNCTION(BlueprintPure, FieldNotify)
	ESlateVisibility UpdateDateTimeVisibility() const;

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	FString SaveSlotName;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	FString SaveSlotDate;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	FString SaveSlotTime;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	bool bIsInitialized;
};
