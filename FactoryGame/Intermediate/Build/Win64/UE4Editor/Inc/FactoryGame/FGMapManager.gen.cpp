// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGMapManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMapManager() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFogOfWarQueuePair();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPlayerController_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMapManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMapManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGMapManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGActorRepresentationManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FFogOfWarQueuePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFogOfWarQueuePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFogOfWarQueuePair, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FogOfWarQueuePair"), sizeof(FFogOfWarQueuePair), Get_Z_Construct_UScriptStruct_FFogOfWarQueuePair_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFogOfWarQueuePair>()
{
	return FFogOfWarQueuePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFogOfWarQueuePair(FFogOfWarQueuePair::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FogOfWarQueuePair"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFogOfWarQueuePair
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFogOfWarQueuePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FogOfWarQueuePair")),new UScriptStruct::TCppStructOps<FFogOfWarQueuePair>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFogOfWarQueuePair;
	struct Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFogOfWarQueuePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::NewProp_playerController_MetaData[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::NewProp_playerController = { "playerController", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFogOfWarQueuePair, playerController), Z_Construct_UClass_AFGPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::NewProp_playerController_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::NewProp_playerController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::NewProp_playerController,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FogOfWarQueuePair",
		sizeof(FFogOfWarQueuePair),
		alignof(FFogOfWarQueuePair),
		Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFogOfWarQueuePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFogOfWarQueuePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FogOfWarQueuePair"), sizeof(FFogOfWarQueuePair), Get_Z_Construct_UScriptStruct_FFogOfWarQueuePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFogOfWarQueuePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFogOfWarQueuePair_Hash() { return 2495199223U; }
	void AFGMapManager::StaticRegisterNativesAFGMapManager()
	{
		UClass* Class = AFGMapManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGMapManager::execGet },
			{ "GetFogOfWarTexture", &AFGMapManager::execGetFogOfWarTexture },
			{ "OnActorRepresentationAdded", &AFGMapManager::execOnActorRepresentationAdded },
			{ "OnActorRepresentationRemoved", &AFGMapManager::execOnActorRepresentationRemoved },
			{ "OnActorRepresentationUpdated", &AFGMapManager::execOnActorRepresentationUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGMapManager_Get_Statics
	{
		struct FGMapManager_eventGet_Parms
		{
			UObject* worldContext;
			AFGMapManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGMapManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGMapManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGMapManager_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGMapManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGMapManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGMapManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGMapManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetMapManager" },
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "Get the map manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGMapManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGMapManager, nullptr, "Get", sizeof(FGMapManager_eventGet_Parms), Z_Construct_UFunction_AFGMapManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGMapManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGMapManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGMapManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics
	{
		struct FGMapManager_eventGetFogOfWarTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapManager_eventGetFogOfWarTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fog of War" },
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "End IFSaveInterface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGMapManager, nullptr, "GetFogOfWarTexture", sizeof(FGMapManager_eventGetFogOfWarTexture_Parms), Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics
	{
		struct FGMapManager_eventOnActorRepresentationAdded_Parms
		{
			UFGActorRepresentation* actorRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::NewProp_actorRepresentation = { "actorRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapManager_eventOnActorRepresentationAdded_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGMapManager, nullptr, "OnActorRepresentationAdded", sizeof(FGMapManager_eventOnActorRepresentationAdded_Parms), Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics
	{
		struct FGMapManager_eventOnActorRepresentationRemoved_Parms
		{
			UFGActorRepresentation* actorRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::NewProp_actorRepresentation = { "actorRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapManager_eventOnActorRepresentationRemoved_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGMapManager, nullptr, "OnActorRepresentationRemoved", sizeof(FGMapManager_eventOnActorRepresentationRemoved_Parms), Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics
	{
		struct FGMapManager_eventOnActorRepresentationUpdated_Parms
		{
			UFGActorRepresentation* actorRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::NewProp_actorRepresentation = { "actorRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMapManager_eventOnActorRepresentationUpdated_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGMapManager, nullptr, "OnActorRepresentationUpdated", sizeof(FGMapManager_eventOnActorRepresentationUpdated_Parms), Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGMapManager_NoRegister()
	{
		return AFGMapManager::StaticClass();
	}
	struct Z_Construct_UClass_AFGMapManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDynamicFogOfWarRevealActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDynamicFogOfWarRevealActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDynamicFogOfWarRevealActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRepresentationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActorRepresentationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarTransferQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFogOfWarTransferQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mFogOfWarTransferQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedMinimapCaptureActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedMinimapCaptureActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFogOfWarTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarRawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mFogOfWarRawData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mFogOfWarRawData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGMapManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGMapManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGMapManager_Get, "Get" }, // 2475769734
		{ &Z_Construct_UFunction_AFGMapManager_GetFogOfWarTexture, "GetFogOfWarTexture" }, // 620570493
		{ &Z_Construct_UFunction_AFGMapManager_OnActorRepresentationAdded, "OnActorRepresentationAdded" }, // 1445442684
		{ &Z_Construct_UFunction_AFGMapManager_OnActorRepresentationRemoved, "OnActorRepresentationRemoved" }, // 1218857971
		{ &Z_Construct_UFunction_AFGMapManager_OnActorRepresentationUpdated, "OnActorRepresentationUpdated" }, // 1589308115
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMapManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGMapManager.h" },
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This class manages the map." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMapManager_Statics::NewProp_mDynamicFogOfWarRevealActors_MetaData[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "The currently active dynamic actor representations that reveal fog of war" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mDynamicFogOfWarRevealActors = { "mDynamicFogOfWarRevealActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMapManager, mDynamicFogOfWarRevealActors), METADATA_PARAMS(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mDynamicFogOfWarRevealActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mDynamicFogOfWarRevealActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mDynamicFogOfWarRevealActors_Inner = { "mDynamicFogOfWarRevealActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMapManager_Statics::NewProp_mActorRepresentationManager_MetaData[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "Actor representation manager to get representations updates to calculate fog of war data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mActorRepresentationManager = { "mActorRepresentationManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMapManager, mActorRepresentationManager), Z_Construct_UClass_AFGActorRepresentationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mActorRepresentationManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mActorRepresentationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTransferQueue_MetaData[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "Queue to handle clients waiting for fog of war transfer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTransferQueue = { "mFogOfWarTransferQueue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMapManager, mFogOfWarTransferQueue), METADATA_PARAMS(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTransferQueue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTransferQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTransferQueue_Inner = { "mFogOfWarTransferQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFogOfWarQueuePair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMapManager_Statics::NewProp_mCachedMinimapCaptureActor_MetaData[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "Capture actor used for translate world locations to map locations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mCachedMinimapCaptureActor = { "mCachedMinimapCaptureActor", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMapManager, mCachedMinimapCaptureActor), Z_Construct_UClass_AFGMinimapCaptureActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mCachedMinimapCaptureActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mCachedMinimapCaptureActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTexture_MetaData[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "The fog of war texture that is used for the map" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTexture = { "mFogOfWarTexture", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMapManager, mFogOfWarTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarRawData_MetaData[] = {
		{ "ModuleRelativePath", "FGMapManager.h" },
		{ "ToolTip", "The raw pixel data for the fog of war texture. Each element represents a channel for a pixel" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarRawData = { "mFogOfWarRawData", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGMapManager, mFogOfWarRawData), METADATA_PARAMS(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarRawData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarRawData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarRawData_Inner = { "mFogOfWarRawData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGMapManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mDynamicFogOfWarRevealActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mDynamicFogOfWarRevealActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mActorRepresentationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTransferQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTransferQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mCachedMinimapCaptureActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGMapManager_Statics::NewProp_mFogOfWarRawData_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGMapManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGMapManager, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGMapManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGMapManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGMapManager_Statics::ClassParams = {
		&AFGMapManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGMapManager_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGMapManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGMapManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGMapManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGMapManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGMapManager, 2581873043);
	template<> FACTORYGAME_API UClass* StaticClass<AFGMapManager>()
	{
		return AFGMapManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGMapManager(Z_Construct_UClass_AFGMapManager, &AFGMapManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGMapManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGMapManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
