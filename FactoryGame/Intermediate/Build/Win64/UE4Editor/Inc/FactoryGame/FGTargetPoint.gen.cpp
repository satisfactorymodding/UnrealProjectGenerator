// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGTargetPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGTargetPoint() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTargetPoint_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWheeledVehicle_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_GetWaitTime();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_SetVisibility();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTargetPoint_SetWaitTime();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void AFGTargetPoint::StaticRegisterNativesAFGTargetPoint()
	{
		UClass* Class = AFGTargetPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwningVehicle", &AFGTargetPoint::execGetOwningVehicle },
			{ "GetTargetSpeed", &AFGTargetPoint::execGetTargetSpeed },
			{ "GetWaitTime", &AFGTargetPoint::execGetWaitTime },
			{ "IncreaseWaitTime", &AFGTargetPoint::execIncreaseWaitTime },
			{ "IsTargetSpeedStill", &AFGTargetPoint::execIsTargetSpeedStill },
			{ "OnRep_Visibility", &AFGTargetPoint::execOnRep_Visibility },
			{ "SetOwningVehicle", &AFGTargetPoint::execSetOwningVehicle },
			{ "SetTargetSpeed", &AFGTargetPoint::execSetTargetSpeed },
			{ "SetVisibility", &AFGTargetPoint::execSetVisibility },
			{ "SetWaitTime", &AFGTargetPoint::execSetWaitTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics
	{
		struct FGTargetPoint_eventGetOwningVehicle_Parms
		{
			AFGWheeledVehicle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPoint_eventGetOwningVehicle_Parms, ReturnValue), Z_Construct_UClass_AFGWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Gets owning vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "GetOwningVehicle", sizeof(FGTargetPoint_eventGetOwningVehicle_Parms), Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics
	{
		struct FGTargetPoint_eventGetTargetSpeed_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPoint_eventGetTargetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Getter for target speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "GetTargetSpeed", sizeof(FGTargetPoint_eventGetTargetSpeed_Parms), Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics
	{
		struct FGTargetPoint_eventGetWaitTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPoint_eventGetWaitTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Returns current wait time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "GetWaitTime", sizeof(FGTargetPoint_eventGetWaitTime_Parms), Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_GetWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_GetWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics
	{
		struct FGTargetPoint_eventIncreaseWaitTime_Parms
		{
			float addedWaitTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_addedWaitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::NewProp_addedWaitTime = { "addedWaitTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPoint_eventIncreaseWaitTime_Parms, addedWaitTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::NewProp_addedWaitTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "CPP_Default_addedWaitTime", "-1.000000" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Increase wait time\n@param addedWaitTime - if not specified we add the default wait time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "IncreaseWaitTime", sizeof(FGTargetPoint_eventIncreaseWaitTime_Parms), Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics
	{
		struct FGTargetPoint_eventIsTargetSpeedStill_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGTargetPoint_eventIsTargetSpeedStill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGTargetPoint_eventIsTargetSpeedStill_Parms), &Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Is target speed low enough to count as still" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "IsTargetSpeedStill", sizeof(FGTargetPoint_eventIsTargetSpeedStill_Parms), Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Onrep for visibility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "OnRep_Visibility", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics
	{
		struct FGTargetPoint_eventSetOwningVehicle_Parms
		{
			AFGWheeledVehicle* newVehicle;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newVehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::NewProp_newVehicle = { "newVehicle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPoint_eventSetOwningVehicle_Parms, newVehicle), Z_Construct_UClass_AFGWheeledVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::NewProp_newVehicle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Set which vehicle this belongs to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "SetOwningVehicle", sizeof(FGTargetPoint_eventSetOwningVehicle_Parms), Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics
	{
		struct FGTargetPoint_eventSetTargetSpeed_Parms
		{
			int32 newSpeed;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::NewProp_newSpeed = { "newSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPoint_eventSetTargetSpeed_Parms, newSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::NewProp_newSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Sets new target speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "SetTargetSpeed", sizeof(FGTargetPoint_eventSetTargetSpeed_Parms), Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics
	{
		struct FGTargetPoint_eventSetVisibility_Parms
		{
			bool inVisible;
		};
		static void NewProp_inVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::NewProp_inVisible_SetBit(void* Obj)
	{
		((FGTargetPoint_eventSetVisibility_Parms*)Obj)->inVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::NewProp_inVisible = { "inVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGTargetPoint_eventSetVisibility_Parms), &Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::NewProp_inVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::NewProp_inVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetPoint" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Sets visibility for this point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "SetVisibility", sizeof(FGTargetPoint_eventSetVisibility_Parms), Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics
	{
		struct FGTargetPoint_eventSetWaitTime_Parms
		{
			float newWaitTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newWaitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::NewProp_newWaitTime = { "newWaitTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTargetPoint_eventSetWaitTime_Parms, newWaitTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::NewProp_newWaitTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Sets the wait time\n@param newWaitTime - time to wait ( seconds )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTargetPoint, nullptr, "SetWaitTime", sizeof(FGTargetPoint_eventSetWaitTime_Parms), Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTargetPoint_SetWaitTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTargetPoint_SetWaitTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGTargetPoint_NoRegister()
	{
		return AFGTargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_AFGTargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTargetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mTargetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDefaultWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsVisible_MetaData[];
#endif
		static void NewProp_mIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOwningVehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOwningVehicle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mNext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGTargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGTargetPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGTargetPoint_GetOwningVehicle, "GetOwningVehicle" }, // 747231937
		{ &Z_Construct_UFunction_AFGTargetPoint_GetTargetSpeed, "GetTargetSpeed" }, // 3931176099
		{ &Z_Construct_UFunction_AFGTargetPoint_GetWaitTime, "GetWaitTime" }, // 2543001442
		{ &Z_Construct_UFunction_AFGTargetPoint_IncreaseWaitTime, "IncreaseWaitTime" }, // 2213443005
		{ &Z_Construct_UFunction_AFGTargetPoint_IsTargetSpeedStill, "IsTargetSpeedStill" }, // 3982613840
		{ &Z_Construct_UFunction_AFGTargetPoint_OnRep_Visibility, "OnRep_Visibility" }, // 2932244141
		{ &Z_Construct_UFunction_AFGTargetPoint_SetOwningVehicle, "SetOwningVehicle" }, // 3449826222
		{ &Z_Construct_UFunction_AFGTargetPoint_SetTargetSpeed, "SetTargetSpeed" }, // 3174845906
		{ &Z_Construct_UFunction_AFGTargetPoint_SetVisibility, "SetVisibility" }, // 2283064062
		{ &Z_Construct_UFunction_AFGTargetPoint_SetWaitTime, "SetWaitTime" }, // 4143839569
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTargetPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGTargetPoint.h" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mTargetSpeed_MetaData[] = {
		{ "Category", "Target Point" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Target speed at this node" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mTargetSpeed = { "mTargetSpeed", nullptr, (EPropertyFlags)0x0011000001000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTargetPoint, mTargetSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mTargetSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mTargetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mDefaultWaitTime_MetaData[] = {
		{ "Category", "Target Point" },
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Default wait time if this target point has no target speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mDefaultWaitTime = { "mDefaultWaitTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTargetPoint, mDefaultWaitTime), METADATA_PARAMS(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mDefaultWaitTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mDefaultWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mWaitTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Accumulated wait time for this node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mWaitTime = { "mWaitTime", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTargetPoint, mWaitTime), METADATA_PARAMS(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mWaitTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Update visibility" },
	};
#endif
	void Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mIsVisible_SetBit(void* Obj)
	{
		((AFGTargetPoint*)Obj)->mIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mIsVisible = { "mIsVisible", "OnRep_Visibility", (EPropertyFlags)0x0010000101000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGTargetPoint), &Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mIsVisible_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mOwningVehicle_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Vehicle that created this node" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mOwningVehicle = { "mOwningVehicle", nullptr, (EPropertyFlags)0x0010000001000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTargetPoint, mOwningVehicle), Z_Construct_UClass_AFGWheeledVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mOwningVehicle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mOwningVehicle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mNext_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTargetPoint.h" },
		{ "ToolTip", "Reference to the next target point ( used in linked list )" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mNext = { "mNext", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTargetPoint, mNext), Z_Construct_UClass_AFGTargetPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mNext_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mNext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGTargetPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mTargetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mDefaultWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mOwningVehicle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTargetPoint_Statics::NewProp_mNext,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGTargetPoint_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGTargetPoint, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGTargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGTargetPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGTargetPoint_Statics::ClassParams = {
		&AFGTargetPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGTargetPoint_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGTargetPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGTargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGTargetPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGTargetPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGTargetPoint, 219098261);
	template<> FACTORYGAME_API UClass* StaticClass<AFGTargetPoint>()
	{
		return AFGTargetPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGTargetPoint(Z_Construct_UClass_AFGTargetPoint, &AFGTargetPoint::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGTargetPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGTargetPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
