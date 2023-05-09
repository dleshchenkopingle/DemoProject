// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Common/DemoCommonButtonBase.h"

void UDemoCommonButtonBase::SetButtonText(FText InButtonText)
{
	ButtonText = InButtonText;
	RefreshButtonText(ButtonText);
}

void UDemoCommonButtonBase::SetIsClicked_Implementation(bool newIsClicked)
{
	bIsClicked = newIsClicked; 
}

void UDemoCommonButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	RefreshButtonText(ButtonText);
}
