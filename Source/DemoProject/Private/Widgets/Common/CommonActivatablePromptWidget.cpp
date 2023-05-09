// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Common/CommonActivatablePromptWidget.h"

void UCommonActivatablePromptWidget::SetPromptTitle(const FText& InTitle)
{
	RefreshPromptTitle(InTitle);
}

void UCommonActivatablePromptWidget::SetPromptDescription(const FText& InDescription)
{
	RefreshPromptDescription(InDescription);
}
