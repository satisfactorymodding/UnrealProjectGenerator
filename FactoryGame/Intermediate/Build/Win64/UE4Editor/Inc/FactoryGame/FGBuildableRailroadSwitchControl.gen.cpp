// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister();
// End Cross Module References
	void AFGBuildableRailroadSwitchControl::StaticRegisterNativesAFGBuildableRailroadSwitchControl()
	{
		UClass* Class = AFGBuildableRailroadSwitchControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSwitchPosition", &AFGBuildableRailroadSwitchControl::execGetSwitchPosition },
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGBuildableRailroadSwitchControl_eventGetSwitchPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableRailroadSwitchControl, "GetSwitchPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGBuildableRailroadSwitchControl_eventGetSwitchPosition_Parms), Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_AFGBuildableRailroadSwitchControl_GetSwitchPosition, "GetSwitchPosition" }, // 2195636280
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition = { UE4CodeGen_Private::EPropertyClass::Int, "mSwitchPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadSwitchControl, mSwitchPosition), METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableRailroadSwitchControl.h" },
		{ "ToolTip", "Connection we control." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection = { UE4CodeGen_Private::EPropertyClass::Object, "mControlledConnection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001080008, 1, nullptr, STRUCT_OFFSET(AFGBuildableRailroadSwitchControl, mControlledConnection), Z_Construct_UClass_UFGRailroadTrackConnectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mSwitchPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::NewProp_mControlledConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableRailroadSwitchControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::ClassParams = {
		&AFGBuildableRailroadSwitchControl::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableRailroadSwitchControl_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGBuildableRailroadSwitchControl, 2052678090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableRailroadSwitchControl(Z_Construct_UClass_AFGBuildableRailroadSwitchControl, &AFGBuildableRailroadSwitchControl::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableRailroadSwitchControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableRailroadSwitchControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
