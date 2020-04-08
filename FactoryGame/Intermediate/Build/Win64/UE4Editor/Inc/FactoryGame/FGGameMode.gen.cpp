// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGGameMode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameMode() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGameMode_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGameMode_RebootSession();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRemoteCallObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGameMode_TriggerWorldSave();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveSession_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void AFGGameMode::StaticRegisterNativesAFGGameMode()
	{
		UClass* Class = AFGGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsMainMenuGameMode", &AFGGameMode::execIsMainMenuGameMode },
			{ "RebootSession", &AFGGameMode::execRebootSession },
			{ "RegisterRemoteCallObjectClass", &AFGGameMode::execRegisterRemoteCallObjectClass },
			{ "TriggerBundledWorldSave", &AFGGameMode::execTriggerBundledWorldSave },
			{ "TriggerWorldSave", &AFGGameMode::execTriggerWorldSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics
	{
		struct FGGameMode_eventIsMainMenuGameMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameMode_eventIsMainMenuGameMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGameMode_eventIsMainMenuGameMode_Parms), &Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Does this Game Mode function specifically as the main menu?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGameMode, nullptr, "IsMainMenuGameMode", sizeof(FGGameMode_eventIsMainMenuGameMode_Parms), Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGameMode_RebootSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGameMode_RebootSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Saves the game, and then restarts from the load" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGameMode_RebootSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGameMode, nullptr, "RebootSession", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGameMode_RebootSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_RebootSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGameMode_RebootSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGameMode_RebootSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics
	{
		struct FGGameMode_eventRegisterRemoteCallObjectClass_Parms
		{
			TSubclassOf<UFGRemoteCallObject>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGGameMode_eventRegisterRemoteCallObjectClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGameMode_eventRegisterRemoteCallObjectClass_Parms), &Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameMode_eventRegisterRemoteCallObjectClass_Parms, inClass), Z_Construct_UClass_UFGRemoteCallObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Call Object" },
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGameMode, nullptr, "RegisterRemoteCallObjectClass", sizeof(FGGameMode_eventRegisterRemoteCallObjectClass_Parms), Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics
	{
		struct FGGameMode_eventTriggerBundledWorldSave_Parms
		{
			FString saveGameName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveGameName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::NewProp_saveGameName = { "saveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameMode_eventTriggerBundledWorldSave_Parms, saveGameName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::NewProp_saveGameName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Trigger a save to save the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGameMode, nullptr, "TriggerBundledWorldSave", sizeof(FGGameMode_eventTriggerBundledWorldSave_Parms), Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics
	{
		struct FGGameMode_eventTriggerWorldSave_Parms
		{
			FString saveGameName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveGameName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::NewProp_saveGameName = { "saveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameMode_eventTriggerWorldSave_Parms, saveGameName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::NewProp_saveGameName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Trigger a save to save the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGameMode, nullptr, "TriggerWorldSave", sizeof(FGGameMode_eventTriggerWorldSave_Parms), Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGameMode_TriggerWorldSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGameMode_TriggerWorldSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGGameMode_NoRegister()
	{
		return AFGGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFGGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsMainMenu_MetaData[];
#endif
		static void NewProp_mIsMainMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsMainMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSkipTutorialInPIE_MetaData[];
#endif
		static void NewProp_mSkipTutorialInPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mSkipTutorialInPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mServerRestartTimeHours_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mServerRestartTimeHours;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultRemoteCallObjectsClassNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDefaultRemoteCallObjectsClassNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDefaultRemoteCallObjectsClassNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDebugStartingPointTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mDebugStartingPointTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStartingPointTagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mStartingPointTagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSaveSessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mSaveSessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSessionIDString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mSessionIDString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mSessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastAutosaveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mLastAutosaveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSaveSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSaveSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGGameMode_IsMainMenuGameMode, "IsMainMenuGameMode" }, // 3911170188
		{ &Z_Construct_UFunction_AFGGameMode_RebootSession, "RebootSession" }, // 2107297474
		{ &Z_Construct_UFunction_AFGGameMode_RegisterRemoteCallObjectClass, "RegisterRemoteCallObjectClass" }, // 2312576732
		{ &Z_Construct_UFunction_AFGGameMode_TriggerBundledWorldSave, "TriggerBundledWorldSave" }, // 302075087
		{ &Z_Construct_UFunction_AFGGameMode_TriggerWorldSave, "TriggerWorldSave" }, // 62837869
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGGameMode.h" },
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "SerializeToFArchive", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mIsMainMenu_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
	};
#endif
	void Z_Construct_UClass_AFGGameMode_Statics::NewProp_mIsMainMenu_SetBit(void* Obj)
	{
		((AFGGameMode*)Obj)->mIsMainMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mIsMainMenu = { "mIsMainMenu", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGGameMode), &Z_Construct_UClass_AFGGameMode_Statics::NewProp_mIsMainMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mIsMainMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mIsMainMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSkipTutorialInPIE_MetaData[] = {
		{ "Category", "FGGameMode" },
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Skips the tutorial step if we play in PIE" },
	};
#endif
	void Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSkipTutorialInPIE_SetBit(void* Obj)
	{
		((AFGGameMode*)Obj)->mSkipTutorialInPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSkipTutorialInPIE = { "mSkipTutorialInPIE", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGGameMode), &Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSkipTutorialInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSkipTutorialInPIE_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSkipTutorialInPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mServerRestartTimeHours_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "After how many hours should the server restart itself" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mServerRestartTimeHours = { "mServerRestartTimeHours", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mServerRestartTimeHours), METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mServerRestartTimeHours_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mServerRestartTimeHours_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDefaultRemoteCallObjectsClassNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Config property to reference remote call objects for player controllers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDefaultRemoteCallObjectsClassNames = { "mDefaultRemoteCallObjectsClassNames", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mDefaultRemoteCallObjectsClassNames), METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDefaultRemoteCallObjectsClassNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDefaultRemoteCallObjectsClassNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDefaultRemoteCallObjectsClassNames_Inner = { "mDefaultRemoteCallObjectsClassNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDebugStartingPointTagName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Overriding selected starting point when respawning." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDebugStartingPointTagName = { "mDebugStartingPointTagName", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mDebugStartingPointTagName), METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDebugStartingPointTagName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDebugStartingPointTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mStartingPointTagName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Selected starting point" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mStartingPointTagName = { "mStartingPointTagName", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mStartingPointTagName), METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mStartingPointTagName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mStartingPointTagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSessionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "The name of the session we are playing" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSessionName = { "mSaveSessionName", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mSaveSessionName), METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSessionName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionIDString_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "The name of the session we are playing, migrated over to mSaveSessionName" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionIDString = { "mSessionIDString", nullptr, (EPropertyFlags)0x0040000021000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mSessionIDString_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionIDString_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionIDString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "The save session (should actually be SaveSessionId" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionId = { "mSessionId", nullptr, (EPropertyFlags)0x0040000021000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mSessionId_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionId_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mLastAutosaveId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
		{ "ToolTip", "Last autosave was this id" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mLastAutosaveId = { "mLastAutosaveId", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mLastAutosaveId), nullptr, METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mLastAutosaveId_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mLastAutosaveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSession_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSession = { "mSaveSession", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameMode, mSaveSession), Z_Construct_UClass_UFGSaveSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSession_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mIsMainMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSkipTutorialInPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mServerRestartTimeHours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDefaultRemoteCallObjectsClassNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDefaultRemoteCallObjectsClassNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mDebugStartingPointTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mStartingPointTagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionIDString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mLastAutosaveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameMode_Statics::NewProp_mSaveSession,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGGameMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGGameMode, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGameMode_Statics::ClassParams = {
		&AFGGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGGameMode_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFGGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGameMode, 1576428568);
	template<> FACTORYGAME_API UClass* StaticClass<AFGGameMode>()
	{
		return AFGGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGameMode(Z_Construct_UClass_AFGGameMode, &AFGGameMode::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGameMode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGGameMode)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
