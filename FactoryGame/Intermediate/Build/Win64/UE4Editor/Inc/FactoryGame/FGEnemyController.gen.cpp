// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/AI/FGEnemyController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEnemyController() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EIgnore();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FAggroEntry();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAggroTargetInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemyController_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemyController();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureController();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_CanSeeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* EIgnore_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EIgnore, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EIgnore"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EIgnore(EIgnore_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EIgnore"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EIgnore_CRC() { return 3871879704U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EIgnore()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EIgnore"), 0, Get_Z_Construct_UEnum_FactoryGame_EIgnore_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EIgnore::I_NONE", (int64)EIgnore::I_NONE },
				{ "EIgnore::I_FALSE", (int64)EIgnore::I_FALSE },
				{ "EIgnore::I_NOT_VALID", (int64)EIgnore::I_NOT_VALID },
				{ "EIgnore::I_NO_PATH", (int64)EIgnore::I_NO_PATH },
				{ "EIgnore::I_LastEnum", (int64)EIgnore::I_LastEnum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "I_FALSE.DisplayName", "Target is not ignored." },
				{ "I_LastEnum.Hidden", "" },
				{ "I_NO_PATH.DisplayName", "Target ignored cause could not find path." },
				{ "I_NONE.DisplayName", "Invalid status." },
				{ "I_NOT_VALID.DisplayName", "Target ignored cause not valid" },
				{ "ModuleRelativePath", "AI/FGEnemyController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EIgnore",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EIgnore",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAggroEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FAggroEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAggroEntry, Z_Construct_UPackage__Script_FactoryGame(), TEXT("AggroEntry"), sizeof(FAggroEntry), Get_Z_Construct_UScriptStruct_FAggroEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAggroEntry(FAggroEntry::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("AggroEntry"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFAggroEntry
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFAggroEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AggroEntry")),new UScriptStruct::TCppStructOps<FAggroEntry>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFAggroEntry;
	struct Z_Construct_UScriptStruct_FAggroEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ignore_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Ignore;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ignore_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHurtTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastHurtTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Aggro_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Aggro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AggroTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_AggroTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggroEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Contains information about how desirable a aggro\ntarget is for our Pawn" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAggroEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAggroEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Ignore_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Ignore = { UE4CodeGen_Private::EPropertyClass::Enum, "Ignore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FAggroEntry, Ignore), Z_Construct_UEnum_FactoryGame_EIgnore, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Ignore_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Ignore_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Ignore_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_LastHurtTime_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_LastHurtTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastHurtTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FAggroEntry, LastHurtTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_LastHurtTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_LastHurtTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Aggro_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Aggro = { UE4CodeGen_Private::EPropertyClass::Float, "Aggro", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(FAggroEntry, Aggro), METADATA_PARAMS(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Aggro_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Aggro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_AggroTarget_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_AggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "AggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000004, 1, nullptr, STRUCT_OFFSET(FAggroEntry, AggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_AggroTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_AggroTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAggroEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Ignore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Ignore_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_LastHurtTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_Aggro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAggroEntry_Statics::NewProp_AggroTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAggroEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"AggroEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FAggroEntry),
		alignof(FAggroEntry),
		Z_Construct_UScriptStruct_FAggroEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAggroEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAggroEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAggroEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAggroEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAggroEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AggroEntry"), sizeof(FAggroEntry), Get_Z_Construct_UScriptStruct_FAggroEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAggroEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAggroEntry_CRC() { return 293792404U; }
	static FName NAME_AFGEnemyController_ClearAllAggroTargetsAndUpdate = FName(TEXT("ClearAllAggroTargetsAndUpdate"));
	void AFGEnemyController::ClearAllAggroTargetsAndUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEnemyController_ClearAllAggroTargetsAndUpdate),NULL);
	}
	static FName NAME_AFGEnemyController_OnAggroTargetLost = FName(TEXT("OnAggroTargetLost"));
	void AFGEnemyController::OnAggroTargetLost(AActor* lostActor)
	{
		FGEnemyController_eventOnAggroTargetLost_Parms Parms;
		Parms.lostActor=lostActor;
		ProcessEvent(FindFunctionChecked(NAME_AFGEnemyController_OnAggroTargetLost),&Parms);
	}
	static FName NAME_AFGEnemyController_OnAggroTargetUpdated = FName(TEXT("OnAggroTargetUpdated"));
	void AFGEnemyController::OnAggroTargetUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEnemyController_OnAggroTargetUpdated),NULL);
	}
	void AFGEnemyController::StaticRegisterNativesAFGEnemyController()
	{
		UClass* Class = AFGEnemyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToAggroByTarget", &AFGEnemyController::execAddToAggroByTarget },
			{ "AggroTargetAdded", &AFGEnemyController::execAggroTargetAdded },
			{ "AggroTargetRemoved", &AFGEnemyController::execAggroTargetRemoved },
			{ "CanSeeActor", &AFGEnemyController::execCanSeeActor },
			{ "FindAndAssignTarget", &AFGEnemyController::execFindAndAssignTarget },
			{ "GatherAggroTargets", &AFGEnemyController::execGatherAggroTargets },
			{ "GetAggroThreshold", &AFGEnemyController::execGetAggroThreshold },
			{ "GetAttackPatternIndex", &AFGEnemyController::execGetAttackPatternIndex },
			{ "GetCurrentAttackFromPattern", &AFGEnemyController::execGetCurrentAttackFromPattern },
			{ "GetMostDesirableAggroTarget", &AFGEnemyController::execGetMostDesirableAggroTarget },
			{ "GetTargetingDesire", &AFGEnemyController::execGetTargetingDesire },
			{ "GetTargetingDesireFromAggroEntry", &AFGEnemyController::execGetTargetingDesireFromAggroEntry },
			{ "GetTargetLastValidLocation", &AFGEnemyController::execGetTargetLastValidLocation },
			{ "IsOnIgnoreList", &AFGEnemyController::execIsOnIgnoreList },
			{ "OnAggroTargetUpdated", &AFGEnemyController::execOnAggroTargetUpdated },
			{ "OnPawnTakeDamage", &AFGEnemyController::execOnPawnTakeDamage },
			{ "RemoveInvalidAggroTargets", &AFGEnemyController::execRemoveInvalidAggroTargets },
			{ "ResetLastValidTargetLocation", &AFGEnemyController::execResetLastValidTargetLocation },
			{ "SetCurrentAggroTarget", &AFGEnemyController::execSetCurrentAggroTarget },
			{ "ShouldAddAggroTarget", &AFGEnemyController::execShouldAddAggroTarget },
			{ "UpdateAggroAndFindAndAssignTarget", &AFGEnemyController::execUpdateAggroAndFindAndAssignTarget },
			{ "UpdateAggroTargets", &AFGEnemyController::execUpdateAggroTargets },
			{ "UpdateAttackPattern", &AFGEnemyController::execUpdateAttackPattern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics
	{
		struct FGEnemyController_eventAddToAggroByTarget_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> target;
			float damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventAddToAggroByTarget_Parms, damage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::NewProp_target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::NewProp_target = { UE4CodeGen_Private::EPropertyClass::Interface, "target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000082, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventAddToAggroByTarget_Parms, target), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::NewProp_target_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::NewProp_target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Adds aggro to the specified target\n\n@param aggroTarget - The target to add aggro to.\n@param aggroToAdd - How much aggro do we want to add to the target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "AddToAggroByTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGEnemyController_eventAddToAggroByTarget_Parms), Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics
	{
		struct FGEnemyController_eventAggroTargetAdded_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> aggroTarget;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_aggroTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::NewProp_aggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventAggroTargetAdded_Parms, aggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::NewProp_aggroTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Called whenever a new aggro target is added" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "AggroTargetAdded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGEnemyController_eventAggroTargetAdded_Parms), Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics
	{
		struct FGEnemyController_eventAggroTargetRemoved_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> aggroTarget;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_aggroTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::NewProp_aggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventAggroTargetRemoved_Parms, aggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::NewProp_aggroTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "AggroTargetRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGEnemyController_eventAggroTargetRemoved_Parms), Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics
	{
		struct FGEnemyController_eventCanSeeActor_Parms
		{
			AActor* target;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEnemyController_eventCanSeeActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGEnemyController_eventCanSeeActor_Parms), &Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::NewProp_target = { UE4CodeGen_Private::EPropertyClass::Object, "target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventCanSeeActor_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Checks to see if we see an actor or not.\n\n@param target - the actor we want to trace against" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "CanSeeActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGEnemyController_eventCanSeeActor_Parms), Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_CanSeeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_CanSeeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "ClearAllAggroTargetsAndUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Finds an appropriate target from the list of aggro targets that exist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "FindAndAssignTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Gathers all aggro targets into the current list. Note, this doesn't clear the current aggro list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GatherAggroTargets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics
	{
		struct FGEnemyController_eventGetAggroThreshold_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetAggroThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "aggro thresholds for setting a target and releasing a target may be different" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GetAggroThreshold", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGEnemyController_eventGetAggroThreshold_Parms), Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics
	{
		struct FGEnemyController_eventGetAttackPatternIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetAttackPatternIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Returns index of current pattern" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GetAttackPatternIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGEnemyController_eventGetAttackPatternIndex_Parms), Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics
	{
		struct FGEnemyController_eventGetCurrentAttackFromPattern_Parms
		{
			TSubclassOf<UFGAttack>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetCurrentAttackFromPattern_Parms, ReturnValue), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Returns the attack class found in the attack pattern" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GetCurrentAttackFromPattern", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGEnemyController_eventGetCurrentAttackFromPattern_Parms), Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics
	{
		struct FGEnemyController_eventGetMostDesirableAggroTarget_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Interface, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetMostDesirableAggroTarget_Parms, ReturnValue), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Returns the aggro target that currently has the most aggro" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GetMostDesirableAggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGEnemyController_eventGetMostDesirableAggroTarget_Parms), Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics
	{
		struct FGEnemyController_eventGetTargetingDesire_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> aggroTarget;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_aggroTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetTargetingDesire_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::NewProp_aggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetTargetingDesire_Parms, aggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::NewProp_aggroTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Gets targeting desire from a aggro target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GetTargetingDesire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGEnemyController_eventGetTargetingDesire_Parms), Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics
	{
		struct FGEnemyController_eventGetTargetingDesireFromAggroEntry_Parms
		{
			FAggroEntry outTarget;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetTargetingDesireFromAggroEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::NewProp_outTarget = { UE4CodeGen_Private::EPropertyClass::Struct, "outTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetTargetingDesireFromAggroEntry_Parms, outTarget), Z_Construct_UScriptStruct_FAggroEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::NewProp_outTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Get targeting desire from an AggroEntry.\n\n@param target - entry to calculate desire for.\n\n@return - the targeting desire." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GetTargetingDesireFromAggroEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGEnemyController_eventGetTargetingDesireFromAggroEntry_Parms), Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics
	{
		struct FGEnemyController_eventGetTargetLastValidLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventGetTargetLastValidLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Returns the last valid location for target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "GetTargetLastValidLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(FGEnemyController_eventGetTargetLastValidLocation_Parms), Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics
	{
		struct FGEnemyController_eventIsOnIgnoreList_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> aggroTargetInterface;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aggroTargetInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_aggroTargetInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEnemyController_eventIsOnIgnoreList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGEnemyController_eventIsOnIgnoreList_Parms), &Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_aggroTargetInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_aggroTargetInterface = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTargetInterface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000082, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventIsOnIgnoreList_Parms, aggroTargetInterface), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_aggroTargetInterface_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_aggroTargetInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::NewProp_aggroTargetInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Called when gathering aggro targets and cleaning up invalid aggro targets.\nUsed to filter out ignored aggro targets.\n\n@return - If we should ignore this target altogether." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "IsOnIgnoreList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGEnemyController_eventIsOnIgnoreList_Parms), Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lostActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::NewProp_lostActor = { UE4CodeGen_Private::EPropertyClass::Object, "lostActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventOnAggroTargetLost_Parms, lostActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::NewProp_lostActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Called when we lose an aggro target and have no other target set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "OnAggroTargetLost", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGEnemyController_eventOnAggroTargetLost_Parms), Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Do stuff when we found a new target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "OnAggroTargetUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics
	{
		struct FGEnemyController_eventOnPawnTakeDamage_Parms
		{
			AActor* damagedActor;
			float damageAmount;
			const UDamageType* damageType;
			AController* instigatedBy;
			AActor* damageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damagedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventOnPawnTakeDamage_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_instigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "instigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventOnPawnTakeDamage_Parms, instigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Object, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventOnPawnTakeDamage_Parms, damageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageAmount = { UE4CodeGen_Private::EPropertyClass::Float, "damageAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventOnPawnTakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damagedActor = { UE4CodeGen_Private::EPropertyClass::Object, "damagedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventOnPawnTakeDamage_Parms, damagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_instigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::NewProp_damagedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Called when our controlled pawn takes damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "OnPawnTakeDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGEnemyController_eventOnPawnTakeDamage_Parms), Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Sweeps through all aggro entries and removes the invalid ones" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "RemoveInvalidAggroTargets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Resets the variable mLastValidLocation to an invalid location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "ResetLastValidTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics
	{
		struct FGEnemyController_eventSetCurrentAggroTarget_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> newAggroTargetInterface;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_newAggroTargetInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::NewProp_newAggroTargetInterface = { UE4CodeGen_Private::EPropertyClass::Interface, "newAggroTargetInterface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventSetCurrentAggroTarget_Parms, newAggroTargetInterface), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::NewProp_newAggroTargetInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Assigns a new aggrotarget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "SetCurrentAggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGEnemyController_eventSetCurrentAggroTarget_Parms), Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics
	{
		struct FGEnemyController_eventShouldAddAggroTarget_Parms
		{
			TScriptInterface<IFGAggroTargetInterface> aggroTargetInterface;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aggroTargetInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_aggroTargetInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEnemyController_eventShouldAddAggroTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGEnemyController_eventShouldAddAggroTarget_Parms), &Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_aggroTargetInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_aggroTargetInterface = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTargetInterface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000082, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventShouldAddAggroTarget_Parms, aggroTargetInterface), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_aggroTargetInterface_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_aggroTargetInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::NewProp_aggroTargetInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Called when gathering aggro targets and cleaning up invalid aggro targets.\nUse this if you want to filter away aggro targets.\n\n@return - If we should aggro against this target." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "ShouldAddAggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGEnemyController_eventShouldAddAggroTarget_Parms), Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Updates our current aggro, and then makes sure we assign a new target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "UpdateAggroAndFindAndAssignTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics
	{
		struct FGEnemyController_eventUpdateAggroTargets_Parms
		{
			float dt;
			bool fullCheck;
		};
		static void NewProp_fullCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fullCheck;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::NewProp_fullCheck_SetBit(void* Obj)
	{
		((FGEnemyController_eventUpdateAggroTargets_Parms*)Obj)->fullCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::NewProp_fullCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "fullCheck", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGEnemyController_eventUpdateAggroTargets_Parms), &Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::NewProp_fullCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGEnemyController_eventUpdateAggroTargets_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::NewProp_fullCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "CPP_Default_fullCheck", "false" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Updates the list of all aggrotargets.\n\n@param deltaTime - time since last update.\n@param full - if a full update should be done. (expensive)\n                                      Extended checks every target if it should still be in the aggro list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "UpdateAggroTargets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGEnemyController_eventUpdateAggroTargets_Parms), Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Updates the attack from attackpattern to the next in line ( will loop )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemyController, "UpdateAttackPattern", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGEnemyController_NoRegister()
	{
		return AFGEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AFGEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPanicIgnoreTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPanicIgnoreTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIgnoredAggroTargetClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mIgnoredAggroTargetClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_mIgnoredAggroTargetClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAttackPattern;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAttackPattern_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentAggroTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_mCurrentAggroTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLoseAggroThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mLoseAggroThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGainAggroThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mGainAggroThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAggroDistanceCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAggroDistanceCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStaticIgnoreCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mStaticIgnoreCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultIgnoreCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDefaultIgnoreCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTargetSwitchFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTargetSwitchFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSortedAggroEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSortedAggroEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSortedAggroEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAggroEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAggroEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAggroEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAggroDistanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAggroDistanceWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAggroAggroWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAggroAggroWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAggroBaseWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAggroBaseWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAggroTargetsAggroMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAggroTargetsAggroMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTimeToLoseAllAggro_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTimeToLoseAllAggro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpdateAggroInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mUpdateAggroInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGCreatureController,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGEnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGEnemyController_AddToAggroByTarget, "AddToAggroByTarget" }, // 3421867332
		{ &Z_Construct_UFunction_AFGEnemyController_AggroTargetAdded, "AggroTargetAdded" }, // 3101132454
		{ &Z_Construct_UFunction_AFGEnemyController_AggroTargetRemoved, "AggroTargetRemoved" }, // 3206723556
		{ &Z_Construct_UFunction_AFGEnemyController_CanSeeActor, "CanSeeActor" }, // 3579341617
		{ &Z_Construct_UFunction_AFGEnemyController_ClearAllAggroTargetsAndUpdate, "ClearAllAggroTargetsAndUpdate" }, // 1494928140
		{ &Z_Construct_UFunction_AFGEnemyController_FindAndAssignTarget, "FindAndAssignTarget" }, // 413324910
		{ &Z_Construct_UFunction_AFGEnemyController_GatherAggroTargets, "GatherAggroTargets" }, // 449663656
		{ &Z_Construct_UFunction_AFGEnemyController_GetAggroThreshold, "GetAggroThreshold" }, // 798420661
		{ &Z_Construct_UFunction_AFGEnemyController_GetAttackPatternIndex, "GetAttackPatternIndex" }, // 1627567392
		{ &Z_Construct_UFunction_AFGEnemyController_GetCurrentAttackFromPattern, "GetCurrentAttackFromPattern" }, // 1959774749
		{ &Z_Construct_UFunction_AFGEnemyController_GetMostDesirableAggroTarget, "GetMostDesirableAggroTarget" }, // 942889683
		{ &Z_Construct_UFunction_AFGEnemyController_GetTargetingDesire, "GetTargetingDesire" }, // 3297026102
		{ &Z_Construct_UFunction_AFGEnemyController_GetTargetingDesireFromAggroEntry, "GetTargetingDesireFromAggroEntry" }, // 3710580462
		{ &Z_Construct_UFunction_AFGEnemyController_GetTargetLastValidLocation, "GetTargetLastValidLocation" }, // 1802953615
		{ &Z_Construct_UFunction_AFGEnemyController_IsOnIgnoreList, "IsOnIgnoreList" }, // 3569916670
		{ &Z_Construct_UFunction_AFGEnemyController_OnAggroTargetLost, "OnAggroTargetLost" }, // 3240876332
		{ &Z_Construct_UFunction_AFGEnemyController_OnAggroTargetUpdated, "OnAggroTargetUpdated" }, // 1195976520
		{ &Z_Construct_UFunction_AFGEnemyController_OnPawnTakeDamage, "OnPawnTakeDamage" }, // 1885123504
		{ &Z_Construct_UFunction_AFGEnemyController_RemoveInvalidAggroTargets, "RemoveInvalidAggroTargets" }, // 2312544754
		{ &Z_Construct_UFunction_AFGEnemyController_ResetLastValidTargetLocation, "ResetLastValidTargetLocation" }, // 3590303944
		{ &Z_Construct_UFunction_AFGEnemyController_SetCurrentAggroTarget, "SetCurrentAggroTarget" }, // 745275761
		{ &Z_Construct_UFunction_AFGEnemyController_ShouldAddAggroTarget, "ShouldAddAggroTarget" }, // 2892662436
		{ &Z_Construct_UFunction_AFGEnemyController_UpdateAggroAndFindAndAssignTarget, "UpdateAggroAndFindAndAssignTarget" }, // 497342037
		{ &Z_Construct_UFunction_AFGEnemyController_UpdateAggroTargets, "UpdateAggroTargets" }, // 1169209432
		{ &Z_Construct_UFunction_AFGEnemyController_UpdateAttackPattern, "UpdateAttackPattern" }, // 1338791652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AI/FGEnemyController.h" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mPanicIgnoreTime_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Time we should ignore targets when panicking" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mPanicIgnoreTime = { UE4CodeGen_Private::EPropertyClass::Float, "mPanicIgnoreTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mPanicIgnoreTime), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mPanicIgnoreTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mPanicIgnoreTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mIgnoredAggroTargetClasses_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "MustImplement", "FGAggroTargetInterface" },
		{ "ToolTip", "List of aggro target classes that we should not aggro against" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mIgnoredAggroTargetClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mIgnoredAggroTargetClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mIgnoredAggroTargetClasses), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mIgnoredAggroTargetClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mIgnoredAggroTargetClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mIgnoredAggroTargetClasses_Inner = { UE4CodeGen_Private::EPropertyClass::SoftClass, "mIgnoredAggroTargetClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAttackPattern_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Array with attacks that determine order of attacks" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAttackPattern = { UE4CodeGen_Private::EPropertyClass::Array, "mAttackPattern", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mAttackPattern), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAttackPattern_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAttackPattern_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAttackPattern_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mAttackPattern", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mCurrentAggroTarget_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "This is the aggro target that at the last check was the most desirable.\nNOTE: Only set this variable through SetCurrentAggroTarget()." },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mCurrentAggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "mCurrentAggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000014, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mCurrentAggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mCurrentAggroTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mCurrentAggroTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mLoseAggroThreshold_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "if aggro goes below this value the target is invalid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mLoseAggroThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "mLoseAggroThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mLoseAggroThreshold), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mLoseAggroThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mLoseAggroThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mGainAggroThreshold_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Minimum aggro the enemy needs to add a target to its aggro list" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mGainAggroThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "mGainAggroThreshold", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mGainAggroThreshold), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mGainAggroThreshold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mGainAggroThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceCurve_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Curve for determining the distance aggro added" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceCurve = { UE4CodeGen_Private::EPropertyClass::Object, "mAggroDistanceCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mAggroDistanceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mStaticIgnoreCooldown_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "We want static actors to be ignored a long time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mStaticIgnoreCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "mStaticIgnoreCooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mStaticIgnoreCooldown), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mStaticIgnoreCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mStaticIgnoreCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mDefaultIgnoreCooldown_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "How long should the targets be on the ignore list" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mDefaultIgnoreCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "mDefaultIgnoreCooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mDefaultIgnoreCooldown), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mDefaultIgnoreCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mDefaultIgnoreCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTargetSwitchFactor_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "We only switch mCurrentTarget if the new targets desirablility is this factor larger than the old one." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTargetSwitchFactor = { UE4CodeGen_Private::EPropertyClass::Float, "mTargetSwitchFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mTargetSwitchFactor), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTargetSwitchFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTargetSwitchFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mSortedAggroEntries_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "All actors that this actor can aggro to sorted by desirability in DESC ( index 0 is most desirable)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mSortedAggroEntries = { UE4CodeGen_Private::EPropertyClass::Array, "mSortedAggroEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mSortedAggroEntries), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mSortedAggroEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mSortedAggroEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mSortedAggroEntries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mSortedAggroEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAggroEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroEntries_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "All actors that this actor can aggro to" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroEntries = { UE4CodeGen_Private::EPropertyClass::Array, "mAggroEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mAggroEntries), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroEntries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "mAggroEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FAggroEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceWeight_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceWeight = { UE4CodeGen_Private::EPropertyClass::Float, "mAggroDistanceWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mAggroDistanceWeight), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroAggroWeight_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroAggroWeight = { UE4CodeGen_Private::EPropertyClass::Float, "mAggroAggroWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mAggroAggroWeight), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroAggroWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroAggroWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroBaseWeight_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Aggro weigths" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroBaseWeight = { UE4CodeGen_Private::EPropertyClass::Float, "mAggroBaseWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mAggroBaseWeight), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroBaseWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroBaseWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroTargetsAggroMax_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "The highest aggro for all aggro targets" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroTargetsAggroMax = { UE4CodeGen_Private::EPropertyClass::Float, "mAggroTargetsAggroMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mAggroTargetsAggroMax), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroTargetsAggroMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroTargetsAggroMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTimeToLoseAllAggro_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "How long time should it take to lose all aggro from damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTimeToLoseAllAggro = { UE4CodeGen_Private::EPropertyClass::Float, "mTimeToLoseAllAggro", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mTimeToLoseAllAggro), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTimeToLoseAllAggro_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTimeToLoseAllAggro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mUpdateAggroInterval_MetaData[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGEnemyController.h" },
		{ "ToolTip", "Specifies how often we need to update all aggro" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mUpdateAggroInterval = { UE4CodeGen_Private::EPropertyClass::Float, "mUpdateAggroInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEnemyController, mUpdateAggroInterval), METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mUpdateAggroInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mUpdateAggroInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEnemyController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mPanicIgnoreTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mIgnoredAggroTargetClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mIgnoredAggroTargetClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAttackPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAttackPattern_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mCurrentAggroTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mLoseAggroThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mGainAggroThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mStaticIgnoreCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mDefaultIgnoreCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTargetSwitchFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mSortedAggroEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mSortedAggroEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroDistanceWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroAggroWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroBaseWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mAggroTargetsAggroMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mTimeToLoseAllAggro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemyController_Statics::NewProp_mUpdateAggroInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEnemyController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEnemyController_Statics::ClassParams = {
		&AFGEnemyController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGEnemyController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGEnemyController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGEnemyController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGEnemyController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGEnemyController, 2350314208);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGEnemyController(Z_Construct_UClass_AFGEnemyController, &AFGEnemyController::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGEnemyController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGEnemyController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
