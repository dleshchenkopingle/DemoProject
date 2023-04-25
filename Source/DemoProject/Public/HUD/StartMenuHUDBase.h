// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "StartMenuHUDBase.generated.h"

class UCommonUserWidgetBase;
class UCommonActivatableMenuWidgetBase;

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API AStartMenuHUDBase : public AHUD
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void AddAchievementsWidget();

protected:
	virtual void BeginPlay() override;

	void AddBaseWidget();
	void AddMainMenuWidget();

private:
	UPROPERTY(EditDefaultsOnly, Category = "Classes")
	TSubclassOf<UCommonUserWidgetBase> BaseWidgetClass;

	UPROPERTY()
	UCommonUserWidgetBase* BaseWidget;

	UPROPERTY(EditDefaultsOnly, Category = "Classes")
	TSubclassOf<UCommonActivatableMenuWidgetBase> MainMenuWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "Classes")
	TSubclassOf<UCommonActivatableMenuWidgetBase> AchievementsWidgetClass;
};
