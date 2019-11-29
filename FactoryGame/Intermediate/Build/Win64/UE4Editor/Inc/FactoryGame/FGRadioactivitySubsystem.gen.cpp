// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRadioactivitySubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRadioactivitySubsystem() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSetEmitterID();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRemoveEmitterID();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRadioactiveSource();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRadioactivitySubsystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGRadioactivitySubsystem();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRadioactivitySubsystem_Get();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned();
// End Cross Module References
class UScriptStruct* FSetEmitterID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSetEmitterID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetEmitterID, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SetEmitterID"), sizeof(FSetEmitterID), Get_Z_Construct_UScriptStruct_FSetEmitterID_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSetEmitterID>()
{
	return FSetEmitterID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSetEmitterID(FSetEmitterID::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SetEmitterID"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSetEmitterID
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSetEmitterID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SetEmitterID")),new UScriptStruct::TCppStructOps<FSetEmitterID>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSetEmitterID;
	struct Z_Construct_UScriptStruct_FSetEmitterID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEmitterID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetEmitterID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_AttachRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_AttachRoot = { "AttachRoot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSetEmitterID, AttachRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_AttachRoot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_AttachRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSetEmitterID, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_Owner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetEmitterID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_AttachRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetEmitterID_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetEmitterID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SetEmitterID",
		sizeof(FSetEmitterID),
		alignof(FSetEmitterID),
		Z_Construct_UScriptStruct_FSetEmitterID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEmitterID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEmitterID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEmitterID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetEmitterID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSetEmitterID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SetEmitterID"), sizeof(FSetEmitterID), Get_Z_Construct_UScriptStruct_FSetEmitterID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSetEmitterID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSetEmitterID_Hash() { return 1362297211U; }
class UScriptStruct* FRemoveEmitterID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRemoveEmitterID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoveEmitterID, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RemoveEmitterID"), sizeof(FRemoveEmitterID), Get_Z_Construct_UScriptStruct_FRemoveEmitterID_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FRemoveEmitterID>()
{
	return FRemoveEmitterID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoveEmitterID(FRemoveEmitterID::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RemoveEmitterID"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRemoveEmitterID
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRemoveEmitterID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoveEmitterID")),new UScriptStruct::TCppStructOps<FRemoveEmitterID>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRemoveEmitterID;
	struct Z_Construct_UScriptStruct_FRemoveEmitterID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoveEmitterID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoveEmitterID, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::NewProp_Owner_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"RemoveEmitterID",
		sizeof(FRemoveEmitterID),
		alignof(FRemoveEmitterID),
		Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoveEmitterID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoveEmitterID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoveEmitterID"), sizeof(FRemoveEmitterID), Get_Z_Construct_UScriptStruct_FRemoveEmitterID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoveEmitterID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoveEmitterID_Hash() { return 1072396405U; }
class UScriptStruct* FRadioactiveSource::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FRadioactiveSource_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadioactiveSource, Z_Construct_UPackage__Script_FactoryGame(), TEXT("RadioactiveSource"), sizeof(FRadioactiveSource), Get_Z_Construct_UScriptStruct_FRadioactiveSource_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FRadioactiveSource>()
{
	return FRadioactiveSource::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRadioactiveSource(FRadioactiveSource::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("RadioactiveSource"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFRadioactiveSource
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFRadioactiveSource()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RadioactiveSource")),new UScriptStruct::TCppStructOps<FRadioactiveSource>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFRadioactiveSource;
	struct Z_Construct_UScriptStruct_FRadioactiveSource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadioactiveSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
		{ "ToolTip", "Description of a radioactive source." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadioactiveSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadioactiveSource>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadioactiveSource_Statics::NewProp_AttachRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
		{ "ToolTip", "Where the emitters are attached." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRadioactiveSource_Statics::NewProp_AttachRoot = { "AttachRoot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRadioactiveSource, AttachRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadioactiveSource_Statics::NewProp_AttachRoot_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FRadioactiveSource_Statics::NewProp_AttachRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadioactiveSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadioactiveSource_Statics::NewProp_AttachRoot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadioactiveSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"RadioactiveSource",
		sizeof(FRadioactiveSource),
		alignof(FRadioactiveSource),
		Z_Construct_UScriptStruct_FRadioactiveSource_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FRadioactiveSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadioactiveSource_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FRadioactiveSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadioactiveSource()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRadioactiveSource_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RadioactiveSource"), sizeof(FRadioactiveSource), Get_Z_Construct_UScriptStruct_FRadioactiveSource_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRadioactiveSource_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRadioactiveSource_Hash() { return 2124051148U; }
	void AFGRadioactivitySubsystem::StaticRegisterNativesAFGRadioactivitySubsystem()
	{
		UClass* Class = AFGRadioactivitySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGRadioactivitySubsystem::execGet },
			{ "OnActorDestroyed", &AFGRadioactivitySubsystem::execOnActorDestroyed },
			{ "OnActorSpawned", &AFGRadioactivitySubsystem::execOnActorSpawned },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics
	{
		struct FGRadioactivitySubsystem_eventGet_Parms
		{
			UObject* worldContext;
			AFGRadioactivitySubsystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadioactivitySubsystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGRadioactivitySubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadioactivitySubsystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radioactivity" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetRadioactivitySubsystem" },
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
		{ "ToolTip", "Get the radioactivity subsystem from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRadioactivitySubsystem, nullptr, "Get", sizeof(FGRadioactivitySubsystem_eventGet_Parms), Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRadioactivitySubsystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRadioactivitySubsystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics
	{
		struct FGRadioactivitySubsystem_eventOnActorDestroyed_Parms
		{
			AActor* destroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::NewProp_destroyedActor = { "destroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadioactivitySubsystem_eventOnActorDestroyed_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRadioactivitySubsystem, nullptr, "OnActorDestroyed", sizeof(FGRadioactivitySubsystem_eventOnActorDestroyed_Parms), Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics
	{
		struct FGRadioactivitySubsystem_eventOnActorSpawned_Parms
		{
			AActor* spawnedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::NewProp_spawnedActor = { "spawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadioactivitySubsystem_eventOnActorSpawned_Parms, spawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::NewProp_spawnedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
		{ "ToolTip", "End AActor interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGRadioactivitySubsystem, nullptr, "OnActorSpawned", sizeof(FGRadioactivitySubsystem_eventOnActorSpawned_Parms), Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGRadioactivitySubsystem_NoRegister()
	{
		return AFGRadioactivitySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_AFGRadioactivitySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAffectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAffectedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAffectedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mSources;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSources_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSources_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGRadioactivitySubsystem_Get, "Get" }, // 2294389502
		{ &Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorDestroyed, "OnActorDestroyed" }, // 2915440111
		{ &Z_Construct_UFunction_AFGRadioactivitySubsystem_OnActorSpawned, "OnActorSpawned" }, // 140662956
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGRadioactivitySubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor for handling the radioactive items." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mAffectedActors_MetaData[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
		{ "ToolTip", "All actors that can take damage from radiation." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mAffectedActors = { "mAffectedActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRadioactivitySubsystem, mAffectedActors), METADATA_PARAMS(Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mAffectedActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mAffectedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mAffectedActors_Inner = { "mAffectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources_MetaData[] = {
		{ "ModuleRelativePath", "FGRadioactivitySubsystem.h" },
		{ "ToolTip", "All the radioactive sources." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources = { "mSources", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGRadioactivitySubsystem, mSources), METADATA_PARAMS(Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources_Key_KeyProp = { "mSources_Key", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources_ValueProp = { "mSources", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRadioactiveSource, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mAffectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mAffectedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::NewProp_mSources_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGRadioactivitySubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::ClassParams = {
		&AFGRadioactivitySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGRadioactivitySubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGRadioactivitySubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGRadioactivitySubsystem, 2081683544);
	template<> FACTORYGAME_API UClass* StaticClass<AFGRadioactivitySubsystem>()
	{
		return AFGRadioactivitySubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGRadioactivitySubsystem(Z_Construct_UClass_AFGRadioactivitySubsystem, &AFGRadioactivitySubsystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGRadioactivitySubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGRadioactivitySubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
