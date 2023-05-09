// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "CommonUserWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API UCommonUserWidgetBase : public UCommonUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintImplementableEvent)
	void PushCommonActivatableWidget(TSubclassOf<class UCommonActivatableWidget> WidgetClass);

	UFUNCTION(BlueprintImplementableEvent)
	class UCommonActivatablePromptWidget* PushCommonActivatablePromptWidget(TSubclassOf<class UCommonActivatablePromptWidget> PromptWidgetClass, const FText& Title, const FText& Description);
};
