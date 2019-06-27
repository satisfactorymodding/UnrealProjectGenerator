// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_mapResolution = { UE4CodeGen_Private::EPropertyClass::Float, "mapResolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, mapResolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_worldDistance = { UE4CodeGen_Private::EPropertyClass::Float, "worldDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, worldDistance), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor = { UE4CodeGen_Private::EPropertyClass::Object, "minimapCaptureActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapDistance_Parms, minimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::NewProp_minimapCaptureActor_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, "GetMapDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGMapFunctionLibrary_eventGetMapDistance_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_mapResolution = { UE4CodeGen_Private::EPropertyClass::Float, "mapResolution", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, mapResolution), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_worldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "worldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, worldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor = { UE4CodeGen_Private::EPropertyClass::Object, "minimapCaptureActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMapPosition_Parms, minimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::NewProp_minimapCaptureActor_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, "GetMapPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(FGMapFunctionLibrary_eventGetMapPosition_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMinimapCaptureActor_Parms, ReturnValue), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetMinimapCaptureActor_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, "GetMinimapCaptureActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGMapFunctionLibrary_eventGetMinimapCaptureActor_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_worldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "worldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms, worldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor = { UE4CodeGen_Private::EPropertyClass::Object, "minimapCaptureActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms, minimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::NewProp_minimapCaptureActor_MetaData)) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, "GetNormalizedPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(FGMapFunctionLibrary_eventGetNormalizedPosition_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_max = { UE4CodeGen_Private::EPropertyClass::Struct, "max", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetWorldBounds_Parms, max), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_min = { UE4CodeGen_Private::EPropertyClass::Struct, "min", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetWorldBounds_Parms, min), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapFunctionLibrary_eventGetWorldBounds_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapFunctionLibrary, "GetWorldBounds", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(FGMapFunctionLibrary_eventGetWorldBounds_Parms), Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapDistance, "GetMapDistance" }, // 3449386251
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetMapPosition, "GetMapPosition" }, // 2155490775
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetMinimapCaptureActor, "GetMinimapCaptureActor" }, // 1653133843
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetNormalizedPosition, "GetNormalizedPosition" }, // 1577315744
		{ &Z_Construct_UFunction_UFGMapFunctionLibrary_GetWorldBounds, "GetWorldBounds" }, // 1013614980
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGMapFunctionLibrary, 1682891952);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMapFunctionLibrary(Z_Construct_UClass_UFGMapFunctionLibrary, &UFGMapFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMapFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMapFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
