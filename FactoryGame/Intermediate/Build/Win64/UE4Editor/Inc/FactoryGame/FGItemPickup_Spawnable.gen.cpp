// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGItemPickup_Spawnable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGItemPickup_Spawnable() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGItemPickup_Spawnable();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGItemPickup();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGItemPickup_Spawnable_PlaySpawnEffect = FName(TEXT("PlaySpawnEffect"));
	void AFGItemPickup_Spawnable::PlaySpawnEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGItemPickup_Spawnable_PlaySpawnEffect),NULL);
	}
	void AFGItemPickup_Spawnable::StaticRegisterNativesAFGItemPickup_Spawnable()
	{
		UClass* Class = AFGItemPickup_Spawnable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToWorldStackAtLocation", &AFGItemPickup_Spawnable::execAddItemToWorldStackAtLocation },
			{ "CreateItemDrop", &AFGItemPickup_Spawnable::execCreateItemDrop },
			{ "CreateItemDropsInCylinder", &AFGItemPickup_Spawnable::execCreateItemDropsInCylinder },
			{ "FindGroundLocationAndRotation", &AFGItemPickup_Spawnable::execFindGroundLocationAndRotation },
			{ "FindGroundLocationInfrontOfActor", &AFGItemPickup_Spawnable::execFindGroundLocationInfrontOfActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics
	{
		struct FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms
		{
			UObject* worldContext;
			FInventoryStack item;
			FVector spawnLocation;
			FRotator spawnRotation;
			TSubclassOf<AFGItemPickup_Spawnable>  itemDropClass;
			AFGItemPickup_Spawnable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDropClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms, ReturnValue), Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_itemDropClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemDropClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms, itemDropClass), Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_spawnRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms, spawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_spawnLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms, spawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms, item), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_itemDropClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_spawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_spawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemDrop" },
		{ "CPP_Default_itemDropClass", "None" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup_Spawnable, "AddItemToWorldStackAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(FGItemPickup_Spawnable_eventAddItemToWorldStackAtLocation_Parms), Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics
	{
		struct FGItemPickup_Spawnable_eventCreateItemDrop_Parms
		{
			UObject* worldContext;
			FInventoryStack item;
			FVector spawnLocation;
			FRotator spawnRotation;
			TSubclassOf<AFGItemPickup_Spawnable>  itemDropClass;
			AFGItemPickup_Spawnable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDropClass;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDrop_Parms, ReturnValue), Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_itemDropClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemDropClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDrop_Parms, itemDropClass), Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_spawnRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDrop_Parms, spawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_spawnLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "spawnLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDrop_Parms, spawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDrop_Parms, item), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDrop_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_itemDropClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_spawnRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_spawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemDrop" },
		{ "CPP_Default_itemDropClass", "None" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
		{ "ToolTip", "Creates a item drop in the world\nNOTE: Server only\n\n@param world - the world we try to spawn the item drop in\n@param item - the item stack we want to drop\n@param spawnLocation - the location where we want to spawn the item drop in\n@param spawnRotation - the rotation where we want to spawn the item drop with\n@param itemDropClass - what class of item drop do we want to spawn, nullptr means default class that's specified in FGResourceSettings\n\n@return a valid item drop if everything went well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup_Spawnable, "CreateItemDrop", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(FGItemPickup_Spawnable_eventCreateItemDrop_Parms), Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics
	{
		struct FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms
		{
			UObject* worldContext;
			TArray<FInventoryStack> items;
			FVector aroundLocation;
			float sphereRadius;
			TArray<AActor*> actorsToIgnore;
			TArray<AFGItemPickup_Spawnable*> out_itemDrops;
			TSubclassOf<AFGItemPickup_Spawnable>  itemDropClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_itemDropClass;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_itemDrops;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_itemDrops_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorsToIgnore_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sphereRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_aroundLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_itemDropClass = { UE4CodeGen_Private::EPropertyClass::Class, "itemDropClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms, itemDropClass), Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_out_itemDrops = { UE4CodeGen_Private::EPropertyClass::Array, "out_itemDrops", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms, out_itemDrops), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_out_itemDrops_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "out_itemDrops", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_actorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_actorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "actorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms, actorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_actorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_actorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_actorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "actorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_sphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "sphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms, sphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_aroundLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "aroundLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms, aroundLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_items = { UE4CodeGen_Private::EPropertyClass::Array, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms, items), METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_items_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_itemDropClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_out_itemDrops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_out_itemDrops_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_actorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_actorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_sphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_aroundLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemDrop" },
		{ "CPP_Default_itemDropClass", "None" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
		{ "ToolTip", "Creates item drops in a sphere in the world around a location\nNOTE: Server only\n\n@param world - the world we try to spawn the item drops in\n@param items - the item stack we want to drop\n@param aroundLocation - the location where we want to spawn the item drop in\n@param sphereRadius - the rotation where we want to spawn the item drop with\n@param itemDropClass - what class of item drop do we want to spawn, nullptr means default class that's specified in FGResourceSettings\n\n@return a valid item drop if everything went well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup_Spawnable, "CreateItemDropsInCylinder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(FGItemPickup_Spawnable_eventCreateItemDropsInCylinder_Parms), Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics
	{
		struct FGItemPickup_Spawnable_eventFindGroundLocationAndRotation_Parms
		{
			UObject* worldContext;
			FVector fromLocation;
			TArray<AActor*> actorsToIgnore;
			FVector out_location;
			FRotator out_rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_actorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorsToIgnore_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fromLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_out_rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "out_rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationAndRotation_Parms, out_rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_out_location = { UE4CodeGen_Private::EPropertyClass::Struct, "out_location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationAndRotation_Parms, out_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_actorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_actorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "actorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationAndRotation_Parms, actorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_actorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_actorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_actorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "actorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_fromLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "fromLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationAndRotation_Parms, fromLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationAndRotation_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_out_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_out_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_actorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_actorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_fromLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemDrop" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
		{ "ToolTip", "Find the ground above/below the specified location and how to rotate a mesh to align with it\n\n@param world - the world we try to find the ground in\n@param fromLocation - the location we want to try to find the ground above/below\n@param actorsToIgnore - the actors we want to ignore when trying to find the ground\n@param out_location - location to put the item on the ground\n@param out_rotation - rotation to put the item on the ground\n\n@return a valid item drop if everything went well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup_Spawnable, "FindGroundLocationAndRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(FGItemPickup_Spawnable_eventFindGroundLocationAndRotation_Parms), Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics
	{
		struct FGItemPickup_Spawnable_eventFindGroundLocationInfrontOfActor_Parms
		{
			const AActor* sourceActor;
			float offsetLength;
			FInventoryStack item;
			FVector out_location;
			FRotator out_rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_offsetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sourceActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_out_rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "out_rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationInfrontOfActor_Parms, out_rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_out_location = { UE4CodeGen_Private::EPropertyClass::Struct, "out_location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationInfrontOfActor_Parms, out_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_item = { UE4CodeGen_Private::EPropertyClass::Struct, "item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationInfrontOfActor_Parms, item), Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_item_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_offsetLength = { UE4CodeGen_Private::EPropertyClass::Float, "offsetLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationInfrontOfActor_Parms, offsetLength), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_sourceActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_sourceActor = { UE4CodeGen_Private::EPropertyClass::Object, "sourceActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGItemPickup_Spawnable_eventFindGroundLocationInfrontOfActor_Parms, sourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_sourceActor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_sourceActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_out_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_out_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_offsetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::NewProp_sourceActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemDrop" },
		{ "DefaultToSelf", "worldContext" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
		{ "ToolTip", "Finds a suitable drop location in front of an actor, taking into account roofs, walls and such.\n\n@param world - the world we try to find the ground in\n@param fromLocation - the location we want to try to find the ground above/below\n@param actorsToIgnore - the actors we want to ignore when trying to find the ground\n@param out_location - location to put the item on the ground\n@param out_rotation - rotation to put the item on the ground\n\n@return a valid item drop if everything went well" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup_Spawnable, "FindGroundLocationInfrontOfActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(FGItemPickup_Spawnable_eventFindGroundLocationInfrontOfActor_Parms), Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemDrop" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
		{ "ToolTip", "Place to play spawn effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGItemPickup_Spawnable, "PlaySpawnEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGItemPickup_Spawnable_NoRegister()
	{
		return AFGItemPickup_Spawnable::StaticClass();
	}
	struct Z_Construct_UClass_AFGItemPickup_Spawnable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlaySpawnEffect_MetaData[];
#endif
		static void NewProp_mPlaySpawnEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mPlaySpawnEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGItemPickup,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGItemPickup_Spawnable_AddItemToWorldStackAtLocation, "AddItemToWorldStackAtLocation" }, // 1519372312
		{ &Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDrop, "CreateItemDrop" }, // 1486352526
		{ &Z_Construct_UFunction_AFGItemPickup_Spawnable_CreateItemDropsInCylinder, "CreateItemDropsInCylinder" }, // 3799552202
		{ &Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationAndRotation, "FindGroundLocationAndRotation" }, // 2172502162
		{ &Z_Construct_UFunction_AFGItemPickup_Spawnable_FindGroundLocationInfrontOfActor, "FindGroundLocationInfrontOfActor" }, // 3363814457
		{ &Z_Construct_UFunction_AFGItemPickup_Spawnable_PlaySpawnEffect, "PlaySpawnEffect" }, // 2127785185
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGItemPickup_Spawnable.h" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mPlaySpawnEffect_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
		{ "ToolTip", "Should we play a spawn effect?" },
	};
#endif
	void Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mPlaySpawnEffect_SetBit(void* Obj)
	{
		((AFGItemPickup_Spawnable*)Obj)->mPlaySpawnEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mPlaySpawnEffect = { UE4CodeGen_Private::EPropertyClass::Bool, "mPlaySpawnEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGItemPickup_Spawnable), &Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mPlaySpawnEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mPlaySpawnEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mPlaySpawnEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FGItemPickup_Spawnable.h" },
		{ "ToolTip", "The mesh to represent the item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGItemPickup_Spawnable, mMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mPlaySpawnEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::NewProp_mMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGItemPickup_Spawnable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::ClassParams = {
		&AFGItemPickup_Spawnable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGItemPickup_Spawnable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGItemPickup_Spawnable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGItemPickup_Spawnable, 3704348204);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGItemPickup_Spawnable(Z_Construct_UClass_AFGItemPickup_Spawnable, &AFGItemPickup_Spawnable::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGItemPickup_Spawnable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGItemPickup_Spawnable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
