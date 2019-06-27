// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGAmbientSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAmbientSettings() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAmbientSettings_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAmbientSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation();
// End Cross Module References
	static FName NAME_UFGAmbientSettings_GetEnterInnerVolumeEvent = FName(TEXT("GetEnterInnerVolumeEvent"));
	UAkAudioEvent* UFGAmbientSettings::GetEnterInnerVolumeEvent() const
	{
		FGAmbientSettings_eventGetEnterInnerVolumeEvent_Parms Parms;
		const_cast<UFGAmbientSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGAmbientSettings_GetEnterInnerVolumeEvent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAmbientSettings_GetEnterOuterVolumeEvent = FName(TEXT("GetEnterOuterVolumeEvent"));
	UAkAudioEvent* UFGAmbientSettings::GetEnterOuterVolumeEvent() const
	{
		FGAmbientSettings_eventGetEnterOuterVolumeEvent_Parms Parms;
		const_cast<UFGAmbientSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGAmbientSettings_GetEnterOuterVolumeEvent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAmbientSettings_OnEnterInnerVolume = FName(TEXT("OnEnterInnerVolume"));
	void UFGAmbientSettings::OnEnterInnerVolume(UAkComponent* ambientComponent) const
	{
		FGAmbientSettings_eventOnEnterInnerVolume_Parms Parms;
		Parms.ambientComponent=ambientComponent;
		const_cast<UFGAmbientSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGAmbientSettings_OnEnterInnerVolume),&Parms);
	}
	static FName NAME_UFGAmbientSettings_OnEnterOuterVolume = FName(TEXT("OnEnterOuterVolume"));
	void UFGAmbientSettings::OnEnterOuterVolume(UAkComponent* ambientComponent) const
	{
		FGAmbientSettings_eventOnEnterOuterVolume_Parms Parms;
		Parms.ambientComponent=ambientComponent;
		const_cast<UFGAmbientSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGAmbientSettings_OnEnterOuterVolume),&Parms);
	}
	static FName NAME_UFGAmbientSettings_OnExitInnerVolume = FName(TEXT("OnExitInnerVolume"));
	void UFGAmbientSettings::OnExitInnerVolume(UAkComponent* ambientComponent) const
	{
		FGAmbientSettings_eventOnExitInnerVolume_Parms Parms;
		Parms.ambientComponent=ambientComponent;
		const_cast<UFGAmbientSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGAmbientSettings_OnExitInnerVolume),&Parms);
	}
	static FName NAME_UFGAmbientSettings_OnExitOuterVolume = FName(TEXT("OnExitOuterVolume"));
	void UFGAmbientSettings::OnExitOuterVolume(UAkComponent* ambientComponent) const
	{
		FGAmbientSettings_eventOnExitOuterVolume_Parms Parms;
		Parms.ambientComponent=ambientComponent;
		const_cast<UFGAmbientSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGAmbientSettings_OnExitOuterVolume),&Parms);
	}
	static FName NAME_UFGAmbientSettings_ShouldIgnoreListenerRotation = FName(TEXT("ShouldIgnoreListenerRotation"));
	bool UFGAmbientSettings::ShouldIgnoreListenerRotation() const
	{
		FGAmbientSettings_eventShouldIgnoreListenerRotation_Parms Parms;
		const_cast<UFGAmbientSettings*>(this)->ProcessEvent(FindFunctionChecked(NAME_UFGAmbientSettings_ShouldIgnoreListenerRotation),&Parms);
		return !!Parms.ReturnValue;
	}
	void UFGAmbientSettings::StaticRegisterNativesUFGAmbientSettings()
	{
		UClass* Class = UFGAmbientSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnterInnerVolumeEvent", &UFGAmbientSettings::execGetEnterInnerVolumeEvent },
			{ "GetEnterOuterVolumeEvent", &UFGAmbientSettings::execGetEnterOuterVolumeEvent },
			{ "OnEnterInnerVolume", &UFGAmbientSettings::execOnEnterInnerVolume },
			{ "OnEnterOuterVolume", &UFGAmbientSettings::execOnEnterOuterVolume },
			{ "OnExitInnerVolume", &UFGAmbientSettings::execOnExitInnerVolume },
			{ "OnExitOuterVolume", &UFGAmbientSettings::execOnExitOuterVolume },
			{ "ShouldIgnoreListenerRotation", &UFGAmbientSettings::execShouldIgnoreListenerRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAmbientSettings_eventGetEnterInnerVolumeEvent_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Get the event that is played whenever you get close to the ambient volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAmbientSettings, "GetEnterInnerVolumeEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAmbientSettings_eventGetEnterInnerVolumeEvent_Parms), Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAmbientSettings_eventGetEnterOuterVolumeEvent_Parms, ReturnValue), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Get the event that is played whenever you get close to the ambient volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAmbientSettings, "GetEnterOuterVolumeEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAmbientSettings_eventGetEnterOuterVolumeEvent_Parms), Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ambientComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ambientComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::NewProp_ambientComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::NewProp_ambientComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ambientComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGAmbientSettings_eventOnEnterInnerVolume_Parms, ambientComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::NewProp_ambientComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::NewProp_ambientComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::NewProp_ambientComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Called when the camera is entering the the ambient volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAmbientSettings, "OnEnterInnerVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAmbientSettings_eventOnEnterInnerVolume_Parms), Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ambientComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ambientComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::NewProp_ambientComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::NewProp_ambientComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ambientComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGAmbientSettings_eventOnEnterOuterVolume_Parms, ambientComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::NewProp_ambientComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::NewProp_ambientComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::NewProp_ambientComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Called when we are getting close to the attenuation radius of the ambient volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAmbientSettings, "OnEnterOuterVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAmbientSettings_eventOnEnterOuterVolume_Parms), Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ambientComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ambientComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::NewProp_ambientComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::NewProp_ambientComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ambientComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGAmbientSettings_eventOnExitInnerVolume_Parms, ambientComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::NewProp_ambientComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::NewProp_ambientComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::NewProp_ambientComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Called when the camera is leaving the ambient volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAmbientSettings, "OnExitInnerVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAmbientSettings_eventOnExitInnerVolume_Parms), Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ambientComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ambientComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::NewProp_ambientComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::NewProp_ambientComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ambientComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGAmbientSettings_eventOnExitOuterVolume_Parms, ambientComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::NewProp_ambientComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::NewProp_ambientComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::NewProp_ambientComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Called when we are far away from the attenuation radius of the ambient volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAmbientSettings, "OnExitOuterVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAmbientSettings_eventOnExitOuterVolume_Parms), Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGAmbientSettings_eventShouldIgnoreListenerRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGAmbientSettings_eventShouldIgnoreListenerRotation_Parms), &Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Check if we should ignore the rotation of the listener when inside the volume" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAmbientSettings, "ShouldIgnoreListenerRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAmbientSettings_eventShouldIgnoreListenerRotation_Parms), Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAmbientSettings_NoRegister()
	{
		return UFGAmbientSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFGAmbientSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIgnoreListenerRotation_MetaData[];
#endif
		static void NewProp_mIgnoreListenerRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIgnoreListenerRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnExitInnerVolumeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOnExitInnerVolumeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnEnterInnerVolumeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOnEnterInnerVolumeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnExitOuterVolumeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOnExitOuterVolumeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnEnterOuterVolumeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOnEnterOuterVolumeEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAmbientSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAmbientSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAmbientSettings_GetEnterInnerVolumeEvent, "GetEnterInnerVolumeEvent" }, // 2162642661
		{ &Z_Construct_UFunction_UFGAmbientSettings_GetEnterOuterVolumeEvent, "GetEnterOuterVolumeEvent" }, // 1816733260
		{ &Z_Construct_UFunction_UFGAmbientSettings_OnEnterInnerVolume, "OnEnterInnerVolume" }, // 1888104665
		{ &Z_Construct_UFunction_UFGAmbientSettings_OnEnterOuterVolume, "OnEnterOuterVolume" }, // 100602637
		{ &Z_Construct_UFunction_UFGAmbientSettings_OnExitInnerVolume, "OnExitInnerVolume" }, // 1506773946
		{ &Z_Construct_UFunction_UFGAmbientSettings_OnExitOuterVolume, "OnExitOuterVolume" }, // 772202124
		{ &Z_Construct_UFunction_UFGAmbientSettings_ShouldIgnoreListenerRotation, "ShouldIgnoreListenerRotation" }, // 3923197190
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAmbientSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGAmbientSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mIgnoreListenerRotation_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "If checked, then we don't rotate the audio source to match the rotation of the listener when inside the volume" },
	};
#endif
	void Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mIgnoreListenerRotation_SetBit(void* Obj)
	{
		((UFGAmbientSettings*)Obj)->mIgnoreListenerRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mIgnoreListenerRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "mIgnoreListenerRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFGAmbientSettings), &Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mIgnoreListenerRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mIgnoreListenerRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mIgnoreListenerRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitInnerVolumeEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Event to post when OnExit is triggered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitInnerVolumeEvent = { UE4CodeGen_Private::EPropertyClass::Object, "mOnExitInnerVolumeEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UFGAmbientSettings, mOnExitInnerVolumeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitInnerVolumeEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitInnerVolumeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterInnerVolumeEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Event to post when OnEnter is triggered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterInnerVolumeEvent = { UE4CodeGen_Private::EPropertyClass::Object, "mOnEnterInnerVolumeEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UFGAmbientSettings, mOnEnterInnerVolumeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterInnerVolumeEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterInnerVolumeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitOuterVolumeEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Event to post when OnGetFar is triggered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitOuterVolumeEvent = { UE4CodeGen_Private::EPropertyClass::Object, "mOnExitOuterVolumeEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UFGAmbientSettings, mOnExitOuterVolumeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitOuterVolumeEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitOuterVolumeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterOuterVolumeEvent_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "FGAmbientSettings.h" },
		{ "ToolTip", "Event to post when OnGetClose is triggered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterOuterVolumeEvent = { UE4CodeGen_Private::EPropertyClass::Object, "mOnEnterOuterVolumeEvent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010015, 1, nullptr, STRUCT_OFFSET(UFGAmbientSettings, mOnEnterOuterVolumeEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterOuterVolumeEvent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterOuterVolumeEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAmbientSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mIgnoreListenerRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitInnerVolumeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterInnerVolumeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnExitOuterVolumeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAmbientSettings_Statics::NewProp_mOnEnterOuterVolumeEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAmbientSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAmbientSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAmbientSettings_Statics::ClassParams = {
		&UFGAmbientSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGAmbientSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGAmbientSettings_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAmbientSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAmbientSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAmbientSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAmbientSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAmbientSettings, 3079220646);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAmbientSettings(Z_Construct_UClass_UFGAmbientSettings, &UFGAmbientSettings::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAmbientSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAmbientSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
