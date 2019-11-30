// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGDismantleInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDismantleInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDismantleInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDismantleInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_CanDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_Dismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDismantleInterface_Upgrade();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	bool IFGDismantleInterface::CanDismantle() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanDismantle instead.");
		FGDismantleInterface_eventCanDismantle_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGDismantleInterface::Dismantle()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Dismantle instead.");
	}
	void IFGDismantleInterface::GetDismantleRefund(TArray<FInventoryStack>& out_refund) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDismantleRefund instead.");
	}
	FVector IFGDismantleInterface::GetRefundSpawnLocationAndArea(FVector const& aimHitLocation, float& out_radius) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRefundSpawnLocationAndArea instead.");
		FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGDismantleInterface::PreUpgrade()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PreUpgrade instead.");
	}
	void IFGDismantleInterface::StartIsLookedAtForDismantle(AFGCharacterPlayer* byCharacter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartIsLookedAtForDismantle instead.");
	}
	void IFGDismantleInterface::StopIsLookedAtForDismantle(AFGCharacterPlayer* byCharacter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopIsLookedAtForDismantle instead.");
	}
	void IFGDismantleInterface::Upgrade(AActor* newActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Upgrade instead.");
	}
	void UFGDismantleInterface::StaticRegisterNativesUFGDismantleInterface()
	{
		UClass* Class = UFGDismantleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDismantle", &IFGDismantleInterface::execCanDismantle },
			{ "Dismantle", &IFGDismantleInterface::execDismantle },
			{ "GetDismantleRefund", &IFGDismantleInterface::execGetDismantleRefund },
			{ "GetRefundSpawnLocationAndArea", &IFGDismantleInterface::execGetRefundSpawnLocationAndArea },
			{ "PreUpgrade", &IFGDismantleInterface::execPreUpgrade },
			{ "StartIsLookedAtForDismantle", &IFGDismantleInterface::execStartIsLookedAtForDismantle },
			{ "StopIsLookedAtForDismantle", &IFGDismantleInterface::execStopIsLookedAtForDismantle },
			{ "Upgrade", &IFGDismantleInterface::execUpgrade },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDismantleInterface_eventCanDismantle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGDismantleInterface_eventCanDismantle_Parms), &Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "Can this be dismantled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "CanDismantle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGDismantleInterface_eventCanDismantle_Parms), Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_CanDismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_CanDismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_Dismantle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_Dismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "Dismantle this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_Dismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "Dismantle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_Dismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_Dismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_Dismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_Dismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_refund;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_refund_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::NewProp_out_refund = { UE4CodeGen_Private::EPropertyClass::Array, "out_refund", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGDismantleInterface_eventGetDismantleRefund_Parms, out_refund), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::NewProp_out_refund_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "out_refund", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::NewProp_out_refund,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::NewProp_out_refund_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "How much do we get back when dismantling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "GetDismantleRefund", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48420C00, sizeof(FGDismantleInterface_eventGetDismantleRefund_Parms), Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_out_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aimHitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_aimHitLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_out_radius = { UE4CodeGen_Private::EPropertyClass::Float, "out_radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms, out_radius), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_aimHitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_aimHitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "aimHitLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms, aimHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_aimHitLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_aimHitLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_out_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::NewProp_aimHitLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "Returns the location where the refund should be spawned and the area\nif the player doesn't have room in the inventory.\n\n@param aimHitLocation - the location we aimed at when dismantling happened\n@param out_radius - radius we want to spawn stuff within" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "GetRefundSpawnLocationAndArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48C20C00, sizeof(FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms), Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "Called prior to dismantle and prior to an upgrade from this actor to another actor.\nUse it to clear connections and other stuff that might interfere with upgrades." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "PreUpgrade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::NewProp_byCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "byCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDismantleInterface_eventStartIsLookedAtForDismantle_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "Called on by the interface if we are looking at something we can dismantle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "StartIsLookedAtForDismantle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGDismantleInterface_eventStartIsLookedAtForDismantle_Parms), Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::NewProp_byCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "byCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDismantleInterface_eventStopIsLookedAtForDismantle_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "Called when we stop looking at the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "StopIsLookedAtForDismantle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGDismantleInterface_eventStopIsLookedAtForDismantle_Parms), Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::NewProp_newActor = { UE4CodeGen_Private::EPropertyClass::Object, "newActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGDismantleInterface_eventUpgrade_Parms, newActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::NewProp_newActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dismantle" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ToolTip", "Called when an upgrade is performed from this actor to another actor.\n@param newActor  The new actor that replaces this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDismantleInterface, "Upgrade", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGDismantleInterface_eventUpgrade_Parms), Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDismantleInterface_Upgrade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDismantleInterface_Upgrade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGDismantleInterface_NoRegister()
	{
		return UFGDismantleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGDismantleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDismantleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGDismantleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGDismantleInterface_CanDismantle, "CanDismantle" }, // 7269257
		{ &Z_Construct_UFunction_UFGDismantleInterface_Dismantle, "Dismantle" }, // 1869870772
		{ &Z_Construct_UFunction_UFGDismantleInterface_GetDismantleRefund, "GetDismantleRefund" }, // 1164420742
		{ &Z_Construct_UFunction_UFGDismantleInterface_GetRefundSpawnLocationAndArea, "GetRefundSpawnLocationAndArea" }, // 3171095018
		{ &Z_Construct_UFunction_UFGDismantleInterface_PreUpgrade, "PreUpgrade" }, // 4115808912
		{ &Z_Construct_UFunction_UFGDismantleInterface_StartIsLookedAtForDismantle, "StartIsLookedAtForDismantle" }, // 1493440458
		{ &Z_Construct_UFunction_UFGDismantleInterface_StopIsLookedAtForDismantle, "StopIsLookedAtForDismantle" }, // 3016177657
		{ &Z_Construct_UFunction_UFGDismantleInterface_Upgrade, "Upgrade" }, // 1590873631
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDismantleInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGDismantleInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDismantleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGDismantleInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDismantleInterface_Statics::ClassParams = {
		&UFGDismantleInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGDismantleInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDismantleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDismantleInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDismantleInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDismantleInterface, 2882004138);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDismantleInterface(Z_Construct_UClass_UFGDismantleInterface, &UFGDismantleInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDismantleInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDismantleInterface);
	static FName NAME_UFGDismantleInterface_CanDismantle = FName(TEXT("CanDismantle"));
	bool IFGDismantleInterface::Execute_CanDismantle(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		FGDismantleInterface_eventCanDismantle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_CanDismantle);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanDismantle_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGDismantleInterface_Dismantle = FName(TEXT("Dismantle"));
	void IFGDismantleInterface::Execute_Dismantle(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_Dismantle);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			I->Dismantle_Implementation();
		}
	}
	static FName NAME_UFGDismantleInterface_GetDismantleRefund = FName(TEXT("GetDismantleRefund"));
	void IFGDismantleInterface::Execute_GetDismantleRefund(const UObject* O, TArray<FInventoryStack>& out_refund)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		FGDismantleInterface_eventGetDismantleRefund_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_GetDismantleRefund);
		if (Func)
		{
			Parms.out_refund=out_refund;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			out_refund=Parms.out_refund;
		}
		else if (auto I = (const IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			I->GetDismantleRefund_Implementation(out_refund);
		}
	}
	static FName NAME_UFGDismantleInterface_GetRefundSpawnLocationAndArea = FName(TEXT("GetRefundSpawnLocationAndArea"));
	FVector IFGDismantleInterface::Execute_GetRefundSpawnLocationAndArea(const UObject* O, FVector const& aimHitLocation, float& out_radius)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		FGDismantleInterface_eventGetRefundSpawnLocationAndArea_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_GetRefundSpawnLocationAndArea);
		if (Func)
		{
			Parms.aimHitLocation=aimHitLocation;
			Parms.out_radius=out_radius;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			out_radius=Parms.out_radius;
		}
		else if (auto I = (const IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetRefundSpawnLocationAndArea_Implementation(aimHitLocation,out_radius);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGDismantleInterface_PreUpgrade = FName(TEXT("PreUpgrade"));
	void IFGDismantleInterface::Execute_PreUpgrade(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_PreUpgrade);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			I->PreUpgrade_Implementation();
		}
	}
	static FName NAME_UFGDismantleInterface_StartIsLookedAtForDismantle = FName(TEXT("StartIsLookedAtForDismantle"));
	void IFGDismantleInterface::Execute_StartIsLookedAtForDismantle(UObject* O, AFGCharacterPlayer* byCharacter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		FGDismantleInterface_eventStartIsLookedAtForDismantle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_StartIsLookedAtForDismantle);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			I->StartIsLookedAtForDismantle_Implementation(byCharacter);
		}
	}
	static FName NAME_UFGDismantleInterface_StopIsLookedAtForDismantle = FName(TEXT("StopIsLookedAtForDismantle"));
	void IFGDismantleInterface::Execute_StopIsLookedAtForDismantle(UObject* O, AFGCharacterPlayer* byCharacter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		FGDismantleInterface_eventStopIsLookedAtForDismantle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_StopIsLookedAtForDismantle);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			I->StopIsLookedAtForDismantle_Implementation(byCharacter);
		}
	}
	static FName NAME_UFGDismantleInterface_Upgrade = FName(TEXT("Upgrade"));
	void IFGDismantleInterface::Execute_Upgrade(UObject* O, AActor* newActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGDismantleInterface::StaticClass()));
		FGDismantleInterface_eventUpgrade_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGDismantleInterface_Upgrade);
		if (Func)
		{
			Parms.newActor=newActor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGDismantleInterface*)(O->GetNativeInterfaceAddress(UFGDismantleInterface::StaticClass())))
		{
			I->Upgrade_Implementation(newActor);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
