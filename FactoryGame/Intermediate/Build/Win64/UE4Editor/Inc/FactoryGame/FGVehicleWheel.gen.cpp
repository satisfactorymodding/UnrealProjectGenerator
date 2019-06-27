// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGVehicleWheel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGVehicleWheel() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleWheel_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGVehicleWheel();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
// End Cross Module References
	void UFGVehicleWheel::StaticRegisterNativesUFGVehicleWheel()
	{
	}
	UClass* Z_Construct_UClass_UFGVehicleWheel_NoRegister()
	{
		return UFGVehicleWheel::StaticClass();
	}
	struct Z_Construct_UClass_UFGVehicleWheel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCamberStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCamberStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCamberAtMaxDroop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCamberAtMaxDroop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCamberAtMaxCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCamberAtMaxCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCamberAtRest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCamberAtRest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAutoGenerateCollisionCylinder_MetaData[];
#endif
		static void NewProp_mAutoGenerateCollisionCylinder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mAutoGenerateCollisionCylinder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInvertSteering_MetaData[];
#endif
		static void NewProp_mInvertSteering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mInvertSteering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGVehicleWheel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleWheel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGVehicleWheel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGVehicleWheel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberStiffness_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "FGVehicleWheel.h" },
		{ "ToolTip", "camber stiffness. measured in radians per kg... or something." },
		{ "UIMin", "1.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "mCamberStiffness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGVehicleWheel, mCamberStiffness), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberStiffness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxDroop_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ModuleRelativePath", "FGVehicleWheel.h" },
		{ "ToolTip", "Wheel camber angle IN DEGREES" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxDroop = { UE4CodeGen_Private::EPropertyClass::Float, "mCamberAtMaxDroop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGVehicleWheel, mCamberAtMaxDroop), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxDroop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxDroop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxCompression_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ModuleRelativePath", "FGVehicleWheel.h" },
		{ "ToolTip", "Wheel camber angle IN DEGREES" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxCompression = { UE4CodeGen_Private::EPropertyClass::Float, "mCamberAtMaxCompression", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGVehicleWheel, mCamberAtMaxCompression), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxCompression_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtRest_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ModuleRelativePath", "FGVehicleWheel.h" },
		{ "ToolTip", "Wheel camber angle IN DEGREES" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtRest = { UE4CodeGen_Private::EPropertyClass::Float, "mCamberAtRest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGVehicleWheel, mCamberAtRest), METADATA_PARAMS(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtRest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtRest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mAutoGenerateCollisionCylinder_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ModuleRelativePath", "FGVehicleWheel.h" },
		{ "ToolTip", "Automatically generates a perfect collision cylinder that matches the wheel's dimensions." },
	};
#endif
	void Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mAutoGenerateCollisionCylinder_SetBit(void* Obj)
	{
		((UFGVehicleWheel*)Obj)->mAutoGenerateCollisionCylinder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mAutoGenerateCollisionCylinder = { UE4CodeGen_Private::EPropertyClass::Bool, "mAutoGenerateCollisionCylinder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGVehicleWheel), &Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mAutoGenerateCollisionCylinder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mAutoGenerateCollisionCylinder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mAutoGenerateCollisionCylinder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mInvertSteering_MetaData[] = {
		{ "Category", "Wheel" },
		{ "ModuleRelativePath", "FGVehicleWheel.h" },
		{ "ToolTip", "Set to true if a rear wheel. This can result in custom functionality for rear wheels." },
	};
#endif
	void Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mInvertSteering_SetBit(void* Obj)
	{
		((UFGVehicleWheel*)Obj)->mInvertSteering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mInvertSteering = { UE4CodeGen_Private::EPropertyClass::Bool, "mInvertSteering", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGVehicleWheel), &Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mInvertSteering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mInvertSteering_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mInvertSteering_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGVehicleWheel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxDroop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtMaxCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mCamberAtRest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mAutoGenerateCollisionCylinder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGVehicleWheel_Statics::NewProp_mInvertSteering,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGVehicleWheel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGVehicleWheel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGVehicleWheel_Statics::ClassParams = {
		&UFGVehicleWheel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_UFGVehicleWheel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGVehicleWheel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGVehicleWheel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGVehicleWheel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGVehicleWheel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGVehicleWheel, 2933017861);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGVehicleWheel(Z_Construct_UClass_UFGVehicleWheel, &UFGVehicleWheel::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGVehicleWheel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGVehicleWheel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
