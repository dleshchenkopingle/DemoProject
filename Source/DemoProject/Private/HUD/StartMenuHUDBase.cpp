// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/StartMenuHUDBase.h"
#include "Widgets/Common/CommonActivatableMenuWidgetBase.h"
#include "Widgets/Common/CommonUserWidgetBase.h"
#include "Widgets/Common/CommonActivatablePromptWidget.h"

void AStartMenuHUDBase::AddAchievementsWidget()
{
	if (AchievementsWidgetClass && BaseWidget)
	{
		BaseWidget->PushCommonActivatableWidget(AchievementsWidgetClass);
	}
}

void AStartMenuHUDBase::AddSaveSlotsWidget()
{
	if (SaveSlotsWidgetClass && BaseWidget)
	{
		BaseWidget->PushCommonActivatableWidget(SaveSlotsWidgetClass);
	}
}

UCommonActivatablePromptWidget* AStartMenuHUDBase::AddPromptWidget(const FText& Title, const FText& Description)
{
	if (PromptWidgetClass && BaseWidget)
	{
		return BaseWidget->PushCommonActivatablePromptWidget(PromptWidgetClass, Title, Description);
	}

	return nullptr;
}

void AStartMenuHUDBase::BeginPlay()
{
	Super::BeginPlay();

	AddBaseWidget();
	AddMainMenuWidget();
}

void AStartMenuHUDBase::AddBaseWidget()
{
	if (BaseWidgetClass)
	{
		BaseWidget = CreateWidget<UCommonUserWidgetBase>(GetWorld(), BaseWidgetClass, FName("BaseWidget"));
		check(BaseWidget);
		BaseWidget->AddToViewport();
	}
}

void AStartMenuHUDBase::AddMainMenuWidget()
{
	if (MainMenuWidgetClass && BaseWidget)
	{
		BaseWidget->PushCommonActivatableWidget(MainMenuWidgetClass);
	}
}