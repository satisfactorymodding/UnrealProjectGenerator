// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSaveSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSaveSession() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveSession_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveSession();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_Autosave();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetBuildVersion();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveHeader();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetMapName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetMapOptions();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSessionSaveStruct();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESessionVisibility();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetSessionID();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetSessionName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_GetVersion();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UFGSaveSession::StaticRegisterNativesUFGSaveSession()
	{
		UClass* Class = UFGSaveSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Autosave", &UFGSaveSession::execAutosave },
			{ "Get", &UFGSaveSession::execGet },
			{ "GetBuildVersion", &UFGSaveSession::execGetBuildVersion },
			{ "GetMapName", &UFGSaveSession::execGetMapName },
			{ "GetMapOptions", &UFGSaveSession::execGetMapOptions },
			{ "GetName", &UFGSaveSession::execGetName },
			{ "GetPlayDurationSeconds", &UFGSaveSession::execGetPlayDurationSeconds },
			{ "GetSaveDateTime", &UFGSaveSession::execGetSaveDateTime },
			{ "GetSaveSessionID", &UFGSaveSession::execGetSaveSessionID },
			{ "GetSaveSessionName", &UFGSaveSession::execGetSaveSessionName },
			{ "GetSaveSessionVisibility", &UFGSaveSession::execGetSaveSessionVisibility },
			{ "GetSessionID", &UFGSaveSession::execGetSessionID },
			{ "GetSessionName", &UFGSaveSession::execGetSessionName },
			{ "GetVersion", &UFGSaveSession::execGetVersion },
			{ "OnActorDestroyed", &UFGSaveSession::execOnActorDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSaveSession_Autosave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_Autosave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Called every time by timer to trigger a autosave. Can be called manually if we want to trigger a autosave for key events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_Autosave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "Autosave", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_Autosave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_Autosave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_Autosave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_Autosave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_Get_Statics
	{
		struct FGSaveSession_eventGet_Parms
		{
			UObject* worldContext;
			UFGSaveSession* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSaveSession_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGet_Parms, ReturnValue), Z_Construct_UClass_UFGSaveSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSaveSession_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "DisplayName", "GetSaveSession" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Get the save system from a world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "Get", sizeof(FGSaveSession_eventGet_Parms), Z_Construct_UFunction_UFGSaveSession_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics
	{
		struct FGSaveSession_eventGetBuildVersion_Parms
		{
			FSaveHeader header;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetBuildVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetBuildVersion_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Get the build version this save was saved with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetBuildVersion", sizeof(FGSaveSession_eventGetBuildVersion_Parms), Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetBuildVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetBuildVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics
	{
		struct FGSaveSession_eventGetMapName_Parms
		{
			FSaveHeader header;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetMapName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetMapName_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Get the map that this save was saved with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetMapName", sizeof(FGSaveSession_eventGetMapName_Parms), Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics
	{
		struct FGSaveSession_eventGetMapOptions_Parms
		{
			FSaveHeader header;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetMapOptions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetMapOptions_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Get the options that this save was saved with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetMapOptions", sizeof(FGSaveSession_eventGetMapOptions_Parms), Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetMapOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetMapOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetName_Statics
	{
		struct FGSaveSession_eventGetName_Parms
		{
			FSaveHeader header;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSession_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetName_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetName_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetName_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "The name of the save game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetName", sizeof(FGSaveSession_eventGetName_Parms), Z_Construct_UFunction_UFGSaveSession_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics
	{
		struct FGSaveSession_eventGetPlayDurationSeconds_Parms
		{
			FSaveHeader header;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetPlayDurationSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetPlayDurationSeconds_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "The name of the save game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetPlayDurationSeconds", sizeof(FGSaveSession_eventGetPlayDurationSeconds_Parms), Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics
	{
		struct FGSaveSession_eventGetSaveDateTime_Parms
		{
			FSaveHeader header;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveDateTime_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "The time this was saved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetSaveDateTime", sizeof(FGSaveSession_eventGetSaveDateTime_Parms), Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics
	{
		struct FGSaveSession_eventGetSaveSessionID_Parms
		{
			FSessionSaveStruct session;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveSessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::NewProp_session = { "session", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveSessionID_Parms, session), Z_Construct_UScriptStruct_FSessionSaveStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::NewProp_session,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save Session" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetSaveSessionName instead" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetSaveSessionID", sizeof(FGSaveSession_eventGetSaveSessionID_Parms), Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics
	{
		struct FGSaveSession_eventGetSaveSessionName_Parms
		{
			FSessionSaveStruct session;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_session;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveSessionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::NewProp_session = { "session", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveSessionName_Parms, session), Z_Construct_UScriptStruct_FSessionSaveStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::NewProp_session,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save Session" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Returns the name of this session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetSaveSessionName", sizeof(FGSaveSession_eventGetSaveSessionName_Parms), Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics
	{
		struct FGSaveSession_eventGetSaveSessionVisibility_Parms
		{
			FSaveHeader header;
			TEnumAsByte<ESessionVisibility> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveSessionVisibility_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ESessionVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSaveSessionVisibility_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save Session" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Returns saved visibility of the session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetSaveSessionVisibility", sizeof(FGSaveSession_eventGetSaveSessionVisibility_Parms), Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics
	{
		struct FGSaveSession_eventGetSessionID_Parms
		{
			FSaveHeader header;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSessionID_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetSessionName instead" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetSessionID", sizeof(FGSaveSession_eventGetSessionID_Parms), Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetSessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetSessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics
	{
		struct FGSaveSession_eventGetSessionName_Parms
		{
			FSaveHeader header;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSessionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetSessionName_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "The session name of the save game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetSessionName", sizeof(FGSaveSession_eventGetSessionName_Parms), Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetSessionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetSessionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics
	{
		struct FGSaveSession_eventGetVersion_Parms
		{
			FSaveHeader header;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventGetVersion_Parms, header), Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::NewProp_header,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Save" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Get the save version of a header" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "GetVersion", sizeof(FGSaveSession_eventGetVersion_Parms), Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_GetVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_GetVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics
	{
		struct FGSaveSession_eventOnActorDestroyed_Parms
		{
			AActor* destroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSession_eventOnActorDestroyed_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Called when a save actor placed in the level is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSession, nullptr, "OnActorDestroyed", sizeof(FGSaveSession_eventOnActorDestroyed_Parms), Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSaveSession_NoRegister()
	{
		return UFGSaveSession::StaticClass();
	}
	struct Z_Construct_UClass_UFGSaveSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumRotatingAutosaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumRotatingAutosaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAutosaveInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAutosaveInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSaveSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSaveSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSaveSession_Autosave, "Autosave" }, // 2493763561
		{ &Z_Construct_UFunction_UFGSaveSession_Get, "Get" }, // 69897912
		{ &Z_Construct_UFunction_UFGSaveSession_GetBuildVersion, "GetBuildVersion" }, // 3847092175
		{ &Z_Construct_UFunction_UFGSaveSession_GetMapName, "GetMapName" }, // 241059233
		{ &Z_Construct_UFunction_UFGSaveSession_GetMapOptions, "GetMapOptions" }, // 2180184310
		{ &Z_Construct_UFunction_UFGSaveSession_GetName, "GetName" }, // 379592307
		{ &Z_Construct_UFunction_UFGSaveSession_GetPlayDurationSeconds, "GetPlayDurationSeconds" }, // 1519290784
		{ &Z_Construct_UFunction_UFGSaveSession_GetSaveDateTime, "GetSaveDateTime" }, // 3513021934
		{ &Z_Construct_UFunction_UFGSaveSession_GetSaveSessionID, "GetSaveSessionID" }, // 4040969809
		{ &Z_Construct_UFunction_UFGSaveSession_GetSaveSessionName, "GetSaveSessionName" }, // 461921514
		{ &Z_Construct_UFunction_UFGSaveSession_GetSaveSessionVisibility, "GetSaveSessionVisibility" }, // 12680674
		{ &Z_Construct_UFunction_UFGSaveSession_GetSessionID, "GetSessionID" }, // 4252150807
		{ &Z_Construct_UFunction_UFGSaveSession_GetSessionName, "GetSessionName" }, // 3329179618
		{ &Z_Construct_UFunction_UFGSaveSession_GetVersion, "GetVersion" }, // 1347616039
		{ &Z_Construct_UFunction_UFGSaveSession_OnActorDestroyed, "OnActorDestroyed" }, // 3127579883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSaveSession_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGSaveSession.h" },
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "Handles serialization for save and load functionality" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mNumRotatingAutosaves_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "The number of autosaves to rotate" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mNumRotatingAutosaves = { "mNumRotatingAutosaves", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSaveSession, mNumRotatingAutosaves), METADATA_PARAMS(Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mNumRotatingAutosaves_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mNumRotatingAutosaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mAutosaveInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGSaveSession.h" },
		{ "ToolTip", "How often in seconds to autosave, a value of < 0 means disabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mAutosaveInterval = { "mAutosaveInterval", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSaveSession, mAutosaveInterval), METADATA_PARAMS(Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mAutosaveInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mAutosaveInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSaveSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mNumRotatingAutosaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSaveSession_Statics::NewProp_mAutosaveInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSaveSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSaveSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSaveSession_Statics::ClassParams = {
		&UFGSaveSession::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGSaveSession_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGSaveSession_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGSaveSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSaveSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSaveSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSaveSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSaveSession, 2058780725);
	template<> FACTORYGAME_API UClass* StaticClass<UFGSaveSession>()
	{
		return UFGSaveSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSaveSession(Z_Construct_UClass_UFGSaveSession, &UFGSaveSession::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSaveSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSaveSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
