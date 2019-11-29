// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGCircuit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCircuit() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuit_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCircuit_GetCircuitID();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
// End Cross Module References
	void UFGCircuit::StaticRegisterNativesUFGCircuit()
	{
		UClass* Class = UFGCircuit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCircuitID", &UFGCircuit::execGetCircuitID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics
	{
		struct FGCircuit_eventGetCircuitID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCircuit_eventGetCircuitID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Circuits|Circuit" },
		{ "ModuleRelativePath", "FGCircuit.h" },
		{ "ToolTip", "@return This circuit's unique identifier; -1 if invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCircuit, nullptr, "GetCircuitID", sizeof(FGCircuit_eventGetCircuitID_Parms), Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCircuit_GetCircuitID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCircuit_GetCircuitID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCircuit_NoRegister()
	{
		return UFGCircuit::StaticClass();
	}
	struct Z_Construct_UClass_UFGCircuit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInteractingPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mInteractingPlayers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInteractingPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHasChanged_MetaData[];
#endif
		static void NewProp_mHasChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mHasChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNeedFullRebuild_MetaData[];
#endif
		static void NewProp_mNeedFullRebuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mNeedFullRebuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCircuitID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCircuitID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCircuit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCircuit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCircuit_GetCircuitID, "GetCircuitID" }, // 3685125577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGCircuit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGCircuit.h" },
		{ "ToolTip", "Abstract base for circuit implementations.\n\nRepresents and circuit.\nIt keeps track of which components are connected to the same circuit.\nWe can say that A and B are connected (indirectly or directly) but not if there is a wire directly between A and B.\nThe actual connection info is stored in the graph that is made up by all the components (nodes) and wires (edges).\n2 or more components are required to make up a circuit. It's not much of a circuit if you're the only one in it!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuit_Statics::NewProp_mInteractingPlayers_MetaData[] = {
		{ "ModuleRelativePath", "FGCircuit.h" },
		{ "ToolTip", "All players interacting with a building that's connected to this circuit" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCircuit_Statics::NewProp_mInteractingPlayers = { "mInteractingPlayers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuit, mInteractingPlayers), METADATA_PARAMS(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mInteractingPlayers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mInteractingPlayers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCircuit_Statics::NewProp_mInteractingPlayers_Inner = { "mInteractingPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuit_Statics::NewProp_mHasChanged_MetaData[] = {
		{ "ModuleRelativePath", "FGCircuit.h" },
		{ "ToolTip", "True if this circuit has changed." },
	};
#endif
	void Z_Construct_UClass_UFGCircuit_Statics::NewProp_mHasChanged_SetBit(void* Obj)
	{
		((UFGCircuit*)Obj)->mHasChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCircuit_Statics::NewProp_mHasChanged = { "mHasChanged", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFGCircuit), &Z_Construct_UClass_UFGCircuit_Statics::NewProp_mHasChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mHasChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mHasChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuit_Statics::NewProp_mNeedFullRebuild_MetaData[] = {
		{ "ModuleRelativePath", "FGCircuit.h" },
		{ "ToolTip", "Do this circuit needs to be rebuilt, e.g. wires or components have been removed." },
	};
#endif
	void Z_Construct_UClass_UFGCircuit_Statics::NewProp_mNeedFullRebuild_SetBit(void* Obj)
	{
		((UFGCircuit*)Obj)->mNeedFullRebuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCircuit_Statics::NewProp_mNeedFullRebuild = { "mNeedFullRebuild", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UFGCircuit), &Z_Construct_UClass_UFGCircuit_Statics::NewProp_mNeedFullRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mNeedFullRebuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mNeedFullRebuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuit_Statics::NewProp_mComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGCircuit.h" },
		{ "ToolTip", "List of all the components (nodes) in this circuit." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCircuit_Statics::NewProp_mComponents = { "mComponents", nullptr, (EPropertyFlags)0x0020088001000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuit, mComponents), METADATA_PARAMS(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCircuit_Statics::NewProp_mComponents_Inner = { "mComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCircuit_Statics::NewProp_mCircuitID_MetaData[] = {
		{ "ModuleRelativePath", "FGCircuit.h" },
		{ "ToolTip", "The id used to identify this circuit." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGCircuit_Statics::NewProp_mCircuitID = { "mCircuitID", nullptr, (EPropertyFlags)0x0020080001000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCircuit, mCircuitID), METADATA_PARAMS(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mCircuitID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCircuit_Statics::NewProp_mCircuitID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuit_Statics::NewProp_mInteractingPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuit_Statics::NewProp_mInteractingPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuit_Statics::NewProp_mHasChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuit_Statics::NewProp_mNeedFullRebuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuit_Statics::NewProp_mComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuit_Statics::NewProp_mComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCircuit_Statics::NewProp_mCircuitID,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFGCircuit_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGSaveInterface_NoRegister, (int32)VTABLE_OFFSET(UFGCircuit, IFGSaveInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCircuit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCircuit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCircuit_Statics::ClassParams = {
		&UFGCircuit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGCircuit_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGCircuit_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGCircuit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCircuit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCircuit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCircuit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCircuit, 2222574826);
	template<> FACTORYGAME_API UClass* StaticClass<UFGCircuit>()
	{
		return UFGCircuit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCircuit(Z_Construct_UClass_UFGCircuit, &UFGCircuit::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCircuit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCircuit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
