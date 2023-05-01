// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewModels/AchievementViewModel.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

void UAchievementViewModel::SetAchievementTitle(const FString& newAchievementTitle)
{
    UE_MVVM_SET_PROPERTY_VALUE(AchievementTitle, newAchievementTitle);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementTitle);
}

void UAchievementViewModel::SetAchievementDescription(const FString& newAchievementDescription)
{
    UE_MVVM_SET_PROPERTY_VALUE(AchievementDescription, newAchievementDescription);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementDescription);
}

void UAchievementViewModel::SetAchievementIcon(TSoftObjectPtr<UTexture2D> newAchievementIcon)
{
    UE_MVVM_SET_PROPERTY_VALUE(AchievementIcon, newAchievementIcon);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementIcon);
}

void UAchievementViewModel::SetbIsHidden(bool newbIsHidden)
{
    UE_MVVM_SET_PROPERTY_VALUE(bIsHidden, newbIsHidden);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementTitle);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementTitleVisibility);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateHiddenAchievementTitleVisibility);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementDescription);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementDescVisibility);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateHiddenAchievementDescVisibility);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementIcon);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAchievementIconVisibility);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateHiddenAchievementIconVisibility);
}

ESlateVisibility UAchievementViewModel::UpdateAchievementTitleVisibility() const
{
    if (bIsHidden)
    {
        return ESlateVisibility::Hidden;
    }
    else
    {
        return ESlateVisibility::Visible;
    }
}

ESlateVisibility UAchievementViewModel::UpdateHiddenAchievementTitleVisibility() const
{
    if (bIsHidden)
    {
        return ESlateVisibility::Visible;
    }
    else
    {
        return ESlateVisibility::Hidden;
    }
}

ESlateVisibility UAchievementViewModel::UpdateAchievementDescVisibility() const
{
    if (bIsHidden)
    {
        return ESlateVisibility::Hidden;
    }
    else
    {
        return ESlateVisibility::Visible;
    }
}

ESlateVisibility UAchievementViewModel::UpdateHiddenAchievementDescVisibility() const
{
    if (bIsHidden)
    {
        return ESlateVisibility::Visible;
    }
    else
    {
        return ESlateVisibility::Hidden;
    }
}

FText UAchievementViewModel::UpdateAchievementTitle() const
{
    if (bIsHidden)
    {
        return FText::FromString("HIDDEN ACHIEVEMENT");
    }
    else
    {
        return FText::FromString(AchievementTitle);
    }
}

FText UAchievementViewModel::UpdateAchievementDescription() const
{
    if (bIsHidden)
    {
        return FText::FromString("Play and win to unlock the achievement!");
    }
    else
    {
        return FText::FromString(AchievementDescription);
    }
}

FSlateBrush UAchievementViewModel::UpdateAchievementIcon() const
{
    if (bIsHidden)
    {
        return FSlateBrush();
    }
    else
    {
        return UWidgetBlueprintLibrary::MakeBrushFromTexture(AchievementIcon.LoadSynchronous());
    }
}

ESlateVisibility UAchievementViewModel::UpdateAchievementIconVisibility() const
{
    if (bIsHidden)
    {
        return ESlateVisibility::Hidden;
    }
    else
    {
        return ESlateVisibility::Visible;
    }
}

ESlateVisibility UAchievementViewModel::UpdateHiddenAchievementIconVisibility() const
{
    if (bIsHidden)
    {
        return ESlateVisibility::Visible;
    }
    else
    {
        return ESlateVisibility::Hidden;
    }
}