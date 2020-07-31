// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WangtaoFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PACKSORT_API UWangtaoFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable,Category="WangtaoSort")
    static TArray<int> PackingSort(int index,int remove_index,int page_Num);
};
