// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Player/UnrealTestPlayerState.h"
#include "UTPlayerScoreListUW.generated.h"

/**
 * 
 */
UCLASS()
class UNREALTEST_API UUTPlayerScoreListUW : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int PlayersToShow = 5;

	UFUNCTION(BlueprintCallable)
	TArray<AUnrealTestPlayerState*> GetSortedPlayerStates(AUnrealTestPlayerState*& LocalPlayer) const;
};
