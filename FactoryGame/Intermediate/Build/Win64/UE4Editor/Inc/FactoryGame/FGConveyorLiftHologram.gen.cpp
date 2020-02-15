// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGConveyorLiftHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConveyorLiftHologram() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorLiftHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConveyorLiftHologram();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSplineHologram();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableConveyorLift_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister();
// End Cross Module References
	void AFGConveyorLiftHologram::StaticRegisterNativesAFGConveyorLiftHologram()
	{
		UClass* Class = AFGConveyorLiftHologram::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ArrowDirection", &AFGConveyorLiftHologram::execOnRep_ArrowDirection },
			{ "OnRep_TopTransform", &AFGConveyorLiftHologram::execOnRep_TopTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGConveyorLiftHologram, nullptr, "OnRep_ArrowDirection", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGConveyorLiftHologram, nullptr, "OnRep_TopTransform", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGConveyorLiftHologram_NoRegister()
	{
		return AFGConveyorLiftHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGConveyorLiftHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mArrowDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mArrowDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mArrowDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJointMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mJointMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTopMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTopMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMidMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMidMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBottomMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mBottomMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTopTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTopTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUpgradedConveyorLift_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mUpgradedConveyorLift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSnappedConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSnappedConnectionComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConnectionComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConnectionComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGConveyorLiftHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSplineHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGConveyorLiftHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_ArrowDirection, "OnRep_ArrowDirection" }, // 544163583
		{ &Z_Construct_UFunction_AFGConveyorLiftHologram_OnRep_TopTransform, "OnRep_TopTransform" }, // 254821456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGConveyorLiftHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
		{ "ToolTip", "Arrow to indicate the direction of the lift while placing it." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowComponent = { "mArrowComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mArrowComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
		{ "ToolTip", "Used to replicate the direction arrow." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowDirection = { "mArrowDirection", "OnRep_ArrowDirection", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mArrowDirection), Z_Construct_UEnum_FactoryGame_EFactoryConnectionDirection, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mJointMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mJointMesh = { "mJointMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mJointMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mJointMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mJointMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopMesh = { "mTopMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mTopMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mMidMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mMidMesh = { "mMidMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mMidMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mMidMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mMidMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mBottomMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mBottomMesh = { "mBottomMesh", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mBottomMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mBottomMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mBottomMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
		{ "ToolTip", ", CustomSerialization" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopTransform = { "mTopTransform", "OnRep_TopTransform", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mTopTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mUpgradedConveyorLift_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
		{ "ToolTip", "If we upgrade another conveyor lift this is the belt we replace." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mUpgradedConveyorLift = { "mUpgradedConveyorLift", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGConveyorLiftHologram, mUpgradedConveyorLift), Z_Construct_UClass_AFGBuildableConveyorLift_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mUpgradedConveyorLift_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mUpgradedConveyorLift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
		{ "ToolTip", "The connections we've made." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mSnappedConnectionComponents = { "mSnappedConnectionComponents", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mSnappedConnectionComponents, AFGConveyorLiftHologram), STRUCT_OFFSET(AFGConveyorLiftHologram, mSnappedConnectionComponents), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mSnappedConnectionComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mConnectionComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGConveyorLiftHologram.h" },
		{ "ToolTip", "The two connection components for this conveyor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mConnectionComponents = { "mConnectionComponents", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(mConnectionComponents, AFGConveyorLiftHologram), STRUCT_OFFSET(AFGConveyorLiftHologram, mConnectionComponents), Z_Construct_UClass_UFGFactoryConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mConnectionComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mConnectionComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGConveyorLiftHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mArrowDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mJointMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mMidMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mBottomMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mTopTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mUpgradedConveyorLift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mSnappedConnectionComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGConveyorLiftHologram_Statics::NewProp_mConnectionComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGConveyorLiftHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGConveyorLiftHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGConveyorLiftHologram_Statics::ClassParams = {
		&AFGConveyorLiftHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGConveyorLiftHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGConveyorLiftHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGConveyorLiftHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGConveyorLiftHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGConveyorLiftHologram, 1046548462);
	template<> FACTORYGAME_API UClass* StaticClass<AFGConveyorLiftHologram>()
	{
		return AFGConveyorLiftHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGConveyorLiftHologram(Z_Construct_UClass_AFGConveyorLiftHologram, &AFGConveyorLiftHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGConveyorLiftHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGConveyorLiftHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
