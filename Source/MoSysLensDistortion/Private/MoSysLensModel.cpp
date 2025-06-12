// Copyright 2023 Mo-Sys Engineering Ltd. All Rights Reserved.

#include "MoSysLensModel.h"

UScriptStruct* UMoSysLensModel::GetParameterStruct() const
{
	return FMoSysLensParameters::StaticStruct();
}

FName UMoSysLensModel::GetModelName() const
{
	return FName("Mo-Sys Lens Model");
}

FName UMoSysLensModel::GetShortModelName() const
{
	return TEXT("Mo-Sys");
}
