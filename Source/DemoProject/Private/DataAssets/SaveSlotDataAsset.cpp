// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/SaveSlotDataAsset.h"
#include "DataAssets/InventoryItemDataAsset.h"
#include "DataAssets/ResourceDataAsset.h"

FString USaveSlotDataAsset::GetCreationDate() const 
{
	FString DateString = FString::FromInt(UKismetMathLibrary::GetDay(CreationDateTime)) +
		"/" +
		FString::FromInt(UKismetMathLibrary::GetMonth(CreationDateTime)) +
		"/" +
		FString::FromInt(UKismetMathLibrary::GetYear(CreationDateTime));

	return DateString;
}

FString USaveSlotDataAsset::GetCreationTime() const
{
	FString HourString = FString::FromInt(UKismetMathLibrary::GetHour(CreationDateTime)).Len() == 1 ?
		"0" + FString::FromInt(UKismetMathLibrary::GetHour(CreationDateTime)) :
		FString::FromInt(UKismetMathLibrary::GetHour(CreationDateTime));

	FString MinuteString = FString::FromInt(UKismetMathLibrary::GetMinute(CreationDateTime)).Len() == 1 ?
		"0" + FString::FromInt(UKismetMathLibrary::GetMinute(CreationDateTime)) :
		FString::FromInt(UKismetMathLibrary::GetMinute(CreationDateTime));

	FString SecondString = FString::FromInt(UKismetMathLibrary::GetSecond(CreationDateTime)).Len() == 1 ?
		"0" + FString::FromInt(UKismetMathLibrary::GetSecond(CreationDateTime)) :
		FString::FromInt(UKismetMathLibrary::GetSecond(CreationDateTime));

	FString TimeString = HourString + ":" + MinuteString + ":" + SecondString;
	return TimeString;
}
