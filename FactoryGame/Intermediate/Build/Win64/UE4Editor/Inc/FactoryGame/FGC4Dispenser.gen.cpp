// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGC4Dispenser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGC4Dispenser() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGC4Dispenser_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGC4Dispenser();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGWeapon();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGC4Dispenser_GetChargePct();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGC4Explosive_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_AFGC4Dispenser_Server_DetonatePressed = FName(TEXT("Server_DetonatePressed"));
	void AFGC4Dispenser::Server_DetonatePressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGC4Dispenser_Server_DetonatePressed),NULL);
	}
	static FName NAME_AFGC4Dispenser_Server_SpawnC4 = FName(TEXT("Server_SpawnC4"));
	void AFGC4Dispenser::Server_SpawnC4(int32 throwForce)
	{
		FGC4Dispenser_eventServer_SpawnC4_Parms Parms;
		Parms.throwForce=throwForce;
		ProcessEvent(FindFunctionChecked(NAME_AFGC4Dispenser_Server_SpawnC4),&Parms);
	}
	void AFGC4Dispenser::StaticRegisterNativesAFGC4Dispenser()
	{
		UClass* Class = AFGC4Dispenser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChargePct", &AFGC4Dispenser::execGetChargePct },
			{ "Server_DetonatePressed", &AFGC4Dispenser::execServer_DetonatePressed },
			{ "Server_SpawnC4", &AFGC4Dispenser::execServer_SpawnC4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics
	{
		struct FGC4Dispenser_eventGetChargePct_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGC4Dispenser_eventGetChargePct_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::Function_MetaDataParams[] = {
		{ "Category", "C4" },
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "Return the current charge in percent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGC4Dispenser, "GetChargePct", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGC4Dispenser_eventGetChargePct_Parms), Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGC4Dispenser_GetChargePct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGC4Dispenser_GetChargePct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "Called by client to start fire on server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGC4Dispenser, "Server_DetonatePressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_throwForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::NewProp_throwForce = { UE4CodeGen_Private::EPropertyClass::Int, "throwForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGC4Dispenser_eventServer_SpawnC4_Parms, throwForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::NewProp_throwForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "Spawns and throws out a C4 charge" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGC4Dispenser, "Server_SpawnC4", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, sizeof(FGC4Dispenser_eventServer_SpawnC4_Parms), Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGC4Dispenser_NoRegister()
	{
		return AFGC4Dispenser::StaticClass();
	}
	struct Z_Construct_UClass_AFGC4Dispenser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDelayBetweenExplosions_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDelayBetweenExplosions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxThrowForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMaxThrowForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMaxChargeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMaxChargeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDispensedExplosives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mDispensedExplosives;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDispensedExplosives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mC4ExplosiveClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mC4ExplosiveClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGC4Dispenser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGC4Dispenser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGC4Dispenser_GetChargePct, "GetChargePct" }, // 2355723282
		{ &Z_Construct_UFunction_AFGC4Dispenser_Server_DetonatePressed, "Server_DetonatePressed" }, // 2993400618
		{ &Z_Construct_UFunction_AFGC4Dispenser_Server_SpawnC4, "Server_SpawnC4" }, // 2652105725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Dispenser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGC4Dispenser.h" },
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDelayBetweenExplosions_MetaData[] = {
		{ "Category", "C4" },
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "When we blow shit up we want a small delay in between each explosion" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDelayBetweenExplosions = { UE4CodeGen_Private::EPropertyClass::Float, "mDelayBetweenExplosions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGC4Dispenser, mDelayBetweenExplosions), METADATA_PARAMS(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDelayBetweenExplosions_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDelayBetweenExplosions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxThrowForce_MetaData[] = {
		{ "Category", "C4" },
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "If we charge the throw to the max we will throw with this force" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxThrowForce = { UE4CodeGen_Private::EPropertyClass::Int, "mMaxThrowForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGC4Dispenser, mMaxThrowForce), METADATA_PARAMS(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxThrowForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxThrowForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxChargeTime_MetaData[] = {
		{ "Category", "C4" },
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "If we charge the throw for this amount of time we will get max throw velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxChargeTime = { UE4CodeGen_Private::EPropertyClass::Float, "mMaxChargeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(AFGC4Dispenser, mMaxChargeTime), METADATA_PARAMS(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxChargeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxChargeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDispensedExplosives_MetaData[] = {
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "Keeps track of the explosives we have dispensed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDispensedExplosives = { UE4CodeGen_Private::EPropertyClass::Array, "mDispensedExplosives", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080001000000, 1, nullptr, STRUCT_OFFSET(AFGC4Dispenser, mDispensedExplosives), METADATA_PARAMS(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDispensedExplosives_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDispensedExplosives_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDispensedExplosives_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mDispensedExplosives", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGC4Explosive_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mC4ExplosiveClass_MetaData[] = {
		{ "Category", "C4" },
		{ "ModuleRelativePath", "Equipment/FGC4Dispenser.h" },
		{ "ToolTip", "What types of bombs we should spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mC4ExplosiveClass = { UE4CodeGen_Private::EPropertyClass::Class, "mC4ExplosiveClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(AFGC4Dispenser, mC4ExplosiveClass), Z_Construct_UClass_AFGC4Explosive_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mC4ExplosiveClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mC4ExplosiveClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGC4Dispenser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDelayBetweenExplosions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxThrowForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mMaxChargeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDispensedExplosives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mDispensedExplosives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGC4Dispenser_Statics::NewProp_mC4ExplosiveClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGC4Dispenser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGC4Dispenser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGC4Dispenser_Statics::ClassParams = {
		&AFGC4Dispenser::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGC4Dispenser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGC4Dispenser_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGC4Dispenser_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGC4Dispenser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGC4Dispenser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGC4Dispenser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGC4Dispenser, 454378363);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGC4Dispenser(Z_Construct_UClass_AFGC4Dispenser, &AFGC4Dispenser::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGC4Dispenser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGC4Dispenser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
