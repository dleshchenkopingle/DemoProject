// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/Common/CommonActivatableMenuWidgetBase.h"
#include "CommonInputModeTypes.h"

//TOptional<FUIInputConfig> UCommonActivatableMenuWidgetBase::GetDesiredInputConfig() const
//{
//	switch (InputConfig)
//	{
//	case ELyraWidgetInputMode::GameAndMenu:
//		return FUIInputConfig(ECommonInputMode::All, GameMouseCaptureMode);
//	case ELyraWidgetInputMode::Game:
//		return FUIInputConfig(ECommonInputMode::Game, GameMouseCaptureMode);
//	case ELyraWidgetInputMode::Menu:
//		return FUIInputConfig(ECommonInputMode::Menu, EMouseCaptureMode::NoCapture);
//	case ELyraWidgetInputMode::Default:
//	default:
//		return TOptional<FUIInputConfig>();
//	}
//}