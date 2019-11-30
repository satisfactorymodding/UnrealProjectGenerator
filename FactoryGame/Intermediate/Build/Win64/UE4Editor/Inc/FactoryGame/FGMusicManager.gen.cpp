// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGMusicManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMusicManager() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMusicManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMusicManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMusicManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapArea_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMusicManager_Pause();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMusicManager_Play();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMusicManager_Stop();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	static FName NAME_UFGMusicManager_NotifyPostLoadMap = FName(TEXT("NotifyPostLoadMap"));
	void UFGMusicManager::NotifyPostLoadMap(UWorld* loadedWorld, AWorldSettings* worldSettings)
	{
		FGMusicManager_eventNotifyPostLoadMap_Parms Parms;
		Parms.loadedWorld=loadedWorld;
		Parms.worldSettings=worldSettings;
		ProcessEvent(FindFunctionChecked(NAME_UFGMusicManager_NotifyPostLoadMap),&Parms);
	}
	static FName NAME_UFGMusicManager_OnPlayerEnteredArea = FName(TEXT("OnPlayerEnteredArea"));
	void UFGMusicManager::OnPlayerEnteredArea(TSubclassOf<UFGMapArea>  mapArea)
	{
		FGMusicManager_eventOnPlayerEnteredArea_Parms Parms;
		Parms.mapArea=mapArea;
		ProcessEvent(FindFunctionChecked(NAME_UFGMusicManager_OnPlayerEnteredArea),&Parms);
	}
	static FName NAME_UFGMusicManager_OnPlayerNearBaseChanged = FName(TEXT("OnPlayerNearBaseChanged"));
	void UFGMusicManager::OnPlayerNearBaseChanged(bool isNear)
	{
		FGMusicManager_eventOnPlayerNearBaseChanged_Parms Parms;
		Parms.isNear=isNear ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFGMusicManager_OnPlayerNearBaseChanged),&Parms);
	}
	static FName NAME_UFGMusicManager_Pause = FName(TEXT("Pause"));
	void UFGMusicManager::Pause()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGMusicManager_Pause),NULL);
	}
	static FName NAME_UFGMusicManager_Play = FName(TEXT("Play"));
	void UFGMusicManager::Play()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGMusicManager_Play),NULL);
	}
	static FName NAME_UFGMusicManager_Stop = FName(TEXT("Stop"));
	void UFGMusicManager::Stop()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGMusicManager_Stop),NULL);
	}
	void UFGMusicManager::StaticRegisterNativesUFGMusicManager()
	{
		UClass* Class = UFGMusicManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UFGMusicManager::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMusicManager_Get_Statics
	{
		struct FGMusicManager_eventGet_Parms
		{
			UObject* worldContext;
			UFGMusicManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMusicManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMusicManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_UFGMusicManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMusicManager_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMusicManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMusicManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMusicManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMusicManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMusicManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Music" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetMusicManager" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "To easy access the music manager from anywhere, can return null if world context is invalid or no music manager is spawned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMusicManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMusicManager, nullptr, "Get", sizeof(FGMusicManager_eventGet_Parms), Z_Construct_UFunction_UFGMusicManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMusicManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMusicManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMusicManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldSettings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_loadedWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::NewProp_worldSettings = { "worldSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMusicManager_eventNotifyPostLoadMap_Parms, worldSettings), Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::NewProp_loadedWorld = { "loadedWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMusicManager_eventNotifyPostLoadMap_Parms, loadedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::NewProp_worldSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::NewProp_loadedWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "DisplayName", "OnPostLoadMap" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "Notify that a new map has been loaded." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMusicManager, nullptr, "NotifyPostLoadMap", sizeof(FGMusicManager_eventNotifyPostLoadMap_Parms), Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mapArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::NewProp_mapArea = { "mapArea", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMusicManager_eventOnPlayerEnteredArea_Parms, mapArea), Z_Construct_UClass_UFGMapArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::NewProp_mapArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "Called whenever a player enters an area" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMusicManager, nullptr, "OnPlayerEnteredArea", sizeof(FGMusicManager_eventOnPlayerEnteredArea_Parms), Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics
	{
		static void NewProp_isNear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::NewProp_isNear_SetBit(void* Obj)
	{
		((FGMusicManager_eventOnPlayerNearBaseChanged_Parms*)Obj)->isNear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::NewProp_isNear = { "isNear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGMusicManager_eventOnPlayerNearBaseChanged_Parms), &Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::NewProp_isNear_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::NewProp_isNear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "Called whenever a player enters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMusicManager, nullptr, "OnPlayerNearBaseChanged", sizeof(FGMusicManager_eventOnPlayerNearBaseChanged_Parms), Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMusicManager_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMusicManager_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "Pause music playback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMusicManager_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMusicManager, nullptr, "Pause", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMusicManager_Pause_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMusicManager_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMusicManager_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMusicManager_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMusicManager_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "Start/Continue music playback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMusicManager_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMusicManager, nullptr, "Play", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMusicManager_Play_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMusicManager_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMusicManager_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMusicManager_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMusicManager_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "Stop music playback." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMusicManager_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMusicManager, nullptr, "Stop", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMusicManager_Stop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMusicManager_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMusicManager_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMusicManager_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMusicManager_NoRegister()
	{
		return UFGMusicManager::StaticClass();
	}
	struct Z_Construct_UClass_UFGMusicManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMusicManagerClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mMusicManagerClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFactoryCloseDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFactoryCloseDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpdateInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mUpdateInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMusicManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMusicManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMusicManager_Get, "Get" }, // 1795968153
		{ &Z_Construct_UFunction_UFGMusicManager_NotifyPostLoadMap, "NotifyPostLoadMap" }, // 2593472944
		{ &Z_Construct_UFunction_UFGMusicManager_OnPlayerEnteredArea, "OnPlayerEnteredArea" }, // 1917984316
		{ &Z_Construct_UFunction_UFGMusicManager_OnPlayerNearBaseChanged, "OnPlayerNearBaseChanged" }, // 3025628962
		{ &Z_Construct_UFunction_UFGMusicManager_Pause, "Pause" }, // 996371590
		{ &Z_Construct_UFunction_UFGMusicManager_Play, "Play" }, // 1331187474
		{ &Z_Construct_UFunction_UFGMusicManager_Stop, "Stop" }, // 3621238350
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMusicManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGMusicManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mMusicManagerClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "Music manager class name" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mMusicManagerClassName = { "mMusicManagerClassName", nullptr, (EPropertyFlags)0x0040000000044000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMusicManager, mMusicManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mMusicManagerClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mMusicManagerClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mFactoryCloseDistance_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "The distance that we considers a factory as close" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mFactoryCloseDistance = { "mFactoryCloseDistance", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMusicManager, mFactoryCloseDistance), METADATA_PARAMS(Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mFactoryCloseDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mFactoryCloseDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mUpdateInterval_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FGMusicManager.h" },
		{ "ToolTip", "How often (in seconds) we want to check if we are close to a factory" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mUpdateInterval = { "mUpdateInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMusicManager, mUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mUpdateInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mUpdateInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMusicManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mMusicManagerClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mFactoryCloseDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMusicManager_Statics::NewProp_mUpdateInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMusicManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMusicManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMusicManager_Statics::ClassParams = {
		&UFGMusicManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGMusicManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGMusicManager_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGMusicManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMusicManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMusicManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMusicManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMusicManager, 826571840);
	template<> FACTORYGAME_API UClass* StaticClass<UFGMusicManager>()
	{
		return UFGMusicManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMusicManager(Z_Construct_UClass_UFGMusicManager, &UFGMusicManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMusicManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMusicManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
