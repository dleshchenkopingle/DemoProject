// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "DemoCommonButtonBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API UDemoCommonButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;
};
