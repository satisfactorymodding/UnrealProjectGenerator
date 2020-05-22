// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGWorldSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWorldSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWorldSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliageRemovalSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAudioVolumeSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoundationSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSkySphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AExponentialHeightFog_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FExponentialFogSettings();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWaterVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAmbientVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGAtmosphereVolume_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void AFGWorldSettings::StaticRegisterNativesAFGWorldSettings()
	{
		UClass* Class = AFGWorldSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelStartedAkEvent", &AFGWorldSettings::execGetLevelStartedAkEvent },
			{ "UpdateWorldBounds", &AFGWorldSettings::execUpdateWorldBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics
	{
		struct FGWorldSettings_eventGetLevelStartedAkEvent_Parms
		{
			UAkAudioEvent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGWorldSettings_eventGetLevelStartedAkEvent_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Level|Audio" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Get the event to post when we start the level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWorldSettings, nullptr, "GetLevelStartedAkEvent", sizeof(FGWorldSettings_eventGetLevelStartedAkEvent_Parms), Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FactoryGame|Level" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Update the world bounds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWorldSettings, nullptr, "UpdateWorldBounds", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGWorldSettings_NoRegister()
	{
		return AFGWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_AFGWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreviewHour_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPreviewHour;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFoliageRemovalSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFoliageRemovalSubsystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAudioVolumeSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAudioVolumeSubsystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFoundationSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFoundationSubsystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildableSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBuildableSubsystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStartTimeOfDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mStartTimeOfDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultLoadSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mDefaultLoadSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLevelStartedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLevelStartedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinimapCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMinimapCaptureActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSkySphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSkySphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExponentialHeightFog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExponentialHeightFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultHeightFogSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDefaultHeightFogSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWaterVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mWaterVolumes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWaterVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAmbientVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAmbientVolumes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAmbientVolumes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFogVolumes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFogVolumes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGWorldSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGWorldSettings_GetLevelStartedAkEvent, "GetLevelStartedAkEvent" }, // 3413888621
		{ &Z_Construct_UFunction_AFGWorldSettings_UpdateWorldBounds, "UpdateWorldBounds" }, // 1147709826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
		{ "IncludePath", "FGWorldSettings.h" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mPreviewHour_MetaData[] = {
		{ "Category", "Time" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Set the hour you want to preview here, 16.25 means 16h 15min" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mPreviewHour = { "mPreviewHour", nullptr, (EPropertyFlags)0x0040000800000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mPreviewHour), METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mPreviewHour_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mPreviewHour_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoliageRemovalSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoliageRemovalSubsystem = { "mFoliageRemovalSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mFoliageRemovalSubsystem), Z_Construct_UClass_AFGFoliageRemovalSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoliageRemovalSubsystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoliageRemovalSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAudioVolumeSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAudioVolumeSubsystem = { "mAudioVolumeSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mAudioVolumeSubsystem), Z_Construct_UClass_AFGAudioVolumeSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAudioVolumeSubsystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAudioVolumeSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoundationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoundationSubsystem = { "mFoundationSubsystem", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mFoundationSubsystem), Z_Construct_UClass_AFGFoundationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoundationSubsystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoundationSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mBuildableSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mBuildableSubsystem = { "mBuildableSubsystem", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mBuildableSubsystem), Z_Construct_UClass_AFGBuildableSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mBuildableSubsystem_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mBuildableSubsystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mStartTimeOfDay_MetaData[] = {
		{ "Category", "Time" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Time of day to start the day (in hours)" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mStartTimeOfDay = { "mStartTimeOfDay", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mStartTimeOfDay), METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mStartTimeOfDay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mStartTimeOfDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultLoadSave_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Save game that we should load by default when entering the map" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultLoadSave = { "mDefaultLoadSave", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mDefaultLoadSave), METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultLoadSave_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultLoadSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mLevelStartedEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Different events for different levels, so they can start different playlists" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mLevelStartedEvent = { "mLevelStartedEvent", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mLevelStartedEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mLevelStartedEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mLevelStartedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mMinimapCaptureActor_MetaData[] = {
		{ "Category", "Minimap" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "The minimap capture actor of this level, might be null" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mMinimapCaptureActor = { "mMinimapCaptureActor", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mMinimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mMinimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mMinimapCaptureActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mSkySphere_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Set the sky sphere that's placed in the world here" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mSkySphere = { "mSkySphere", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mSkySphere), Z_Construct_UClass_AFGSkySphere_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mSkySphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mSkySphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mExponentialHeightFog_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "Set the height fog that's placed in the world here" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mExponentialHeightFog = { "mExponentialHeightFog", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mExponentialHeightFog), Z_Construct_UClass_AExponentialHeightFog_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mExponentialHeightFog_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mExponentialHeightFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultHeightFogSettings_MetaData[] = {
		{ "Category", "HeightFog" },
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "The default settings of the exponential height fog to apply" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultHeightFogSettings = { "mDefaultHeightFogSettings", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mDefaultHeightFogSettings), Z_Construct_UScriptStruct_FExponentialFogSettings, METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultHeightFogSettings_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultHeightFogSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mWaterVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "All the water volumes currently streamed in" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mWaterVolumes = { "mWaterVolumes", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mWaterVolumes), METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mWaterVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mWaterVolumes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mWaterVolumes_Inner = { "mWaterVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGWaterVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAmbientVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "All the ambient volumes currently streamed in" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAmbientVolumes = { "mAmbientVolumes", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mAmbientVolumes), METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAmbientVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAmbientVolumes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAmbientVolumes_Inner = { "mAmbientVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGAmbientVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFogVolumes_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGWorldSettings.h" },
		{ "ToolTip", "All the fog volumes currently streamed in, sorted in ascending order of priority." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFogVolumes = { "mFogVolumes", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGWorldSettings, mFogVolumes), METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFogVolumes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFogVolumes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFogVolumes_Inner = { "mFogVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGAtmosphereVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGWorldSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mPreviewHour,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoliageRemovalSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAudioVolumeSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFoundationSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mBuildableSubsystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mStartTimeOfDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultLoadSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mLevelStartedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mMinimapCaptureActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mSkySphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mExponentialHeightFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mDefaultHeightFogSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mWaterVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mWaterVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAmbientVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mAmbientVolumes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFogVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWorldSettings_Statics::NewProp_mFogVolumes_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGWorldSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGWorldSettings, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWorldSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWorldSettings_Statics::ClassParams = {
		&AFGWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGWorldSettings_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGWorldSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWorldSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWorldSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWorldSettings, 919613152);
	template<> FACTORYGAME_API UClass* StaticClass<AFGWorldSettings>()
	{
		return AFGWorldSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWorldSettings(Z_Construct_UClass_AFGWorldSettings, &AFGWorldSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWorldSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWorldSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
