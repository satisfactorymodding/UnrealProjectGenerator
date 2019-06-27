// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGBuildGunDismantle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildGunDismantle() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunStateDismantle_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunStateDismantle();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGBuildGunState();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor();
// End Cross Module References
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
	static FName NAME_UFGBuildGunStateDismantle_Server_DismantleActor = FName(TEXT("Server_DismantleActor"));
	void UFGBuildGunStateDismantle::Server_DismantleActor(AActor* actorToDismantle)
	{
		FGBuildGunStateDismantle_eventServer_DismantleActor_Parms Parms;
		Parms.actorToDismantle=actorToDismantle;
		ProcessEvent(FindFunctionChecked(NAME_UFGBuildGunStateDismantle_Server_DismantleActor),&Parms);
	}
	void UFGBuildGunStateDismantle::StaticRegisterNativesUFGBuildGunStateDismantle()
	{
		UClass* Class = UFGBuildGunStateDismantle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDismantle", &UFGBuildGunStateDismantle::execCanDismantle },
			{ "GetDismantleRefund", &UFGBuildGunStateDismantle::execGetDismantleRefund },
			{ "GetSelectedActor", &UFGBuildGunStateDismantle::execGetSelectedActor },
			{ "Server_DismantleActor", &UFGBuildGunStateDismantle::execServer_DismantleActor },
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildGunStateDismantle_eventCanDismantle_Parms), &Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Can the selected actor be dismantled (Only call this on the server)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, "CanDismantle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildGunStateDismantle_eventCanDismantle_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateDismantle_eventGetDismantleRefund_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FInventoryStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "What do we get by dismantling the actor (Only call this on the server)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, "GetDismantleRefund", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildGunStateDismantle_eventGetDismantleRefund_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund_Statics::FuncParams);
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateDismantle_eventGetSelectedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "BuildGunState|Dismantle" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Gets the selected actor; null if none selected." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, "GetSelectedActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildGunStateDismantle_eventGetSelectedActor_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Give blueprint a chance to do effect when starting dismantle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, "OnStartDismantle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Give blueprint a chance to do effect when stopping dismantle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, "OnStopDismantle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorToDismantle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::NewProp_actorToDismantle = { UE4CodeGen_Private::EPropertyClass::Object, "actorToDismantle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildGunStateDismantle_eventServer_DismantleActor_Parms, actorToDismantle), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::NewProp_actorToDismantle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Client selects actor, then tells the server what to dismantle. This function does that!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGBuildGunStateDismantle, "Server_DismantleActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80240CC1, sizeof(FGBuildGunStateDismantle_eventServer_DismantleActor_Parms), Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSelectedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSelectedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGBuildGunState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_CanDismantle, "CanDismantle" }, // 542085299
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetDismantleRefund, "GetDismantleRefund" }, // 735300478
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_GetSelectedActor, "GetSelectedActor" }, // 3564177155
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStartDismantle, "OnStartDismantle" }, // 3190072665
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_OnStopDismantle, "OnStopDismantle" }, // 1664843744
		{ &Z_Construct_UFunction_UFGBuildGunStateDismantle_Server_DismantleActor, "Server_DismantleActor" }, // 2766744022
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "Build guns dismantle state." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mSelectedActor_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGBuildGunDismantle.h" },
		{ "ToolTip", "The actor to dismantle (simulated locally on client)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mSelectedActor = { UE4CodeGen_Private::EPropertyClass::Object, "mSelectedActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGBuildGunStateDismantle, mSelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mSelectedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mSelectedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::NewProp_mSelectedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGBuildGunStateDismantle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::ClassParams = {
		&UFGBuildGunStateDismantle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGBuildGunStateDismantle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(UFGBuildGunStateDismantle, 586801565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGBuildGunStateDismantle(Z_Construct_UClass_UFGBuildGunStateDismantle, &UFGBuildGunStateDismantle::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGBuildGunStateDismantle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGBuildGunStateDismantle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
