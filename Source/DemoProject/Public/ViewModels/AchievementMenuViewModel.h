// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "AchievementMenuViewModel.generated.h"

/**
 * 
 */
UCLASS()
class DEMOPROJECT_API UAchievementMenuViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<class UAchievementDataAsset*> AchievementsArray;
};
