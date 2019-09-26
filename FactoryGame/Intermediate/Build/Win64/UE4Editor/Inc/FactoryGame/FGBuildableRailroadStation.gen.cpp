// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableRailroadStation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRailroadStation() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadStation();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableTrainPlatform();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGLocomotive_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableTrainPlatform_NoRegister();
// End Cross Module References
	static FName NAME_AFGBuildableRailroadStation_OnNameChanged = FName(TEXT("OnNameChanged"));
	void AFGBuildableRailroadStation::OnNameChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableRailroadStation_OnNameChanged),NULL);
	}
	void AFGBuildableRailroadStation::StaticRegisterNativesAFGBuildableRailroadStation()
	{
		UClass* Class = AFGBuildableRailroadStation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStationIdentifier", &AFGBuildableRailroadStation::execGetStationIdentifier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics
	{
		struct FGBuildableRailroadStation_eventGetStationIdentifier_Parms
		{
			AFGTrainStationIdentifier* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventGetStationIdentifier_Parms, ReturnValue), Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Get the station identifier for this station. Shared between server, client and used in time tables." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "GetStationIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableRailroadStation_eventGetStationIdentifier_Parms), Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Called when the name of the station has changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "OnNameChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableRailroadStation_NoRegister()
	{
		return AFGBuildableRailroadStation::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRailroadStation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDockingLocomotive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDockingLocomotive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDockedPlatformList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDockedPlatformList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDockedPlatformList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStationIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mStationIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableTrainPlatform,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRailroadStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_GetStationIdentifier, "GetStationIdentifier" }, // 1484249346
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged, "OnNameChanged" }, // 2854491456
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Base class for rail road stations. Not to be confused railroad docking stations." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Reference to the docked locomotive." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive = { UE4CodeGen_Private::EPropertyClass::Object, "mDockingLocomotive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mDockingLocomotive), Z_Construct_UClass_AFGLocomotive_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "When docked, this station will fill this array with every potential platform in its tail. 1 for each train segment" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList = { UE4CodeGen_Private::EPropertyClass::Array, "mDockedPlatformList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mDockedPlatformList), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mDockedPlatformList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGBuildableTrainPlatform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Light weight representation about this station, the railroad subsystem is responsible for this." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier = { UE4CodeGen_Private::EPropertyClass::Object, "mStationIdentifier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mStationIdentifier), Z_Construct_UClass_AFGTrainStationIdentifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadStation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockingLocomotive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mDockedPlatformList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mStationIdentifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadStation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadStation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::ClassParams = {
		&AFGBuildableRailroadStation::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableRailroadStation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRailroadStation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRailroadStation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRailroadStation, 1330964671);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadStation(Z_Construct_UClass_AFGBuildableRailroadStation, &AFGBuildableRailroadStation::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadStation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadStation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
