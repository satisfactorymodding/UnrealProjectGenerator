// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGBuildGunDismantle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildGunDismantle() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunStateDismantle_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDismantleRefunds();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunStateDismantle();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunState();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnMultiDismantleStateChanged_Parms
		{
			bool newState;
		};
		static void NewProp_newState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::NewProp_newState_SetBit(void* Obj)
	{
		((_Script_FactoryGame_eventOnMultiDismantleStateChanged_Parms*)Obj)->newState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::NewProp_newState = { "newState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FactoryGame_eventOnMultiDismantleStateChanged_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::NewProp_newState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::NewProp_newState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnMultiDismantleStateChanged__DelegateSignature", sizeof(_Script_FactoryGame_eventOnMultiDismantleStateChanged_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnPendingDismantleActorListChanged__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnDismantleRefundsChanged_Parms
		{
			UFGBuildGunStateDismantle* dismantleGun;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dismantleGun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::NewProp_dismantleGun = { "dismantleGun", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnDismantleRefundsChanged_Parms, dismantleGun), Z_Construct_UClass_UFGBuildGunStateDismantle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::NewProp_dismantleGun,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnDismantleRefundsChanged__DelegateSignature", sizeof(_Script_FactoryGame_eventOnDismantleRefundsChanged_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FDismantleRefunds::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FDismantleRefunds_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDismantleRefunds, Z_Construct_UPackage__Script_FactoryGame(), TEXT("DismantleRefunds"), sizeof(FDismantleRefunds), Get_Z_Construct_UScriptStruct_FDismantleRefunds_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FDismantleRefunds>()
{
	return FDismantleRefunds::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDismantleRefunds(FDismantleRefunds::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("DismantleRefunds"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFDismantleRefunds
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFDismantleRefunds()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DismantleRefunds")),new UScriptStruct::TCppStructOps<FDismantleRefunds>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFDismantleRefunds;
	struct Z_Construct_UScriptStruct_FDismantleRefunds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeekDismantleRefund_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PeekDismantleRefund;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PeekDismantleRefund_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPendingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumPendingActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismantleRefunds_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDismantleRefunds>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_PeekDismantleRefund_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_PeekDismantleRefund = { "PeekDismantleRefund", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismantleRefunds, PeekDismantleRefund), METADATA_PARAMS(Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_PeekDismantleRefund_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_PeekDismantleRefund_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_PeekDismantleRefund_Inner = { "PeekDismantleRefund", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_NumPendingActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_NumPendingActors = { "NumPendingActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDismantleRefunds, NumPendingActors), METADATA_PARAMS(Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_NumPendingActors_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_NumPendingActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDismantleRefunds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_PeekDismantleRefund,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_PeekDismantleRefund_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismantleRefunds_Statics::NewProp_NumPendingActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDismantleRefunds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"DismantleRefunds",
		sizeof(FDismantleRefunds),
		alignof(FDismantleRefunds),
		Z_Construct_UScriptStruct_FDismantleRefunds_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDismantleRefunds_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDismantleRefunds_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDismantleRefunds_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDismantleRefunds()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDismantleRefunds_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DismantleRefunds"), sizeof(FDismantleRefunds), Get_Z_Construct_UScriptStruct_FDismantleRefunds_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDismantleRefunds_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDismantleRefunds_Hash() { return 1160942239U; }
	static FName NAME_UFGBuildGunStateDismantle_OnStartDismantle = FName(TEXT("OnStartDismantle"));
	void UFGBuildGunStateDismantle::OnStartDismantle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateDismantle_OnStartDismantle),NULL);
	}
	static FName NAME_UFGBuildGunStateDismantle_OnStopDismantle = FName(TEXT("OnStopDismantle"));
	void UFGBuildGunStateDismantle::OnStopDismantle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateDismantle_OnStopDismantle),NULL);
	}
	static FName NAME_UFGBuildGunStateDismantle_Server_DismantleActors = FName(TEXT("Server_DismantleActors"));
	void UFGBuildGunStateDismantle::Server_DismantleActors(TArray<AActor*> const& selectedActors)
	{
		FGBuildGunStateDismantle_eventServer_DismantleActors_Parms Parms;
		Parms.selectedActors=selectedActors;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateDismantle_Server_DismantleActors),&Parms);
	}
	static FName NAME_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund = FName(TEXT("Server_PeekAtDismantleRefund"));
	void UFGBuildGunStateDismantle::Server_PeekAtDismantleRefund(TArray<AActor*> const& selectedActors)
	{
		FGBuildGunStateDismantle_eventServer_PeekAtDismantleRefund_Parms Parms;
		Parms.selectedActors=selectedActors;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund),&Parms);
	}
	void UFGBuildGunStateDismantle::StaticRegisterNativesUFGBuildGunStateDismantle()
	{
		UClass* Class = UFGBuildGunStateDismantle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDismantle", &UFGBuildGunStateDismantle::execCanDismantle },
			{ "GetDismantleRefund", &UFGBuildGunStateDismantle::execGetDismantleRefund },
			{ "GetMaxNumPendingDismantleActors", &UFGBuildGunStateDismantle::execGetMaxNumPendingDismantleActors },
			{ "GetNumPendingDismantleActors", &UFGBuildGunStateDismantle::execGetNumPendingDismantleActors },
			{ "GetPeekDismantleRefund", &UFGBuildGunStateDismantle::execGetPeekDismantleRefund },
			{ "GetSelectedActor", &UFGBuildGunStateDismantle::execGetSelectedActor },
			{ "HasReachedMaxNumPendingDismantleActors", &UFGBuildGunStateDismantle::execHasReachedMaxNumPendingDismantleActors },
			{ "OnRep_PeekDismantleRefund", &UFGBuildGunStateDismantle::execOnRep_PeekDismantleRefund },
			{ "Server_DismantleActors", &UFGBuildGunStateDismantle::execServer_DismantleActors },
			{ "Server_PeekAtDismantleRefund", &UFGBuildGunStateDismantle::execServer_PeekAtDismantleRefund },
			{ "SetMultiDismantleState", &UFGBuildGunStateDismantle::execSetMultiDismantleState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics
	{
		struct FGBuildGunStateDismantle_eventCanDismantle_Parms
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
	void Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildGunStateDismantle_eventCanDismantle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildGunStateDismantle_eventCanDismantle_Parms), &Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Can the selected actor be dismantled (Only call this on the server)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "CanDismantle", sizeof(FGBuildGunStateDismantle_eventCanDismantle_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics
	{
		struct FGBuildGunStateDismantle_eventGetDismantleRefund_Parms
		{
			TArray<FInventoryStack> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateDismantle_eventGetDismantleRefund_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "What do we get by dismantling the actor (Only call this on the server)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "GetDismantleRefund", sizeof(FGBuildGunStateDismantle_eventGetDismantleRefund_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics
	{
		struct FGBuildGunStateDismantle_eventGetMaxNumPendingDismantleActors_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateDismantle_eventGetMaxNumPendingDismantleActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Returns the maximum number of actors that can be selected for mass-dismantle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "GetMaxNumPendingDismantleActors", sizeof(FGBuildGunStateDismantle_eventGetMaxNumPendingDismantleActors_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics
	{
		struct FGBuildGunStateDismantle_eventGetNumPendingDismantleActors_Parms
		{
			bool includeAimedAtActor;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_includeAimedAtActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_includeAimedAtActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateDismantle_eventGetNumPendingDismantleActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::NewProp_includeAimedAtActor_SetBit(void* Obj)
	{
		((FGBuildGunStateDismantle_eventGetNumPendingDismantleActors_Parms*)Obj)->includeAimedAtActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::NewProp_includeAimedAtActor = { "includeAimedAtActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildGunStateDismantle_eventGetNumPendingDismantleActors_Parms), &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::NewProp_includeAimedAtActor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::NewProp_includeAimedAtActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Returns the number of actors that are pending for dismantle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "GetNumPendingDismantleActors", sizeof(FGBuildGunStateDismantle_eventGetNumPendingDismantleActors_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics
	{
		struct FGBuildGunStateDismantle_eventGetPeekDismantleRefund_Parms
		{
			TArray<FInventoryStack> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateDismantle_eventGetPeekDismantleRefund_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "GetPeekDismantleRefund", sizeof(FGBuildGunStateDismantle_eventGetPeekDismantleRefund_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics
	{
		struct FGBuildGunStateDismantle_eventGetSelectedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateDismantle_eventGetSelectedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Gets the selected actor; null if none selected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "GetSelectedActor", sizeof(FGBuildGunStateDismantle_eventGetSelectedActor_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics
	{
		struct FGBuildGunStateDismantle_eventHasReachedMaxNumPendingDismantleActors_Parms
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
	void Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGBuildGunStateDismantle_eventHasReachedMaxNumPendingDismantleActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildGunStateDismantle_eventHasReachedMaxNumPendingDismantleActors_Parms), &Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Returns true whether the limit for maximum number of actors pending dismantle has been reached" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "HasReachedMaxNumPendingDismantleActors", sizeof(FGBuildGunStateDismantle_eventHasReachedMaxNumPendingDismantleActors_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "OnRep_PeekDismantleRefund", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Give blueprint a chance to do effect when starting dismantle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "OnStartDismantle", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Give blueprint a chance to do effect when stopping dismantle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "OnStopDismantle", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::NewProp_selectedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::NewProp_selectedActors = { "selectedActors", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateDismantle_eventServer_DismantleActors_Parms, selectedActors), METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::NewProp_selectedActors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::NewProp_selectedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::NewProp_selectedActors_Inner = { "selectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::NewProp_selectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::NewProp_selectedActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Client selects actor, then tells the server what to dismantle. This function does that!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "Server_DismantleActors", sizeof(FGBuildGunStateDismantle_eventServer_DismantleActors_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_selectedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectedActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::NewProp_selectedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::NewProp_selectedActors = { "selectedActors", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildGunStateDismantle_eventServer_PeekAtDismantleRefund_Parms, selectedActors), METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::NewProp_selectedActors_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::NewProp_selectedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::NewProp_selectedActors_Inner = { "selectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::NewProp_selectedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::NewProp_selectedActors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "Server_PeekAtDismantleRefund", sizeof(FGBuildGunStateDismantle_eventServer_PeekAtDismantleRefund_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics
	{
		struct FGBuildGunStateDismantle_eventSetMultiDismantleState_Parms
		{
			bool isActive;
		};
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((FGBuildGunStateDismantle_eventSetMultiDismantleState_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGBuildGunStateDismantle_eventSetMultiDismantleState_Parms), &Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Toggle between whether the multi select should be in effect as actors are being highlighted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, nullptr, "SetMultiDismantleState", sizeof(FGBuildGunStateDismantle_eventSetMultiDismantleState_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGBuildGunStateDismantle_NoRegister()
	{
		return UFGBuildGunStateDismantle::StaticClass();
	}
	struct Z_Construct_UClass_UFGBuildGunStateDismantle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPeekDismantleRefund_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPeekDismantleRefund;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPendingDismantleActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPendingDismantleActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPendingDismantleActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentlySelectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentlySelectedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMultiDismantleStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMultiDismantleStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPendingDismantleActorsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPendingDismantleActorsChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPeekRefundsChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPeekRefundsChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildGunState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle, "CanDismantle" }, // 575335166
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund, "GetDismantleRefund" }, // 577244774
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetMaxNumPendingDismantleActors, "GetMaxNumPendingDismantleActors" }, // 1555498047
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetNumPendingDismantleActors, "GetNumPendingDismantleActors" }, // 767632450
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetPeekDismantleRefund, "GetPeekDismantleRefund" }, // 3073257448
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor, "GetSelectedActor" }, // 4234087293
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_HasReachedMaxNumPendingDismantleActors, "HasReachedMaxNumPendingDismantleActors" }, // 1557693655
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_OnRep_PeekDismantleRefund, "OnRep_PeekDismantleRefund" }, // 1742559310
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle, "OnStartDismantle" }, // 3189503200
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle, "OnStopDismantle" }, // 2859435029
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActors, "Server_DismantleActors" }, // 1206224402
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_PeekAtDismantleRefund, "Server_PeekAtDismantleRefund" }, // 3432498888
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_SetMultiDismantleState, "SetMultiDismantleState" }, // 535928231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Build guns dismantle state." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPeekDismantleRefund_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Cached dismantle refunds on server that is replicated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPeekDismantleRefund = { "mPeekDismantleRefund", "OnRep_PeekDismantleRefund", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateDismantle, mPeekDismantleRefund), Z_Construct_UScriptStruct_FDismantleRefunds, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPeekDismantleRefund_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPeekDismantleRefund_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPendingDismantleActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "The actor to dismantle (simulated locally on client)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPendingDismantleActors = { "mPendingDismantleActors", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateDismantle, mPendingDismantleActors), METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPendingDismantleActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPendingDismantleActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPendingDismantleActors_Inner = { "mPendingDismantleActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mCurrentlySelectedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Currently selected dismantable actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mCurrentlySelectedActor = { "mCurrentlySelectedActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateDismantle, mCurrentlySelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mCurrentlySelectedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mCurrentlySelectedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnMultiDismantleStateChanged_MetaData[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnMultiDismantleStateChanged = { "OnMultiDismantleStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateDismantle, OnMultiDismantleStateChanged), Z_Construct_UDelegateFunction_FactoryGame_OnMultiDismantleStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnMultiDismantleStateChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnMultiDismantleStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPendingDismantleActorsChanged_MetaData[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPendingDismantleActorsChanged = { "OnPendingDismantleActorsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateDismantle, OnPendingDismantleActorsChanged), Z_Construct_UDelegateFunction_FactoryGame_OnPendingDismantleActorListChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPendingDismantleActorsChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPendingDismantleActorsChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPeekRefundsChanged_MetaData[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Public/Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Delegate for when the refunds used to preview dismantle refunds have been updated on local machine" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPeekRefundsChanged = { "OnPeekRefundsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGBuildGunStateDismantle, OnPeekRefundsChanged), Z_Construct_UDelegateFunction_FactoryGame_OnDismantleRefundsChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPeekRefundsChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPeekRefundsChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPeekDismantleRefund,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPendingDismantleActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mPendingDismantleActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mCurrentlySelectedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnMultiDismantleStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPendingDismantleActorsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_OnPeekRefundsChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildGunStateDismantle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::ClassParams = {
		&UFGBuildGunStateDismantle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGBuildGunStateDismantle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGBuildGunStateDismantle, 3169686842);
	template<> FACTORYGAME_API UClass* StaticClass<UFGBuildGunStateDismantle>()
	{
		return UFGBuildGunStateDismantle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildGunStateDismantle(Z_Construct_UClass_UFGBuildGunStateDismantle, &UFGBuildGunStateDismantle::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildGunStateDismantle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildGunStateDismantle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
