// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGPassengerSeat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPassengerSeat() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPassengerSeat_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGPassengerSeat();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDriveablePawn();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGVehicle_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera();
// End Cross Module References
	static FName NAME_AFGPassengerSeat_UpdateCamera = FName(TEXT("UpdateCamera"));
	void AFGPassengerSeat::UpdateCamera()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGPassengerSeat_UpdateCamera),NULL);
	}
	void AFGPassengerSeat::StaticRegisterNativesAFGPassengerSeat()
	{
		UClass* Class = AFGPassengerSeat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOuterVehicle", &AFGPassengerSeat::execGetOuterVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics
	{
		struct FGPassengerSeat_eventGetOuterVehicle_Parms
		{
			AFGVehicle* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPassengerSeat_eventGetOuterVehicle_Parms, ReturnValue), Z_Construct_UClass_AFGVehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/FGPassengerSeat.h" },
		{ "ToolTip", "Gets the actual vehicle this passenger seat belongs to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPassengerSeat, "GetOuterVehicle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGPassengerSeat_eventGetOuterVehicle_Parms), Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
		{ "ModuleRelativePath", "Public/FGPassengerSeat.h" },
		{ "ToolTip", "Called every frame when we have a local driver in the vehicle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGPassengerSeat, "UpdateCamera", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGPassengerSeat_NoRegister()
	{
		return AFGPassengerSeat::StaticClass();
	}
	struct Z_Construct_UClass_AFGPassengerSeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOuterVehicle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mOuterVehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGPassengerSeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGDriveablePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGPassengerSeat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGPassengerSeat_GetOuterVehicle, "GetOuterVehicle" }, // 76587816
		{ &Z_Construct_UFunction_AFGPassengerSeat_UpdateCamera, "UpdateCamera" }, // 3761382646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPassengerSeat_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FGPassengerSeat.h" },
		{ "ModuleRelativePath", "Public/FGPassengerSeat.h" },
		{ "ToolTip", "Passenger seat used in FGVehicle" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGPassengerSeat_Statics::NewProp_mOuterVehicle_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGPassengerSeat.h" },
		{ "ToolTip", "Instance of the vehicle this passenger seat belongs to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGPassengerSeat_Statics::NewProp_mOuterVehicle = { UE4CodeGen_Private::EPropertyClass::Object, "mOuterVehicle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000020, 1, nullptr, STRUCT_OFFSET(AFGPassengerSeat, mOuterVehicle), Z_Construct_UClass_AFGVehicle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGPassengerSeat_Statics::NewProp_mOuterVehicle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGPassengerSeat_Statics::NewProp_mOuterVehicle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGPassengerSeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGPassengerSeat_Statics::NewProp_mOuterVehicle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGPassengerSeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGPassengerSeat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGPassengerSeat_Statics::ClassParams = {
		&AFGPassengerSeat::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGPassengerSeat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGPassengerSeat_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGPassengerSeat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGPassengerSeat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGPassengerSeat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGPassengerSeat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGPassengerSeat, 1724764857);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGPassengerSeat(Z_Construct_UClass_AFGPassengerSeat, &AFGPassengerSeat::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGPassengerSeat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGPassengerSeat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
