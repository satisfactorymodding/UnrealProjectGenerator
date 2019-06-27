// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/AI/FGAggroTargetInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAggroTargetInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAggroTargetInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAggroTargetInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemyController_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker();
// End Cross Module References
	AActor* IFGAggroTargetInterface::GetActor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActor instead.");
		FGAggroTargetInterface_eventGetActor_Parms Parms;
		return Parms.ReturnValue;
	}
	FVector IFGAggroTargetInterface::GetAttackLocation() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAttackLocation instead.");
		FGAggroTargetInterface_eventGetAttackLocation_Parms Parms;
		return Parms.ReturnValue;
	}
	float IFGAggroTargetInterface::GetEnemyTargetDesirability(AFGEnemyController* forController)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEnemyTargetDesirability instead.");
		FGAggroTargetInterface_eventGetEnemyTargetDesirability_Parms Parms;
		return Parms.ReturnValue;
	}
	UPrimitiveComponent* IFGAggroTargetInterface::GetTargetComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTargetComponent instead.");
		FGAggroTargetInterface_eventGetTargetComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IFGAggroTargetInterface::IsAlive() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsAlive instead.");
		FGAggroTargetInterface_eventIsAlive_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGAggroTargetInterface::RegisterIncomingAttacker(AFGEnemyController* forController)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterIncomingAttacker instead.");
	}
	bool IFGAggroTargetInterface::ShouldAutoregisterAsTargetable() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShouldAutoregisterAsTargetable instead.");
		FGAggroTargetInterface_eventShouldAutoregisterAsTargetable_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGAggroTargetInterface::UnregisterAttacker(AFGEnemyController* forController)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnregisterAttacker instead.");
	}
	void UFGAggroTargetInterface::StaticRegisterNativesUFGAggroTargetInterface()
	{
		UClass* Class = UFGAggroTargetInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActor", &IFGAggroTargetInterface::execGetActor },
			{ "GetAttackLocation", &IFGAggroTargetInterface::execGetAttackLocation },
			{ "GetEnemyTargetDesirability", &IFGAggroTargetInterface::execGetEnemyTargetDesirability },
			{ "GetTargetComponent", &IFGAggroTargetInterface::execGetTargetComponent },
			{ "IsAlive", &IFGAggroTargetInterface::execIsAlive },
			{ "RegisterIncomingAttacker", &IFGAggroTargetInterface::execRegisterIncomingAttacker },
			{ "ShouldAutoregisterAsTargetable", &IFGAggroTargetInterface::execShouldAutoregisterAsTargetable },
			{ "UnregisterAttacker", &IFGAggroTargetInterface::execUnregisterAttacker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAggroTargetInterface_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "GetActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(FGAggroTargetInterface_eventGetActor_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAggroTargetInterface_eventGetAttackLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "GetAttackLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C820C00, sizeof(FGAggroTargetInterface_eventGetAttackLocation_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_forController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAggroTargetInterface_eventGetEnemyTargetDesirability_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::NewProp_forController = { UE4CodeGen_Private::EPropertyClass::Object, "forController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAggroTargetInterface_eventGetEnemyTargetDesirability_Parms, forController), Z_Construct_UClass_AFGEnemyController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::NewProp_forController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "GetEnemyTargetDesirability", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGAggroTargetInterface_eventGetEnemyTargetDesirability_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGAggroTargetInterface_eventGetTargetComponent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
		{ "ToolTip", "Primitive component that we will try to attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "GetTargetComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(FGAggroTargetInterface_eventGetTargetComponent_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGAggroTargetInterface_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGAggroTargetInterface_eventIsAlive_Parms), &Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "IsAlive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x5C020C00, sizeof(FGAggroTargetInterface_eventIsAlive_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_forController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::NewProp_forController = { UE4CodeGen_Private::EPropertyClass::Object, "forController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAggroTargetInterface_eventRegisterIncomingAttacker_Parms, forController), Z_Construct_UClass_AFGEnemyController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::NewProp_forController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "RegisterIncomingAttacker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGAggroTargetInterface_eventRegisterIncomingAttacker_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGAggroTargetInterface_eventShouldAutoregisterAsTargetable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGAggroTargetInterface_eventShouldAutoregisterAsTargetable_Parms), &Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "ShouldAutoregisterAsTargetable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x48020C00, sizeof(FGAggroTargetInterface_eventShouldAutoregisterAsTargetable_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_forController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::NewProp_forController = { UE4CodeGen_Private::EPropertyClass::Object, "forController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGAggroTargetInterface_eventUnregisterAttacker_Parms, forController), Z_Construct_UClass_AFGEnemyController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::NewProp_forController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aggro" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAggroTargetInterface, "UnregisterAttacker", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGAggroTargetInterface_eventUnregisterAttacker_Parms), Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAggroTargetInterface_NoRegister()
	{
		return UFGAggroTargetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGAggroTargetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAggroTargetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAggroTargetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_GetActor, "GetActor" }, // 630685245
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_GetAttackLocation, "GetAttackLocation" }, // 2374237093
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_GetEnemyTargetDesirability, "GetEnemyTargetDesirability" }, // 203979227
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_GetTargetComponent, "GetTargetComponent" }, // 953748988
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_IsAlive, "IsAlive" }, // 3556380695
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_RegisterIncomingAttacker, "RegisterIncomingAttacker" }, // 2078213370
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable, "ShouldAutoregisterAsTargetable" }, // 2103579538
		{ &Z_Construct_UFunction_UFGAggroTargetInterface_UnregisterAttacker, "UnregisterAttacker" }, // 261244319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAggroTargetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AI/FGAggroTargetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAggroTargetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGAggroTargetInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAggroTargetInterface_Statics::ClassParams = {
		&UFGAggroTargetInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAggroTargetInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAggroTargetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAggroTargetInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAggroTargetInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAggroTargetInterface, 195233181);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAggroTargetInterface(Z_Construct_UClass_UFGAggroTargetInterface, &UFGAggroTargetInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAggroTargetInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAggroTargetInterface);
	static FName NAME_UFGAggroTargetInterface_GetActor = FName(TEXT("GetActor"));
	AActor* IFGAggroTargetInterface::Execute_GetActor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventGetActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_GetActor);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetActor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAggroTargetInterface_GetAttackLocation = FName(TEXT("GetAttackLocation"));
	FVector IFGAggroTargetInterface::Execute_GetAttackLocation(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventGetAttackLocation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_GetAttackLocation);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetAttackLocation_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAggroTargetInterface_GetEnemyTargetDesirability = FName(TEXT("GetEnemyTargetDesirability"));
	float IFGAggroTargetInterface::Execute_GetEnemyTargetDesirability(UObject* O, AFGEnemyController* forController)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventGetEnemyTargetDesirability_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_GetEnemyTargetDesirability);
		if (Func)
		{
			Parms.forController=forController;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetEnemyTargetDesirability_Implementation(forController);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAggroTargetInterface_GetTargetComponent = FName(TEXT("GetTargetComponent"));
	UPrimitiveComponent* IFGAggroTargetInterface::Execute_GetTargetComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventGetTargetComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_GetTargetComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTargetComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAggroTargetInterface_IsAlive = FName(TEXT("IsAlive"));
	bool IFGAggroTargetInterface::Execute_IsAlive(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventIsAlive_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_IsAlive);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsAlive_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAggroTargetInterface_RegisterIncomingAttacker = FName(TEXT("RegisterIncomingAttacker"));
	void IFGAggroTargetInterface::Execute_RegisterIncomingAttacker(UObject* O, AFGEnemyController* forController)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventRegisterIncomingAttacker_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_RegisterIncomingAttacker);
		if (Func)
		{
			Parms.forController=forController;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			I->RegisterIncomingAttacker_Implementation(forController);
		}
	}
	static FName NAME_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable = FName(TEXT("ShouldAutoregisterAsTargetable"));
	bool IFGAggroTargetInterface::Execute_ShouldAutoregisterAsTargetable(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventShouldAutoregisterAsTargetable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_ShouldAutoregisterAsTargetable);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			Parms.ReturnValue = I->ShouldAutoregisterAsTargetable_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGAggroTargetInterface_UnregisterAttacker = FName(TEXT("UnregisterAttacker"));
	void IFGAggroTargetInterface::Execute_UnregisterAttacker(UObject* O, AFGEnemyController* forController)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGAggroTargetInterface::StaticClass()));
		FGAggroTargetInterface_eventUnregisterAttacker_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGAggroTargetInterface_UnregisterAttacker);
		if (Func)
		{
			Parms.forController=forController;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGAggroTargetInterface*)(O->GetNativeInterfaceAddress(UFGAggroTargetInterface::StaticClass())))
		{
			I->UnregisterAttacker_Implementation(forController);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
