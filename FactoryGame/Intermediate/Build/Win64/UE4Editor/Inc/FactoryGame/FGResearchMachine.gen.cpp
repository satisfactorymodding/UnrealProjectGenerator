// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGResearchMachine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResearchMachine() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchMachine_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchMachine();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_GetMachineUser();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResearchRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_SetMachineUser();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister();
// End Cross Module References
	void UFGResearchMachine::StaticRegisterNativesUFGResearchMachine()
	{
		UClass* Class = UFGResearchMachine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMachineUser", &UFGResearchMachine::execGetMachineUser },
			{ "GetResearchMeshComponent", &UFGResearchMachine::execGetResearchMeshComponent },
			{ "IsResearchBeingConducted", &UFGResearchMachine::execIsResearchBeingConducted },
			{ "OnRep_ResearchMesh", &UFGResearchMachine::execOnRep_ResearchMesh },
			{ "OnResearchConcluded", &UFGResearchMachine::execOnResearchConcluded },
			{ "OnResearchStarted", &UFGResearchMachine::execOnResearchStarted },
			{ "SetMachineUser", &UFGResearchMachine::execSetMachineUser },
			{ "SetResearchMeshComponent", &UFGResearchMachine::execSetResearchMeshComponent },
			{ "SetResearchMeshCurveScale", &UFGResearchMachine::execSetResearchMeshCurveScale },
			{ "SetResearchRecipe", &UFGResearchMachine::execSetResearchRecipe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics
	{
		struct FGResearchMachine_eventGetMachineUser_Parms
		{
			AFGCharacterPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventGetMachineUser_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
		{ "ToolTip", "Returns current M.A.M. user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "GetMachineUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGResearchMachine_eventGetMachineUser_Parms), Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_GetMachineUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_GetMachineUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics
	{
		struct FGResearchMachine_eventGetResearchMeshComponent_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventGetResearchMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
		{ "ToolTip", "Returns the Static Mesh Component that displays the mesh of what is being researched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "GetResearchMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResearchMachine_eventGetResearchMeshComponent_Parms), Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics
	{
		struct FGResearchMachine_eventIsResearchBeingConducted_Parms
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
	void Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResearchMachine_eventIsResearchBeingConducted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResearchMachine_eventIsResearchBeingConducted_Parms), &Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "IsResearchBeingConducted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGResearchMachine_eventIsResearchBeingConducted_Parms), Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "OnRep_ResearchMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics
	{
		struct FGResearchMachine_eventOnResearchConcluded_Parms
		{
			TSubclassOf<UFGResearchRecipe>  researchRecipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::NewProp_researchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "researchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventOnResearchConcluded_Parms, researchRecipe), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::NewProp_researchRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "OnResearchConcluded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGResearchMachine_eventOnResearchConcluded_Parms), Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics
	{
		struct FGResearchMachine_eventOnResearchStarted_Parms
		{
			TSubclassOf<UFGResearchRecipe>  researchRecipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::NewProp_researchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "researchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventOnResearchStarted_Parms, researchRecipe), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::NewProp_researchRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "OnResearchStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(FGResearchMachine_eventOnResearchStarted_Parms), Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics
	{
		struct FGResearchMachine_eventSetMachineUser_Parms
		{
			AFGCharacterPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventSetMachineUser_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "SetMachineUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResearchMachine_eventSetMachineUser_Parms), Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_SetMachineUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_SetMachineUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics
	{
		struct FGResearchMachine_eventSetResearchMeshComponent_Parms
		{
			UStaticMeshComponent* staticMeshComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_staticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::NewProp_staticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::NewProp_staticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "staticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventSetResearchMeshComponent_Parms, staticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::NewProp_staticMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::NewProp_staticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::NewProp_staticMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
		{ "ToolTip", "Sets the Static Mesh Component that displays the mesh of what is being researched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "SetResearchMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResearchMachine_eventSetResearchMeshComponent_Parms), Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics
	{
		struct FGResearchMachine_eventSetResearchMeshCurveScale_Parms
		{
			UCurveFloat* curveScale;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curveScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::NewProp_curveScale = { UE4CodeGen_Private::EPropertyClass::Object, "curveScale", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventSetResearchMeshCurveScale_Parms, curveScale), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::NewProp_curveScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
		{ "ToolTip", "Sets the curve float for the mesh that is being researched" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "SetResearchMeshCurveScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResearchMachine_eventSetResearchMeshCurveScale_Parms), Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics
	{
		struct FGResearchMachine_eventSetResearchRecipe_Parms
		{
			TSubclassOf<UFGResearchRecipe>  researchRecipe;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_researchRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::NewProp_researchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "researchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResearchMachine_eventSetResearchRecipe_Parms, researchRecipe), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::NewProp_researchRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Research" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResearchMachine, "SetResearchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGResearchMachine_eventSetResearchRecipe_Parms), Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGResearchMachine_NoRegister()
	{
		return UFGResearchMachine::StaticClass();
	}
	struct Z_Construct_UClass_UFGResearchMachine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mItemScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mItemScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResearchingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mResearchingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResearchingMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mResearchingMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlayerUsingMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPlayerUsingMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentResearchRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mCurrentResearchRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGResearchMachine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGResearchMachine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGResearchMachine_GetMachineUser, "GetMachineUser" }, // 2504203958
		{ &Z_Construct_UFunction_UFGResearchMachine_GetResearchMeshComponent, "GetResearchMeshComponent" }, // 239225383
		{ &Z_Construct_UFunction_UFGResearchMachine_IsResearchBeingConducted, "IsResearchBeingConducted" }, // 1206389308
		{ &Z_Construct_UFunction_UFGResearchMachine_OnRep_ResearchMesh, "OnRep_ResearchMesh" }, // 1560421015
		{ &Z_Construct_UFunction_UFGResearchMachine_OnResearchConcluded, "OnResearchConcluded" }, // 1602005982
		{ &Z_Construct_UFunction_UFGResearchMachine_OnResearchStarted, "OnResearchStarted" }, // 2584843783
		{ &Z_Construct_UFunction_UFGResearchMachine_SetMachineUser, "SetMachineUser" }, // 1606106893
		{ &Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshComponent, "SetResearchMeshComponent" }, // 4294770797
		{ &Z_Construct_UFunction_UFGResearchMachine_SetResearchMeshCurveScale, "SetResearchMeshCurveScale" }, // 1230784552
		{ &Z_Construct_UFunction_UFGResearchMachine_SetResearchRecipe, "SetResearchRecipe" }, // 2067814678
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchMachine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DefaultToInstanced", "" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGResearchMachine.h" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mItemScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mItemScaleCurve = { UE4CodeGen_Private::EPropertyClass::Object, "mItemScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGResearchMachine, mItemScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mItemScaleCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mItemScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMesh_MetaData[] = {
		{ "ModuleRelativePath", "FGResearchMachine.h" },
		{ "ToolTip", "This holds the actual mesh to be displayed by the assigned Static Mesh Component for mResearchingMeshComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mResearchingMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ResearchMesh", STRUCT_OFFSET(UFGResearchMachine, mResearchingMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mResearchingMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UFGResearchMachine, mResearchingMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mPlayerUsingMachine_MetaData[] = {
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mPlayerUsingMachine = { UE4CodeGen_Private::EPropertyClass::Object, "mPlayerUsingMachine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000020, 1, nullptr, STRUCT_OFFSET(UFGResearchMachine, mPlayerUsingMachine), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mPlayerUsingMachine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mPlayerUsingMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mCurrentResearchRecipe_MetaData[] = {
		{ "ModuleRelativePath", "FGResearchMachine.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mCurrentResearchRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mCurrentResearchRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000020, 1, nullptr, STRUCT_OFFSET(UFGResearchMachine, mCurrentResearchRecipe), Z_Construct_UClass_UFGResearchRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mCurrentResearchRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mCurrentResearchRecipe_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGResearchMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mItemScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mResearchingMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mPlayerUsingMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResearchMachine_Statics::NewProp_mCurrentResearchRecipe,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGResearchMachine_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGRecipeProducerInterface_NoRegister, (int32)VTABLE_OFFSET(UFGResearchMachine, IFGRecipeProducerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGResearchMachine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGResearchMachine>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGResearchMachine_Statics::ClassParams = {
		&UFGResearchMachine::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGResearchMachine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGResearchMachine_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_UFGResearchMachine_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGResearchMachine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGResearchMachine()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGResearchMachine_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGResearchMachine, 400235788);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGResearchMachine(Z_Construct_UClass_UFGResearchMachine, &UFGResearchMachine::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGResearchMachine"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGResearchMachine);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
