// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMapFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMapFunctionLibrary() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapFunctionLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds();
// End Cross Module References
	void UFGMapFunctionLibrary::StaticRegisterNativesUFGMapFunctionLibrary()
	{
		UClass* Class = UFGMapFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMapDistance", &UFGMapFunctionLibrary::execGetMapDistance },
			{ "GetMapPosition", &UFGMapFunctionLibrary::execGetMapPosition },
			{ "GetMinimapCaptureActor", &UFGMapFunctionLibrary::execGetMinimapCaptureActor },
			{ "GetNormalizedPosition", &UFGMapFunctionLibrary::execGetNormalizedPosition },
			{ "GetWorldBounds", &UFGMapFunctionLibrary::execGetWorldBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics
	{
		struct FGMapFunctionLibrary_eventGetMapDistance_Parms
		{
			const AFGMinimapCaptureActor* minimapCaptureActor;
			float worldDistance;
			float mapResolution;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapResolution;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_worldDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minimapCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_minimapCaptureActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_mapResolution = { "mapResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, mapResolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_worldDistance = { "worldDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, worldDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor = { "minimapCaptureActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, minimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_mapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_worldDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "FGMapFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, nullptr, "GetMapDistance", sizeof(FGMapFunctionLibrary_eventGetMapDistance_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics
	{
		struct FGMapFunctionLibrary_eventGetMapPosition_Parms
		{
			const AFGMinimapCaptureActor* minimapCaptureActor;
			FVector worldLocation;
			float mapResolution;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mapResolution;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_worldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minimapCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_minimapCaptureActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_mapResolution = { "mapResolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, mapResolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_worldLocation = { "worldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, worldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor = { "minimapCaptureActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, minimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_mapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_worldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "FGMapFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, nullptr, "GetMapPosition", sizeof(FGMapFunctionLibrary_eventGetMapPosition_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics
	{
		struct FGMapFunctionLibrary_eventGetMinimapCaptureActor_Parms
		{
			UObject* worldContext;
			AFGMinimapCaptureActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMinimapCaptureActor_Parms, ReturnValue), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMinimapCaptureActor_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "FGMapFunctionLibrary.h" },
		{ "ToolTip", "Get the minimap capture actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, nullptr, "GetMinimapCaptureActor", sizeof(FGMapFunctionLibrary_eventGetMinimapCaptureActor_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics
	{
		struct FGMapFunctionLibrary_eventGetNormalizedPosition_Parms
		{
			const AFGMinimapCaptureActor* minimapCaptureActor;
			FVector worldLocation;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_worldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minimapCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_minimapCaptureActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_worldLocation = { "worldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms, worldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor = { "minimapCaptureActor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms, minimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_worldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "FGMapFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, nullptr, "GetNormalizedPosition", sizeof(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics
	{
		struct FGMapFunctionLibrary_eventGetWorldBounds_Parms
		{
			UObject* worldContext;
			FVector2D min;
			FVector2D max;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_max;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_min;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetWorldBounds_Parms, max), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetWorldBounds_Parms, min), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetWorldBounds_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "FGMapFunctionLibrary.h" },
		{ "ToolTip", "Get the bounds of the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, nullptr, "GetWorldBounds", sizeof(FGMapFunctionLibrary_eventGetWorldBounds_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMapFunctionLibrary_NoRegister()
	{
		return UFGMapFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGMapFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMapFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMapFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance, "GetMapDistance" }, // 1265462546
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition, "GetMapPosition" }, // 3730180441
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor, "GetMinimapCaptureActor" }, // 3210687151
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition, "GetNormalizedPosition" }, // 494817452
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds, "GetWorldBounds" }, // 1507689880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGMapFunctionLibrary.h" },
		{ "ModuleRelativePath", "FGMapFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMapFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMapFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMapFunctionLibrary_Statics::ClassParams = {
		&UFGMapFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFGMapFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMapFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMapFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMapFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMapFunctionLibrary, 1405279573);
	template<> FACTORYGAME_API UClass* StaticClass<UFGMapFunctionLibrary>()
	{
		return UFGMapFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMapFunctionLibrary(Z_Construct_UClass_UFGMapFunctionLibrary, &UFGMapFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMapFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMapFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
