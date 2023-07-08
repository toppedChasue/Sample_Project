// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_MyBlueprintFunctionLibrary.h"
#include <math.h>

float UCPP_MyBlueprintFunctionLibrary::MyCPPSin(float value)
{
	double value1 = sin((double)value);
	return (float)value1;
}