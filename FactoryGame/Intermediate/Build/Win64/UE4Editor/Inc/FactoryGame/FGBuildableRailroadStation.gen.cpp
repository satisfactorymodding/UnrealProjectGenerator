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
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_GetName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_SetName();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FRailroadTrackPosition();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadInterface_NoRegister();
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
			{ "GetName", &AFGBuildableRailroadStation::execGetName },
			{ "OnRep_Name", &AFGBuildableRailroadStation::execOnRep_Name },
			{ "SetName", &AFGBuildableRailroadStation::execSetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics
	{
		struct FGBuildableRailroadStation_eventGetName_Parms
		{
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventGetName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Get the name of this station." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "GetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableRailroadStation_eventGetName_Parms), Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_GetName_Statics::FuncParams);
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
		{ "Category", "Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Called when the name of the station has changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "OnNameChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "OnRep_Name", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics
	{
		struct FGBuildableRailroadStation_eventSetName_Parms
		{
			FText name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Text, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadStation_eventSetName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Station" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Set the name of this station." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadStation, "SetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGBuildableRailroadStation_eventSetName_Parms), Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadStation_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadStation_SetName_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTrackPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mTrackPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadStation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRailroadStation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_GetName, "GetName" }, // 3122468505
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_OnNameChanged, "OnNameChanged" }, // 2942628452
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_OnRep_Name, "OnRep_Name" }, // 3853927956
		{ &Z_Construct_UFunction_AFGBuildableRailroadStation_SetName, "SetName" }, // 3673670802
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "ToolTip", "Base class for rail road stations. Not to be confused railroad docking stations." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mName_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "The user set name for the train station." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mName = { UE4CodeGen_Private::EPropertyClass::Text, "mName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000101000020, 1, "OnRep_Name", STRUCT_OFFSET(AFGBuildableRailroadStation, mName), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadStation.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Where on the track is this station located." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "mTrackPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000000, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadStation, mTrackPosition), Z_Construct_UScriptStruct_FRailroadTrackPosition, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadStation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadStation_Statics::NewProp_mTrackPosition,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGBuildableRailroadStation_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGRailroadInterface_NoRegister, (int32)VTABLE_OFFSET(AFGBuildableRailroadStation, IFGRailroadInterface), false },
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
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AFGBuildableRailroadStation, 2372542360);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadStation(Z_Construct_UClass_AFGBuildableRailroadStation, &AFGBuildableRailroadStation::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadStation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadStation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
