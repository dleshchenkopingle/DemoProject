// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewModels/SaveSlotItemViewModel.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Engine/AssetManager.h"

void USaveSlotItemViewModel::SetItemName(const FString& newItemName)
{
    UE_MVVM_SET_PROPERTY_VALUE(ItemName, newItemName);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateItemName);
}

void USaveSlotItemViewModel::SetItemIcon(TSoftObjectPtr<UTexture2D> newItemIcon)
{
    TempItemIcon = newItemIcon;
    FSoftObjectPath ItemIconToStream = newItemIcon.ToSoftObjectPath();
    FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
    Streamable.RequestAsyncLoad(ItemIconToStream, FStreamableDelegate::CreateUObject(this, &USaveSlotItemViewModel::GrantItemIconDeferred));
}

void USaveSlotItemViewModel::GrantItemIconDeferred()
{
    UTexture2D* ItemTexture = TempItemIcon.Get();
    if (ItemTexture)
    {
        UE_MVVM_SET_PROPERTY_VALUE(ItemIcon, TempItemIcon);
        UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateItemIcon);
    }
}

void USaveSlotItemViewModel::SetItemAmount(const int32& newItemAmount)
{
    UE_MVVM_SET_PROPERTY_VALUE(ItemAmount, newItemAmount);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateItemAmount);
}

FText USaveSlotItemViewModel::UpdateItemName() const
{
    return FText::FromString(ItemName);
}

FSlateBrush USaveSlotItemViewModel::UpdateItemIcon() const
{
    if (UTexture2D* ItemTexture = ItemIcon.Get())
    {
        return UWidgetBlueprintLibrary::MakeBrushFromTexture(ItemTexture);
    }
    else
    {
        return FSlateBrush();
    }
}

FText USaveSlotItemViewModel::UpdateItemAmount() const
{
    FString ItemAmountString = "x" + FString::FromInt(ItemAmount);
    return FText::FromString(ItemAmountString);
}