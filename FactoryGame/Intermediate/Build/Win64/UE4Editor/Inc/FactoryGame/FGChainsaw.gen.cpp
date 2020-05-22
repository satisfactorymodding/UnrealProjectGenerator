// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGChainsaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGChainsaw() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPickedUpInstance();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGChainsaw_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGChainsaw();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_BroadcastPickup();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliagePickup_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_CanStartSawing();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_GetFuelClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_HasAnyFuel();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_IsSawEngaged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_IsSawing();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_SawProgress();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_Server_StartSawing();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGChainsaw_Server_StopSawing();
// End Cross Module References
class UScriptStruct* FPickedUpInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPickedUpInstance_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickedUpInstance, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PickedUpInstance"), sizeof(FPickedUpInstance), Get_Z_Construct_UScriptStruct_FPickedUpInstance_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPickedUpInstance>()
{
	return FPickedUpInstance::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPickedUpInstance(FPickedUpInstance::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PickedUpInstance"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPickedUpInstance
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPickedUpInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PickedUpInstance")),new UScriptStruct::TCppStructOps<FPickedUpInstance>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPickedUpInstance;
	struct Z_Construct_UScriptStruct_FPickedUpInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickedUpInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickedUpInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickedUpInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_InstanceMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_InstanceMesh = { "InstanceMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPickedUpInstance, InstanceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_InstanceMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_InstanceMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickedUpInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickedUpInstance_Statics::NewProp_InstanceMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickedUpInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PickedUpInstance",
		sizeof(FPickedUpInstance),
		alignof(FPickedUpInstance),
		Z_Construct_UScriptStruct_FPickedUpInstance_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPickedUpInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPickedUpInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPickedUpInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPickedUpInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPickedUpInstance_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PickedUpInstance"), sizeof(FPickedUpInstance), Get_Z_Construct_UScriptStruct_FPickedUpInstance_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPickedUpInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPickedUpInstance_Hash() { return 4206841490U; }
	static FName NAME_AFGChainsaw_BroadcastPickup = FName(TEXT("BroadcastPickup"));
	void AFGChainsaw::BroadcastPickup(TArray<FPickedUpInstance> const& pickups, AFGFoliagePickup* instigatorPlayer)
	{
		FGChainsaw_eventBroadcastPickup_Parms Parms;
		Parms.pickups=pickups;
		Parms.instigatorPlayer=instigatorPlayer;
		ProcessEvent(FindFunctionChecked(NAME_AFGChainsaw_BroadcastPickup),&Parms);
	}
	static FName NAME_AFGChainsaw_CanStartSawing = FName(TEXT("CanStartSawing"));
	bool AFGChainsaw::CanStartSawing()
	{
		FGChainsaw_eventCanStartSawing_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFGChainsaw_CanStartSawing),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AFGChainsaw_Server_RemoveChainsawedObject = FName(TEXT("Server_RemoveChainsawedObject"));
	void AFGChainsaw::Server_RemoveChainsawedObject(USceneComponent* sawingComponent, FTransform foliageToRemoveTransform, FVector effectLocation)
	{
		FGChainsaw_eventServer_RemoveChainsawedObject_Parms Parms;
		Parms.sawingComponent=sawingComponent;
		Parms.foliageToRemoveTransform=foliageToRemoveTransform;
		Parms.effectLocation=effectLocation;
		ProcessEvent(FindFunctionChecked(NAME_AFGChainsaw_Server_RemoveChainsawedObject),&Parms);
	}
	static FName NAME_AFGChainsaw_Server_StartSawing = FName(TEXT("Server_StartSawing"));
	void AFGChainsaw::Server_StartSawing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGChainsaw_Server_StartSawing),NULL);
	}
	static FName NAME_AFGChainsaw_Server_StopSawing = FName(TEXT("Server_StopSawing"));
	void AFGChainsaw::Server_StopSawing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGChainsaw_Server_StopSawing),NULL);
	}
	void AFGChainsaw::StaticRegisterNativesAFGChainsaw()
	{
		UClass* Class = AFGChainsaw::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastPickup", &AFGChainsaw::execBroadcastPickup },
			{ "CanStartSawing", &AFGChainsaw::execCanStartSawing },
			{ "GetFuelClass", &AFGChainsaw::execGetFuelClass },
			{ "HasAnyFuel", &AFGChainsaw::execHasAnyFuel },
			{ "IsSawEngaged", &AFGChainsaw::execIsSawEngaged },
			{ "IsSawing", &AFGChainsaw::execIsSawing },
			{ "SawProgress", &AFGChainsaw::execSawProgress },
			{ "Server_RemoveChainsawedObject", &AFGChainsaw::execServer_RemoveChainsawedObject },
			{ "Server_StartSawing", &AFGChainsaw::execServer_StartSawing },
			{ "Server_StopSawing", &AFGChainsaw::execServer_StopSawing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatorPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pickups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pickups;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pickups_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_instigatorPlayer = { "instigatorPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsaw_eventBroadcastPickup_Parms, instigatorPlayer), Z_Construct_UClass_AFGFoliagePickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_pickups_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_pickups = { "pickups", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsaw_eventBroadcastPickup_Parms, pickups), METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_pickups_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_pickups_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_pickups_Inner = { "pickups", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPickedUpInstance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_instigatorPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_pickups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::NewProp_pickups_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "BroadcastPickup", sizeof(FGChainsaw_eventBroadcastPickup_Parms), Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_BroadcastPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_BroadcastPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGChainsaw_eventCanStartSawing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGChainsaw_eventCanStartSawing_Parms), &Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "CanStartSawing", sizeof(FGChainsaw_eventCanStartSawing_Parms), Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_CanStartSawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_CanStartSawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics
	{
		struct FGChainsaw_eventGetFuelClass_Parms
		{
			TSubclassOf<UFGItemDescriptor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsaw_eventGetFuelClass_Parms, ReturnValue), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "Returns the current fuel class used for the chainsaw" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "GetFuelClass", sizeof(FGChainsaw_eventGetFuelClass_Parms), Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_GetFuelClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_GetFuelClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics
	{
		struct FGChainsaw_eventHasAnyFuel_Parms
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
	void Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGChainsaw_eventHasAnyFuel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGChainsaw_eventHasAnyFuel_Parms), &Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "Return true we have any energy stored or if our owner has any fuel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "HasAnyFuel", sizeof(FGChainsaw_eventHasAnyFuel_Parms), Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_HasAnyFuel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_HasAnyFuel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics
	{
		struct FGChainsaw_eventIsSawEngaged_Parms
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
	void Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGChainsaw_eventIsSawEngaged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGChainsaw_eventIsSawEngaged_Parms), &Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "@return true if we are sawing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "IsSawEngaged", sizeof(FGChainsaw_eventIsSawEngaged_Parms), Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_IsSawEngaged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_IsSawEngaged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics
	{
		struct FGChainsaw_eventIsSawing_Parms
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
	void Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGChainsaw_eventIsSawing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGChainsaw_eventIsSawing_Parms), &Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "@return true if we are sawing AND we have a valid saw component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "IsSawing", sizeof(FGChainsaw_eventIsSawing_Parms), Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_IsSawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_IsSawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics
	{
		struct FGChainsaw_eventSawProgress_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsaw_eventSawProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "In percent, how long into our progress have we gone into sawing down our current tree" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "SawProgress", sizeof(FGChainsaw_eventSawProgress_Parms), Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_SawProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_SawProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_effectLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_foliageToRemoveTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sawingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sawingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_effectLocation = { "effectLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsaw_eventServer_RemoveChainsawedObject_Parms, effectLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_foliageToRemoveTransform = { "foliageToRemoveTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsaw_eventServer_RemoveChainsawedObject_Parms, foliageToRemoveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_sawingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_sawingComponent = { "sawingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsaw_eventServer_RemoveChainsawedObject_Parms, sawingComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_sawingComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_sawingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_effectLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_foliageToRemoveTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::NewProp_sawingComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "Removes the foliage we just cut down" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "Server_RemoveChainsawedObject", sizeof(FGChainsaw_eventServer_RemoveChainsawedObject_Parms), Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_Server_StartSawing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_Server_StartSawing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "Calls StartSawing on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_Server_StartSawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "Server_StartSawing", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_Server_StartSawing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_Server_StartSawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_Server_StartSawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_Server_StartSawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGChainsaw_Server_StopSawing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGChainsaw_Server_StopSawing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "Calls StopSawing on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGChainsaw_Server_StopSawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGChainsaw, nullptr, "Server_StopSawing", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGChainsaw_Server_StopSawing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGChainsaw_Server_StopSawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGChainsaw_Server_StopSawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGChainsaw_Server_StopSawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGChainsaw_NoRegister()
	{
		return AFGChainsaw::StaticClass();
	}
	struct Z_Construct_UClass_AFGChainsaw_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnergyStored_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mEnergyStored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExcludeChainsawableFoliage_MetaData[];
#endif
		static void NewProp_mExcludeChainsawableFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mExcludeChainsawableFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollateralPickupRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCollateralPickupRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSawDownTreeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSawDownTreeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnergyConsumption_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mEnergyConsumption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFuelClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mFuelClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGChainsaw_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGChainsaw_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGChainsaw_BroadcastPickup, "BroadcastPickup" }, // 544386178
		{ &Z_Construct_UFunction_AFGChainsaw_CanStartSawing, "CanStartSawing" }, // 1571516742
		{ &Z_Construct_UFunction_AFGChainsaw_GetFuelClass, "GetFuelClass" }, // 1426439936
		{ &Z_Construct_UFunction_AFGChainsaw_HasAnyFuel, "HasAnyFuel" }, // 2695855198
		{ &Z_Construct_UFunction_AFGChainsaw_IsSawEngaged, "IsSawEngaged" }, // 3508650403
		{ &Z_Construct_UFunction_AFGChainsaw_IsSawing, "IsSawing" }, // 1285583574
		{ &Z_Construct_UFunction_AFGChainsaw_SawProgress, "SawProgress" }, // 629180157
		{ &Z_Construct_UFunction_AFGChainsaw_Server_RemoveChainsawedObject, "Server_RemoveChainsawedObject" }, // 232588768
		{ &Z_Construct_UFunction_AFGChainsaw_Server_StartSawing, "Server_StartSawing" }, // 3683762314
		{ &Z_Construct_UFunction_AFGChainsaw_Server_StopSawing, "Server_StopSawing" }, // 2470473279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChainsaw_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGChainsaw.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyStored_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "How much energy do we have stored left in the chainsaw (when we consume fuel from owners inventory\nthen this is the energy stored here)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyStored = { "mEnergyStored", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChainsaw, mEnergyStored), METADATA_PARAMS(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyStored_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyStored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mExcludeChainsawableFoliage_MetaData[] = {
		{ "Category", "Chainsaw|Collateral" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "If collateral pickups should exclude chainsawable foliage when using chainsaw" },
	};
#endif
	void Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mExcludeChainsawableFoliage_SetBit(void* Obj)
	{
		((AFGChainsaw*)Obj)->mExcludeChainsawableFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mExcludeChainsawableFoliage = { "mExcludeChainsawableFoliage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGChainsaw), &Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mExcludeChainsawableFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mExcludeChainsawableFoliage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mExcludeChainsawableFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mCollateralPickupRadius_MetaData[] = {
		{ "Category", "Chainsaw|Collateral" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "How large radius of automatic pick up of foliage is when using chainsaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mCollateralPickupRadius = { "mCollateralPickupRadius", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChainsaw, mCollateralPickupRadius), METADATA_PARAMS(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mCollateralPickupRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mCollateralPickupRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mSawDownTreeTime_MetaData[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "How many seconds should it take to saw down a tree" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mSawDownTreeTime = { "mSawDownTreeTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChainsaw, mSawDownTreeTime), METADATA_PARAMS(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mSawDownTreeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mSawDownTreeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyConsumption_MetaData[] = {
		{ "Category", "Chainsaw|Fuel" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "How much energy the chainsaw consumes. In megawatt seconds (MWs)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyConsumption = { "mEnergyConsumption", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChainsaw, mEnergyConsumption), METADATA_PARAMS(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyConsumption_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyConsumption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mFuelClass_MetaData[] = {
		{ "Category", "Chainsaw|Fuel" },
		{ "ModuleRelativePath", "Public/Equipment/FGChainsaw.h" },
		{ "ToolTip", "The fuel we want to be able to use with the chainsaw" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mFuelClass = { "mFuelClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGChainsaw, mFuelClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mFuelClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mFuelClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGChainsaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyStored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mExcludeChainsawableFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mCollateralPickupRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mSawDownTreeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mEnergyConsumption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGChainsaw_Statics::NewProp_mFuelClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGChainsaw_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGChainsaw>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGChainsaw_Statics::ClassParams = {
		&AFGChainsaw::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGChainsaw_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGChainsaw_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGChainsaw_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGChainsaw()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGChainsaw_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGChainsaw, 1638025111);
	template<> FACTORYGAME_API UClass* StaticClass<AFGChainsaw>()
	{
		return AFGChainsaw::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGChainsaw(Z_Construct_UClass_AFGChainsaw, &AFGChainsaw::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGChainsaw"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGChainsaw);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
