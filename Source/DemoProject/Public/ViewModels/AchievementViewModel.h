// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "AchievementViewModel.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class DEMOPROJECT_API UAchievementViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

private:
    void SetAchievementTitle(const FString& newAchievementTitle);
    void SetAchievementDescription(const FString& newAchievementDescription);
    void SetAchievementIcon(TSoftObjectPtr<UTexture2D> newAchievementIcon);
    void SetbIsHidden(bool newbIsHidden);

public:
    UFUNCTION(BlueprintPure, FieldNotify)
    FText UpdateAchievementTitle() const;
    
    UFUNCTION(BlueprintPure, FieldNotify)
    ESlateVisibility UpdateAchievementTitleVisibility() const;

    UFUNCTION(BlueprintPure, FieldNotify)
    ESlateVisibility UpdateHiddenAchievementTitleVisibility() const;

    UFUNCTION(BlueprintPure, FieldNotify)
    FText UpdateAchievementDescription() const;

    UFUNCTION(BlueprintPure, FieldNotify)
    ESlateVisibility UpdateAchievementDescVisibility() const;

    UFUNCTION(BlueprintPure, FieldNotify)
    ESlateVisibility UpdateHiddenAchievementDescVisibility() const;

    UFUNCTION(BlueprintPure, FieldNotify)
    FSlateBrush UpdateAchievementIcon() const;

    UFUNCTION(BlueprintPure, FieldNotify)
    ESlateVisibility UpdateAchievementIconVisibility() const;

    UFUNCTION(BlueprintPure, FieldNotify)
    ESlateVisibility UpdateHiddenAchievementIconVisibility() const;

public:
    UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
    FString AchievementTitle;

    UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
    FString AchievementDescription;

    UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
    TSoftObjectPtr<UTexture2D> AchievementIcon;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	bool bIsHidden = true;
};
