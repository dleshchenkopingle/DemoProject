// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/StartMenuHUDBase.h"
#include "Widgets/Common/CommonActivatableMenuWidgetBase.h"
#include "Widgets/Common/CommonUserWidgetBase.h"

void AStartMenuHUDBase::AddAchievementsWidget()
{
	if (AchievementsWidgetClass && BaseWidget)
	{
		BaseWidget->PushCommonActivatableWidget(AchievementsWidgetClass);
	}
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