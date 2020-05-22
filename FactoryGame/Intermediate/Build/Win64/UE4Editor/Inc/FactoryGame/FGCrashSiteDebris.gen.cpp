// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGCrashSiteDebris.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCrashSiteDebris() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSimulatedItemDropTransform();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSimulatedActorTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrashSiteDebrisActor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSimulatedMeshTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDebrisItemDrop();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDebrisActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDebrisMesh();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrashSiteDebris_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCrashSiteDebris();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FSimulatedItemDropTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulatedItemDropTransform, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SimulatedItemDropTransform"), sizeof(FSimulatedItemDropTransform), Get_Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSimulatedItemDropTransform>()
{
	return FSimulatedItemDropTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimulatedItemDropTransform(FSimulatedItemDropTransform::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SimulatedItemDropTransform"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedItemDropTransform
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedItemDropTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimulatedItemDropTransform")),new UScriptStruct::TCppStructOps<FSimulatedItemDropTransform>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedItemDropTransform;
	struct Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDropTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDropTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Struct containing the saved simulation for actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulatedItemDropTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::NewProp_ItemDropTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::NewProp_ItemDropTransform = { "ItemDropTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulatedItemDropTransform, ItemDropTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::NewProp_ItemDropTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::NewProp_ItemDropTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::NewProp_ItemDropTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SimulatedItemDropTransform",
		sizeof(FSimulatedItemDropTransform),
		alignof(FSimulatedItemDropTransform),
		Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimulatedItemDropTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimulatedItemDropTransform"), sizeof(FSimulatedItemDropTransform), Get_Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimulatedItemDropTransform_Hash() { return 3836409501U; }
class UScriptStruct* FSimulatedActorTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSimulatedActorTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulatedActorTransform, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SimulatedActorTransform"), sizeof(FSimulatedActorTransform), Get_Z_Construct_UScriptStruct_FSimulatedActorTransform_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSimulatedActorTransform>()
{
	return FSimulatedActorTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimulatedActorTransform(FSimulatedActorTransform::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SimulatedActorTransform"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedActorTransform
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedActorTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimulatedActorTransform")),new UScriptStruct::TCppStructOps<FSimulatedActorTransform>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedActorTransform;
	struct Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Struct containing the saved simulation for actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulatedActorTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulatedActorTransform, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulatedActorTransform, ActorClass), Z_Construct_UClass_AFGCrashSiteDebrisActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::NewProp_ActorClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SimulatedActorTransform",
		sizeof(FSimulatedActorTransform),
		alignof(FSimulatedActorTransform),
		Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimulatedActorTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimulatedActorTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimulatedActorTransform"), sizeof(FSimulatedActorTransform), Get_Z_Construct_UScriptStruct_FSimulatedActorTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimulatedActorTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimulatedActorTransform_Hash() { return 3905962485U; }
class UScriptStruct* FSimulatedMeshTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSimulatedMeshTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulatedMeshTransform, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SimulatedMeshTransform"), sizeof(FSimulatedMeshTransform), Get_Z_Construct_UScriptStruct_FSimulatedMeshTransform_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSimulatedMeshTransform>()
{
	return FSimulatedMeshTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimulatedMeshTransform(FSimulatedMeshTransform::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SimulatedMeshTransform"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedMeshTransform
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedMeshTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimulatedMeshTransform")),new UScriptStruct::TCppStructOps<FSimulatedMeshTransform>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSimulatedMeshTransform;
	struct Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Struct containing the saved simulation for meshes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulatedMeshTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_MeshTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_MeshTransform = { "MeshTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulatedMeshTransform, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_MeshTransform_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_MeshTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimulatedMeshTransform, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_MeshTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::NewProp_StaticMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SimulatedMeshTransform",
		sizeof(FSimulatedMeshTransform),
		alignof(FSimulatedMeshTransform),
		Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimulatedMeshTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimulatedMeshTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimulatedMeshTransform"), sizeof(FSimulatedMeshTransform), Get_Z_Construct_UScriptStruct_FSimulatedMeshTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimulatedMeshTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimulatedMeshTransform_Hash() { return 2892608634U; }
class UScriptStruct* FDebrisItemDrop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDebrisItemDrop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebrisItemDrop, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DebrisItemDrop"), sizeof(FDebrisItemDrop), Get_Z_Construct_UScriptStruct_FDebrisItemDrop_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FDebrisItemDrop>()
{
	return FDebrisItemDrop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebrisItemDrop(FDebrisItemDrop::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DebrisItemDrop"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDebrisItemDrop
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDebrisItemDrop()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebrisItemDrop")),new UScriptStruct::TCppStructOps<FDebrisItemDrop>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDebrisItemDrop;
	struct Z_Construct_UScriptStruct_FDebrisItemDrop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NumItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Item drops that can be spawned and how many." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebrisItemDrop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Item to create pickup for." },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebrisItemDrop, ItemClass), Z_Construct_UClass_UFGItemDescriptor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_ItemClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_ItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_NumItems_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "How many items to spawn, note that the upper limit is guaranteed while the lower limit is not." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_NumItems = { "NumItems", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebrisItemDrop, NumItems), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_NumItems_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_NumItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_ItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::NewProp_NumItems,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DebrisItemDrop",
		sizeof(FDebrisItemDrop),
		alignof(FDebrisItemDrop),
		Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebrisItemDrop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebrisItemDrop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebrisItemDrop"), sizeof(FDebrisItemDrop), Get_Z_Construct_UScriptStruct_FDebrisItemDrop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebrisItemDrop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebrisItemDrop_Hash() { return 1921059796U; }
class UScriptStruct* FDebrisActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDebrisActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebrisActor, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DebrisActor"), sizeof(FDebrisActor), Get_Z_Construct_UScriptStruct_FDebrisActor_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FDebrisActor>()
{
	return FDebrisActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebrisActor(FDebrisActor::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DebrisActor"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDebrisActor
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDebrisActor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebrisActor")),new UScriptStruct::TCppStructOps<FDebrisActor>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDebrisActor;
	struct Z_Construct_UScriptStruct_FDebrisActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Debris actors that can be spawned and how many." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebrisActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebrisActor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_Num_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "How many to spawn, note that the upper limit is guaranteed while the lower limit is not." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebrisActor, Num), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_Num_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Mesh to spawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebrisActor, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_ActorClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_ActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebrisActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebrisActor_Statics::NewProp_ActorClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebrisActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DebrisActor",
		sizeof(FDebrisActor),
		alignof(FDebrisActor),
		Z_Construct_UScriptStruct_FDebrisActor_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisActor_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebrisActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebrisActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebrisActor"), sizeof(FDebrisActor), Get_Z_Construct_UScriptStruct_FDebrisActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebrisActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebrisActor_Hash() { return 2968599155U; }
class UScriptStruct* FDebrisMesh::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDebrisMesh_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebrisMesh, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DebrisMesh"), sizeof(FDebrisMesh), Get_Z_Construct_UScriptStruct_FDebrisMesh_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FDebrisMesh>()
{
	return FDebrisMesh::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebrisMesh(FDebrisMesh::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DebrisMesh"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDebrisMesh
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDebrisMesh()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebrisMesh")),new UScriptStruct::TCppStructOps<FDebrisMesh>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDebrisMesh;
	struct Z_Construct_UScriptStruct_FDebrisMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisMesh_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Debris meshes that can be spawned and how many." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebrisMesh>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Num_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "How many to spawn, note that the upper limit is guaranteed while the lower limit is not." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebrisMesh, Num), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Num_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Mesh to spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebrisMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebrisMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebrisMesh_Statics::NewProp_Mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebrisMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DebrisMesh",
		sizeof(FDebrisMesh),
		alignof(FDebrisMesh),
		Z_Construct_UScriptStruct_FDebrisMesh_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebrisMesh_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDebrisMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebrisMesh()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebrisMesh_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebrisMesh"), sizeof(FDebrisMesh), Get_Z_Construct_UScriptStruct_FDebrisMesh_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebrisMesh_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebrisMesh_Hash() { return 3503378384U; }
	void AFGCrashSiteDebris::StaticRegisterNativesAFGCrashSiteDebris()
	{
	}
	UClass* Z_Construct_UClass_AFGCrashSiteDebris_NoRegister()
	{
		return AFGCrashSiteDebris::StaticClass();
	}
	struct Z_Construct_UClass_AFGCrashSiteDebris_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSavedItemDropSimulationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSavedItemDropSimulationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSavedItemDropSimulationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSavedActorSimulationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSavedActorSimulationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSavedActorSimulationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSavedMeshSimulationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSavedMeshSimulationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSavedMeshSimulationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSavedSimulatedItemDropActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSavedSimulatedItemDropActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSavedSimulatedItemDropActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSavedSimulatedDebrisActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSavedSimulatedDebrisActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSavedSimulatedDebrisActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRegenerateDebrisNextSimulation_MetaData[];
#endif
		static void NewProp_mRegenerateDebrisNextSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mRegenerateDebrisNextSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDespawnRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDespawnRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDebrisPenetrateGroundByPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDebrisPenetrateGroundByPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpawnRadiusMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpawnRadiusMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpawnAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpawnAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumItemDrops_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mNumItemDrops;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemDrops_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mItemDrops;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mItemDrops_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDebrisActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDebrisActors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDebrisActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDebrisMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDebrisMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mDebrisMeshes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCrashSiteDebris_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGCrashSiteDebris.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Actor for spawning debris around a crash site." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedItemDropSimulationData_MetaData[] = {
		{ "Category", "Saved Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedItemDropSimulationData = { "mSavedItemDropSimulationData", nullptr, (EPropertyFlags)0x0040000800020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mSavedItemDropSimulationData), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedItemDropSimulationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedItemDropSimulationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedItemDropSimulationData_Inner = { "mSavedItemDropSimulationData", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimulatedItemDropTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedActorSimulationData_MetaData[] = {
		{ "Category", "Saved Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedActorSimulationData = { "mSavedActorSimulationData", nullptr, (EPropertyFlags)0x0040000800020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mSavedActorSimulationData), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedActorSimulationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedActorSimulationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedActorSimulationData_Inner = { "mSavedActorSimulationData", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimulatedActorTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedMeshSimulationData_MetaData[] = {
		{ "Category", "Saved Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Transforms saved during physics simulation." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedMeshSimulationData = { "mSavedMeshSimulationData", nullptr, (EPropertyFlags)0x0040000800020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mSavedMeshSimulationData), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedMeshSimulationData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedMeshSimulationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedMeshSimulationData_Inner = { "mSavedMeshSimulationData", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSimulatedMeshTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedItemDropActors_MetaData[] = {
		{ "Category", "Saved Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedItemDropActors = { "mSavedSimulatedItemDropActors", nullptr, (EPropertyFlags)0x0040000800020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mSavedSimulatedItemDropActors), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedItemDropActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedItemDropActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedItemDropActors_Inner = { "mSavedSimulatedItemDropActors", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedDebrisActors_MetaData[] = {
		{ "Category", "Saved Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Actors spawned by this crash site." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedDebrisActors = { "mSavedSimulatedDebrisActors", nullptr, (EPropertyFlags)0x0040000800020801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mSavedSimulatedDebrisActors), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedDebrisActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedDebrisActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedDebrisActors_Inner = { "mSavedSimulatedDebrisActors", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mRegenerateDebrisNextSimulation_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "If true debris will be respawned next simulation." },
	};
#endif
	void Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mRegenerateDebrisNextSimulation_SetBit(void* Obj)
	{
		((AFGCrashSiteDebris*)Obj)->mRegenerateDebrisNextSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mRegenerateDebrisNextSimulation = { "mRegenerateDebrisNextSimulation", nullptr, (EPropertyFlags)0x0040000800000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCrashSiteDebris), &Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mRegenerateDebrisNextSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mRegenerateDebrisNextSimulation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mRegenerateDebrisNextSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDespawnRadius_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Maximum distance from the center debris can end up, debris outside this radius is destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDespawnRadius = { "mDespawnRadius", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mDespawnRadius), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDespawnRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDespawnRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisPenetrateGroundByPercentage_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "How much the parts should penetrate the ground." },
		{ "UIMax", "0.500000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisPenetrateGroundByPercentage = { "mDebrisPenetrateGroundByPercentage", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mDebrisPenetrateGroundByPercentage), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisPenetrateGroundByPercentage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisPenetrateGroundByPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnRadiusMultiplier_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "If we want the debris to spread a bit more." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnRadiusMultiplier = { "mSpawnRadiusMultiplier", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mSpawnRadiusMultiplier), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnRadiusMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnRadiusMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnAltitude_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "How far up to spawn the debris." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnAltitude = { "mSpawnAltitude", nullptr, (EPropertyFlags)0x0040000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mSpawnAltitude), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnAltitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mNumItemDrops_MetaData[] = {
		{ "Category", "Item Drops" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "How many item drops to place, debris must be resimulated when this is updated." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mNumItemDrops = { "mNumItemDrops", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mNumItemDrops), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mNumItemDrops_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mNumItemDrops_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mItemDrops_MetaData[] = {
		{ "Category", "Item Drops" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Description of which parts to spawn." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mItemDrops = { "mItemDrops", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mItemDrops), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mItemDrops_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mItemDrops_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mItemDrops_Inner = { "mItemDrops", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebrisItemDrop, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisActors_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Description of which actors to spawn." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisActors = { "mDebrisActors", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mDebrisActors), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisActors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisActors_Inner = { "mDebrisActors", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebrisActor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisMeshes_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Public/FGCrashSiteDebris.h" },
		{ "ToolTip", "Description of which meshes to spawn." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisMeshes = { "mDebrisMeshes", nullptr, (EPropertyFlags)0x0040000800010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCrashSiteDebris, mDebrisMeshes), METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisMeshes_Inner = { "mDebrisMeshes", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDebrisMesh, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCrashSiteDebris_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedItemDropSimulationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedItemDropSimulationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedActorSimulationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedActorSimulationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedMeshSimulationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedMeshSimulationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedItemDropActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedItemDropActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedDebrisActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSavedSimulatedDebrisActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mRegenerateDebrisNextSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDespawnRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisPenetrateGroundByPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnRadiusMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mSpawnAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mNumItemDrops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mItemDrops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mItemDrops_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCrashSiteDebris_Statics::NewProp_mDebrisMeshes_Inner,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCrashSiteDebris_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCrashSiteDebris>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCrashSiteDebris_Statics::ClassParams = {
		&AFGCrashSiteDebris::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AFGCrashSiteDebris_Statics::PropPointers, nullptr),
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::PropPointers), 0),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCrashSiteDebris_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCrashSiteDebris_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCrashSiteDebris()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCrashSiteDebris_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCrashSiteDebris, 867210004);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCrashSiteDebris>()
	{
		return AFGCrashSiteDebris::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCrashSiteDebris(Z_Construct_UClass_AFGCrashSiteDebris, &AFGCrashSiteDebris::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCrashSiteDebris"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCrashSiteDebris);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
