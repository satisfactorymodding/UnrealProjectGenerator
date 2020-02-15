// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGGamePhaseManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGamePhaseManager() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EGamePhase();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPhaseCost();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FItemAmount();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPhaseTierInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMessageBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGamePhaseManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGamePhaseManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnGamePhaseUpdated_Parms
		{
			TEnumAsByte<EGamePhase> gamePhase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gamePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::NewProp_gamePhase = { "gamePhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnGamePhaseUpdated_Parms, gamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::NewProp_gamePhase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnGamePhaseUpdated__DelegateSignature", sizeof(_Script_FactoryGame_eventOnGamePhaseUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EGamePhase_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EGamePhase, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EGamePhase"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EGamePhase>()
	{
		return EGamePhase_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGamePhase(EGamePhase_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EGamePhase"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EGamePhase_Hash() { return 568190686U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EGamePhase()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGamePhase"), 0, Get_Z_Construct_UEnum_FactoryGame_EGamePhase_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGP_EarlyGame", (int64)EGP_EarlyGame },
				{ "EGP_MidGame", (int64)EGP_MidGame },
				{ "EGP_LateGame", (int64)EGP_LateGame },
				{ "EGP_EndGame", (int64)EGP_EndGame },
				{ "EGP_FoodCourt", (int64)EGP_FoodCourt },
				{ "EGP_Victory", (int64)EGP_Victory },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EGP_EarlyGame.DisplayName", "Establishing Phase" },
				{ "EGP_EndGame.DisplayName", "Retention Phase" },
				{ "EGP_FoodCourt.DisplayName", "Food Court" },
				{ "EGP_LateGame.DisplayName", "Expansion Phase" },
				{ "EGP_MidGame.DisplayName", "Development Phase" },
				{ "EGP_Victory.DisplayName", "Victory!" },
				{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
				{ "ToolTip", "The three phases of the game.\n\n@todounlock  As I see this is not necessary, and it's not particularly modder friendly,\n             This could be replaced by an index into the array, then we don't need to do reverse look ups and stuff. -G2, 6 mars 19" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EGamePhase",
				"EGamePhase",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPhaseCost::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPhaseCost_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhaseCost, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PhaseCost"), sizeof(FPhaseCost), Get_Z_Construct_UScriptStruct_FPhaseCost_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPhaseCost>()
{
	return FPhaseCost::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhaseCost(FPhaseCost::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PhaseCost"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPhaseCost
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPhaseCost()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhaseCost")),new UScriptStruct::TCppStructOps<FPhaseCost>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPhaseCost;
	struct Z_Construct_UScriptStruct_FPhaseCost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cost_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GamePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseCost_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "This is used to specify the cost for the different phases of the game." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhaseCost_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhaseCost>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "PhaseCost" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Cost of this tier" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseCost, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_Cost_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_Cost_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_Cost_Inner = { "Cost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_GamePhase_MetaData[] = {
		{ "Category", "PhaseCost" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "The phase to specify the cost for" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_GamePhase = { "GamePhase", nullptr, (EPropertyFlags)0x0010000001010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseCost, GamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_GamePhase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_GamePhase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhaseCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_Cost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseCost_Statics::NewProp_GamePhase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhaseCost_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PhaseCost",
		sizeof(FPhaseCost),
		alignof(FPhaseCost),
		Z_Construct_UScriptStruct_FPhaseCost_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseCost_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseCost_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseCost_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhaseCost()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhaseCost_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhaseCost"), sizeof(FPhaseCost), Get_Z_Construct_UScriptStruct_FPhaseCost_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhaseCost_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhaseCost_Hash() { return 944384270U; }
class UScriptStruct* FPhaseTierInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPhaseTierInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhaseTierInfo, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PhaseTierInfo"), sizeof(FPhaseTierInfo), Get_Z_Construct_UScriptStruct_FPhaseTierInfo_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPhaseTierInfo>()
{
	return FPhaseTierInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhaseTierInfo(FPhaseTierInfo::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PhaseTierInfo"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPhaseTierInfo
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPhaseTierInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhaseTierInfo")),new UScriptStruct::TCppStructOps<FPhaseTierInfo>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPhaseTierInfo;
	struct Z_Construct_UScriptStruct_FPhaseTierInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhaseUnlockedMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PhaseUnlockedMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastTierOfPhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastTierOfPhase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GamePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Used for specifying what tiers are included in what game phase." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhaseTierInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_PhaseUnlockedMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Message sent when this phase is unlocked" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_PhaseUnlockedMessage = { "PhaseUnlockedMessage", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseTierInfo, PhaseUnlockedMessage), Z_Construct_UClass_UFGMessageBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_PhaseUnlockedMessage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_PhaseUnlockedMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "PhaseTierInfo" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Name of this phase." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseTierInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_LastTierOfPhase_MetaData[] = {
		{ "Category", "PhaseTierInfo" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "What is the last tier of the phase specified previously." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_LastTierOfPhase = { "LastTierOfPhase", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseTierInfo, LastTierOfPhase), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_LastTierOfPhase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_LastTierOfPhase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_GamePhase_MetaData[] = {
		{ "Category", "PhaseTierInfo" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "The phase to specify tier for" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_GamePhase = { "GamePhase", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseTierInfo, GamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_GamePhase_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_GamePhase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_PhaseUnlockedMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_LastTierOfPhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::NewProp_GamePhase,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PhaseTierInfo",
		sizeof(FPhaseTierInfo),
		alignof(FPhaseTierInfo),
		Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhaseTierInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhaseTierInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhaseTierInfo"), sizeof(FPhaseTierInfo), Get_Z_Construct_UScriptStruct_FPhaseTierInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhaseTierInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhaseTierInfo_Hash() { return 4254272137U; }
	void AFGGamePhaseManager::StaticRegisterNativesAFGGamePhaseManager()
	{
		UClass* Class = AFGGamePhaseManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &AFGGamePhaseManager::execGet },
			{ "GetBaseCostForGamePhase", &AFGGamePhaseManager::execGetBaseCostForGamePhase },
			{ "GetCostForGamePhase", &AFGGamePhaseManager::execGetCostForGamePhase },
			{ "GetGamePhase", &AFGGamePhaseManager::execGetGamePhase },
			{ "GetGamePhaseForSchematic", &AFGGamePhaseManager::execGetGamePhaseForSchematic },
			{ "GetGamePhaseForTechTier", &AFGGamePhaseManager::execGetGamePhaseForTechTier },
			{ "GetGamePhaseName", &AFGGamePhaseManager::execGetGamePhaseName },
			{ "OnRep_GamePhase", &AFGGamePhaseManager::execOnRep_GamePhase },
			{ "PayOffOnGamePhase", &AFGGamePhaseManager::execPayOffOnGamePhase },
			{ "SetGamePhase", &AFGGamePhaseManager::execSetGamePhase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics
	{
		struct FGGamePhaseManager_eventGet_Parms
		{
			UObject* worldContext;
			AFGGamePhaseManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGGamePhaseManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "GamePhase" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetGamePhaseManager" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Get the game phase manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "Get", sizeof(FGGamePhaseManager_eventGet_Parms), Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics
	{
		struct FGGamePhaseManager_eventGetBaseCostForGamePhase_Parms
		{
			TEnumAsByte<EGamePhase> gamePhase;
			TArray<FItemAmount> out_cost;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_cost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_cost_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gamePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::NewProp_out_cost = { "out_cost", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetBaseCostForGamePhase_Parms, out_cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::NewProp_out_cost_Inner = { "out_cost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::NewProp_gamePhase = { "gamePhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetBaseCostForGamePhase_Parms, gamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::NewProp_out_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::NewProp_out_cost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::NewProp_gamePhase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Returns the cost for the passed game phase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "GetBaseCostForGamePhase", sizeof(FGGamePhaseManager_eventGetBaseCostForGamePhase_Parms), Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics
	{
		struct FGGamePhaseManager_eventGetCostForGamePhase_Parms
		{
			TEnumAsByte<EGamePhase> gamePhase;
			TArray<FItemAmount> out_cost;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_cost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_cost_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gamePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::NewProp_out_cost = { "out_cost", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetCostForGamePhase_Parms, out_cost), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::NewProp_out_cost_Inner = { "out_cost", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::NewProp_gamePhase = { "gamePhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetCostForGamePhase_Parms, gamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::NewProp_out_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::NewProp_out_cost_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::NewProp_gamePhase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Returns the cost for the passed game phase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "GetCostForGamePhase", sizeof(FGGamePhaseManager_eventGetCostForGamePhase_Parms), Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics
	{
		struct FGGamePhaseManager_eventGetGamePhase_Parms
		{
			TEnumAsByte<EGamePhase> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetGamePhase_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "gets the game phase number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "GetGamePhase", sizeof(FGGamePhaseManager_eventGetGamePhase_Parms), Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics
	{
		struct FGGamePhaseManager_eventGetGamePhaseForSchematic_Parms
		{
			TSubclassOf<UFGSchematic>  inSchematic;
			TEnumAsByte<EGamePhase> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inSchematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetGamePhaseForSchematic_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::NewProp_inSchematic = { "inSchematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetGamePhaseForSchematic_Parms, inSchematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::NewProp_inSchematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "gets the game phase number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "GetGamePhaseForSchematic", sizeof(FGGamePhaseManager_eventGetGamePhaseForSchematic_Parms), Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics
	{
		struct FGGamePhaseManager_eventGetGamePhaseForTechTier_Parms
		{
			int32 techTier;
			TEnumAsByte<EGamePhase> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_techTier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetGamePhaseForTechTier_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::NewProp_techTier = { "techTier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetGamePhaseForTechTier_Parms, techTier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::NewProp_techTier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "gets the game phase number" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "GetGamePhaseForTechTier", sizeof(FGGamePhaseManager_eventGetGamePhaseForTechTier_Parms), Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics
	{
		struct FGGamePhaseManager_eventGetGamePhaseName_Parms
		{
			TEnumAsByte<EGamePhase> gamePhase;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gamePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetGamePhaseName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::NewProp_gamePhase = { "gamePhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventGetGamePhaseName_Parms, gamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::NewProp_gamePhase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "gets the game phase name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "GetGamePhaseName", sizeof(FGGamePhaseManager_eventGetGamePhaseName_Parms), Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Rep notify for mGamePhase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "OnRep_GamePhase", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics
	{
		struct FGGamePhaseManager_eventPayOffOnGamePhase_Parms
		{
			FItemAmount payOff;
			TEnumAsByte<EGamePhase> gamePhase;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gamePhase;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_payOff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventPayOffOnGamePhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::NewProp_gamePhase = { "gamePhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventPayOffOnGamePhase_Parms, gamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::NewProp_payOff = { "payOff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventPayOffOnGamePhase_Parms, payOff), Z_Construct_UScriptStruct_FItemAmount, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::NewProp_gamePhase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::NewProp_payOff,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Pays off on a game phase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "PayOffOnGamePhase", sizeof(FGGamePhaseManager_eventPayOffOnGamePhase_Parms), Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics
	{
		struct FGGamePhaseManager_eventSetGamePhase_Parms
		{
			TEnumAsByte<EGamePhase> newPhase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newPhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::NewProp_newPhase = { "newPhase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGamePhaseManager_eventSetGamePhase_Parms, newPhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::NewProp_newPhase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Updates the game phase number. Must be called from authority to take effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGamePhaseManager, nullptr, "SetGamePhase", sizeof(FGGamePhaseManager_eventSetGamePhase_Parms), Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGGamePhaseManager_NoRegister()
	{
		return AFGGamePhaseManager::StaticClass();
	}
	struct Z_Construct_UClass_AFGGamePhaseManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnGamePhaseChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnGamePhaseChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGamePhaseCosts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mGamePhaseCosts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mGamePhaseCosts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGamePhaseTierInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mGamePhaseTierInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mGamePhaseTierInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGamePhase_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mGamePhase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGamePhaseManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGGamePhaseManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGGamePhaseManager_Get, "Get" }, // 2967615501
		{ &Z_Construct_UFunction_AFGGamePhaseManager_GetBaseCostForGamePhase, "GetBaseCostForGamePhase" }, // 3443470255
		{ &Z_Construct_UFunction_AFGGamePhaseManager_GetCostForGamePhase, "GetCostForGamePhase" }, // 657986331
		{ &Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhase, "GetGamePhase" }, // 147220388
		{ &Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForSchematic, "GetGamePhaseForSchematic" }, // 2059912760
		{ &Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseForTechTier, "GetGamePhaseForTechTier" }, // 2434174590
		{ &Z_Construct_UFunction_AFGGamePhaseManager_GetGamePhaseName, "GetGamePhaseName" }, // 994811853
		{ &Z_Construct_UFunction_AFGGamePhaseManager_OnRep_GamePhase, "OnRep_GamePhase" }, // 4050220498
		{ &Z_Construct_UFunction_AFGGamePhaseManager_PayOffOnGamePhase, "PayOffOnGamePhase" }, // 876522144
		{ &Z_Construct_UFunction_AFGGamePhaseManager_SetGamePhase, "SetGamePhase" }, // 937529305
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGamePhaseManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Tick Rendering Replication Input Actor Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGGamePhaseManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mOnGamePhaseChanged_MetaData[] = {
		{ "Category", "Recipe" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Called when the game phase is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mOnGamePhaseChanged = { "mOnGamePhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGamePhaseManager, mOnGamePhaseChanged), Z_Construct_UDelegateFunction_FactoryGame_OnGamePhaseUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mOnGamePhaseChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mOnGamePhaseChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseCosts_MetaData[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Speciefies what the different tiers cost" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseCosts = { "mGamePhaseCosts", nullptr, (EPropertyFlags)0x0020080001010021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGamePhaseManager, mGamePhaseCosts), METADATA_PARAMS(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseCosts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseCosts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseCosts_Inner = { "mGamePhaseCosts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhaseCost, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseTierInfo_MetaData[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Specifies what game phases are connected to what tiers" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseTierInfo = { "mGamePhaseTierInfo", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGamePhaseManager, mGamePhaseTierInfo), METADATA_PARAMS(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseTierInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseTierInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseTierInfo_Inner = { "mGamePhaseTierInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPhaseTierInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhase_MetaData[] = {
		{ "Category", "Progression" },
		{ "ModuleRelativePath", "Public/FGGamePhaseManager.h" },
		{ "ToolTip", "Current GamePhase" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhase = { "mGamePhase", "OnRep_GamePhase", (EPropertyFlags)0x0020080101010021, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGamePhaseManager, mGamePhase), Z_Construct_UEnum_FactoryGame_EGamePhase, METADATA_PARAMS(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhase_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGGamePhaseManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mOnGamePhaseChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseCosts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseCosts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseTierInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhaseTierInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGamePhaseManager_Statics::NewProp_mGamePhase,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGGamePhaseManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGGamePhaseManager, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGamePhaseManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGamePhaseManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGamePhaseManager_Statics::ClassParams = {
		&AFGGamePhaseManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGGamePhaseManager_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGGamePhaseManager_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGGamePhaseManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGGamePhaseManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGamePhaseManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGamePhaseManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGamePhaseManager, 543442068);
	template<> FACTORYGAME_API UClass* StaticClass<AFGGamePhaseManager>()
	{
		return AFGGamePhaseManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGamePhaseManager(Z_Construct_UClass_AFGGamePhaseManager, &AFGGamePhaseManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGGamePhaseManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGamePhaseManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
