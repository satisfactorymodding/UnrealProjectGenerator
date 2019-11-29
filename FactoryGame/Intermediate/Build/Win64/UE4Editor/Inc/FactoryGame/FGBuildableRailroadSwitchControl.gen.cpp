// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableRailroadSwitchControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableRailroadSwitchControl() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadSwitchControl_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableRailroadSwitchControl();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableFactory();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals = FName(TEXT("UpdateSwitchPositionVisuals"));
	void AFGBuildableRailroadSwitchControl::UpdateSwitchPositionVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals),NULL);
	}
	void AFGBuildableRailroadSwitchControl::StaticRegisterNativesAFGBuildableRailroadSwitchControl()
	{
		UClass* Class = AFGBuildableRailroadSwitchControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSwitchPosition", &AFGBuildableRailroadSwitchControl::execGetSwitchPosition },
			{ "OnRep_SwitchPosition", &AFGBuildableRailroadSwitchControl::execOnRep_SwitchPosition },
			{ "OnSwitchPositionChanged", &AFGBuildableRailroadSwitchControl::execOnSwitchPositionChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics
	{
		struct FGBuildableRailroadSwitchControl_eventGetSwitchPosition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRailroadSwitchControl_eventGetSwitchPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Switch" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "ToolTip", "Get the current switch location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadSwitchControl, nullptr, "GetSwitchPosition", sizeof(FGBuildableRailroadSwitchControl_eventGetSwitchPosition_Parms), Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadSwitchControl, nullptr, "OnRep_SwitchPosition", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics
	{
		struct FGBuildableRailroadSwitchControl_eventOnSwitchPositionChanged_Parms
		{
			int32 newPosition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::NewProp_newPosition = { "newPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBuildableRailroadSwitchControl_eventOnSwitchPositionChanged_Parms, newPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::NewProp_newPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "ToolTip", "Called when switch changes position, server only" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadSwitchControl, nullptr, "OnSwitchPositionChanged", sizeof(FGBuildableRailroadSwitchControl_eventOnSwitchPositionChanged_Parms), Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Railroad|Switch" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "ToolTip", "Let blueprint get a chance to update the visuals after the switch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadSwitchControl, nullptr, "UpdateSwitchPositionVisuals", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableRailroadSwitchControl_NoRegister()
	{
		return AFGBuildableRailroadSwitchControl::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSwitchPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mSwitchPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mControlledConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mControlledConnection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition, "GetSwitchPosition" }, // 2707282325
		{ &Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnRep_SwitchPosition, "OnRep_SwitchPosition" }, // 3078456244
		{ &Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_OnSwitchPositionChanged, "OnSwitchPositionChanged" }, // 3905052394
		{ &Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_UpdateSwitchPositionVisuals, "UpdateSwitchPositionVisuals" }, // 3787951503
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "ToolTip", "A component for controlling a switch's position." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "NoAutoJson", "TRUE" },
		{ "ToolTip", "Current switch position read from the controlled connection, polled each tick." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition = { "mSwitchPosition", "OnRep_SwitchPosition", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadSwitchControl, mSwitchPosition), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "ToolTip", "Connection we control." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection = { "mControlledConnection", nullptr, (EPropertyFlags)0x0040000001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGBuildableRailroadSwitchControl, mControlledConnection), Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadSwitchControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::ClassParams = {
		&AFGBuildableRailroadSwitchControl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableRailroadSwitchControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableRailroadSwitchControl, 608225645);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBuildableRailroadSwitchControl>()
	{
		return AFGBuildableRailroadSwitchControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadSwitchControl(Z_Construct_UClass_AFGBuildableRailroadSwitchControl, &AFGBuildableRailroadSwitchControl::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadSwitchControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadSwitchControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
