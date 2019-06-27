// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGFoliageRemoval.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGFoliageRemoval() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRemovedInstanceArray();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRemovedInstance();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliageRemoval_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGFoliageRemoval();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FRemovedInstanceArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRemovedInstanceArray_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemovedInstanceArray, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RemovedInstanceArray"), sizeof(FRemovedInstanceArray), Get_Z_Construct_UScriptStruct_FRemovedInstanceArray_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemovedInstanceArray(FRemovedInstanceArray::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RemovedInstanceArray"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRemovedInstanceArray
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRemovedInstanceArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemovedInstanceArray")),new UScriptStruct::TCppStructOps<FRemovedInstanceArray>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRemovedInstanceArray;
	struct Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageRemover_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageRemover;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "Wrapper around the Items struct to enable custom delta serialization (we send a part of the data to the client every frame instead of sending it all in one frame)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemovedInstanceArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "All the items that has been removed from the AFGFoliageRemoval" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_Items = { UE4CodeGen_Private::EPropertyClass::Array, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, STRUCT_OFFSET(FRemovedInstanceArray, Items), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_Items_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_Items_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Items", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRemovedInstance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_FoliageRemover_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "Used to invoke the callback directly on the foliage removal instead of on FRemovedInstance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_FoliageRemover = { UE4CodeGen_Private::EPropertyClass::Object, "FoliageRemover", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000080000000, 1, nullptr, STRUCT_OFFSET(FRemovedInstanceArray, FoliageRemover), Z_Construct_UClass_AFGFoliageRemoval_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_FoliageRemover_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_FoliageRemover_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::NewProp_FoliageRemover,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"RemovedInstanceArray",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRemovedInstanceArray),
		alignof(FRemovedInstanceArray),
		Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemovedInstanceArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemovedInstanceArray_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemovedInstanceArray"), sizeof(FRemovedInstanceArray), Get_Z_Construct_UScriptStruct_FRemovedInstanceArray_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemovedInstanceArray_CRC() { return 3609779295U; }
class UScriptStruct* FRemovedInstance::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRemovedInstance_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemovedInstance, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RemovedInstance"), sizeof(FRemovedInstance), Get_Z_Construct_UScriptStruct_FRemovedInstance_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemovedInstance(FRemovedInstance::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RemovedInstance"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRemovedInstance
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRemovedInstance()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemovedInstance")),new UScriptStruct::TCppStructOps<FRemovedInstance>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRemovedInstance;
	struct Z_Construct_UScriptStruct_FRemovedInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemovedInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "We can't send the id of the instance to clients, as that requires us to maintain a commandbuffer with all done commands to be able to get the same id's a server/client" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemovedInstance>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "Stored in localspace" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Transform = { UE4CodeGen_Private::EPropertyClass::Struct, "Transform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000081000000, 1, nullptr, STRUCT_OFFSET(FRemovedInstance, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "Stored in localspace. Compressed location to get the id of the item, @todo: Toy around with different FVector_NetQuantize and see what works best" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FRemovedInstance, Location), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemovedInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemovedInstance_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemovedInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"RemovedInstance",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FRemovedInstance),
		alignof(FRemovedInstance),
		Z_Construct_UScriptStruct_FRemovedInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstance_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemovedInstance_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovedInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemovedInstance()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemovedInstance_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemovedInstance"), sizeof(FRemovedInstance), Get_Z_Construct_UScriptStruct_FRemovedInstance_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemovedInstance_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemovedInstance_CRC() { return 3336851844U; }
	void AFGFoliageRemoval::StaticRegisterNativesAFGFoliageRemoval()
	{
		UClass* Class = AFGFoliageRemoval::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterWithSubsystem", &AFGFoliageRemoval::execRegisterWithSubsystem },
			{ "RemoveInstance", &AFGFoliageRemoval::execRemoveInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "Register with the foliage removal subsystem, retries if no one is created yet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemoval, "RegisterWithSubsystem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics
	{
		struct FGFoliageRemoval_eventRemoveInstance_Parms
		{
			FTransform foliageTransform;
			bool localSpace;
			int32 instanceId;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_instanceId;
		static void NewProp_localSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_localSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_foliageTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGFoliageRemoval_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGFoliageRemoval_eventRemoveInstance_Parms), &Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_instanceId = { UE4CodeGen_Private::EPropertyClass::Int, "instanceId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliageRemoval_eventRemoveInstance_Parms, instanceId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_localSpace_SetBit(void* Obj)
	{
		((FGFoliageRemoval_eventRemoveInstance_Parms*)Obj)->localSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_localSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "localSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGFoliageRemoval_eventRemoveInstance_Parms), &Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_localSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_foliageTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "foliageTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGFoliageRemoval_eventRemoveInstance_Parms, foliageTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_instanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_localSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::NewProp_foliageTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Foliage" },
		{ "CPP_Default_instanceId", "-1" },
		{ "CPP_Default_localSpace", "false" },
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "Remove a instance from the level\n\nSERVER ONLY\n@param foliageTransform - a transform for the instance\n@param localSpace - if true, then the foliageTransform is sent in localspace\n@param instanceId - optional, if this is set (not -1), then we can faster lookup the instance, sadly, it's not stable, so we won't be able to rely only on these" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGFoliageRemoval, "RemoveInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGFoliageRemoval_eventRemoveInstance_Parms), Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGFoliageRemoval_NoRegister()
	{
		return AFGFoliageRemoval::StaticClass();
	}
	struct Z_Construct_UClass_AFGFoliageRemoval_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLevelBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mLevelBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFoliageTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mFoliageTypeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mLevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRemovedInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRemovedInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGFoliageRemoval_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGFoliageRemoval_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGFoliageRemoval_RegisterWithSubsystem, "RegisterWithSubsystem" }, // 2549816782
		{ &Z_Construct_UFunction_AFGFoliageRemoval_RemoveInstance, "RemoveInstance" }, // 261286991
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliageRemoval_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGFoliageRemoval.h" },
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelBounds_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "ServerOnly: The bounds of the level we have foliage in (@todo: Can we remove this savegame tag?)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "mLevelBounds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(AFGFoliageRemoval, mLevelBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelBounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mFoliageTypeName_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "The name of mesh component to use the level" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mFoliageTypeName = { UE4CodeGen_Private::EPropertyClass::Name, "mFoliageTypeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000020, 1, nullptr, STRUCT_OFFSET(AFGFoliageRemoval, mFoliageTypeName), METADATA_PARAMS(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mFoliageTypeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mFoliageTypeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelName_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "The name of the level that this actor removes foliage from, so that the foliage system can find it" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelName = { UE4CodeGen_Private::EPropertyClass::Name, "mLevelName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000020, 1, nullptr, STRUCT_OFFSET(AFGFoliageRemoval, mLevelName), METADATA_PARAMS(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "This needs to be a UPROPERTY as it will become null:ed when the level this actor is associated with is streamed out" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGFoliageRemoval, mMeshComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mRemovedInstances_MetaData[] = {
		{ "ModuleRelativePath", "FGFoliageRemoval.h" },
		{ "ToolTip", "Instances to remove, has custom \"ReplicatedUsing\", so we get a notify for each instance replicated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mRemovedInstances = { UE4CodeGen_Private::EPropertyClass::Struct, "mRemovedInstances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000020, 1, nullptr, STRUCT_OFFSET(AFGFoliageRemoval, mRemovedInstances), Z_Construct_UScriptStruct_FRemovedInstanceArray, METADATA_PARAMS(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mRemovedInstances_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mRemovedInstances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGFoliageRemoval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mFoliageTypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGFoliageRemoval_Statics::NewProp_mRemovedInstances,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGFoliageRemoval_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGFoliageRemoval, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGFoliageRemoval_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGFoliageRemoval>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGFoliageRemoval_Statics::ClassParams = {
		&AFGFoliageRemoval::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGFoliageRemoval_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemoval_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFGFoliageRemoval_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGFoliageRemoval_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGFoliageRemoval()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGFoliageRemoval_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGFoliageRemoval, 3192079500);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGFoliageRemoval(Z_Construct_UClass_AFGFoliageRemoval, &AFGFoliageRemoval::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGFoliageRemoval"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGFoliageRemoval);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
