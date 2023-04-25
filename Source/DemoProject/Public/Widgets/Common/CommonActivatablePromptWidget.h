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
	void SetPromptText(const FText& InText);

protected:
	virtual void NativePreConstruct() override;

	UFUNCTION(BlueprintImplementableEvent)
	void RefreshPromptText(const FText& InText);

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt")
	FText PromptText;
};
