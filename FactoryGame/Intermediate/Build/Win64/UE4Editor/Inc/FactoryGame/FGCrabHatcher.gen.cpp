// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Creature/Enemy/FGCrabHatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCrabHatcher() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrabHatcher_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrabHatcher();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemy();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCrabHatcher_StartExpanding();
// End Cross Module References
	static FName NAME_AFGCrabHatcher_SpawnCrabs = FName(TEXT("SpawnCrabs"));
	void AFGCrabHatcher::SpawnCrabs()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCrabHatcher_SpawnCrabs),NULL);
	}
	static FName NAME_AFGCrabHatcher_StartExpanding = FName(TEXT("StartExpanding"));
	void AFGCrabHatcher::StartExpanding()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCrabHatcher_StartExpanding),NULL);
	}
	void AFGCrabHatcher::StaticRegisterNativesAFGCrabHatcher()
	{
		UClass* Class = AFGCrabHatcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDidSpawnCrabs", &AFGCrabHatcher::execGetDidSpawnCrabs },
			{ "GetThreatNearby", &AFGCrabHatcher::execGetThreatNearby },
			{ "OnRep_DidSpawnCrabs", &AFGCrabHatcher::execOnRep_DidSpawnCrabs },
			{ "SetAnimationLength", &AFGCrabHatcher::execSetAnimationLength },
			{ "SetDidSpawnCrabs", &AFGCrabHatcher::execSetDidSpawnCrabs },
			{ "SetThreatNearby", &AFGCrabHatcher::execSetThreatNearby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics
	{
		struct FGCrabHatcher_eventGetDidSpawnCrabs_Parms
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
	void Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCrabHatcher_eventGetDidSpawnCrabs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCrabHatcher_eventGetDidSpawnCrabs_Parms), &Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "GetDidSpawnCrabs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGCrabHatcher_eventGetDidSpawnCrabs_Parms), Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics
	{
		struct FGCrabHatcher_eventGetThreatNearby_Parms
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
	void Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCrabHatcher_eventGetThreatNearby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCrabHatcher_eventGetThreatNearby_Parms), &Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Get for mThreatNearby" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "GetThreatNearby", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGCrabHatcher_eventGetThreatNearby_Parms), Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "OnRep_DidSpawnCrabs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics
	{
		struct FGCrabHatcher_eventSetAnimationLength_Parms
		{
			float animLength;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_animLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::NewProp_animLength = { UE4CodeGen_Private::EPropertyClass::Float, "animLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCrabHatcher_eventSetAnimationLength_Parms, animLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::NewProp_animLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Set for mAnimationLength" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "SetAnimationLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCrabHatcher_eventSetAnimationLength_Parms), Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics
	{
		struct FGCrabHatcher_eventSetDidSpawnCrabs_Parms
		{
			bool inDidSPawn;
		};
		static void NewProp_inDidSPawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inDidSPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::NewProp_inDidSPawn_SetBit(void* Obj)
	{
		((FGCrabHatcher_eventSetDidSpawnCrabs_Parms*)Obj)->inDidSPawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::NewProp_inDidSPawn = { UE4CodeGen_Private::EPropertyClass::Bool, "inDidSPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCrabHatcher_eventSetDidSpawnCrabs_Parms), &Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::NewProp_inDidSPawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::NewProp_inDidSPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Set for mDidSpawnCrabs" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "SetDidSpawnCrabs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCrabHatcher_eventSetDidSpawnCrabs_Parms), Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics
	{
		struct FGCrabHatcher_eventSetThreatNearby_Parms
		{
			bool inNearby;
		};
		static void NewProp_inNearby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inNearby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::NewProp_inNearby_SetBit(void* Obj)
	{
		((FGCrabHatcher_eventSetThreatNearby_Parms*)Obj)->inNearby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::NewProp_inNearby = { UE4CodeGen_Private::EPropertyClass::Bool, "inNearby", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCrabHatcher_eventSetThreatNearby_Parms), &Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::NewProp_inNearby_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::NewProp_inNearby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Set for mThreatNearby" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "SetThreatNearby", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCrabHatcher_eventSetThreatNearby_Parms), Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Call to BP to spawn the crab babies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "SpawnCrabs", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCrabHatcher_StartExpanding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCrabHatcher_StartExpanding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Call to BP when expansion starts" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCrabHatcher_StartExpanding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCrabHatcher, "StartExpanding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCrabHatcher_StartExpanding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCrabHatcher_StartExpanding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCrabHatcher_StartExpanding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCrabHatcher_StartExpanding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCrabHatcher_NoRegister()
	{
		return AFGCrabHatcher::StaticClass();
	}
	struct Z_Construct_UClass_AFGCrabHatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThreatTimerMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mThreatTimerMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThreatTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mThreatTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDidSpawnCrabs_MetaData[];
#endif
		static void NewProp_mDidSpawnCrabs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDidSpawnCrabs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThreatNearby_MetaData[];
#endif
		static void NewProp_mThreatNearby_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mThreatNearby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCrabHatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCrabHatcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCrabHatcher_GetDidSpawnCrabs, "GetDidSpawnCrabs" }, // 1568743654
		{ &Z_Construct_UFunction_AFGCrabHatcher_GetThreatNearby, "GetThreatNearby" }, // 2107056043
		{ &Z_Construct_UFunction_AFGCrabHatcher_OnRep_DidSpawnCrabs, "OnRep_DidSpawnCrabs" }, // 684119306
		{ &Z_Construct_UFunction_AFGCrabHatcher_SetAnimationLength, "SetAnimationLength" }, // 1739298920
		{ &Z_Construct_UFunction_AFGCrabHatcher_SetDidSpawnCrabs, "SetDidSpawnCrabs" }, // 3272467000
		{ &Z_Construct_UFunction_AFGCrabHatcher_SetThreatNearby, "SetThreatNearby" }, // 2959071078
		{ &Z_Construct_UFunction_AFGCrabHatcher_SpawnCrabs, "SpawnCrabs" }, // 797187866
		{ &Z_Construct_UFunction_AFGCrabHatcher_StartExpanding, "StartExpanding" }, // 1333305881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrabHatcher_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimerMax_MetaData[] = {
		{ "Category", "Crab Hatcher" },
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Time when timer reach it's end" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimerMax = { UE4CodeGen_Private::EPropertyClass::Float, "mThreatTimerMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGCrabHatcher, mThreatTimerMax), METADATA_PARAMS(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimerMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimerMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimer_MetaData[] = {
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Time enemy has been under threat" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimer = { UE4CodeGen_Private::EPropertyClass::Float, "mThreatTimer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AFGCrabHatcher, mThreatTimer), METADATA_PARAMS(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mDidSpawnCrabs_MetaData[] = {
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Have crabs been spawned?" },
	};
#endif
	void Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mDidSpawnCrabs_SetBit(void* Obj)
	{
		((AFGCrabHatcher*)Obj)->mDidSpawnCrabs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mDidSpawnCrabs = { UE4CodeGen_Private::EPropertyClass::Bool, "mDidSpawnCrabs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_DidSpawnCrabs", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGCrabHatcher), &Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mDidSpawnCrabs_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mDidSpawnCrabs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mDidSpawnCrabs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatNearby_MetaData[] = {
		{ "ModuleRelativePath", "Creature/Enemy/FGCrabHatcher.h" },
		{ "ToolTip", "Indicates if a threat is nearby" },
	};
#endif
	void Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatNearby_SetBit(void* Obj)
	{
		((AFGCrabHatcher*)Obj)->mThreatNearby = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatNearby = { UE4CodeGen_Private::EPropertyClass::Bool, "mThreatNearby", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGCrabHatcher), &Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatNearby_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatNearby_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatNearby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCrabHatcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimerMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mDidSpawnCrabs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrabHatcher_Statics::NewProp_mThreatNearby,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCrabHatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCrabHatcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCrabHatcher_Statics::ClassParams = {
		&AFGCrabHatcher::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGCrabHatcher_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGCrabHatcher_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGCrabHatcher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCrabHatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCrabHatcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCrabHatcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCrabHatcher, 2308666803);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCrabHatcher(Z_Construct_UClass_AFGCrabHatcher, &AFGCrabHatcher::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCrabHatcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCrabHatcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
