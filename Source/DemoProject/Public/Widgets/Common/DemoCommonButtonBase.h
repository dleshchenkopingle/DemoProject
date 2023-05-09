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
	UFUNCTION(BlueprintCallable)
	void SetButtonText(FText InButtonText);

	UFUNCTION(BlueprintPure)
	bool GetIsClicked() const { return bIsClicked; }

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsClicked(bool newIsClicked);

protected:
	virtual void NativePreConstruct() override;

	UFUNCTION(BlueprintImplementableEvent)
	void RefreshButtonText(const FText& InTitle);

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Button")
	FText ButtonText;

	bool bIsClicked;
};
