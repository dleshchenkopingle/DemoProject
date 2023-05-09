// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "CommonActivatablePromptWidget.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API UCommonActivatablePromptWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void SetPromptTitle(const FText& InTitle);

	UFUNCTION(BlueprintCallable)
	void SetPromptDescription(const FText& InDescription);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void RefreshPromptTitle(const FText& InTitle);

	UFUNCTION(BlueprintImplementableEvent)
	void RefreshPromptDescription(const FText& InDescription);
};
