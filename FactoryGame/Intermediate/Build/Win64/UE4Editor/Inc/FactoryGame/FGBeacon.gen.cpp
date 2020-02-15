// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGBeacon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBeacon() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBeacon_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBeacon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBeacon_PickUpBeacon();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
// End Cross Module References
	static FName NAME_AFGBeacon_PickUpBeacon = FName(TEXT("PickUpBeacon"));
	void AFGBeacon::PickUpBeacon(AFGCharacterPlayer* player)
	{
		FGBeacon_eventPickUpBeacon_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_AFGBeacon_PickUpBeacon),&Parms);
	}
	void AFGBeacon::StaticRegisterNativesAFGBeacon()
	{
	}
	struct Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGBeacon_eventPickUpBeacon_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Beacon" },
		{ "ModuleRelativePath", "Public/FGBeacon.h" },
		{ "ToolTip", "Pickup the beacon by the provided player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBeacon, nullptr, "PickUpBeacon", sizeof(FGBeacon_eventPickUpBeacon_Parms), Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBeacon_PickUpBeacon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBeacon_PickUpBeacon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBeacon_NoRegister()
	{
		return AFGBeacon::StaticClass();
	}
	struct Z_Construct_UClass_AFGBeacon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBeacon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBeacon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBeacon_PickUpBeacon, "PickUpBeacon" }, // 3973651777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBeacon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGBeacon.h" },
		{ "ModuleRelativePath", "Public/FGBeacon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBeacon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBeacon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBeacon_Statics::ClassParams = {
		&AFGBeacon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGBeacon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBeacon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBeacon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBeacon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBeacon, 3327868559);
	template<> FACTORYGAME_API UClass* StaticClass<AFGBeacon>()
	{
		return AFGBeacon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBeacon(Z_Construct_UClass_AFGBeacon, &AFGBeacon::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBeacon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBeacon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
