// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGWireHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWireHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWireHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWireHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPowerPoleHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGWireHologram_OnAutomaticPoleDisableToggle = FName(TEXT("OnAutomaticPoleDisableToggle"));
	void AFGWireHologram::OnAutomaticPoleDisableToggle(bool disabled)
	{
		FGWireHologram_eventOnAutomaticPoleDisableToggle_Parms Parms;
		Parms.disabled=disabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGWireHologram_OnAutomaticPoleDisableToggle),&Parms);
	}
	void AFGWireHologram::StaticRegisterNativesAFGWireHologram()
	{
	}
	struct Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics
	{
		static void NewProp_disabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_disabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::NewProp_disabled_SetBit(void* Obj)
	{
		((FGWireHologram_eventOnAutomaticPoleDisableToggle_Parms*)Obj)->disabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::NewProp_disabled = { UE4CodeGen_Private::EPropertyClass::Bool, "disabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGWireHologram_eventOnAutomaticPoleDisableToggle_Parms), &Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::NewProp_disabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::NewProp_disabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGWireHologram, "OnAutomaticPoleDisableToggle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGWireHologram_eventOnAutomaticPoleDisableToggle_Parms), Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGWireHologram_NoRegister()
	{
		return AFGWireHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGWireHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWireMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mWireMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mCurrentConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mStartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDefaultPowerPoleRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDefaultPowerPoleRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerPole_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPowerPole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnections_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGWireHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGWireHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGWireHologram_OnAutomaticPoleDisableToggle, "OnAutomaticPoleDisableToggle" }, // 3432287990
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWireHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGWireHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
		{ "ToolTip", "Hologram for placing wires between circuit connections." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mWireMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
		{ "ToolTip", "The mesh we should stretch" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mWireMesh = { UE4CodeGen_Private::EPropertyClass::Object, "mWireMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(AFGWireHologram, mWireMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mWireMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mWireMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mCurrentConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
		{ "ToolTip", "Keeps track of what connection we are working with" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mCurrentConnection = { UE4CodeGen_Private::EPropertyClass::Int, "mCurrentConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGWireHologram, mCurrentConnection), METADATA_PARAMS(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mCurrentConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mCurrentConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mStartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
		{ "ToolTip", "The start location of this wire" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mStartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "mStartLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGWireHologram, mStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mStartLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mStartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mDefaultPowerPoleRecipe_MetaData[] = {
		{ "Category", "Power pole" },
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mDefaultPowerPoleRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mDefaultPowerPoleRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGWireHologram, mDefaultPowerPoleRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mDefaultPowerPoleRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mDefaultPowerPoleRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mPowerPole_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mPowerPole = { UE4CodeGen_Private::EPropertyClass::Object, "mPowerPole", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGWireHologram, mPowerPole), Z_Construct_UClass_AFGPowerPoleHologram_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mPowerPole_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mPowerPole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mConnections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGWireHologram.h" },
		{ "ToolTip", "The two connection components we connect." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mConnections = { UE4CodeGen_Private::EPropertyClass::Object, "mConnections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, CPP_ARRAY_DIM(mConnections, AFGWireHologram), nullptr, STRUCT_OFFSET(AFGWireHologram, mConnections), Z_Construct_UClass_UFGCircuitConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mConnections_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mConnections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGWireHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mWireMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mCurrentConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mStartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mDefaultPowerPoleRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mPowerPole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGWireHologram_Statics::NewProp_mConnections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGWireHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGWireHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGWireHologram_Statics::ClassParams = {
		&AFGWireHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGWireHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGWireHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGWireHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGWireHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGWireHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGWireHologram, 2554160290);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGWireHologram(Z_Construct_UClass_AFGWireHologram, &AFGWireHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGWireHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGWireHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
