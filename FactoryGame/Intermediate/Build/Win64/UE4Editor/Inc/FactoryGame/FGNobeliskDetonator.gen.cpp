// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGNobeliskDetonator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNobeliskDetonator() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskDetonator_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskDetonator();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeapon();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNobeliskExplosive_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileData();
// End Cross Module References
	static FName NAME_AFGNobeliskDetonator_OnSecondaryFirePressed = FName(TEXT("OnSecondaryFirePressed"));
	void AFGNobeliskDetonator::OnSecondaryFirePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskDetonator_OnSecondaryFirePressed),NULL);
	}
	static FName NAME_AFGNobeliskDetonator_Server_ExecutePrimaryFire = FName(TEXT("Server_ExecutePrimaryFire"));
	void AFGNobeliskDetonator::Server_ExecutePrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskDetonator_Server_ExecutePrimaryFire),NULL);
	}
	static FName NAME_AFGNobeliskDetonator_Server_ExecuteSecondaryFire = FName(TEXT("Server_ExecuteSecondaryFire"));
	void AFGNobeliskDetonator::Server_ExecuteSecondaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskDetonator_Server_ExecuteSecondaryFire),NULL);
	}
	static FName NAME_AFGNobeliskDetonator_Server_SpawnExplosive = FName(TEXT("Server_SpawnExplosive"));
	void AFGNobeliskDetonator::Server_SpawnExplosive(FTransform spawnTransform, int32 throwForce)
	{
		FGNobeliskDetonator_eventServer_SpawnExplosive_Parms Parms;
		Parms.spawnTransform=spawnTransform;
		Parms.throwForce=throwForce;
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskDetonator_Server_SpawnExplosive),&Parms);
	}
	static FName NAME_AFGNobeliskDetonator_Server_StartDetonations = FName(TEXT("Server_StartDetonations"));
	void AFGNobeliskDetonator::Server_StartDetonations()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGNobeliskDetonator_Server_StartDetonations),NULL);
	}
	void AFGNobeliskDetonator::StaticRegisterNativesAFGNobeliskDetonator()
	{
		UClass* Class = AFGNobeliskDetonator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecutePrimaryFire", &AFGNobeliskDetonator::execExecutePrimaryFire },
			{ "ExecuteSecondaryFire", &AFGNobeliskDetonator::execExecuteSecondaryFire },
			{ "GetChargePct", &AFGNobeliskDetonator::execGetChargePct },
			{ "OnSecondaryFirePressed", &AFGNobeliskDetonator::execOnSecondaryFirePressed },
			{ "OnViewportFocusChanged", &AFGNobeliskDetonator::execOnViewportFocusChanged },
			{ "Server_ExecutePrimaryFire", &AFGNobeliskDetonator::execServer_ExecutePrimaryFire },
			{ "Server_ExecuteSecondaryFire", &AFGNobeliskDetonator::execServer_ExecuteSecondaryFire },
			{ "Server_SpawnExplosive", &AFGNobeliskDetonator::execServer_SpawnExplosive },
			{ "Server_StartDetonations", &AFGNobeliskDetonator::execServer_StartDetonations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Called by an anim notify to actually trigger the throwing of the explosive" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "ExecutePrimaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Called by an anim notify to actually trigger the detonation sequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "ExecuteSecondaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics
	{
		struct FGNobeliskDetonator_eventGetChargePct_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNobeliskDetonator_eventGetChargePct_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Return the current charge in percent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "GetChargePct", sizeof(FGNobeliskDetonator_eventGetChargePct_Parms), Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Call animation from blueprint that will contain notify to trigger actual detonation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "OnSecondaryFirePressed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics
	{
		struct FGNobeliskDetonator_eventOnViewportFocusChanged_Parms
		{
			bool isOpen;
			TSubclassOf<UUserWidget>  interactionClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_interactionClass;
		static void NewProp_isOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::NewProp_interactionClass = { "interactionClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNobeliskDetonator_eventOnViewportFocusChanged_Parms, interactionClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::NewProp_isOpen_SetBit(void* Obj)
	{
		((FGNobeliskDetonator_eventOnViewportFocusChanged_Parms*)Obj)->isOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::NewProp_isOpen = { "isOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGNobeliskDetonator_eventOnViewportFocusChanged_Parms), &Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::NewProp_isOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::NewProp_interactionClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::NewProp_isOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Called from Hotbar status change, to indicate we have change SceneViewport Focus" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "OnViewportFocusChanged", sizeof(FGNobeliskDetonator_eventOnViewportFocusChanged_Parms), Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Called by client to start throw on server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "Server_ExecutePrimaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Called by client to start fire on server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "Server_ExecuteSecondaryFire", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_throwForce;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::NewProp_throwForce = { "throwForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNobeliskDetonator_eventServer_SpawnExplosive_Parms, throwForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::NewProp_spawnTransform = { "spawnTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGNobeliskDetonator_eventServer_SpawnExplosive_Parms, spawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::NewProp_throwForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::NewProp_spawnTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Called from client to Spawn Explosive on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "Server_SpawnExplosive", sizeof(FGNobeliskDetonator_eventServer_SpawnExplosive_Parms), Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGNobeliskDetonator, nullptr, "Server_StartDetonations", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGNobeliskDetonator_NoRegister()
	{
		return AFGNobeliskDetonator::StaticClass();
	}
	struct Z_Construct_UClass_AFGNobeliskDetonator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDelayBetweenExplosions_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDelayBetweenExplosions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinThrowForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMinThrowForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxThrowForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxThrowForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxChargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxChargeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsPendingExecuteFire_MetaData[];
#endif
		static void NewProp_mIsPendingExecuteFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsPendingExecuteFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDispensedExplosives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDispensedExplosives;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDispensedExplosives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExplosiveClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mExplosiveClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExplosiveData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mExplosiveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGNobeliskDetonator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGNobeliskDetonator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_ExecutePrimaryFire, "ExecutePrimaryFire" }, // 3138149567
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_ExecuteSecondaryFire, "ExecuteSecondaryFire" }, // 720382022
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_GetChargePct, "GetChargePct" }, // 3288491811
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_OnSecondaryFirePressed, "OnSecondaryFirePressed" }, // 430705404
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_OnViewportFocusChanged, "OnViewportFocusChanged" }, // 2150623231
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecutePrimaryFire, "Server_ExecutePrimaryFire" }, // 1718771842
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_Server_ExecuteSecondaryFire, "Server_ExecuteSecondaryFire" }, // 3617728559
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_Server_SpawnExplosive, "Server_SpawnExplosive" }, // 381614730
		{ &Z_Construct_UFunction_AFGNobeliskDetonator_Server_StartDetonations, "Server_StartDetonations" }, // 3037490604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGNobeliskDetonator.h" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDelayBetweenExplosions_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "When we blow shit up we want a small delay in between each explosion" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDelayBetweenExplosions = { "mDelayBetweenExplosions", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskDetonator, mDelayBetweenExplosions), METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDelayBetweenExplosions_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDelayBetweenExplosions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMinThrowForce_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "If we tap the throw, this is the minimum force to throw with" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMinThrowForce = { "mMinThrowForce", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskDetonator, mMinThrowForce), METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMinThrowForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMinThrowForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxThrowForce_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "If we charge the throw to the max we will throw with this force" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxThrowForce = { "mMaxThrowForce", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskDetonator, mMaxThrowForce), METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxThrowForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxThrowForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxChargeTime_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "If we charge the throw for this amount of time we will get max throw velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxChargeTime = { "mMaxChargeTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskDetonator, mMaxChargeTime), METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxChargeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxChargeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mIsPendingExecuteFire_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Tracks waiting for execute fire" },
	};
#endif
	void Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mIsPendingExecuteFire_SetBit(void* Obj)
	{
		((AFGNobeliskDetonator*)Obj)->mIsPendingExecuteFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mIsPendingExecuteFire = { "mIsPendingExecuteFire", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGNobeliskDetonator), &Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mIsPendingExecuteFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mIsPendingExecuteFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mIsPendingExecuteFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDispensedExplosives_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Keeps track of the explosives we have dispensed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDispensedExplosives = { "mDispensedExplosives", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskDetonator, mDispensedExplosives), METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDispensedExplosives_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDispensedExplosives_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDispensedExplosives_Inner = { "mDispensedExplosives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGNobeliskExplosive_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveClass_MetaData[] = {
		{ "Category", "Explosion" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "What types of bombs we should spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveClass = { "mExplosiveClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskDetonator, mExplosiveClass), Z_Construct_UClass_AFGNobeliskExplosive_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveData_MetaData[] = {
		{ "Category", "Nobelisk" },
		{ "ModuleRelativePath", "Public/FGNobeliskDetonator.h" },
		{ "ToolTip", "Explosive Data (Applied to the explosive projectile on spawn)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveData = { "mExplosiveData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNobeliskDetonator, mExplosiveData), Z_Construct_UScriptStruct_FProjectileData, METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGNobeliskDetonator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDelayBetweenExplosions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMinThrowForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxThrowForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mMaxChargeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mIsPendingExecuteFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDispensedExplosives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mDispensedExplosives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNobeliskDetonator_Statics::NewProp_mExplosiveData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGNobeliskDetonator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGNobeliskDetonator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGNobeliskDetonator_Statics::ClassParams = {
		&AFGNobeliskDetonator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGNobeliskDetonator_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGNobeliskDetonator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGNobeliskDetonator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGNobeliskDetonator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGNobeliskDetonator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGNobeliskDetonator, 3049199165);
	template<> FACTORYGAME_API UClass* StaticClass<AFGNobeliskDetonator>()
	{
		return AFGNobeliskDetonator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGNobeliskDetonator(Z_Construct_UClass_AFGNobeliskDetonator, &AFGNobeliskDetonator::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGNobeliskDetonator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGNobeliskDetonator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
