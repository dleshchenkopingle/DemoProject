// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Common/DemoCommonButtonBase.h"

void UDemoCommonButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();

	RefreshButtonText(ButtonText);
}
