// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AchievementDataAsset.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DEMOPROJECT_API UAchievementDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Achievement")
	FText GetAchievementTitle() const {	return AchievementTitle; }

	UFUNCTION(BlueprintPure, Category = "Achievement")
	FText GetAchievementDescription() const { return AchievementDescription; }

	UFUNCTION(BlueprintPure, Category = "Achievement")
	TSoftObjectPtr<UTexture2D> GetAchievementIcon() const { return AchievementIcon; }

	UFUNCTION(BlueprintPure, Category = "Achievement")
	bool GetIsHidden() const { return bIsHidden; };

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Achievement")
	FText AchievementTitle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Achievement")
	FText AchievementDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Achievement")
	TSoftObjectPtr<UTexture2D> AchievementIcon;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Achievement")
	bool bIsHidden;
};
