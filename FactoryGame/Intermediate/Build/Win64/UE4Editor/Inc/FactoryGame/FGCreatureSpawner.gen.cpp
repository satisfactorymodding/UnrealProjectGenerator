// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/FGCreatureSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCreatureSpawner() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreature_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureSpawner_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSpawner_AddCreature();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSpawner_GetSplines();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplinePath_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSpawnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSpawnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SpawnData"), sizeof(FSpawnData), Get_Z_Construct_UScriptStruct_FSpawnData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSpawnData>()
{
	return FSpawnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnData(FSpawnData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SpawnData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSpawnData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSpawnData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnData")),new UScriptStruct::TCppStructOps<FSpawnData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSpawnData;
	struct Z_Construct_UScriptStruct_FSpawnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatureClassOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CreatureClassOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledOnDayNr_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KilledOnDayNr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasKilled_MetaData[];
#endif
		static void NewProp_WasKilled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasKilled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Creature_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Creature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Data we need to know/save about spawns in this spawner" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_CreatureClassOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Overriden subclass of creature to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_CreatureClassOverride = { "CreatureClassOverride", nullptr, (EPropertyFlags)0x0014000001000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnData, CreatureClassOverride), Z_Construct_UClass_AFGCreature_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_CreatureClassOverride_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_CreatureClassOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_KilledOnDayNr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "What day we were killed ( -1 if we haven't been killed yet )" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_KilledOnDayNr = { "KilledOnDayNr", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnData, KilledOnDayNr), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_KilledOnDayNr_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_KilledOnDayNr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_WasKilled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "We save if the creature was killed so we know if we want to respawn the creature when in range of the spawner" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_WasKilled_SetBit(void* Obj)
	{
		((FSpawnData*)Obj)->WasKilled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_WasKilled = { "WasKilled", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpawnData), &Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_WasKilled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_WasKilled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_WasKilled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_Creature_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Reference to creature" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_Creature = { "Creature", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnData, Creature), Z_Construct_UClass_AFGCreature_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_Creature_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_Creature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Location where we want to spawn" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnData, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_SpawnLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_SpawnLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_CreatureClassOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_KilledOnDayNr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_WasKilled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_Creature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnData_Statics::NewProp_SpawnLocation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SpawnData",
		sizeof(FSpawnData),
		alignof(FSpawnData),
		Z_Construct_UScriptStruct_FSpawnData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnData"), sizeof(FSpawnData), Get_Z_Construct_UScriptStruct_FSpawnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnData_Hash() { return 296555547U; }
	static FName NAME_AFGCreatureSpawner_DestroyCreatures = FName(TEXT("DestroyCreatures"));
	void AFGCreatureSpawner::DestroyCreatures()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCreatureSpawner_DestroyCreatures),NULL);
	}
	static FName NAME_AFGCreatureSpawner_SpawnCreatures = FName(TEXT("SpawnCreatures"));
	void AFGCreatureSpawner::SpawnCreatures()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGCreatureSpawner_SpawnCreatures),NULL);
	}
	void AFGCreatureSpawner::StaticRegisterNativesAFGCreatureSpawner()
	{
		UClass* Class = AFGCreatureSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCreature", &AFGCreatureSpawner::execAddCreature },
			{ "CalculateSpawningLocations", &AFGCreatureSpawner::execCalculateSpawningLocations },
			{ "CreatureDied", &AFGCreatureSpawner::execCreatureDied },
			{ "DestroyCreatures", &AFGCreatureSpawner::execDestroyCreatures },
			{ "GetSplines", &AFGCreatureSpawner::execGetSplines },
			{ "IsSpawnerActive", &AFGCreatureSpawner::execIsSpawnerActive },
			{ "SpawnCreatures", &AFGCreatureSpawner::execSpawnCreatures },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics
	{
		struct FGCreatureSpawner_eventAddCreature_Parms
		{
			AFGCreature* newCreature;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newCreature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::NewProp_newCreature = { "newCreature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreatureSpawner_eventAddCreature_Parms, newCreature), Z_Construct_UClass_AFGCreature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::NewProp_newCreature,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Adds a creature to be handled by spawner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSpawner, nullptr, "AddCreature", sizeof(FGCreatureSpawner_eventAddCreature_Parms), Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSpawner_AddCreature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSpawner_AddCreature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics
	{
		struct FGCreatureSpawner_eventCalculateSpawningLocations_Parms
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
	void Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCreatureSpawner_eventCalculateSpawningLocations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreatureSpawner_eventCalculateSpawningLocations_Parms), &Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Calculates the locations of the spawn locations of the enemies\n@returns false if we didn't manage to fit all the enemies is the radius" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSpawner, nullptr, "CalculateSpawningLocations", sizeof(FGCreatureSpawner_eventCalculateSpawningLocations_Parms), Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics
	{
		struct FGCreatureSpawner_eventCreatureDied_Parms
		{
			AActor* thisActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_thisActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::NewProp_thisActor = { "thisActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreatureSpawner_eventCreatureDied_Parms, thisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::NewProp_thisActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Called when a creature died, need to be UFUNCTION as it's bound as a delegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSpawner, nullptr, "CreatureDied", sizeof(FGCreatureSpawner_eventCreatureDied_Parms), Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Server only - Handles logic for destroying creatures when the spawners becomes active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSpawner, nullptr, "DestroyCreatures", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics
	{
		struct FGCreatureSpawner_eventGetSplines_Parms
		{
			TArray<AFGSplinePath*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreatureSpawner_eventGetSplines_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGSplinePath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Gets all splines assigned to this spawner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSpawner, nullptr, "GetSplines", sizeof(FGCreatureSpawner_eventGetSplines_Parms), Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSpawner_GetSplines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSpawner_GetSplines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics
	{
		struct FGCreatureSpawner_eventIsSpawnerActive_Parms
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
	void Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCreatureSpawner_eventIsSpawnerActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCreatureSpawner_eventIsSpawnerActive_Parms), &Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Is this spawner within active distance?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSpawner, nullptr, "IsSpawnerActive", sizeof(FGCreatureSpawner_eventIsSpawnerActive_Parms), Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Server only - Handles logic for creating creatures when the spawners becomes active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSpawner, nullptr, "SpawnCreatures", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCreatureSpawner_NoRegister()
	{
		return AFGCreatureSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AFGCreatureSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRespawnTimeIndays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mRespawnTimeIndays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSplines_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSplines;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSplines_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpawnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSpawnData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSpawnData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsActive_MetaData[];
#endif
		static void NewProp_mIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpawnHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpawnHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpawnRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpawnRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNumberOfCreatures_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNumberOfCreatures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCreatureClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCreatureClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEditorSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mEditorSprite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDebugComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDebugComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCreatureSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCreatureSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCreatureSpawner_AddCreature, "AddCreature" }, // 2726654389
		{ &Z_Construct_UFunction_AFGCreatureSpawner_CalculateSpawningLocations, "CalculateSpawningLocations" }, // 1299551863
		{ &Z_Construct_UFunction_AFGCreatureSpawner_CreatureDied, "CreatureDied" }, // 1814111676
		{ &Z_Construct_UFunction_AFGCreatureSpawner_DestroyCreatures, "DestroyCreatures" }, // 4228577691
		{ &Z_Construct_UFunction_AFGCreatureSpawner_GetSplines, "GetSplines" }, // 3684736062
		{ &Z_Construct_UFunction_AFGCreatureSpawner_IsSpawnerActive, "IsSpawnerActive" }, // 3808896626
		{ &Z_Construct_UFunction_AFGCreatureSpawner_SpawnCreatures, "SpawnCreatures" }, // 812943886
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Creature/FGCreatureSpawner.h" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRespawnTimeIndays_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "How many days should pass before creatures start to respawn ( -1 means never )" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRespawnTimeIndays = { "mRespawnTimeIndays", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mRespawnTimeIndays), METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRespawnTimeIndays_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRespawnTimeIndays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRandomSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRandomSeed = { "mRandomSeed", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mRandomSeed), METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRandomSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSplines_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Path splines that enemies in this spawner should set to follow" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSplines = { "mSplines", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mSplines), METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSplines_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSplines_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSplines_Inner = { "mSplines", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGSplinePath_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Structure for keeping all data saved about enemies spawned" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnData = { "mSpawnData", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mSpawnData), METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnData_Inner = { "mSpawnData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Indicates if we have spawned our enemies" },
	};
#endif
	void Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mIsActive_SetBit(void* Obj)
	{
		((AFGCreatureSpawner*)Obj)->mIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mIsActive = { "mIsActive", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGCreatureSpawner), &Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mIsActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnHalfHeight_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "How much up/down our spawner tries to search for a placeable location" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnHalfHeight = { "mSpawnHalfHeight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mSpawnHalfHeight), METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnHalfHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnRadius_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "Within what radius do you want to spawn the enemies (the won't go outside of this radius)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnRadius = { "mSpawnRadius", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mSpawnRadius), METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mNumberOfCreatures_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "The number of enemies to spawn, used offline" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mNumberOfCreatures = { "mNumberOfCreatures", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mNumberOfCreatures), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mNumberOfCreatures_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mNumberOfCreatures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCreatureClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "The creature we should spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCreatureClass = { "mCreatureClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mCreatureClass), Z_Construct_UClass_AFGCreature_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCreatureClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCreatureClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCapsuleComponent = { "mCapsuleComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCapsuleComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mEditorSprite_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mEditorSprite = { "mEditorSprite", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mEditorSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mEditorSprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mEditorSprite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mDebugComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSpawner.h" },
		{ "ToolTip", "For showing a preview of what will happen in the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mDebugComponent = { "mDebugComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSpawner, mDebugComponent), Z_Construct_UClass_UFGCreatureSpawnerDebugComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mDebugComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mDebugComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCreatureSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRespawnTimeIndays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSplines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSplines_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mSpawnRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mNumberOfCreatures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCreatureClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mCapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mEditorSprite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSpawner_Statics::NewProp_mDebugComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGCreatureSpawner_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGCreatureSpawner, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCreatureSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCreatureSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCreatureSpawner_Statics::ClassParams = {
		&AFGCreatureSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGCreatureSpawner_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCreatureSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCreatureSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCreatureSpawner, 1727135967);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCreatureSpawner>()
	{
		return AFGCreatureSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCreatureSpawner(Z_Construct_UClass_AFGCreatureSpawner, &AFGCreatureSpawner::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCreatureSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCreatureSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
