// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoSysMoRail.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoSysMoRail() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoRail();
MOSYSTRACKING_API UClass* Z_Construct_UClass_UMoRail_NoRegister();
MOSYSTRACKING_API UFunction* Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature();
MOSYSTRACKING_API UFunction* Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature();
MOSYSTRACKING_API UFunction* Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MoSysTracking();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnConnect ************************************************************
struct Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics
{
	struct _Script_MoSysTracking_eventOnConnect_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_MoSysTracking_eventOnConnect_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MoSysTracking_eventOnConnect_Parms), &Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking, nullptr, "OnConnect__DelegateSignature", Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::_Script_MoSysTracking_eventOnConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::_Script_MoSysTracking_eventOnConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnConnect_DelegateWrapper(const FMulticastScriptDelegate& OnConnect, bool Success)
{
	struct _Script_MoSysTracking_eventOnConnect_Parms
	{
		bool Success;
	};
	_Script_MoSysTracking_eventOnConnect_Parms Parms;
	Parms.Success=Success ? true : false;
	OnConnect.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnConnect **************************************************************

// ********** Begin Delegate FOnGet ****************************************************************
struct Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics
{
	struct _Script_MoSysTracking_eventOnGet_Parms
	{
		bool Success;
		int32 Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_MoSysTracking_eventOnGet_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MoSysTracking_eventOnGet_Parms), &Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MoSysTracking_eventOnGet_Parms, Result), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking, nullptr, "OnGet__DelegateSignature", Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::_Script_MoSysTracking_eventOnGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::_Script_MoSysTracking_eventOnGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGet_DelegateWrapper(const FMulticastScriptDelegate& OnGet, bool Success, int32 Result)
{
	struct _Script_MoSysTracking_eventOnGet_Parms
	{
		bool Success;
		int32 Result;
	};
	_Script_MoSysTracking_eventOnGet_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Result=Result;
	OnGet.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGet ******************************************************************

// ********** Begin Delegate FOnSet ****************************************************************
struct Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics
{
	struct _Script_MoSysTracking_eventOnSet_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_MoSysTracking_eventOnSet_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MoSysTracking_eventOnSet_Parms), &Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MoSysTracking, nullptr, "OnSet__DelegateSignature", Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::_Script_MoSysTracking_eventOnSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::_Script_MoSysTracking_eventOnSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSet_DelegateWrapper(const FMulticastScriptDelegate& OnSet, bool Success)
{
	struct _Script_MoSysTracking_eventOnSet_Parms
	{
		bool Success;
	};
	_Script_MoSysTracking_eventOnSet_Parms Parms;
	Parms.Success=Success ? true : false;
	OnSet.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSet ******************************************************************

// ********** Begin Class UMoRail Function Connect *************************************************
struct Z_Construct_UFunction_UMoRail_Connect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Connect both devices.\n     *\n     * \\param callback Function will be called when both devices are\n     *                 successfully connected or either failed.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Connect both devices.\n\n\\param callback Function will be called when both devices are\n                successfully connected or either failed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_Connect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "Connect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_Connect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMoRail_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execConnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect();
	P_NATIVE_END;
}
// ********** End Class UMoRail Function Connect ***************************************************

// ********** Begin Class UMoRail Function Disconnect **********************************************
struct Z_Construct_UFunction_UMoRail_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Disconnect both devices.\n     *\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Disconnect both devices." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_Disconnect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "Disconnect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_Disconnect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMoRail_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// ********** End Class UMoRail Function Disconnect ************************************************

// ********** Begin Class UMoRail Function GetRequiredTimeMs ***************************************
struct Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics
{
	struct MoRail_eventGetRequiredTimeMs_Parms
	{
		int32 PositionIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Calculate the minimum time to reach the given position.\n     *\n     * \\param positionIndex  Index of the destination position\n     * \\param callback       Called with the calculated time or -1 if device is not stopped.\n     * \\return               true if devices are connected, false otherwise.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Calculate the minimum time to reach the given position.\n\n\\param positionIndex  Index of the destination position\n\\param callback       Called with the calculated time or -1 if device is not stopped.\n\\return               true if devices are connected, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::NewProp_PositionIndex = { "PositionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoRail_eventGetRequiredTimeMs_Parms, PositionIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoRail_eventGetRequiredTimeMs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoRail_eventGetRequiredTimeMs_Parms), &Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::NewProp_PositionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "GetRequiredTimeMs", Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::MoRail_eventGetRequiredTimeMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::MoRail_eventGetRequiredTimeMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_GetRequiredTimeMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_GetRequiredTimeMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execGetRequiredTimeMs)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PositionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRequiredTimeMs(Z_Param_PositionIndex);
	P_NATIVE_END;
}
// ********** End Class UMoRail Function GetRequiredTimeMs *****************************************

// ********** Begin Class UMoRail Function GotoPosition ********************************************
struct Z_Construct_UFunction_UMoRail_GotoPosition_Statics
{
	struct MoRail_eventGotoPosition_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Command the devices to move to a pre-stored position.\n     *\n     * \\param index      Index of a pre-stored position.\n     * \\param callback   Called when the command has been processed.\n     *\n     * \\return           true if devices are connected, false otherwise.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Command the devices to move to a pre-stored position.\n\n\\param index      Index of a pre-stored position.\n\\param callback   Called when the command has been processed.\n\n\\return           true if devices are connected, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoRail_GotoPosition_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoRail_eventGotoPosition_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoRail_GotoPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoRail_eventGotoPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoRail_GotoPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoRail_eventGotoPosition_Parms), &Z_Construct_UFunction_UMoRail_GotoPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_GotoPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_GotoPosition_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_GotoPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_GotoPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_GotoPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "GotoPosition", Z_Construct_UFunction_UMoRail_GotoPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_GotoPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_GotoPosition_Statics::MoRail_eventGotoPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_GotoPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_GotoPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_GotoPosition_Statics::MoRail_eventGotoPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_GotoPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_GotoPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execGotoPosition)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GotoPosition(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Class UMoRail Function GotoPosition **********************************************

// ********** Begin Class UMoRail Function IsConnected *********************************************
struct Z_Construct_UFunction_UMoRail_IsConnected_Statics
{
	struct MoRail_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Determine if MoRail and PTZ devices are connected.\n     *\n     * \\return true if both devices are connected.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Determine if MoRail and PTZ devices are connected.\n\n\\return true if both devices are connected." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoRail_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoRail_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoRail_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoRail_eventIsConnected_Parms), &Z_Construct_UFunction_UMoRail_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_IsConnected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "IsConnected", Z_Construct_UFunction_UMoRail_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_IsConnected_Statics::MoRail_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_IsConnected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_IsConnected_Statics::MoRail_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// ********** End Class UMoRail Function IsConnected ***********************************************

// ********** Begin Class UMoRail Function SetGotoMinTimeMs ****************************************
struct Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics
{
	struct MoRail_eventSetGotoMinTimeMs_Parms
	{
		int32 TimeMs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Set the duration of the move to the next goto position.\n     *\n     * \\details This must not be less than the time returned by getRequiredTimeMs()\n     * \\details for that position.\n     *\n     * \\param timeMs     Time (in milliseconds) to goto next position\n     * \\param callback   Called when the command has been processed.\n     * \\return           true if devices are connected, false otherwise.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Set the duration of the move to the next goto position.\n\n\\details This must not be less than the time returned by getRequiredTimeMs()\n\\details for that position.\n\n\\param timeMs     Time (in milliseconds) to goto next position\n\\param callback   Called when the command has been processed.\n\\return           true if devices are connected, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeMs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::NewProp_TimeMs = { "TimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoRail_eventSetGotoMinTimeMs_Parms, TimeMs), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoRail_eventSetGotoMinTimeMs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoRail_eventSetGotoMinTimeMs_Parms), &Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::NewProp_TimeMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "SetGotoMinTimeMs", Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::MoRail_eventSetGotoMinTimeMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::MoRail_eventSetGotoMinTimeMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execSetGotoMinTimeMs)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TimeMs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetGotoMinTimeMs(Z_Param_TimeMs);
	P_NATIVE_END;
}
// ********** End Class UMoRail Function SetGotoMinTimeMs ******************************************

// ********** Begin Class UMoRail Function SetMoRailAddress ****************************************
struct Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics
{
	struct MoRail_eventSetMoRailAddress_Parms
	{
		FString IpAddress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Set the ip address for MoRail.\n     *\n     * \\details Changing the address Will cause disconnection of both devices.\n     *\n     * \\param ip_address Address as string. E.g. \"192.168.134.17\".\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Set the ip address for MoRail.\n\n\\details Changing the address Will cause disconnection of both devices.\n\n\\param ip_address Address as string. E.g. \"192.168.134.17\"." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpAddress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoRail_eventSetMoRailAddress_Parms, IpAddress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoRail_eventSetMoRailAddress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoRail_eventSetMoRailAddress_Parms), &Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::NewProp_IpAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "SetMoRailAddress", Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::MoRail_eventSetMoRailAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::MoRail_eventSetMoRailAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_SetMoRailAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_SetMoRailAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execSetMoRailAddress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetMoRailAddress(Z_Param_IpAddress);
	P_NATIVE_END;
}
// ********** End Class UMoRail Function SetMoRailAddress ******************************************

// ********** Begin Class UMoRail Function SetMoRailPort *******************************************
struct Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics
{
	struct MoRail_eventSetMoRailPort_Parms
	{
		int32 Port;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Set port to be used for MoRail communication.\n     *\n     * \\details This is only for use testing with the DummyMoRailServer, so that\n     * \\details they can share the same (localhost) address.\n     *\n     * \\param port Port to use for MoRail communication\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Set port to be used for MoRail communication.\n\n\\details This is only for use testing with the DummyMoRailServer, so that\n\\details they can share the same (localhost) address.\n\n\\param port Port to use for MoRail communication" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoRail_eventSetMoRailPort_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "SetMoRailPort", Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::MoRail_eventSetMoRailPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::MoRail_eventSetMoRailPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_SetMoRailPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_SetMoRailPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execSetMoRailPort)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoRailPort(Z_Param_Port);
	P_NATIVE_END;
}
// ********** End Class UMoRail Function SetMoRailPort *********************************************

// ********** Begin Class UMoRail Function SetPTZAddress *******************************************
struct Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics
{
	struct MoRail_eventSetPTZAddress_Parms
	{
		FString IpAddress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Set the ip address for PTZ.\n     *\n     * \\details Changing the address Will cause disconnection of both devices.\n     *\n     * \\param ip_address Address as string. E.g. \"192.168.134.17\".\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Set the ip address for PTZ.\n\n\\details Changing the address Will cause disconnection of both devices.\n\n\\param ip_address Address as string. E.g. \"192.168.134.17\"." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IpAddress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoRail_eventSetPTZAddress_Parms, IpAddress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoRail_eventSetPTZAddress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoRail_eventSetPTZAddress_Parms), &Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::NewProp_IpAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "SetPTZAddress", Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::MoRail_eventSetPTZAddress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::MoRail_eventSetPTZAddress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_SetPTZAddress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_SetPTZAddress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execSetPTZAddress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetPTZAddress(Z_Param_IpAddress);
	P_NATIVE_END;
}
// ********** End Class UMoRail Function SetPTZAddress *********************************************

// ********** Begin Class UMoRail Function SetPtzPort **********************************************
struct Z_Construct_UFunction_UMoRail_SetPtzPort_Statics
{
	struct MoRail_eventSetPtzPort_Parms
	{
		int32 Port;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Set port to be used for PTZ communication.\n     *\n     * \\details This is only for use testing with the DummyMoRailServer, so that\n     * \\details they can share the same (localhost) address.\n     *\n     * \\param port Port to use for PTZ communication\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Set port to be used for PTZ communication.\n\n\\details This is only for use testing with the DummyMoRailServer, so that\n\\details they can share the same (localhost) address.\n\n\\param port Port to use for PTZ communication" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoRail_eventSetPtzPort_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::NewProp_Port,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "SetPtzPort", Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::MoRail_eventSetPtzPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::MoRail_eventSetPtzPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_SetPtzPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_SetPtzPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execSetPtzPort)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPtzPort(Z_Param_Port);
	P_NATIVE_END;
}
// ********** End Class UMoRail Function SetPtzPort ************************************************

// ********** Begin Class UMoRail Function Stop ****************************************************
struct Z_Construct_UFunction_UMoRail_Stop_Statics
{
	struct MoRail_eventStop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mo-Sys|VP" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * \\brief Cancel a previously issued goto command.\n     *\n     * \\param callback   Called when the command has been processed.\n     * \\return           true if devices are connected, false otherwise.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\\brief Cancel a previously issued goto command.\n\n\\param callback   Called when the command has been processed.\n\\return           true if devices are connected, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMoRail_Stop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MoRail_eventStop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoRail_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MoRail_eventStop_Parms), &Z_Construct_UFunction_UMoRail_Stop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoRail_Stop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoRail_Stop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_Stop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoRail_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMoRail, nullptr, "Stop", Z_Construct_UFunction_UMoRail_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_Stop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoRail_Stop_Statics::MoRail_eventStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoRail_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoRail_Stop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMoRail_Stop_Statics::MoRail_eventStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMoRail_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoRail_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMoRail::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UMoRail Function Stop ******************************************************

// ********** Begin Class UMoRail ******************************************************************
void UMoRail::StaticRegisterNativesUMoRail()
{
	UClass* Class = UMoRail::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UMoRail::execConnect },
		{ "Disconnect", &UMoRail::execDisconnect },
		{ "GetRequiredTimeMs", &UMoRail::execGetRequiredTimeMs },
		{ "GotoPosition", &UMoRail::execGotoPosition },
		{ "IsConnected", &UMoRail::execIsConnected },
		{ "SetGotoMinTimeMs", &UMoRail::execSetGotoMinTimeMs },
		{ "SetMoRailAddress", &UMoRail::execSetMoRailAddress },
		{ "SetMoRailPort", &UMoRail::execSetMoRailPort },
		{ "SetPTZAddress", &UMoRail::execSetPTZAddress },
		{ "SetPtzPort", &UMoRail::execSetPtzPort },
		{ "Stop", &UMoRail::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMoRail;
UClass* UMoRail::GetPrivateStaticClass()
{
	using TClass = UMoRail;
	if (!Z_Registration_Info_UClass_UMoRail.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MoRail"),
			Z_Registration_Info_UClass_UMoRail.InnerSingleton,
			StaticRegisterNativesUMoRail,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMoRail.InnerSingleton;
}
UClass* Z_Construct_UClass_UMoRail_NoRegister()
{
	return UMoRail::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMoRail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MoSysMoRail.h" },
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectEvent_MetaData[] = {
		{ "Category", "Mo-Sys|VP" },
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GotoPositionEvent_MetaData[] = {
		{ "Category", "Mo-Sys|VP" },
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopEvent_MetaData[] = {
		{ "Category", "Mo-Sys|VP" },
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetGotoMinTimeEvent_MetaData[] = {
		{ "Category", "Mo-Sys|VP" },
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetRequiredTimeEvent_MetaData[] = {
		{ "Category", "Mo-Sys|VP" },
		{ "ModuleRelativePath", "Public/MoSysMoRail.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ConnectEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GotoPositionEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StopEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SetGotoMinTimeEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetRequiredTimeEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoRail_Connect, "Connect" }, // 3772524821
		{ &Z_Construct_UFunction_UMoRail_Disconnect, "Disconnect" }, // 4220508491
		{ &Z_Construct_UFunction_UMoRail_GetRequiredTimeMs, "GetRequiredTimeMs" }, // 2675629547
		{ &Z_Construct_UFunction_UMoRail_GotoPosition, "GotoPosition" }, // 3480644609
		{ &Z_Construct_UFunction_UMoRail_IsConnected, "IsConnected" }, // 125702502
		{ &Z_Construct_UFunction_UMoRail_SetGotoMinTimeMs, "SetGotoMinTimeMs" }, // 1402208832
		{ &Z_Construct_UFunction_UMoRail_SetMoRailAddress, "SetMoRailAddress" }, // 2367238466
		{ &Z_Construct_UFunction_UMoRail_SetMoRailPort, "SetMoRailPort" }, // 3430578983
		{ &Z_Construct_UFunction_UMoRail_SetPTZAddress, "SetPTZAddress" }, // 3068934927
		{ &Z_Construct_UFunction_UMoRail_SetPtzPort, "SetPtzPort" }, // 1299296753
		{ &Z_Construct_UFunction_UMoRail_Stop, "Stop" }, // 3721312939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoRail>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoRail_Statics::NewProp_ConnectEvent = { "ConnectEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoRail, ConnectEvent), Z_Construct_UDelegateFunction_MoSysTracking_OnConnect__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectEvent_MetaData), NewProp_ConnectEvent_MetaData) }; // 2229429787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoRail_Statics::NewProp_GotoPositionEvent = { "GotoPositionEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoRail, GotoPositionEvent), Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GotoPositionEvent_MetaData), NewProp_GotoPositionEvent_MetaData) }; // 3865043902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoRail_Statics::NewProp_StopEvent = { "StopEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoRail, StopEvent), Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopEvent_MetaData), NewProp_StopEvent_MetaData) }; // 3865043902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoRail_Statics::NewProp_SetGotoMinTimeEvent = { "SetGotoMinTimeEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoRail, SetGotoMinTimeEvent), Z_Construct_UDelegateFunction_MoSysTracking_OnSet__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetGotoMinTimeEvent_MetaData), NewProp_SetGotoMinTimeEvent_MetaData) }; // 3865043902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMoRail_Statics::NewProp_GetRequiredTimeEvent = { "GetRequiredTimeEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoRail, GetRequiredTimeEvent), Z_Construct_UDelegateFunction_MoSysTracking_OnGet__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetRequiredTimeEvent_MetaData), NewProp_GetRequiredTimeEvent_MetaData) }; // 515956907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoRail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoRail_Statics::NewProp_ConnectEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoRail_Statics::NewProp_GotoPositionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoRail_Statics::NewProp_StopEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoRail_Statics::NewProp_SetGotoMinTimeEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoRail_Statics::NewProp_GetRequiredTimeEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoRail_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMoRail_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MoSysTracking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoRail_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoRail_Statics::ClassParams = {
	&UMoRail::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMoRail_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMoRail_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoRail_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoRail_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMoRail()
{
	if (!Z_Registration_Info_UClass_UMoRail.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoRail.OuterSingleton, Z_Construct_UClass_UMoRail_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMoRail.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMoRail);
// ********** End Class UMoRail ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h__Script_MoSysTracking_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMoRail, UMoRail::StaticClass, TEXT("UMoRail"), &Z_Registration_Info_UClass_UMoRail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoRail), 557398948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h__Script_MoSysTracking_2363329146(TEXT("/Script/MoSysTracking"),
	Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h__Script_MoSysTracking_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RealtimeRoads_Plugins_VPToolkit_MosysLiveLink_Source_MoSysTracking_Public_MoSysMoRail_h__Script_MoSysTracking_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
