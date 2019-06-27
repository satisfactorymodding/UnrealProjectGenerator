// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGBuildableHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildable_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryLegsComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_AFGBuildableHologram_ReceiveConfigureActor = FName(TEXT("ReceiveConfigureActor"));
	void AFGBuildableHologram::ReceiveConfigureActor(AFGBuildable* inBuildable)
	{
		FGBuildableHologram_eventReceiveConfigureActor_Parms Parms;
		Parms.inBuildable=inBuildable;
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableHologram_ReceiveConfigureActor),&Parms);
	}
	static FName NAME_AFGBuildableHologram_ReceiveConfigureComponents = FName(TEXT("ReceiveConfigureComponents"));
	void AFGBuildableHologram::ReceiveConfigureComponents(AFGBuildable* inBuildable)
	{
		FGBuildableHologram_eventReceiveConfigureComponents_Parms Parms;
		Parms.inBuildable=inBuildable;
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableHologram_ReceiveConfigureComponents),&Parms);
	}
	void AFGBuildableHologram::StaticRegisterNativesAFGBuildableHologram()
	{
	}
	struct Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inBuildable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::NewProp_inBuildable = { UE4CodeGen_Private::EPropertyClass::Object, "inBuildable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableHologram_eventReceiveConfigureActor_Parms, inBuildable), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::NewProp_inBuildable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "Configure the actor with values from the hologram here.\n@note DO NOT TOUCH COMPONENTS HERE as they'll be overwritten! Use ConfigureComponents for that" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableHologram, "ReceiveConfigureActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGBuildableHologram_eventReceiveConfigureActor_Parms), Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inBuildable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::NewProp_inBuildable = { UE4CodeGen_Private::EPropertyClass::Object, "inBuildable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableHologram_eventReceiveConfigureComponents_Parms, inBuildable), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::NewProp_inBuildable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "Configure the actor's components with values from the hologram here.\n@note This is a good place to initialize snapped connections etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableHologram, "ReceiveConfigureComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGBuildableHologram_eventReceiveConfigureComponents_Parms), Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableHologram_NoRegister()
	{
		return AFGBuildableHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLegs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLegs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxPlacementFloorAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxPlacementFloorAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildableClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildableClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor, "ReceiveConfigureActor" }, // 1424566705
		{ &Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents, "ReceiveConfigureComponents" }, // 2816551216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGBuildableHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "The base class for building holograms.\nThe hologram is created from a buildables class.\nThe hologram is responsible for:\nSnapping functionality when building.\nConstructing the buildable." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "Component to check build clearance to other buildings." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox = { UE4CodeGen_Private::EPropertyClass::Object, "mClearanceBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableHologram, mClearanceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGBuildableHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs = { UE4CodeGen_Private::EPropertyClass::Object, "mLegs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableHologram, mLegs), Z_Construct_UClass_UFGFactoryLegsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle_MetaData[] = {
		{ "Category", "Hologram" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "The maximum allowed angle on the floor for this hologram to be placed on (in degrees)." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxPlacementFloorAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGBuildableHologram, mMaxPlacementFloorAngle), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mBuildableClass_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "The class for the buildable this hologram wants to construct. Set on spawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mBuildableClass = { UE4CodeGen_Private::EPropertyClass::Class, "mBuildableClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableHologram, mBuildableClass), Z_Construct_UClass_AFGBuildable_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mBuildableClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mBuildableClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mBuildableClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableHologram_Statics::ClassParams = {
		&AFGBuildableHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableHologram, 1965568445);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableHologram(Z_Construct_UClass_AFGBuildableHologram, &AFGBuildableHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
