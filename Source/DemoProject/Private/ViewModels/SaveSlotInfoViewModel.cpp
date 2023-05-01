// Fill out your copyright notice in the Description page of Project Settings.


#include "ViewModels/SaveSlotInfoViewModel.h"
#include "Components/SlateWrapperTypes.h"

void USaveSlotInfoViewModel::SetCurrentFloor(const FString& newCurrentFloor)
{
	UE_MVVM_SET_PROPERTY_VALUE(CurrentFloor, newCurrentFloor);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateCurrentFloor);
}

void USaveSlotInfoViewModel::SetAvailableFloors(const int32& newAvailableFloors)
{
	UE_MVVM_SET_PROPERTY_VALUE(AvailableFloors, newAvailableFloors);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateAvailableFloors);
}

void USaveSlotInfoViewModel::SetLivesLeft(const int32& newLivesLeft)
{
	UE_MVVM_SET_PROPERTY_VALUE(LivesLeft, newLivesLeft);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateLivesLeft);
}

void USaveSlotInfoViewModel::SetbIsInitialized(bool newbIsInitialized)
{
	UE_MVVM_SET_PROPERTY_VALUE(bIsInitialized, newbIsInitialized);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateInitializedSlotInfoVisibility);
	UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(UpdateUninitializedSlotInfoVisibility);
}

FText USaveSlotInfoViewModel::UpdateCurrentFloor() const
{
	return FText::FromString(CurrentFloor);
}

FText USaveSlotInfoViewModel::UpdateAvailableFloors() const
{
	return FText::AsNumber(AvailableFloors);
}

FText USaveSlotInfoViewModel::UpdateLivesLeft() const
{
	return FText::AsNumber(LivesLeft);
}

ESlateVisibility USaveSlotInfoViewModel::UpdateInitializedSlotInfoVisibility() const
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

ESlateVisibility USaveSlotInfoViewModel::UpdateUninitializedSlotInfoVisibility() const
{
	if (bIsInitialized)
	{
		return ESlateVisibility::Hidden;
	}
	else
	{
		return ESlateVisibility::Visible;
	}
}