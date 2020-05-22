// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/FGCreatureSeat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCreatureSeat() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureSeat_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreatureSeat();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGDriveablePawn();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreature_NoRegister();
// End Cross Module References
	void AFGCreatureSeat::StaticRegisterNativesAFGCreatureSeat()
	{
		UClass* Class = AFGCreatureSeat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMountedCreature", &AFGCreatureSeat::execGetMountedCreature },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics
	{
		struct FGCreatureSeat_eventGetMountedCreature_Parms
		{
			AFGCreature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCreatureSeat_eventGetMountedCreature_Parms, ReturnValue), Z_Construct_UClass_AFGCreature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::Function_MetaDataParams[] = {
		{ "Category", "Creature" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSeat.h" },
		{ "ToolTip", "Getter for creature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGCreatureSeat, nullptr, "GetMountedCreature", sizeof(FGCreatureSeat_eventGetMountedCreature_Parms), Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGCreatureSeat_NoRegister()
	{
		return AFGCreatureSeat::StaticClass();
	}
	struct Z_Construct_UClass_AFGCreatureSeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMountedCreature_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMountedCreature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGCreatureSeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGDriveablePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGCreatureSeat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGCreatureSeat_GetMountedCreature, "GetMountedCreature" }, // 2246607473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSeat_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Creature/FGCreatureSeat.h" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSeat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGCreatureSeat_Statics::NewProp_mMountedCreature_MetaData[] = {
		{ "Category", "FGCreatureSeat" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/Creature/FGCreatureSeat.h" },
		{ "ToolTip", "The creature this seat is on" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGCreatureSeat_Statics::NewProp_mMountedCreature = { "mMountedCreature", nullptr, (EPropertyFlags)0x0011000001000024, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGCreatureSeat, mMountedCreature), Z_Construct_UClass_AFGCreature_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSeat_Statics::NewProp_mMountedCreature_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSeat_Statics::NewProp_mMountedCreature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGCreatureSeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGCreatureSeat_Statics::NewProp_mMountedCreature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGCreatureSeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGCreatureSeat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGCreatureSeat_Statics::ClassParams = {
		&AFGCreatureSeat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGCreatureSeat_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSeat_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGCreatureSeat_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGCreatureSeat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGCreatureSeat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGCreatureSeat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGCreatureSeat, 3661777444);
	template<> FACTORYGAME_API UClass* StaticClass<AFGCreatureSeat>()
	{
		return AFGCreatureSeat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGCreatureSeat(Z_Construct_UClass_AFGCreatureSeat, &AFGCreatureSeat::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGCreatureSeat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGCreatureSeat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
