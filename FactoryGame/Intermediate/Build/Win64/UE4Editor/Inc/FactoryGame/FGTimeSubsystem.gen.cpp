// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGTimeSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGTimeSubsystem() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTimeOfDaySubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTimeOfDaySubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventNewDayDelegate_Parms
		{
			int32 newDayNr;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newDayNr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::NewProp_newDayNr = { "newDayNr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventNewDayDelegate_Parms, newDayNr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::NewProp_newDayNr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "NewDayDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventNewDayDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFGTimeOfDaySubsystem::StaticRegisterNativesAFGTimeOfDaySubsystem()
	{
		UClass* Class = AFGTimeOfDaySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGTimeOfDaySubsystem::execGet },
			{ "GetDayMinutes", &AFGTimeOfDaySubsystem::execGetDayMinutes },
			{ "GetDayPct", &AFGTimeOfDaySubsystem::execGetDayPct },
			{ "GetDaySeconds", &AFGTimeOfDaySubsystem::execGetDaySeconds },
			{ "GetDaytimeSeconds", &AFGTimeOfDaySubsystem::execGetDaytimeSeconds },
			{ "GetHours", &AFGTimeOfDaySubsystem::execGetHours },
			{ "GetMinutes", &AFGTimeOfDaySubsystem::execGetMinutes },
			{ "GetNightPct", &AFGTimeOfDaySubsystem::execGetNightPct },
			{ "GetNighttimeSeconds", &AFGTimeOfDaySubsystem::execGetNighttimeSeconds },
			{ "GetNormalizedTimeOfDay", &AFGTimeOfDaySubsystem::execGetNormalizedTimeOfDay },
			{ "GetPassedDays", &AFGTimeOfDaySubsystem::execGetPassedDays },
			{ "GetSeconds", &AFGTimeOfDaySubsystem::execGetSeconds },
			{ "GetTimeOfDayHours", &AFGTimeOfDaySubsystem::execGetTimeOfDayHours },
			{ "IsDay", &AFGTimeOfDaySubsystem::execIsDay },
			{ "IsNight", &AFGTimeOfDaySubsystem::execIsNight },
			{ "OnRep_ReplicatedDaySeconds", &AFGTimeOfDaySubsystem::execOnRep_ReplicatedDaySeconds },
			{ "SetTimeSpeedMultiplier", &AFGTimeOfDaySubsystem::execSetTimeSpeedMultiplier },
			{ "UpdateServerDaySeconds", &AFGTimeOfDaySubsystem::execUpdateServerDaySeconds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics
	{
		struct FGTimeOfDaySubsystem_eventGet_Parms
		{
			UObject* worldContext;
			AFGTimeOfDaySubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGTimeOfDaySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetTimeSubsystem" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Get the current time subsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "Get", sizeof(FGTimeOfDaySubsystem_eventGet_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetDayMinutes_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetDayMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How many (game) minutes has passed in our current day (0->1440)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetDayMinutes", sizeof(FGTimeOfDaySubsystem_eventGetDayMinutes_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetDayPct_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetDayPct_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Get a value of how much \"day\" it is (0 means night, 1 means that the sun is at it's highest, and 0.5 means that it's halfway to day)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetDayPct", sizeof(FGTimeOfDaySubsystem_eventGetDayPct_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetDaySeconds_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetDaySeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How many (game) seconds has passed in our current day (0->86400)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetDaySeconds", sizeof(FGTimeOfDaySubsystem_eventGetDaySeconds_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetDaytimeSeconds_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetDaytimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Get how many real seconds the daytime consists of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetDaytimeSeconds", sizeof(FGTimeOfDaySubsystem_eventGetDaytimeSeconds_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetHours_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetHours_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How many (game) hours has passed in our current day (0->24)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetHours", sizeof(FGTimeOfDaySubsystem_eventGetHours_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetMinutes_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How many (game) minutes has passed since our last hour (0->60)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetMinutes", sizeof(FGTimeOfDaySubsystem_eventGetMinutes_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetNightPct_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetNightPct_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Get a value of how much \"night\" it is (0 means day, 1 means that it's \"in the middle of the night\", and 0.5 means that it's halfway there)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetNightPct", sizeof(FGTimeOfDaySubsystem_eventGetNightPct_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetNighttimeSeconds_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetNighttimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Get how many real seconds the nighttime consists of" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetNighttimeSeconds", sizeof(FGTimeOfDaySubsystem_eventGetNighttimeSeconds_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetNormalizedTimeOfDay_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetNormalizedTimeOfDay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Get the (game) time of day as a normalized form (0->1, where 0 is 00:00 and 1 is 24:00)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetNormalizedTimeOfDay", sizeof(FGTimeOfDaySubsystem_eventGetNormalizedTimeOfDay_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetPassedDays_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetPassedDays_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How many (game) days has passed since we started the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetPassedDays", sizeof(FGTimeOfDaySubsystem_eventGetPassedDays_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetSeconds_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How many (game) seconds has passed since our last minute (0->60)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetSeconds", sizeof(FGTimeOfDaySubsystem_eventGetSeconds_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics
	{
		struct FGTimeOfDaySubsystem_eventGetTimeOfDayHours_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventGetTimeOfDayHours_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Get the (game) time of day as a float in the range (0->24)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "GetTimeOfDayHours", sizeof(FGTimeOfDaySubsystem_eventGetTimeOfDayHours_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics
	{
		struct FGTimeOfDaySubsystem_eventIsDay_Parms
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
	void Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGTimeOfDaySubsystem_eventIsDay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGTimeOfDaySubsystem_eventIsDay_Parms), &Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Return true if it's daytime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "IsDay", sizeof(FGTimeOfDaySubsystem_eventIsDay_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics
	{
		struct FGTimeOfDaySubsystem_eventIsNight_Parms
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
	void Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGTimeOfDaySubsystem_eventIsNight_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGTimeOfDaySubsystem_eventIsNight_Parms), &Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Return true if it's nighttime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "IsNight", sizeof(FGTimeOfDaySubsystem_eventIsNight_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Called on client whenever we update the server time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "OnRep_ReplicatedDaySeconds", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics
	{
		struct FGTimeOfDaySubsystem_eventSetTimeSpeedMultiplier_Parms
		{
			float multiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGTimeOfDaySubsystem_eventSetTimeSpeedMultiplier_Parms, multiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::NewProp_multiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Sets multiplier for speed of time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "SetTimeSpeedMultiplier", sizeof(FGTimeOfDaySubsystem_eventSetTimeSpeedMultiplier_Parms), Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Update the current time of day to be replicated to clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGTimeOfDaySubsystem, nullptr, "UpdateServerDaySeconds", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGTimeOfDaySubsystem_NoRegister()
	{
		return AFGTimeOfDaySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnNewDayDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnNewDayDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpdateTime_MetaData[];
#endif
		static void NewProp_mUpdateTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumberOfPassedDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumberOfPassedDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedDaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mReplicatedDaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDaySeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDaySeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNightStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mNightStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDayStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDayStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNightLengthMinutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mNightLengthMinutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDayLengthMinutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDayLengthMinutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSyncronizeTimeOfDayInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSyncronizeTimeOfDayInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_Get, "Get" }, // 206731385
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayMinutes, "GetDayMinutes" }, // 1280778037
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDayPct, "GetDayPct" }, // 888613148
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaySeconds, "GetDaySeconds" }, // 1714104029
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetDaytimeSeconds, "GetDaytimeSeconds" }, // 3907069059
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetHours, "GetHours" }, // 52803577
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetMinutes, "GetMinutes" }, // 2995492435
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNightPct, "GetNightPct" }, // 3868677146
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNighttimeSeconds, "GetNighttimeSeconds" }, // 1623843542
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetNormalizedTimeOfDay, "GetNormalizedTimeOfDay" }, // 3383599420
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetPassedDays, "GetPassedDays" }, // 2432012458
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetSeconds, "GetSeconds" }, // 3017253630
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_GetTimeOfDayHours, "GetTimeOfDayHours" }, // 3718464306
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsDay, "IsDay" }, // 3619636336
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_IsNight, "IsNight" }, // 4075590596
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_OnRep_ReplicatedDaySeconds, "OnRep_ReplicatedDaySeconds" }, // 3987943119
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_SetTimeSpeedMultiplier, "SetTimeSpeedMultiplier" }, // 3515846205
		{ &Z_Construct_UFunction_AFGTimeOfDaySubsystem_UpdateServerDaySeconds, "UpdateServerDaySeconds" }, // 2438124042
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGTimeSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mOnNewDayDelegate_MetaData[] = {
		{ "Category", "Events|Time" },
		{ "DisplayName", "OnNewDay" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Server and Client | Called when a new day starts" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mOnNewDayDelegate = { "mOnNewDayDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mOnNewDayDelegate), Z_Construct_UDelegateFunction_FactoryGame_NewDayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mOnNewDayDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mOnNewDayDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mUpdateTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Will only update the time if we set this to true" },
	};
#endif
	void Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mUpdateTime_SetBit(void* Obj)
	{
		((AFGTimeOfDaySubsystem*)Obj)->mUpdateTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mUpdateTime = { "mUpdateTime", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGTimeOfDaySubsystem), &Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mUpdateTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mUpdateTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mUpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNumberOfPassedDays_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "The current day that has passed" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNumberOfPassedDays = { "mNumberOfPassedDays", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mNumberOfPassedDays), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNumberOfPassedDays_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNumberOfPassedDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mReplicatedDaySeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Written to by server, sends over the time that the server currently have" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mReplicatedDaySeconds = { "mReplicatedDaySeconds", "OnRep_ReplicatedDaySeconds", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mReplicatedDaySeconds), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mReplicatedDaySeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mReplicatedDaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDaySeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How many seconds that has passed into our current day" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDaySeconds = { "mDaySeconds", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mDaySeconds), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDaySeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDaySeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSpeedMultiplier_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "Multiplier for speeding up the day/night cycle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSpeedMultiplier = { "mSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightStartTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "In hours, when does the night start (if you want 19.10, enter 19.1666667)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightStartTime = { "mNightStartTime", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mNightStartTime), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayStartTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "In hours, when does the day start (if you want 06.45, enter 06.75)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayStartTime = { "mDayStartTime", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mDayStartTime), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightLengthMinutes_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "In minutes, how long is the night part of a day? (normally 18-06).\nthat is, how many minutes should it take to for the time 18 -> 06 to pass?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightLengthMinutes = { "mNightLengthMinutes", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mNightLengthMinutes), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightLengthMinutes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightLengthMinutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayLengthMinutes_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "In minutes, how long is the day part of a day? (normally 06-18).\nthat is, how many minutes should it take to for the time 06 -> 18 to pass?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayLengthMinutes = { "mDayLengthMinutes", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mDayLengthMinutes), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayLengthMinutes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayLengthMinutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSyncronizeTimeOfDayInterval_MetaData[] = {
		{ "Category", "Time Replication" },
		{ "ModuleRelativePath", "Public/FGTimeSubsystem.h" },
		{ "ToolTip", "How often (in seconds) we should synchronize the time of day with the server" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSyncronizeTimeOfDayInterval = { "mSyncronizeTimeOfDayInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGTimeOfDaySubsystem, mSyncronizeTimeOfDayInterval), METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSyncronizeTimeOfDayInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSyncronizeTimeOfDayInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mOnNewDayDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mUpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNumberOfPassedDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mReplicatedDaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDaySeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mNightLengthMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mDayLengthMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::NewProp_mSyncronizeTimeOfDayInterval,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGTimeOfDaySubsystem, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGTimeOfDaySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::ClassParams = {
		&AFGTimeOfDaySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGTimeOfDaySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGTimeOfDaySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGTimeOfDaySubsystem, 4152100559);
	template<> FACTORYGAME_API UClass* StaticClass<AFGTimeOfDaySubsystem>()
	{
		return AFGTimeOfDaySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGTimeOfDaySubsystem(Z_Construct_UClass_AFGTimeOfDaySubsystem, &AFGTimeOfDaySubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGTimeOfDaySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGTimeOfDaySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
