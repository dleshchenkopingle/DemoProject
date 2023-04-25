// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Common/CommonActivatablePromptWidget.h"

void UCommonActivatablePromptWidget::SetPromptText(const FText& InText)
{
	PromptText = InText;
	RefreshPromptText(PromptText);
}

void UCommonActivatablePromptWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	RefreshPromptText(PromptText);
}
