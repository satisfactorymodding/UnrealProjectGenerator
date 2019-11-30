// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
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
			{ "DrawDebugTrackPosition", &UFGRailroadFunctionLibrary::execDrawDebugTrackPosition },
			{ "GetTrack", &UFGRailroadFunctionLibrary::execGetTrack },
			{ "GetWorldLocationAndDirection", &UFGRailroadFunctionLibrary::execGetWorldLocationAndDirection },
			{ "IsValid", &UFGRailroadFunctionLibrary::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_isPersistentLines = { "isPersistentLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms), &Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_isPersistentLines_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::NewProp_position_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, nullptr, "DrawDebugTrackPosition", sizeof(FGRailroadFunctionLibrary_eventDrawDebugTrackPosition_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetTrack_Parms, ReturnValue), Z_Construct_UClass_AFGBuildableRailroadTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetTrack_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::NewProp_position_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, nullptr, "GetTrack", sizeof(FGRailroadFunctionLibrary_eventGetTrack_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_out_direction = { "out_direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms, out_direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_out_location = { "out_location", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms, out_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::NewProp_position_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, nullptr, "GetWorldLocationAndDirection", sizeof(FGRailroadFunctionLibrary_eventGetWorldLocationAndDirection_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGRailroadFunctionLibrary_eventIsValid_Parms), &Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRailroadFunctionLibrary_eventIsValid_Parms, position), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::NewProp_position_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRailroadFunctionLibrary, nullptr, "IsValid", sizeof(FGRailroadFunctionLibrary_eventIsValid_Parms), Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_DrawDebugTrackPosition, "DrawDebugTrackPosition" }, // 4198327338
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetTrack, "GetTrack" }, // 403625471
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_GetWorldLocationAndDirection, "GetWorldLocationAndDirection" }, // 3310133440
		{ &Z_Construct_UFunction_UFGRailroadFunctionLibrary_IsValid, "IsValid" }, // 3373684490
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
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
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
	IMPLEMENT_CLASS(UFGRailroadFunctionLibrary, 1039816441);
	template<> FACTORYGAME_API UClass* StaticClass<UFGRailroadFunctionLibrary>()
	{
		return UFGRailroadFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRailroadFunctionLibrary(Z_Construct_UClass_UFGRailroadFunctionLibrary, &UFGRailroadFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRailroadFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRailroadFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
