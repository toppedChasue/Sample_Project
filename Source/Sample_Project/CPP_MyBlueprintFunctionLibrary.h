// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPP_MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLE_PROJECT_API UCPP_MyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, category = "MyLibrary")
		static float MyCPPSin(float value);
};
