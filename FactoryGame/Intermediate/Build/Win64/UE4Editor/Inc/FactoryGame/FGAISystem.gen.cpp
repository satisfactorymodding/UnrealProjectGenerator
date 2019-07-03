// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/AI/FGAISystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAISystem() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAggroTargetInterface_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAISystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAISystem();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_AddToTargetableList();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_CreatureDestroyed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_GetAggroTargetList();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_IsActorPardoned();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_PardonActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_PlayerDestroyed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAISystem_UnpardonActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventAggroTargetRemovedSignature_Parms
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
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::NewProp_aggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventAggroTargetRemovedSignature_Parms, aggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::NewProp_aggroTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "AggroTargetRemovedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventAggroTargetRemovedSignature_Parms), Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventAggroTargetAddedSignature_Parms
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
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::NewProp_aggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventAggroTargetAddedSignature_Parms, aggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::NewProp_aggroTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "AggroTargetAddedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventAggroTargetAddedSignature_Parms), Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFGAISystem::StaticRegisterNativesUFGAISystem()
	{
		UClass* Class = UFGAISystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToTargetableList", &UFGAISystem::execAddToTargetableList },
			{ "AggroTargetDestroyed", &UFGAISystem::execAggroTargetDestroyed },
			{ "ClearAllPardonedActors", &UFGAISystem::execClearAllPardonedActors },
			{ "CreatureDestroyed", &UFGAISystem::execCreatureDestroyed },
			{ "GetAggroTargetList", &UFGAISystem::execGetAggroTargetList },
			{ "IsActorPardoned", &UFGAISystem::execIsActorPardoned },
			{ "PardonActor", &UFGAISystem::execPardonActor },
			{ "PlayerDestroyed", &UFGAISystem::execPlayerDestroyed },
			{ "RemoveFromTargetableList", &UFGAISystem::execRemoveFromTargetableList },
			{ "UnpardonActor", &UFGAISystem::execUnpardonActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics
	{
		struct FGAISystem_eventAddToTargetableList_Parms
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
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::NewProp_aggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventAddToTargetableList_Parms, aggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::NewProp_aggroTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Addes this aggro target as a global aggro target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "AddToTargetableList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGAISystem_eventAddToTargetableList_Parms), Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_AddToTargetableList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_AddToTargetableList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics
	{
		struct FGAISystem_eventAggroTargetDestroyed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::NewProp_destroyedActor = { UE4CodeGen_Private::EPropertyClass::Object, "destroyedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventAggroTargetDestroyed_Parms, destroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::NewProp_destroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Called when a aggro target is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "AggroTargetDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGAISystem_eventAggroTargetDestroyed_Parms), Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Removes all actors from the pardoned list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "ClearAllPardonedActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics
	{
		struct FGAISystem_eventCreatureDestroyed_Parms
		{
			AActor* destroyedEnemy;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedEnemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::NewProp_destroyedEnemy = { UE4CodeGen_Private::EPropertyClass::Object, "destroyedEnemy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventCreatureDestroyed_Parms, destroyedEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::NewProp_destroyedEnemy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Called when a creature is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "CreatureDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGAISystem_eventCreatureDestroyed_Parms), Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_CreatureDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_CreatureDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics
	{
		struct FGAISystem_eventGetAggroTargetList_Parms
		{
			TArray<TScriptInterface<IFGAggroTargetInterface> > ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000008000582, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventGetAggroTargetList_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Interface, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Get all available aggro targets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "GetAggroTargetList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGAISystem_eventGetAggroTargetList_Parms), Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_GetAggroTargetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_GetAggroTargetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics
	{
		struct FGAISystem_eventIsActorPardoned_Parms
		{
			AActor* inActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGAISystem_eventIsActorPardoned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGAISystem_eventIsActorPardoned_Parms), &Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::NewProp_inActor = { UE4CodeGen_Private::EPropertyClass::Object, "inActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventIsActorPardoned_Parms, inActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::NewProp_inActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Is this actor pardoned from being targeted?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "IsActorPardoned", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGAISystem_eventIsActorPardoned_Parms), Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_IsActorPardoned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_IsActorPardoned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_PardonActor_Statics
	{
		struct FGAISystem_eventPardonActor_Parms
		{
			AActor* inActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::NewProp_inActor = { UE4CodeGen_Private::EPropertyClass::Object, "inActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventPardonActor_Parms, inActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::NewProp_inActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Give pardon to a actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "PardonActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGAISystem_eventPardonActor_Parms), Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_PardonActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_PardonActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics
	{
		struct FGAISystem_eventPlayerDestroyed_Parms
		{
			AActor* destroyedPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destroyedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::NewProp_destroyedPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "destroyedPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventPlayerDestroyed_Parms, destroyedPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::NewProp_destroyedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Called when a player is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "PlayerDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGAISystem_eventPlayerDestroyed_Parms), Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_PlayerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_PlayerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics
	{
		struct FGAISystem_eventRemoveFromTargetableList_Parms
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
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::NewProp_aggroTarget = { UE4CodeGen_Private::EPropertyClass::Interface, "aggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventRemoveFromTargetableList_Parms, aggroTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::NewProp_aggroTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Removes this aggro target as a global aggro target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "RemoveFromTargetableList", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGAISystem_eventRemoveFromTargetableList_Parms), Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics
	{
		struct FGAISystem_eventUnpardonActor_Parms
		{
			AActor* inActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::NewProp_inActor = { UE4CodeGen_Private::EPropertyClass::Object, "inActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAISystem_eventUnpardonActor_Parms, inActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::NewProp_inActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|AI|Aggro" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "removes pardon from an actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAISystem, "UnpardonActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGAISystem_eventUnpardonActor_Parms), Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAISystem_UnpardonActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAISystem_UnpardonActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAISystem_NoRegister()
	{
		return UFGAISystem::StaticClass();
	}
	struct Z_Construct_UClass_UFGAISystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxSpawnerIterationsPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxSpawnerIterationsPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxCreatureIterationsPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxCreatureIterationsPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisablePawnMovement_MetaData[];
#endif
		static void NewProp_mDisablePawnMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDisablePawnMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActivateSpawnerDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mActivateSpawnerDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshUpdateDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMeshUpdateDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMeshTickEnableDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMeshTickEnableDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNavWalkingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mNavWalkingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDisableAIDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDisableAIDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnAggroTargetRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnAggroTargetRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnAggroTargetAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnAggroTargetAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAISystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAISystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAISystem_AddToTargetableList, "AddToTargetableList" }, // 1904479443
		{ &Z_Construct_UFunction_UFGAISystem_AggroTargetDestroyed, "AggroTargetDestroyed" }, // 810957919
		{ &Z_Construct_UFunction_UFGAISystem_ClearAllPardonedActors, "ClearAllPardonedActors" }, // 1914566687
		{ &Z_Construct_UFunction_UFGAISystem_CreatureDestroyed, "CreatureDestroyed" }, // 3369376958
		{ &Z_Construct_UFunction_UFGAISystem_GetAggroTargetList, "GetAggroTargetList" }, // 872783407
		{ &Z_Construct_UFunction_UFGAISystem_IsActorPardoned, "IsActorPardoned" }, // 2280925865
		{ &Z_Construct_UFunction_UFGAISystem_PardonActor, "PardonActor" }, // 1986917411
		{ &Z_Construct_UFunction_UFGAISystem_PlayerDestroyed, "PlayerDestroyed" }, // 2696060502
		{ &Z_Construct_UFunction_UFGAISystem_RemoveFromTargetableList, "RemoveFromTargetableList" }, // 2397233783
		{ &Z_Construct_UFunction_UFGAISystem_UnpardonActor, "UnpardonActor" }, // 317756834
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/FGAISystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@todoai: Expose tick to BP here, as it might be interesting for modders to use" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxSpawnerIterationsPerTick_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "How many spawners can we iterate over per tick" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxSpawnerIterationsPerTick = { UE4CodeGen_Private::EPropertyClass::Int, "mMaxSpawnerIterationsPerTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mMaxSpawnerIterationsPerTick), METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxSpawnerIterationsPerTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxSpawnerIterationsPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxCreatureIterationsPerTick_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "How many creatures can we iterate over per tick" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxCreatureIterationsPerTick = { UE4CodeGen_Private::EPropertyClass::Int, "mMaxCreatureIterationsPerTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000010001, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mMaxCreatureIterationsPerTick), METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxCreatureIterationsPerTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxCreatureIterationsPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisablePawnMovement_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Indicates if we also want to disable pawn movement when we disable the AI" },
	};
#endif
	void Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisablePawnMovement_SetBit(void* Obj)
	{
		((UFGAISystem*)Obj)->mDisablePawnMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisablePawnMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "mDisablePawnMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGAISystem), &Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisablePawnMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisablePawnMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisablePawnMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mActivateSpawnerDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Distance for when we should activate a spawner" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mActivateSpawnerDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mActivateSpawnerDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mActivateSpawnerDistance), METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mActivateSpawnerDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mActivateSpawnerDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshUpdateDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "distance when we switch tick mode on mesh to Tick Only when Rendered" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshUpdateDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mMeshUpdateDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mMeshUpdateDistance), METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshUpdateDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshUpdateDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshTickEnableDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "distance when we completely remove ticking on mesh" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshTickEnableDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mMeshTickEnableDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mMeshTickEnableDistance), METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshTickEnableDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshTickEnableDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mNavWalkingDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "distance when we switch movement mode on creatures to PHYS_NavWalking" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mNavWalkingDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mNavWalkingDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mNavWalkingDistance), METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mNavWalkingDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mNavWalkingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisableAIDistance_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "distance for disabling an enemys AI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisableAIDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mDisableAIDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mDisableAIDistance), METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisableAIDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisableAIDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetRemoved_MetaData[] = {
		{ "Category", "AI|AggroTargets" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Called whenever a aggro target is removed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnAggroTargetRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mOnAggroTargetRemoved), Z_Construct_UDelegateFunction_FactoryGame_AggroTargetRemovedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetAdded_MetaData[] = {
		{ "Category", "AI|AggroTargets" },
		{ "ModuleRelativePath", "AI/FGAISystem.h" },
		{ "ToolTip", "Called whenever a aggro target is added" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetAdded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnAggroTargetAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UFGAISystem, mOnAggroTargetAdded), Z_Construct_UDelegateFunction_FactoryGame_AggroTargetAddedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetAdded_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetAdded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAISystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxSpawnerIterationsPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMaxCreatureIterationsPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisablePawnMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mActivateSpawnerDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshUpdateDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mMeshTickEnableDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mNavWalkingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mDisableAIDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAISystem_Statics::NewProp_mOnAggroTargetAdded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAISystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAISystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAISystem_Statics::ClassParams = {
		&UFGAISystem::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A6u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGAISystem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAISystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAISystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAISystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAISystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAISystem, 443797376);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAISystem(Z_Construct_UClass_UFGAISystem, &UFGAISystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAISystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAISystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
