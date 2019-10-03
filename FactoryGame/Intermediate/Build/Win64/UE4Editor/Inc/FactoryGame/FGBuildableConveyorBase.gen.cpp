// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableConveyorBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableConveyorBase() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItems();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItem();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConveyorRemoteCallObject_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConveyorRemoteCallObject();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRemoteCallObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UPresistentConveyorPackagingData_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UPresistentConveyorPackagingData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorBase();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FConveyorBeltItems::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConveyorBeltItems, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConveyorBeltItems"), sizeof(FConveyorBeltItems), Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConveyorBeltItems(FConveyorBeltItems::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConveyorBeltItems"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItems
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItems()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConveyorBeltItems")),new UScriptStruct::TCppStructOps<FConveyorBeltItems>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItems;
	struct Z_Construct_UScriptStruct_FConveyorBeltItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Struct to help replicate the conveyor belt items array.\nIt's a lean version of fast TArray replication that guarantee the same order of the elements on server and client.\nIt lacks support for:\n  - Item changes (initial replication only) there is a todo in the source file on how this can be added if needed.\n  - Mapping of object references (objects that are replicated that is). Look at fast TArray replication on how to implement this if needed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConveyorBeltItems>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConveyorBeltItems",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConveyorBeltItems),
		alignof(FConveyorBeltItems),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItems()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConveyorBeltItems"), sizeof(FConveyorBeltItems), Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConveyorBeltItems_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItems_CRC() { return 2470069133U; }
class UScriptStruct* FConveyorBeltItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FConveyorBeltItem, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ConveyorBeltItem"), sizeof(FConveyorBeltItem), Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FConveyorBeltItem(FConveyorBeltItem::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ConveyorBeltItem"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItem
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ConveyorBeltItem")),new UScriptStruct::TCppStructOps<FConveyorBeltItem>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFConveyorBeltItem;
	struct Z_Construct_UScriptStruct_FConveyorBeltItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Holds data for an item traveling on the conveyor.\n\n@note This item must not contain any object references as they will not get replicated correctly.\n@note We do not yet support changes to variables, only initial replication will be done.\n@note We only support adds at the end of the array, no inserts allowed!\n\n@see FConveyorBeltItems::NetDeltaSerialize for more comments about the features supported and not." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConveyorBeltItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "The offset of this item along the conveyor belt in range [0,LENGTH].\n@todo This only need to replicate when the item is added to the conveyor as it is simulated locally on the client after that.\n      Having this replicated always works for now because we never mark an item as dirty after adding it.\n      I.e. we only do one replication per item." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Float, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItem, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "The type of this item." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item = { UE4CodeGen_Private::EPropertyClass::Struct, "Item", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FConveyorBeltItem, Item), Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ConveyorBeltItem",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FConveyorBeltItem),
		alignof(FConveyorBeltItem),
		Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConveyorBeltItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ConveyorBeltItem"), sizeof(FConveyorBeltItem), Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FConveyorBeltItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FConveyorBeltItem_CRC() { return 1674901614U; }
	static FName NAME_UFGConveyorRemoteCallObject_Server_OnUse = FName(TEXT("Server_OnUse"));
	void UFGConveyorRemoteCallObject::Server_OnUse(AFGBuildableConveyorBelt* target, AFGCharacterPlayer* byCharacter, int32 itemIndex, int8 repVersion)
	{
		FGConveyorRemoteCallObject_eventServer_OnUse_Parms Parms;
		Parms.target=target;
		Parms.byCharacter=byCharacter;
		Parms.itemIndex=itemIndex;
		Parms.repVersion=repVersion;
		ProcessEvent(FindFunctionChecked(NAME_UFGConveyorRemoteCallObject_Server_OnUse),&Parms);
	}
	void UFGConveyorRemoteCallObject::StaticRegisterNativesUFGConveyorRemoteCallObject()
	{
		UClass* Class = UFGConveyorRemoteCallObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Server_OnUse", &UFGConveyorRemoteCallObject::execServer_OnUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics
	{
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_repVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_repVersion = { UE4CodeGen_Private::EPropertyClass::Int8, "repVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGConveyorRemoteCallObject_eventServer_OnUse_Parms, repVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_itemIndex = { UE4CodeGen_Private::EPropertyClass::Int, "itemIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGConveyorRemoteCallObject_eventServer_OnUse_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_byCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "byCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGConveyorRemoteCallObject_eventServer_OnUse_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_target = { UE4CodeGen_Private::EPropertyClass::Object, "target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGConveyorRemoteCallObject_eventServer_OnUse_Parms, target), Z_Construct_UClass_AFGBuildableConveyorBelt_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_repVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_itemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_byCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGConveyorRemoteCallObject, "Server_OnUse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(FGConveyorRemoteCallObject_eventServer_OnUse_Parms), Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGConveyorRemoteCallObject_NoRegister()
	{
		return UFGConveyorRemoteCallObject::StaticClass();
	}
	struct Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mForceNetField_UFGConveyorRemoteCallObject_MetaData[];
#endif
		static void NewProp_mForceNetField_UFGConveyorRemoteCallObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mForceNetField_UFGConveyorRemoteCallObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGRemoteCallObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGConveyorRemoteCallObject_Server_OnUse, "Server_OnUse" }, // 1174710948
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::NewProp_mForceNetField_UFGConveyorRemoteCallObject_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "NoAutoJson", "" },
		{ "ToolTip", "Compact representation of mSplineComponent, used for replication and save game" },
	};
#endif
	void Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::NewProp_mForceNetField_UFGConveyorRemoteCallObject_SetBit(void* Obj)
	{
		((UFGConveyorRemoteCallObject*)Obj)->mForceNetField_UFGConveyorRemoteCallObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::NewProp_mForceNetField_UFGConveyorRemoteCallObject = { UE4CodeGen_Private::EPropertyClass::Bool, "mForceNetField_UFGConveyorRemoteCallObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGConveyorRemoteCallObject), &Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::NewProp_mForceNetField_UFGConveyorRemoteCallObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::NewProp_mForceNetField_UFGConveyorRemoteCallObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::NewProp_mForceNetField_UFGConveyorRemoteCallObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::NewProp_mForceNetField_UFGConveyorRemoteCallObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGConveyorRemoteCallObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::ClassParams = {
		&UFGConveyorRemoteCallObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGConveyorRemoteCallObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGConveyorRemoteCallObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGConveyorRemoteCallObject, 2483320348);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGConveyorRemoteCallObject(Z_Construct_UClass_UFGConveyorRemoteCallObject, &UFGConveyorRemoteCallObject::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGConveyorRemoteCallObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGConveyorRemoteCallObject);
	void UPresistentConveyorPackagingData::StaticRegisterNativesUPresistentConveyorPackagingData()
	{
	}
	UClass* Z_Construct_UClass_UPresistentConveyorPackagingData_NoRegister()
	{
		return UPresistentConveyorPackagingData::StaticClass();
	}
	struct Z_Construct_UClass_UPresistentConveyorPackagingData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresistentConveyorPackagingData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresistentConveyorPackagingData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresistentConveyorPackagingData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresistentConveyorPackagingData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresistentConveyorPackagingData_Statics::ClassParams = {
		&UPresistentConveyorPackagingData::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPresistentConveyorPackagingData_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPresistentConveyorPackagingData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresistentConveyorPackagingData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresistentConveyorPackagingData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresistentConveyorPackagingData, 4194157831);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresistentConveyorPackagingData(Z_Construct_UClass_UPresistentConveyorPackagingData, &UPresistentConveyorPackagingData::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UPresistentConveyorPackagingData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresistentConveyorPackagingData);
	void AFGBuildableConveyorBase::StaticRegisterNativesAFGBuildableConveyorBase()
	{
		UClass* Class = AFGBuildableConveyorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsSignificant", &AFGBuildableConveyorBase::execGetIsSignificant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics
	{
		struct FGBuildableConveyorBase_eventGetIsSignificant_Parms
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
	void Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildableConveyorBase_eventGetIsSignificant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableConveyorBase_eventGetIsSignificant_Parms), &Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableConveyorBase, "GetIsSignificant", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableConveyorBase_eventGetIsSignificant_Parms), Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableConveyorBase_NoRegister()
	{
		return AFGBuildableConveyorBase::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableConveyorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnection1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnection1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnection0_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnection0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresistentConveyorPackagingDataObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PresistentConveyorPackagingDataObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableConveyorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildable,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableConveyorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableConveyorBase_GetIsSignificant, "GetIsSignificant" }, // 3704222666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "SerializeToFArchive", "" },
		{ "ToolTip", "Shared base for conveyor belts and lifts.\nResponsible for common logic such as the factory ticking, replication, interactions etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1_MetaData[] = {
		{ "Category", "Conveyor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Second connection on conveyor belt" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1 = { UE4CodeGen_Private::EPropertyClass::Object, "mConnection1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection1), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0_MetaData[] = {
		{ "Category", "Conveyor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "First connection on conveyor belt, Connections are always in the same order, mConnection0 is the input, mConnection1 is the output." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0 = { UE4CodeGen_Private::EPropertyClass::Object, "mConnection0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mConnection0), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "NoAutoJson", "" },
		{ "ToolTip", "All the locally simulated resource offsets on the conveyor belt." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems = { UE4CodeGen_Private::EPropertyClass::Struct, "mItems", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mItems), Z_Construct_UScriptStruct_FConveyorBeltItems, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed_MetaData[] = {
		{ "Category", "Conveyor" },
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
		{ "ToolTip", "Speed of this conveyor." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, mSpeed), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_PresistentConveyorPackagingDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableConveyorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_PresistentConveyorPackagingDataObject = { UE4CodeGen_Private::EPropertyClass::Object, "PresistentConveyorPackagingDataObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableConveyorBase, PresistentConveyorPackagingDataObject), Z_Construct_UClass_UPresistentConveyorPackagingData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_PresistentConveyorPackagingDataObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_PresistentConveyorPackagingDataObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableConveyorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mConnection0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_mSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableConveyorBase_Statics::NewProp_PresistentConveyorPackagingDataObject,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSignificanceInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableConveyorBase, IFGSignificanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableConveyorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableConveyorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableConveyorBase_Statics::ClassParams = {
		&AFGBuildableConveyorBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A5u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableConveyorBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableConveyorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableConveyorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableConveyorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableConveyorBase, 2977900725);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableConveyorBase(Z_Construct_UClass_AFGBuildableConveyorBase, &AFGBuildableConveyorBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableConveyorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableConveyorBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AFGBuildableConveyorBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
