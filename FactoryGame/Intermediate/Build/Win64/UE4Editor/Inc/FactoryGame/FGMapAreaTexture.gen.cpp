// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMapAreaTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMapAreaTexture() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FColorMapAreaPair();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapArea_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapAreaTexture_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapAreaTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGameState_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister();
// End Cross Module References
class UScriptStruct* FColorMapAreaPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FColorMapAreaPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorMapAreaPair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ColorMapAreaPair"), sizeof(FColorMapAreaPair), Get_Z_Construct_UScriptStruct_FColorMapAreaPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorMapAreaPair(FColorMapAreaPair::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ColorMapAreaPair"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFColorMapAreaPair
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFColorMapAreaPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ColorMapAreaPair")),new UScriptStruct::TCppStructOps<FColorMapAreaPair>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFColorMapAreaPair;
	struct Z_Construct_UScriptStruct_FColorMapAreaPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MapArea;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaletteColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaletteColor;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorMapAreaPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxY_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxY = { UE4CodeGen_Private::EPropertyClass::Int, "MaxY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorMapAreaPair, MaxY), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxX_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxX = { UE4CodeGen_Private::EPropertyClass::Int, "MaxX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorMapAreaPair, MaxX), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinY_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinY = { UE4CodeGen_Private::EPropertyClass::Int, "MinY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorMapAreaPair, MinY), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinX_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "A top left pixel that together with MaxX/MaxY encompasses the entire area" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinX = { UE4CodeGen_Private::EPropertyClass::Int, "MinX", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FColorMapAreaPair, MinX), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MapArea_MetaData[] = {
		{ "Category", "ColorMapAreaPair" },
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MapArea = { UE4CodeGen_Private::EPropertyClass::Class, "MapArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(FColorMapAreaPair, MapArea), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MapArea_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MapArea_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_PaletteColor_MetaData[] = {
		{ "Category", "ColorMapAreaPair" },
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_PaletteColor = { UE4CodeGen_Private::EPropertyClass::Struct, "PaletteColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000800030001, 1, nullptr, STRUCT_OFFSET(FColorMapAreaPair, PaletteColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_PaletteColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_PaletteColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MaxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MinX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_MapArea,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::NewProp_PaletteColor,
#endif // WITH_EDITORONLY_DATA
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ColorMapAreaPair",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FColorMapAreaPair),
		alignof(FColorMapAreaPair),
		Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorMapAreaPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorMapAreaPair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorMapAreaPair"), sizeof(FColorMapAreaPair), Get_Z_Construct_UScriptStruct_FColorMapAreaPair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorMapAreaPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorMapAreaPair_CRC() { return 4080619899U; }
	void UFGMapAreaTexture::StaticRegisterNativesUFGMapAreaTexture()
	{
		UClass* Class = UFGMapAreaTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFogOfWarTexture", &UFGMapAreaTexture::execGetFogOfWarTexture },
			{ "OnNewMapAreaVisisted", &UFGMapAreaTexture::execOnNewMapAreaVisisted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics
	{
		struct FGMapAreaTexture_eventGetFogOfWarTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMapAreaTexture_eventGetFogOfWarTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fog of War" },
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "Returns the current fog of war texture that has been generated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapAreaTexture, "GetFogOfWarTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGMapAreaTexture_eventGetFogOfWarTexture_Parms), Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics
	{
		struct FGMapAreaTexture_eventOnNewMapAreaVisisted_Parms
		{
			TSubclassOf<UFGMapArea>  newMapArea;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_newMapArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::NewProp_newMapArea = { UE4CodeGen_Private::EPropertyClass::Class, "newMapArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGMapAreaTexture_eventOnNewMapAreaVisisted_Parms, newMapArea), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::NewProp_newMapArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "Called when any player enters a new area on the map, should case a redraw of the fog of war texture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapAreaTexture, "OnNewMapAreaVisisted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGMapAreaTexture_eventOnNewMapAreaVisisted_Parms), Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMapAreaTexture_NoRegister()
	{
		return UFGMapAreaTexture::StaticClass();
	}
	struct Z_Construct_UClass_UFGMapAreaTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedGameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedGameState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDataWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDataWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCaptureActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mColorToArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mColorToArea;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mColorToArea_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mColorPalette_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mColorPalette;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mColorPalette_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAreaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAreaData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mAreaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFogOfWarTexture;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAreaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAreaTexture;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMapAreaTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMapAreaTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMapAreaTexture_GetFogOfWarTexture, "GetFogOfWarTexture" }, // 3294988145
		{ &Z_Construct_UFunction_UFGMapAreaTexture_OnNewMapAreaVisisted, "OnNewMapAreaVisisted" }, // 2775582800
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGMapAreaTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCachedGameState_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCachedGameState = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedGameState", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mCachedGameState), Z_Construct_UClass_AFGGameState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCachedGameState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCachedGameState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mDataWidth_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "The width of the data and the texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mDataWidth = { UE4CodeGen_Private::EPropertyClass::Int, "mDataWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mDataWidth), METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mDataWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mDataWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCaptureActor_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "A cached camera in the Skye" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCaptureActor = { UE4CodeGen_Private::EPropertyClass::Object, "mCaptureActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCaptureActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorToArea_MetaData[] = {
		{ "Category", "2. Assign areas to match Palette" },
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorToArea = { UE4CodeGen_Private::EPropertyClass::Array, "mColorToArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mColorToArea), METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorToArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorToArea_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorToArea_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mColorToArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColorMapAreaPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorPalette_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "This are all the unique colors found in the texture" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorPalette = { UE4CodeGen_Private::EPropertyClass::Array, "mColorPalette", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mColorPalette), METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorPalette_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorPalette_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorPalette_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mColorPalette", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaData_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "This is where we store the raw data we generated from the texture" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaData = { UE4CodeGen_Private::EPropertyClass::Array, "mAreaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mAreaData), METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaData_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "mAreaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mFogOfWarTexture_MetaData[] = {
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "The current fog of war is generated to this texture" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mFogOfWarTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mFogOfWarTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mFogOfWarTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mFogOfWarTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mFogOfWarTexture_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaTexture_MetaData[] = {
		{ "Category", "1. Pick a texture" },
		{ "ModuleRelativePath", "FGMapAreaTexture.h" },
		{ "ToolTip", "This is the texture that the level designers made to define areas on the map" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mAreaTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800010001, 1, nullptr, STRUCT_OFFSET(UFGMapAreaTexture, mAreaTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMapAreaTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCachedGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mDataWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mCaptureActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorToArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorToArea_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorPalette,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mColorPalette_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mFogOfWarTexture,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapAreaTexture_Statics::NewProp_mAreaTexture,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMapAreaTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMapAreaTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMapAreaTexture_Statics::ClassParams = {
		&UFGMapAreaTexture::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMapAreaTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMapAreaTexture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMapAreaTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMapAreaTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMapAreaTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMapAreaTexture, 2364363428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMapAreaTexture(Z_Construct_UClass_UFGMapAreaTexture, &UFGMapAreaTexture::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMapAreaTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMapAreaTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
