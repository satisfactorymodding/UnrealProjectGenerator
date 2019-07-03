// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRailroadFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRailroadFunctionLibrary() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadFunctionLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadPathFindingResult();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid();
// End Cross Module References
	void UFGRailroadFunctionLibrary::StaticRegisterNativesUFGRailroadFunctionLibrary()
	{
		UClass* Class = UFGRailroadFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawDebugRailroadPathResult", &UFGRailroadFunctionLibrary::execDrawDebugRailroadPathResult },
			{ "DrawDebugTrackPosition", &UFGRailroadFunctionLibrary::execDrawDebugTrackPosition },
			{ "GetTrack", &UFGRailroadFunctionLibrary::execGetTrack },
			{ "GetWorldLocationAndDirection", &UFGRailroadFunctionLibrary::execGetWorldLocationAndDirection },
			{ "IsValid", &UFGRailroadFunctionLibrary::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics
	{
		struct FGRailroadFunctionLibrary_eventDrawDebugRailroadPathResult_Parms
		{
			FRailroadTrackPosition start;
			FRailroadPathFindingResult result;
			bool isPersistentLines;
		};
		static void NewProp_isPersistentLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPersistentLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_start_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_start;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_isPersistentLines_SetBit(void* Obj)
	{
		((FGRailroadFunctionLibrary_eventDrawDebugRailroadPathResult_Parms*)Obj)->isPersistentLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_isPersistentLines = { UE4CodeGen_Private::EPropertyClass::Bool, "isPersistentLines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRailroadFunctionLibrary_eventDrawDebugRailroadPathResult_Parms), &Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_isPersistentLines_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_result = { UE4CodeGen_Private::EPropertyClass::Struct, "result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventDrawDebugRailroadPathResult_Parms, result), Z_Construct_UScriptStruct_FRailroadPathFindingResult, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_result_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_result_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_start = { UE4CodeGen_Private::EPropertyClass::Struct, "start", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventDrawDebugRailroadPathResult_Parms, start), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_start_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_start_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_isPersistentLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::NewProp_start,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Debug" },
		{ "CPP_Default_isPersistentLines", "false" },
		{ "ModuleRelativePath", "FGRailroadFunctionLibrary.h" },
		{ "ToolTip", "Draw a railroad path." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, "DrawDebugRailroadPathResult", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FGRailroadFunctionLibrary_eventDrawDebugRailroadPathResult_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics
	{
		struct FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms
		{
			FRailroadTrackPosition position;
			FColor color;
			bool isPersistentLines;
		};
		static void NewProp_isPersistentLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPersistentLines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_isPersistentLines_SetBit(void* Obj)
	{
		((FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms*)Obj)->isPersistentLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_isPersistentLines = { UE4CodeGen_Private::EPropertyClass::Bool, "isPersistentLines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms), &Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_isPersistentLines_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color = { UE4CodeGen_Private::EPropertyClass::Struct, "color", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position = { UE4CodeGen_Private::EPropertyClass::Struct, "position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_isPersistentLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Debug" },
		{ "CPP_Default_isPersistentLines", "false" },
		{ "ModuleRelativePath", "FGRailroadFunctionLibrary.h" },
		{ "ToolTip", "Draw a railroad position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, "DrawDebugTrackPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics
	{
		struct FGRailroadFunctionLibrary_eventGetTrack_Parms
		{
			FRailroadTrackPosition position;
			AFGBuildableRailroadTrack* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetTrack_Parms, ReturnValue), Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position = { UE4CodeGen_Private::EPropertyClass::Struct, "position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetTrack_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TrackPosition" },
		{ "ModuleRelativePath", "FGRailroadFunctionLibrary.h" },
		{ "ToolTip", "The track segment this position is on.\n@return Track if valid position; otherwise null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, "GetTrack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGRailroadFunctionLibrary_eventGetTrack_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics
	{
		struct FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms
		{
			FRailroadTrackPosition position;
			FVector out_location;
			FVector out_direction;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_out_direction = { UE4CodeGen_Private::EPropertyClass::Struct, "out_direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms, out_direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_out_location = { UE4CodeGen_Private::EPropertyClass::Struct, "out_location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms, out_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position = { UE4CodeGen_Private::EPropertyClass::Struct, "position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_out_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_out_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TrackPosition" },
		{ "ModuleRelativePath", "FGRailroadFunctionLibrary.h" },
		{ "ToolTip", "Get the world location and direction of this track position. Zero vectors if the track is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, "GetWorldLocationAndDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics
	{
		struct FGRailroadFunctionLibrary_eventIsValid_Parms
		{
			FRailroadTrackPosition position;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGRailroadFunctionLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGRailroadFunctionLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position = { UE4CodeGen_Private::EPropertyClass::Struct, "position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventIsValid_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|TrackPosition" },
		{ "ModuleRelativePath", "FGRailroadFunctionLibrary.h" },
		{ "ToolTip", "@return Is this a valid track position." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(FGRailroadFunctionLibrary_eventIsValid_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRailroadFunctionLibrary_NoRegister()
	{
		return UFGRailroadFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugRailroadPathResult, "DrawDebugRailroadPathResult" }, // 2130914308
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition, "DrawDebugTrackPosition" }, // 85542218
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack, "GetTrack" }, // 969675277
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection, "GetWorldLocationAndDirection" }, // 3285366278
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid, "IsValid" }, // 3909776440
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGRailroadFunctionLibrary.h" },
		{ "ModuleRelativePath", "FGRailroadFunctionLibrary.h" },
		{ "ToolTip", "Function library for railroad related functions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRailroadFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::ClassParams = {
		&UFGRailroadFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRailroadFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRailroadFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRailroadFunctionLibrary, 3464467760);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRailroadFunctionLibrary(Z_Construct_UClass_UFGRailroadFunctionLibrary, &UFGRailroadFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRailroadFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRailroadFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
