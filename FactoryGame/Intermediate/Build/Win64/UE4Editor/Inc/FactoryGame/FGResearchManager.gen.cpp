// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGResearchManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResearchManager() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchTree_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSchematic_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EResearchState();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FResearchTime();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FResearchData();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResearchManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResearchManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_CanAffordResearch();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGInventoryComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_GetPendingRewards();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_InitiateResearch();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_IsResearchComplete();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventResearchTreeUnlocked_Parms
		{
			TSubclassOf<UFGResearchTree>  researchTree;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::NewProp_researchTree = { "researchTree", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventResearchTreeUnlocked_Parms, researchTree), Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::NewProp_researchTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "ResearchTreeUnlocked__DelegateSignature", sizeof(_Script_FactoryGame_eventResearchTreeUnlocked_Parms), Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventResearchResultsClaimed_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventResearchResultsClaimed_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "ResearchResultsClaimed__DelegateSignature", sizeof(_Script_FactoryGame_eventResearchResultsClaimed_Parms), Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventResearchStateChangedDelegate_Parms
		{
			EResearchState researchState;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_researchState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_researchState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::NewProp_researchState = { "researchState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventResearchStateChangedDelegate_Parms, researchState), Z_Construct_UEnum_FactoryGame_EResearchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::NewProp_researchState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::NewProp_researchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::NewProp_researchState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "ResearchStateChangedDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventResearchStateChangedDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventResearchCompletedDelegate_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventResearchCompletedDelegate_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "ResearchCompletedDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventResearchCompletedDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventResearchStartedDelegate_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventResearchStartedDelegate_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "ResearchStartedDelegate__DelegateSignature", sizeof(_Script_FactoryGame_eventResearchStartedDelegate_Parms), Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EResearchState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EResearchState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EResearchState"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<EResearchState>()
	{
		return EResearchState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResearchState(EResearchState_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EResearchState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EResearchState_Hash() { return 2246926266U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EResearchState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResearchState"), 0, Get_Z_Construct_UEnum_FactoryGame_EResearchState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EResearchState::ERS_NotResearching", (int64)EResearchState::ERS_NotResearching },
				{ "EResearchState::ERS_Researching", (int64)EResearchState::ERS_Researching },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ERS_NotResearching.DisplayName", "Not Researching" },
				{ "ERS_Researching.DisplayName", "Researching" },
				{ "ModuleRelativePath", "Public/FGResearchManager.h" },
				{ "ToolTip", "The current state of research" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EResearchState",
				"EResearchState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FResearchTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FResearchTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResearchTime, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ResearchTime"), sizeof(FResearchTime), Get_Z_Construct_UScriptStruct_FResearchTime_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FResearchTime>()
{
	return FResearchTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResearchTime(FResearchTime::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ResearchTime"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFResearchTime
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFResearchTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResearchTime")),new UScriptStruct::TCppStructOps<FResearchTime>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFResearchTime;
	struct Z_Construct_UScriptStruct_FResearchTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchCompleteTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResearchCompleteTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResearchData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Keeps track of ongoing research and when it's supposed to be completed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FResearchTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResearchTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchCompleteTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "The time stamp for when the research is completed. When saved it represents how much time is left for research" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchCompleteTimestamp = { "ResearchCompleteTimestamp", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResearchTime, ResearchCompleteTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchCompleteTimestamp_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchCompleteTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchData_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "The research entry that contains data about the research conducted" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchData = { "ResearchData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResearchTime, ResearchData), Z_Construct_UScriptStruct_FResearchData, METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResearchTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchCompleteTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchTime_Statics::NewProp_ResearchData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResearchTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ResearchTime",
		sizeof(FResearchTime),
		alignof(FResearchTime),
		Z_Construct_UScriptStruct_FResearchTime_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchTime_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResearchTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResearchTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResearchTime"), sizeof(FResearchTime), Get_Z_Construct_UScriptStruct_FResearchTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResearchTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResearchTime_Hash() { return 3283148453U; }
class UScriptStruct* FResearchData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FResearchData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FResearchData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ResearchData"), sizeof(FResearchData), Get_Z_Construct_UScriptStruct_FResearchData_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FResearchData>()
{
	return FResearchData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FResearchData(FResearchData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("ResearchData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFResearchData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFResearchData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ResearchData")),new UScriptStruct::TCppStructOps<FResearchData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFResearchData;
	struct Z_Construct_UScriptStruct_FResearchData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingRewards;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PendingRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitiatingResearchTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InitiatingResearchTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Schematic_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Contains data about the research conducted" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResearchData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResearchData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_PendingRewards_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "The rewards that have been generated for this schematic.\nThis is used for example to store randomized alternate recipe schematics when analyzing a hard drive\nThis array can be empty since most schematics use the unlock system except hard drives that generate rewards when research is initialized" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_PendingRewards = { "PendingRewards", nullptr, (EPropertyFlags)0x0014000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResearchData, PendingRewards), METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_PendingRewards_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_PendingRewards_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_PendingRewards_Inner = { "PendingRewards", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_InitiatingResearchTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "The research tree that initiated the research" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_InitiatingResearchTree = { "InitiatingResearchTree", nullptr, (EPropertyFlags)0x0014000001000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResearchData, InitiatingResearchTree), Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_InitiatingResearchTree_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_InitiatingResearchTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_Schematic_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "The schematic that holds the research data" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_Schematic = { "Schematic", nullptr, (EPropertyFlags)0x0014000001000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FResearchData, Schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_Schematic_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_Schematic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResearchData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_PendingRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_PendingRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_InitiatingResearchTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResearchData_Statics::NewProp_Schematic,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResearchData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"ResearchData",
		sizeof(FResearchData),
		alignof(FResearchData),
		Z_Construct_UScriptStruct_FResearchData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResearchData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FResearchData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResearchData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FResearchData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ResearchData"), sizeof(FResearchData), Get_Z_Construct_UScriptStruct_FResearchData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FResearchData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FResearchData_Hash() { return 1565551467U; }
	static FName NAME_AFGResearchManager_Client_NewResearchStarted = FName(TEXT("Client_NewResearchStarted"));
	void AFGResearchManager::Client_NewResearchStarted(TSubclassOf<UFGSchematic>  research)
	{
		FGResearchManager_eventClient_NewResearchStarted_Parms Parms;
		Parms.research=research;
		ProcessEvent(FindFunctionChecked(NAME_AFGResearchManager_Client_NewResearchStarted),&Parms);
	}
	void AFGResearchManager::StaticRegisterNativesAFGResearchManager()
	{
		UClass* Class = AFGResearchManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAffordResearch", &AFGResearchManager::execCanAffordResearch },
			{ "CanConductMultipleResearch", &AFGResearchManager::execCanConductMultipleResearch },
			{ "CanResearchBeInitiated", &AFGResearchManager::execCanResearchBeInitiated },
			{ "ClaimResearchResults", &AFGResearchManager::execClaimResearchResults },
			{ "Client_NewResearchStarted", &AFGResearchManager::execClient_NewResearchStarted },
			{ "ContainsAnyCompletedResearch", &AFGResearchManager::execContainsAnyCompletedResearch },
			{ "Get", &AFGResearchManager::execGet },
			{ "GetAllCompletedResearch", &AFGResearchManager::execGetAllCompletedResearch },
			{ "GetAllResearchTrees", &AFGResearchManager::execGetAllResearchTrees },
			{ "GetCurrentResearchState", &AFGResearchManager::execGetCurrentResearchState },
			{ "GetInitiatingResearchTree", &AFGResearchManager::execGetInitiatingResearchTree },
			{ "GetOngoingResearchTimeLeft", &AFGResearchManager::execGetOngoingResearchTimeLeft },
			{ "GetPendingRewards", &AFGResearchManager::execGetPendingRewards },
			{ "GetResearchBeingConducted", &AFGResearchManager::execGetResearchBeingConducted },
			{ "InitiateResearch", &AFGResearchManager::execInitiateResearch },
			{ "IsAnyResearchBeingConducted", &AFGResearchManager::execIsAnyResearchBeingConducted },
			{ "IsResearchBeingConducted", &AFGResearchManager::execIsResearchBeingConducted },
			{ "IsResearchComplete", &AFGResearchManager::execIsResearchComplete },
			{ "IsResesearchTreeUnlocked", &AFGResearchManager::execIsResesearchTreeUnlocked },
			{ "OnRep_OngoingResearch", &AFGResearchManager::execOnRep_OngoingResearch },
			{ "OnResearchTimerComplete", &AFGResearchManager::execOnResearchTimerComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics
	{
		struct FGResearchManager_eventCanAffordResearch_Parms
		{
			UFGInventoryComponent* playerInventory;
			TSubclassOf<UFGSchematic>  schematic;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventCanAffordResearch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventCanAffordResearch_Parms), &Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventCanAffordResearch_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_playerInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_playerInventory = { "playerInventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventCanAffordResearch_Parms, playerInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_playerInventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_playerInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_schematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::NewProp_playerInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "CanAffordResearch", sizeof(FGResearchManager_eventCanAffordResearch_Parms), Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_CanAffordResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_CanAffordResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics
	{
		struct FGResearchManager_eventCanConductMultipleResearch_Parms
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
	void Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventCanConductMultipleResearch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventCanConductMultipleResearch_Parms), &Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "CanConductMultipleResearch", sizeof(FGResearchManager_eventCanConductMultipleResearch_Parms), Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics
	{
		struct FGResearchManager_eventCanResearchBeInitiated_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventCanResearchBeInitiated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventCanResearchBeInitiated_Parms), &Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventCanResearchBeInitiated_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "CanResearchBeInitiated", sizeof(FGResearchManager_eventCanResearchBeInitiated_Parms), Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics
	{
		struct FGResearchManager_eventClaimResearchResults_Parms
		{
			AFGCharacterPlayer* instigatorPlayer;
			TSubclassOf<UFGSchematic>  schematic;
			int32 selectedRewardIndex;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_selectedRewardIndex;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigatorPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventClaimResearchResults_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventClaimResearchResults_Parms), &Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_selectedRewardIndex = { "selectedRewardIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventClaimResearchResults_Parms, selectedRewardIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventClaimResearchResults_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_instigatorPlayer = { "instigatorPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventClaimResearchResults_Parms, instigatorPlayer), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_selectedRewardIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_schematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::NewProp_instigatorPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Tries to claim rewards from completed research. If rewards have already been claimed then no results will be returned. Returns true if research could be claimed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "ClaimResearchResults", sizeof(FGResearchManager_eventClaimResearchResults_Parms), Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_research;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::NewProp_research = { "research", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventClient_NewResearchStarted_Parms, research), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::NewProp_research,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "Client_NewResearchStarted", sizeof(FGResearchManager_eventClient_NewResearchStarted_Parms), Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics
	{
		struct FGResearchManager_eventContainsAnyCompletedResearch_Parms
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
	void Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventContainsAnyCompletedResearch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventContainsAnyCompletedResearch_Parms), &Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Whether or not there is any research that has been completed but not claimed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "ContainsAnyCompletedResearch", sizeof(FGResearchManager_eventContainsAnyCompletedResearch_Parms), Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_Get_Statics
	{
		struct FGResearchManager_eventGet_Parms
		{
			UObject* worldContext;
			AFGResearchManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResearchManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGResearchManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResearchManager_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetResearchManager" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "Get", sizeof(FGResearchManager_eventGet_Parms), Z_Construct_UFunction_AFGResearchManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics
	{
		struct FGResearchManager_eventGetAllCompletedResearch_Parms
		{
			TArray<TSubclassOf<UFGSchematic> > out_schematics;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_schematics;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_schematics_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::NewProp_out_schematics = { "out_schematics", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetAllCompletedResearch_Parms, out_schematics), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::NewProp_out_schematics_Inner = { "out_schematics", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::NewProp_out_schematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::NewProp_out_schematics_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Schematic" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Returns all schematics that have been researched and are ready to be claimed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "GetAllCompletedResearch", sizeof(FGResearchManager_eventGetAllCompletedResearch_Parms), Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics
	{
		struct FGResearchManager_eventGetAllResearchTrees_Parms
		{
			TArray<TSubclassOf<UFGResearchTree> > out_ResearchTrees;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_ResearchTrees;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_ResearchTrees_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::NewProp_out_ResearchTrees = { "out_ResearchTrees", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetAllResearchTrees_Parms, out_ResearchTrees), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::NewProp_out_ResearchTrees_Inner = { "out_ResearchTrees", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::NewProp_out_ResearchTrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::NewProp_out_ResearchTrees_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Returns every possible research tree that is in the game\n@note Calling this is only valid after PopulateResearchTreeList has been run." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "GetAllResearchTrees", sizeof(FGResearchManager_eventGetAllResearchTrees_Parms), Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics
	{
		struct FGResearchManager_eventGetCurrentResearchState_Parms
		{
			EResearchState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetCurrentResearchState_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EResearchState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "GetCurrentResearchState", sizeof(FGResearchManager_eventGetCurrentResearchState_Parms), Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics
	{
		struct FGResearchManager_eventGetInitiatingResearchTree_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			TSubclassOf<UFGResearchTree>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetInitiatingResearchTree_Parms, ReturnValue), Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetInitiatingResearchTree_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Return the researchTree that initiated the research of the given schematic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "GetInitiatingResearchTree", sizeof(FGResearchManager_eventGetInitiatingResearchTree_Parms), Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics
	{
		struct FGResearchManager_eventGetOngoingResearchTimeLeft_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetOngoingResearchTimeLeft_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetOngoingResearchTimeLeft_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Returns how much time there is left for a specific research. If the research in question isn't ongoing it will return -1.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "GetOngoingResearchTimeLeft", sizeof(FGResearchManager_eventGetOngoingResearchTimeLeft_Parms), Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics
	{
		struct FGResearchManager_eventGetPendingRewards_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			TArray<TSubclassOf<UFGSchematic> > out_rewards;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_rewards;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_rewards_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::NewProp_out_rewards = { "out_rewards", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetPendingRewards_Parms, out_rewards), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::NewProp_out_rewards_Inner = { "out_rewards", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetPendingRewards_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::NewProp_out_rewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::NewProp_out_rewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Returns all schematics that have been researched and are ready to be claimed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "GetPendingRewards", sizeof(FGResearchManager_eventGetPendingRewards_Parms), Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_GetPendingRewards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_GetPendingRewards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics
	{
		struct FGResearchManager_eventGetResearchBeingConducted_Parms
		{
			TSubclassOf<UFGSchematic>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventGetResearchBeingConducted_Parms, ReturnValue), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "GetResearchBeingConducted", sizeof(FGResearchManager_eventGetResearchBeingConducted_Parms), Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics
	{
		struct FGResearchManager_eventInitiateResearch_Parms
		{
			UFGInventoryComponent* playerInventory;
			TSubclassOf<UFGSchematic>  schematic;
			TSubclassOf<UFGResearchTree>  initiatingResearchTree;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_initiatingResearchTree;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventInitiateResearch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventInitiateResearch_Parms), &Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_initiatingResearchTree = { "initiatingResearchTree", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventInitiateResearch_Parms, initiatingResearchTree), Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventInitiateResearch_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_playerInventory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_playerInventory = { "playerInventory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventInitiateResearch_Parms, playerInventory), Z_Construct_UClass_UFGInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_playerInventory_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_playerInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_initiatingResearchTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_schematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::NewProp_playerInventory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Initiates research if given player inventory has enough items to cover the cost and research are allowed to start\nReturns whether research was successfully started.\n@param playerInventory The inventory where we grab the cost of research from\n@param initiatingResearchTree The research tree that triggered this schematic research\n@param schematic The schematic we want to research" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "InitiateResearch", sizeof(FGResearchManager_eventInitiateResearch_Parms), Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_InitiateResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_InitiateResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics
	{
		struct FGResearchManager_eventIsAnyResearchBeingConducted_Parms
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
	void Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventIsAnyResearchBeingConducted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventIsAnyResearchBeingConducted_Parms), &Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "IsAnyResearchBeingConducted", sizeof(FGResearchManager_eventIsAnyResearchBeingConducted_Parms), Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics
	{
		struct FGResearchManager_eventIsResearchBeingConducted_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventIsResearchBeingConducted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventIsResearchBeingConducted_Parms), &Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventIsResearchBeingConducted_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Checks whether a piece of research is currently being conducted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "IsResearchBeingConducted", sizeof(FGResearchManager_eventIsResearchBeingConducted_Parms), Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics
	{
		struct FGResearchManager_eventIsResearchComplete_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventIsResearchComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventIsResearchComplete_Parms), &Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventIsResearchComplete_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Checks whether a specific piece of research has completed (i.e. can be claimed)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "IsResearchComplete", sizeof(FGResearchManager_eventIsResearchComplete_Parms), Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_IsResearchComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_IsResearchComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics
	{
		struct FGResearchManager_eventIsResesearchTreeUnlocked_Parms
		{
			TSubclassOf<UFGResearchTree>  researchTree;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchManager_eventIsResesearchTreeUnlocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResearchManager_eventIsResesearchTreeUnlocked_Parms), &Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::NewProp_researchTree = { "researchTree", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventIsResesearchTreeUnlocked_Parms, researchTree), Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::NewProp_researchTree,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "IsResesearchTreeUnlocked", sizeof(FGResearchManager_eventIsResesearchTreeUnlocked_Parms), Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "OnRep_OngoingResearch", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics
	{
		struct FGResearchManager_eventOnResearchTimerComplete_Parms
		{
			TSubclassOf<UFGSchematic>  schematic;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_schematic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::NewProp_schematic = { "schematic", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResearchManager_eventOnResearchTimerComplete_Parms, schematic), Z_Construct_UClass_UFGSchematic_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::NewProp_schematic,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResearchManager, nullptr, "OnResearchTimerComplete", sizeof(FGResearchManager_eventOnResearchTimerComplete_Parms), Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGResearchManager_NoRegister()
	{
		return AFGResearchManager::StaticClass();
	}
	struct Z_Construct_UClass_AFGResearchManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSavedOngoingResearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mSavedOngoingResearch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSavedOngoingResearch_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOngoingResearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mOngoingResearch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mOngoingResearch_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCompletedResearch_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCompletedResearch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mCompletedResearch_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUnlockedResearchTrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mUnlockedResearchTrees;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mUnlockedResearchTrees_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllResearchTrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mAllResearchTrees;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mAllResearchTrees_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanConductMultipleResearch_MetaData[];
#endif
		static void NewProp_mCanConductMultipleResearch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanConductMultipleResearch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchTreeUnlockedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResearchTreeUnlockedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchResultsClaimedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResearchResultsClaimedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchStateChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResearchStateChangedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchCompletedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResearchCompletedDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResearchStartedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResearchStartedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGResearchManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGResearchManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGResearchManager_CanAffordResearch, "CanAffordResearch" }, // 1318008298
		{ &Z_Construct_UFunction_AFGResearchManager_CanConductMultipleResearch, "CanConductMultipleResearch" }, // 2135774111
		{ &Z_Construct_UFunction_AFGResearchManager_CanResearchBeInitiated, "CanResearchBeInitiated" }, // 3331562661
		{ &Z_Construct_UFunction_AFGResearchManager_ClaimResearchResults, "ClaimResearchResults" }, // 271557333
		{ &Z_Construct_UFunction_AFGResearchManager_Client_NewResearchStarted, "Client_NewResearchStarted" }, // 2797501308
		{ &Z_Construct_UFunction_AFGResearchManager_ContainsAnyCompletedResearch, "ContainsAnyCompletedResearch" }, // 2831630340
		{ &Z_Construct_UFunction_AFGResearchManager_Get, "Get" }, // 2189356881
		{ &Z_Construct_UFunction_AFGResearchManager_GetAllCompletedResearch, "GetAllCompletedResearch" }, // 3296931124
		{ &Z_Construct_UFunction_AFGResearchManager_GetAllResearchTrees, "GetAllResearchTrees" }, // 4174292651
		{ &Z_Construct_UFunction_AFGResearchManager_GetCurrentResearchState, "GetCurrentResearchState" }, // 847629128
		{ &Z_Construct_UFunction_AFGResearchManager_GetInitiatingResearchTree, "GetInitiatingResearchTree" }, // 3493190446
		{ &Z_Construct_UFunction_AFGResearchManager_GetOngoingResearchTimeLeft, "GetOngoingResearchTimeLeft" }, // 1124888482
		{ &Z_Construct_UFunction_AFGResearchManager_GetPendingRewards, "GetPendingRewards" }, // 228998096
		{ &Z_Construct_UFunction_AFGResearchManager_GetResearchBeingConducted, "GetResearchBeingConducted" }, // 851981486
		{ &Z_Construct_UFunction_AFGResearchManager_InitiateResearch, "InitiateResearch" }, // 3453323252
		{ &Z_Construct_UFunction_AFGResearchManager_IsAnyResearchBeingConducted, "IsAnyResearchBeingConducted" }, // 1205692647
		{ &Z_Construct_UFunction_AFGResearchManager_IsResearchBeingConducted, "IsResearchBeingConducted" }, // 3702871324
		{ &Z_Construct_UFunction_AFGResearchManager_IsResearchComplete, "IsResearchComplete" }, // 1482252830
		{ &Z_Construct_UFunction_AFGResearchManager_IsResesearchTreeUnlocked, "IsResesearchTreeUnlocked" }, // 1141026585
		{ &Z_Construct_UFunction_AFGResearchManager_OnRep_OngoingResearch, "OnRep_OngoingResearch" }, // 630399904
		{ &Z_Construct_UFunction_AFGResearchManager_OnResearchTimerComplete, "OnResearchTimerComplete" }, // 1289478172
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Tick Rendering Replication Input Actor Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGResearchManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The research manager handles everything research related" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mSavedOngoingResearch_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Used save the current ongoing research, saved research is restarted on load" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mSavedOngoingResearch = { "mSavedOngoingResearch", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, mSavedOngoingResearch), METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mSavedOngoingResearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mSavedOngoingResearch_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mSavedOngoingResearch_Inner = { "mSavedOngoingResearch", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResearchTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mOngoingResearch_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "What research that is currently being analyzed. i.e. that has started their timer and is ticking down." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mOngoingResearch = { "mOngoingResearch", "OnRep_OngoingResearch", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, mOngoingResearch), METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mOngoingResearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mOngoingResearch_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mOngoingResearch_Inner = { "mOngoingResearch", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResearchTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCompletedResearch_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "What research has been conducted and is complete." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCompletedResearch = { "mCompletedResearch", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, mCompletedResearch), METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCompletedResearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCompletedResearch_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCompletedResearch_Inner = { "mCompletedResearch", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FResearchData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mUnlockedResearchTrees_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mUnlockedResearchTrees = { "mUnlockedResearchTrees", nullptr, (EPropertyFlags)0x0024080001000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, mUnlockedResearchTrees), METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mUnlockedResearchTrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mUnlockedResearchTrees_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mUnlockedResearchTrees_Inner = { "mUnlockedResearchTrees", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mAllResearchTrees_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "MODDING EDIT" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mAllResearchTrees = { "mAllResearchTrees", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, mAllResearchTrees), METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mAllResearchTrees_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mAllResearchTrees_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mAllResearchTrees_Inner = { "mAllResearchTrees", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGResearchTree_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCanConductMultipleResearch_MetaData[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Whether multiple concurrent research can be conducted, or only one at a time." },
	};
#endif
	void Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCanConductMultipleResearch_SetBit(void* Obj)
	{
		((AFGResearchManager*)Obj)->mCanConductMultipleResearch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCanConductMultipleResearch = { "mCanConductMultipleResearch", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGResearchManager), &Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCanConductMultipleResearch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCanConductMultipleResearch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCanConductMultipleResearch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchTreeUnlockedDelegate_MetaData[] = {
		{ "Category", "Events|Research" },
		{ "DisplayName", "OnResearchTreeUnlocked" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Called when research trees are unlocked" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchTreeUnlockedDelegate = { "ResearchTreeUnlockedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, ResearchTreeUnlockedDelegate), Z_Construct_UDelegateFunction_FactoryGame_ResearchTreeUnlocked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchTreeUnlockedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchTreeUnlockedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchResultsClaimedDelegate_MetaData[] = {
		{ "Category", "Events|Research" },
		{ "DisplayName", "OnResearchClaimed" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Called when research results are collected from completed research" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchResultsClaimedDelegate = { "ResearchResultsClaimedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, ResearchResultsClaimedDelegate), Z_Construct_UDelegateFunction_FactoryGame_ResearchResultsClaimed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchResultsClaimedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchResultsClaimedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStateChangedDelegate_MetaData[] = {
		{ "Category", "Events|Research" },
		{ "DisplayName", "OnResearchStateChanged" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Called when research state has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStateChangedDelegate = { "ResearchStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, ResearchStateChangedDelegate), Z_Construct_UDelegateFunction_FactoryGame_ResearchStateChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStateChangedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStateChangedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchCompletedDelegate_MetaData[] = {
		{ "Category", "Events|Research" },
		{ "DisplayName", "OnResearchCompleted" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Called when ongoing research has completed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchCompletedDelegate = { "ResearchCompletedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, ResearchCompletedDelegate), Z_Construct_UDelegateFunction_FactoryGame_ResearchCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchCompletedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchCompletedDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStartedDelegate_MetaData[] = {
		{ "Category", "Events|Research" },
		{ "DisplayName", "OnResearchStarted" },
		{ "ModuleRelativePath", "Public/FGResearchManager.h" },
		{ "ToolTip", "Called when a research recipe is started" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStartedDelegate = { "ResearchStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGResearchManager, ResearchStartedDelegate), Z_Construct_UDelegateFunction_FactoryGame_ResearchStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStartedDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStartedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGResearchManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mSavedOngoingResearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mSavedOngoingResearch_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mOngoingResearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mOngoingResearch_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCompletedResearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCompletedResearch_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mUnlockedResearchTrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mUnlockedResearchTrees_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mAllResearchTrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mAllResearchTrees_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_mCanConductMultipleResearch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchTreeUnlockedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchResultsClaimedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStateChangedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchCompletedDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResearchManager_Statics::NewProp_ResearchStartedDelegate,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGResearchManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(AFGResearchManager, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResearchManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResearchManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResearchManager_Statics::ClassParams = {
		&AFGResearchManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGResearchManager_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_AFGResearchManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGResearchManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGResearchManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGResearchManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGResearchManager, 2090806320);
	template<> FACTORYGAME_API UClass* StaticClass<AFGResearchManager>()
	{
		return AFGResearchManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResearchManager(Z_Construct_UClass_AFGResearchManager, &AFGResearchManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResearchManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResearchManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
