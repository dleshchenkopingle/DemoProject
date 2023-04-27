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

public:
	UFUNCTION(BlueprintPure)
	bool GetIsClicked() const { return bIsClicked; }

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsClicked(bool newIsClicked);

protected:
	bool bIsClicked;
};
