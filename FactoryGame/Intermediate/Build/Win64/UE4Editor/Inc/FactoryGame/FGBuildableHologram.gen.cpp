// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGBuildableHologram.h"
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::NewProp_inBuildable = { "inBuildable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableHologram_eventReceiveConfigureActor_Parms, inBuildable), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::NewProp_inBuildable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "For notifying the blueprint. Called after the native equivalent.\nConfigure function: Configuring the actor created from the hologram when executed.\nConfigure functions are called in the following order and can thus override each others steps. Be careful:\n               -   ConfigureActor( buildable );\n               -   ConfigureBuildEffect( buildable );\n               -   //Perform the actual spawning in the world\n               -   ConfigureComponents( buildable );\n               -   ConfigureSnappedBuilding( buildable );\n               -   //Begin play called on the buildable\n               -   ConfigureSnappedPower( buildable );\n@param inBuildable - The resulting buildable placed in the world that we are to configure before it's finished.\n@note DO NOT TOUCH COMPONENTS HERE as they'll be overwritten! Use ConfigureComponents for that" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableHologram, nullptr, "ReceiveConfigureActor", sizeof(FGBuildableHologram_eventReceiveConfigureActor_Parms), Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::NewProp_inBuildable = { "inBuildable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableHologram_eventReceiveConfigureComponents_Parms, inBuildable), Z_Construct_UClass_AFGBuildable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::NewProp_inBuildable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "For notifying the blueprint. Called after the native equivalent.\nConfigure function: Configuring the actor's components created from the hologram when executed.\nConfigure functions are called in the following order and can thus override each others steps. Be careful:\n               -   ConfigureActor( buildable );\n               -   ConfigureBuildEffect( buildable );\n               -   //Perform the actual spawning in the world\n               -   ConfigureComponents( buildable );\n               -   ConfigureSnappedBuilding( buildable );\n               -   //Begin play called on the buildable\n               -   ConfigureSnappedPower( buildable );\n@param inBuildable - The resulting buildable placed in the world that we are to configure before it's finished.\n@note This is a good place to initialize snapped connections etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableHologram, nullptr, "ReceiveConfigureComponents", sizeof(FGBuildableHologram_eventReceiveConfigureComponents_Parms), Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGHologram,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureActor, "ReceiveConfigureActor" }, // 2101905963
		{ &Z_Construct_UFunction_AFGBuildableHologram_ReceiveConfigureComponents, "ReceiveConfigureComponents" }, // 1988210008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGBuildableHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "The base class for building holograms.\nThe hologram is created from a buildables class.\nThe hologram is responsible for:\nSnapping functionality when building.\nConstructing the buildable." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "Component to check build clearance to other buildings." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox = { "mClearanceBox", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableHologram, mClearanceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGBuildableHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs = { "mLegs", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableHologram, mLegs), Z_Construct_UClass_UFGFactoryLegsComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle_MetaData[] = {
		{ "Category", "Hologram" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Hologram/FGBuildableHologram.h" },
		{ "ToolTip", "The maximum allowed angle on the floor for this hologram to be placed on (in degrees)." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle = { "mMaxPlacementFloorAngle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableHologram, mMaxPlacementFloorAngle), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mClearanceBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mLegs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableHologram_Statics::NewProp_mMaxPlacementFloorAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableHologram_Statics::ClassParams = {
		&AFGBuildableHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableHologram_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableHologram_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(AFGBuildableHologram, 2910067844);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableHologram>()
	{
		return AFGBuildableHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableHologram(Z_Construct_UClass_AFGBuildableHologram, &AFGBuildableHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
