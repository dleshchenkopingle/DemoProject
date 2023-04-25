// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Common/CommonActivatableMenuWidgetBase.h"
#include "AchievementsMenuWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API UAchievementsMenuWidgetBase : public UCommonActivatableMenuWidgetBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Achievements")
	TArray<TSoftObjectPtr<class UAchievementDataAsset>> Achievements;
};
