// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewModels/SaveSlotResourceViewModel.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Engine/AssetManager.h"

void USaveSlotResourceViewModel::SetResourceName(const FString& newResourceName)
{
	UE_MVVM_SET_PROPERTY_VALUE(ResourceName, newResourceName);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateResourceName);
}

void USaveSlotResourceViewModel::SetResourceIcon(TSoftObjectPtr<UTexture2D> newResourceIcon)
{
	TempResourceIcon = newResourceIcon;
	FSoftObjectPath ResourceIconToStream = newResourceIcon.ToSoftObjectPath();
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
	Streamable.RequestAsyncLoad(ResourceIconToStream, FStreamableDelegate::CreateUObject(this, &USaveSlotResourceViewModel::GrantResourceIconDeferred));
}

void USaveSlotResourceViewModel::GrantResourceIconDeferred()
{
	UTexture2D* ItemTexture = TempResourceIcon.Get();
	if (ItemTexture)
	{
		UE_MVVM_SET_PROPERTY_VALUE(ResourceIcon, TempResourceIcon);
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateResourceIcon);
	}
}

void USaveSlotResourceViewModel::SetCurrentResourceAmount(const int32& newCurrentResourceAmount)
{
	UE_MVVM_SET_PROPERTY_VALUE(CurrentResourceAmount, newCurrentResourceAmount);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateCurrentResourceAmount);
}

void USaveSlotResourceViewModel::SetMaxResourceAmount(const int32& newMaxResourceAmount)
{
	UE_MVVM_SET_PROPERTY_VALUE(MaxResourceAmount, newMaxResourceAmount);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateMaxResourceAmount);
}


FText USaveSlotResourceViewModel::UpdateResourceName() const
{
	return FText::FromString(ResourceName);
}


FSlateBrush USaveSlotResourceViewModel::UpdateResourceIcon() const
{
	if (UTexture2D* ResourceTexture = ResourceIcon.Get())
	{
		return UWidgetBlueprintLibrary::MakeBrushFromTexture(ResourceTexture);
	}
	else
	{
		return FSlateBrush();
	}
}

FText USaveSlotResourceViewModel::UpdateCurrentResourceAmount() const
{
	return FText::AsNumber(CurrentResourceAmount);
}

FText USaveSlotResourceViewModel::UpdateMaxResourceAmount() const
{
	return FText::AsNumber(MaxResourceAmount);
}