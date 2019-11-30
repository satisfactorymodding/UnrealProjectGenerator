// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGWheeledVehicleMovementComponent4W.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWheeledVehicleMovementComponent4W() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent4W();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue();
// End Cross Module References
	void UFGWheeledVehicleMovementComponent4W::StaticRegisterNativesUFGWheeledVehicleMovementComponent4W()
	{
		UClass* Class = UFGWheeledVehicleMovementComponent4W::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLargestLateralSlip", &UFGWheeledVehicleMovementComponent4W::execGetLargestLateralSlip },
			{ "GetLargestLongitudinalSlip", &UFGWheeledVehicleMovementComponent4W::execGetLargestLongitudinalSlip },
			{ "GetLargestTireLoadValue", &UFGWheeledVehicleMovementComponent4W::execGetLargestTireLoadValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics
	{
		struct FGWheeledVehicleMovementComponent4W_eventGetLargestLateralSlip_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWheeledVehicleMovementComponent4W_eventGetLargestLateralSlip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "returns the current largest lat slip of the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W, "GetLargestLateralSlip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGWheeledVehicleMovementComponent4W_eventGetLargestLateralSlip_Parms), Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics
	{
		struct FGWheeledVehicleMovementComponent4W_eventGetLargestLongitudinalSlip_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWheeledVehicleMovementComponent4W_eventGetLargestLongitudinalSlip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "returns the current largest long slip of the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W, "GetLargestLongitudinalSlip", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGWheeledVehicleMovementComponent4W_eventGetLargestLongitudinalSlip_Parms), Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics
	{
		struct FGWheeledVehicleMovementComponent4W_eventGetLargestTireLoadValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGWheeledVehicleMovementComponent4W_eventGetLargestTireLoadValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "returns the current largest tire load of the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W, "GetLargestTireLoadValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGWheeledVehicleMovementComponent4W_eventGetLargestTireLoadValue_Parms), Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_NoRegister()
	{
		return UFGWheeledVehicleMovementComponent4W::StaticClass();
	}
	struct Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDownShiftLatency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDownShiftLatency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSlopeShiftRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSlopeShiftRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDSOLMaxSlopeAngleLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDSOLMaxSlopeAngleLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseDSOLGearbox_MetaData[];
#endif
		static void NewProp_mUseDSOLGearbox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseDSOLGearbox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWheeledVehicleMovementComponent4W,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLateralSlip, "GetLargestLateralSlip" }, // 3733087498
		{ &Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestLongitudinalSlip, "GetLargestLongitudinalSlip" }, // 289080312
		{ &Z_Construct_UFunction_UFGWheeledVehicleMovementComponent4W_GetLargestTireLoadValue, "GetLargestTireLoadValue" }, // 3358036206
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "PlanarMovement Components|Movement|Planar Activation Components|Activation PlanarMovement Components|Movement|Planar Activation Components|Activation" },
		{ "IncludePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDownShiftLatency_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDownShiftLatency = { UE4CodeGen_Private::EPropertyClass::Float, "mDownShiftLatency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent4W, mDownShiftLatency), METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDownShiftLatency_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDownShiftLatency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mSlopeShiftRatio_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Amount of ADDITIONAL required gear ratio in order to shift up or down, given a slope. The result is that on steep slopes, the vehicle will shift up at a higher ratio and shift down at a higher ratio." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mSlopeShiftRatio = { UE4CodeGen_Private::EPropertyClass::Float, "mSlopeShiftRatio", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent4W, mSlopeShiftRatio), METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mSlopeShiftRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mSlopeShiftRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDSOLMaxSlopeAngleLimit_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "ClampMin", "0.001" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Max slope Angle Limit (in degrees) in order to use all of SlopeShiftRatio" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDSOLMaxSlopeAngleLimit = { UE4CodeGen_Private::EPropertyClass::Float, "mDSOLMaxSlopeAngleLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFGWheeledVehicleMovementComponent4W, mDSOLMaxSlopeAngleLimit), METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDSOLMaxSlopeAngleLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDSOLMaxSlopeAngleLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mUseDSOLGearbox_MetaData[] = {
		{ "Category", "MechanicalSetup" },
		{ "DisplayName", "Use Jace's special gearbox" },
		{ "ModuleRelativePath", "FGWheeledVehicleMovementComponent4W.h" },
		{ "ToolTip", "Use Jace's super awesome custom gearbox or not" },
	};
#endif
	void Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mUseDSOLGearbox_SetBit(void* Obj)
	{
		((UFGWheeledVehicleMovementComponent4W*)Obj)->mUseDSOLGearbox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mUseDSOLGearbox = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseDSOLGearbox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGWheeledVehicleMovementComponent4W), &Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mUseDSOLGearbox_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mUseDSOLGearbox_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mUseDSOLGearbox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDownShiftLatency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mSlopeShiftRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mDSOLMaxSlopeAngleLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::NewProp_mUseDSOLGearbox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWheeledVehicleMovementComponent4W>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::ClassParams = {
		&UFGWheeledVehicleMovementComponent4W::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWheeledVehicleMovementComponent4W, 3337247975);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWheeledVehicleMovementComponent4W(Z_Construct_UClass_UFGWheeledVehicleMovementComponent4W, &UFGWheeledVehicleMovementComponent4W::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWheeledVehicleMovementComponent4W"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWheeledVehicleMovementComponent4W);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
