// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewModels/SaveSlotsButtonViewModel.h"
#include "Components/SlateWrapperTypes.h"

void USaveSlotsButtonViewModel::SetSaveSlotName(const FString& newSaveSlotName)
{
	UE_MVVM_SET_PROPERTY_VALUE(SaveSlotName, newSaveSlotName);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateSaveSlotName);
}

void USaveSlotsButtonViewModel::SetSaveSlotDate(const FString& newSaveSlotDate)
{
    UE_MVVM_SET_PROPERTY_VALUE(SaveSlotDate, newSaveSlotDate);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateSaveSlotDate);
}

void USaveSlotsButtonViewModel::SetSaveSlotTime(const FString& newSaveSlotTime)
{
    UE_MVVM_SET_PROPERTY_VALUE(SaveSlotDate, newSaveSlotTime);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateSaveSlotTime);
}

void USaveSlotsButtonViewModel::SetbIsInitialized(bool newIsInitialized)
{
    UE_MVVM_SET_PROPERTY_VALUE(bIsInitialized, newIsInitialized);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateSaveSlotName);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateSaveSlotDate);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateSaveSlotTime);
    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateDateTimeVisibility);
}

FText USaveSlotsButtonViewModel::UpdateSaveSlotName() const
{
    if (bIsInitialized)
    {
        return FText::FromString(SaveSlotName);
    }
    else
    {
        return FText::FromString("EMPTY SLOT");
    }
}

FText USaveSlotsButtonViewModel::UpdateSaveSlotDate() const
{
    return FText::FromString(SaveSlotDate);
}

FText USaveSlotsButtonViewModel::UpdateSaveSlotTime() const
{
    return FText::FromString(SaveSlotTime);
}

ESlateVisibility USaveSlotsButtonViewModel::UpdateDateTimeVisibility() const
{
    if (bIsInitialized)
    {
        return ESlateVisibility::Visible;
    }
    else
    {
        return ESlateVisibility::Hidden;
    }
}