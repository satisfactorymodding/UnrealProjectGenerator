// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGWaterAudio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWaterAudio() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPawnImpactAudio();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWaterAudio_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWaterAudio();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWaterVolume_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface();
// End Cross Module References
class UScriptStruct* FPawnImpactAudio::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPawnImpactAudio_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnImpactAudio, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PawnImpactAudio"), sizeof(FPawnImpactAudio), Get_Z_Construct_UScriptStruct_FPawnImpactAudio_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPawnImpactAudio>()
{
	return FPawnImpactAudio::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPawnImpactAudio(FPawnImpactAudio::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PawnImpactAudio"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPawnImpactAudio
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPawnImpactAudio()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PawnImpactAudio")),new UScriptStruct::TCppStructOps<FPawnImpactAudio>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPawnImpactAudio;
	struct Z_Construct_UScriptStruct_FPawnImpactAudio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinImpactVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinImpactVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnImpactAudio>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_ImpactEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
		{ "ToolTip", "Event to post if the pawn has the specified velocity" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_ImpactEvent = { "ImpactEvent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnImpactAudio, ImpactEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_ImpactEvent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_ImpactEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_MinImpactVelocity_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
		{ "ToolTip", "If we have at least this velocity (in Z) when entering the volume, we will post the specified event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_MinImpactVelocity = { "MinImpactVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnImpactAudio, MinImpactVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_MinImpactVelocity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_MinImpactVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_ImpactEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::NewProp_MinImpactVelocity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PawnImpactAudio",
		sizeof(FPawnImpactAudio),
		alignof(FPawnImpactAudio),
		Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnImpactAudio()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPawnImpactAudio_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PawnImpactAudio"), sizeof(FPawnImpactAudio), Get_Z_Construct_UScriptStruct_FPawnImpactAudio_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPawnImpactAudio_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPawnImpactAudio_Hash() { return 804747180U; }
	static FName NAME_UFGWaterAudio_OnCameraEnteredWater = FName(TEXT("OnCameraEnteredWater"));
	void UFGWaterAudio::OnCameraEnteredWater(AFGWaterVolume* waterVolume, FVector enterLocation, AFGPlayerController* PC) const
	{
		FGWaterAudio_eventOnCameraEnteredWater_Parms Parms;
		Parms.waterVolume=waterVolume;
		Parms.enterLocation=enterLocation;
		Parms.PC=PC;
		const_cast<UFGWaterAudio*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGWaterAudio_OnCameraEnteredWater),&Parms);
	}
	static FName NAME_UFGWaterAudio_OnCameraExitedWater = FName(TEXT("OnCameraExitedWater"));
	void UFGWaterAudio::OnCameraExitedWater(AFGWaterVolume* waterVolume, FVector exitLocation, AFGPlayerController* PC) const
	{
		FGWaterAudio_eventOnCameraExitedWater_Parms Parms;
		Parms.waterVolume=waterVolume;
		Parms.exitLocation=exitLocation;
		Parms.PC=PC;
		const_cast<UFGWaterAudio*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGWaterAudio_OnCameraExitedWater),&Parms);
	}
	static FName NAME_UFGWaterAudio_OnPawnHitSurface = FName(TEXT("OnPawnHitSurface"));
	void UFGWaterAudio::OnPawnHitSurface(AFGWaterVolume* waterVolume, APawn* pawn, FVector surfaceLocation) const
	{
		FGWaterAudio_eventOnPawnHitSurface_Parms Parms;
		Parms.waterVolume=waterVolume;
		Parms.pawn=pawn;
		Parms.surfaceLocation=surfaceLocation;
		const_cast<UFGWaterAudio*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGWaterAudio_OnPawnHitSurface),&Parms);
	}
	void UFGWaterAudio::StaticRegisterNativesUFGWaterAudio()
	{
		UClass* Class = UFGWaterAudio::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetImpactEvent", &UFGWaterAudio::execGetImpactEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics
	{
		struct FGWaterAudio_eventGetImpactEvent_Parms
		{
			APawn* pawn;
			UAkAudioEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventGetImpactEvent_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventGetImpactEvent_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water|Audio" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
		{ "ToolTip", "Get the impact event that a pawn should post when it hits the water surface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWaterAudio, nullptr, "GetImpactEvent", sizeof(FGWaterAudio_eventGetImpactEvent_Parms), Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_enterLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_waterVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnCameraEnteredWater_Parms, PC), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::NewProp_enterLocation = { "enterLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnCameraEnteredWater_Parms, enterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::NewProp_waterVolume = { "waterVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnCameraEnteredWater_Parms, waterVolume), Z_Construct_UClass_AFGWaterVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::NewProp_PC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::NewProp_enterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::NewProp_waterVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water|Audio" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
		{ "ToolTip", "Called whenever the camera entered water" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWaterAudio, nullptr, "OnCameraEnteredWater", sizeof(FGWaterAudio_eventOnCameraEnteredWater_Parms), Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_exitLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_waterVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnCameraExitedWater_Parms, PC), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::NewProp_exitLocation = { "exitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnCameraExitedWater_Parms, exitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::NewProp_waterVolume = { "waterVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnCameraExitedWater_Parms, waterVolume), Z_Construct_UClass_AFGWaterVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::NewProp_PC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::NewProp_exitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::NewProp_waterVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water|Audio" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
		{ "ToolTip", "Called whenever the camera entered water" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWaterAudio, nullptr, "OnCameraExitedWater", sizeof(FGWaterAudio_eventOnCameraExitedWater_Parms), Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_surfaceLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_waterVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::NewProp_surfaceLocation = { "surfaceLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnPawnHitSurface_Parms, surfaceLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnPawnHitSurface_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::NewProp_waterVolume = { "waterVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWaterAudio_eventOnPawnHitSurface_Parms, waterVolume), Z_Construct_UClass_AFGWaterVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::NewProp_surfaceLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::NewProp_pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::NewProp_waterVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water|Audio" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
		{ "ToolTip", "Called whenever a pawn hits the surface of the water volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWaterAudio, nullptr, "OnPawnHitSurface", sizeof(FGWaterAudio_eventOnPawnHitSurface_Parms), Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGWaterAudio_NoRegister()
	{
		return UFGWaterAudio::StaticClass();
	}
	struct Z_Construct_UClass_UFGWaterAudio_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mImpactAudioMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mImpactAudioMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mImpactAudioMap_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWaterAudio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGWaterAudio_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGWaterAudio_GetImpactEvent, "GetImpactEvent" }, // 2417628801
		{ &Z_Construct_UFunction_UFGWaterAudio_OnCameraEnteredWater, "OnCameraEnteredWater" }, // 2759626082
		{ &Z_Construct_UFunction_UFGWaterAudio_OnCameraExitedWater, "OnCameraExitedWater" }, // 2704730073
		{ &Z_Construct_UFunction_UFGWaterAudio_OnPawnHitSurface, "OnPawnHitSurface" }, // 2831014102
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWaterAudio_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGWaterAudio.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWaterAudio_Statics::NewProp_mImpactAudioMap_MetaData[] = {
		{ "Category", "Water|Audio" },
		{ "ModuleRelativePath", "FGWaterAudio.h" },
		{ "ToolTip", "Audio effects to play whenever a pawn hits the water surface with a specified velocity" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGWaterAudio_Statics::NewProp_mImpactAudioMap = { "mImpactAudioMap", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWaterAudio, mImpactAudioMap), METADATA_PARAMS(Z_Construct_UClass_UFGWaterAudio_Statics::NewProp_mImpactAudioMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWaterAudio_Statics::NewProp_mImpactAudioMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGWaterAudio_Statics::NewProp_mImpactAudioMap_Inner = { "mImpactAudioMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPawnImpactAudio, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWaterAudio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWaterAudio_Statics::NewProp_mImpactAudioMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWaterAudio_Statics::NewProp_mImpactAudioMap_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWaterAudio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWaterAudio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWaterAudio_Statics::ClassParams = {
		&UFGWaterAudio::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGWaterAudio_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGWaterAudio_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGWaterAudio_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWaterAudio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWaterAudio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWaterAudio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWaterAudio, 3815143608);
	template<> FACTORYGAME_API UClass* StaticClass<UFGWaterAudio>()
	{
		return UFGWaterAudio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWaterAudio(Z_Construct_UClass_UFGWaterAudio, &UFGWaterAudio::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWaterAudio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWaterAudio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
