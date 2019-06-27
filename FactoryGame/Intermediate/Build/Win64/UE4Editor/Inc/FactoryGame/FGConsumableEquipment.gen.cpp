// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Equipment/FGConsumableEquipment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGConsumableEquipment() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConsumableEquipment_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGConsumableEquipment();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConsumableDescriptor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire();
// End Cross Module References
	static FName NAME_AFGConsumableEquipment_PlayConsumeEffects = FName(TEXT("PlayConsumeEffects"));
	void AFGConsumableEquipment::PlayConsumeEffects(UFGConsumableDescriptor* consumable)
	{
		FGConsumableEquipment_eventPlayConsumeEffects_Parms Parms;
		Parms.consumable=consumable;
		ProcessEvent(FindFunctionChecked(NAME_AFGConsumableEquipment_PlayConsumeEffects),&Parms);
	}
	static FName NAME_AFGConsumableEquipment_Server_PrimaryFire = FName(TEXT("Server_PrimaryFire"));
	void AFGConsumableEquipment::Server_PrimaryFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGConsumableEquipment_Server_PrimaryFire),NULL);
	}
	void AFGConsumableEquipment::StaticRegisterNativesAFGConsumableEquipment()
	{
		UClass* Class = AFGConsumableEquipment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConsumeable", &AFGConsumableEquipment::execGetConsumeable },
			{ "PlayConsumeEffects", &AFGConsumableEquipment::execPlayConsumeEffects },
			{ "Server_PrimaryFire", &AFGConsumableEquipment::execServer_PrimaryFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics
	{
		struct FGConsumableEquipment_eventGetConsumeable_Parms
		{
			TSubclassOf<UFGConsumableDescriptor>  out_consumeable;
			int32 out_numConsumeable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_numConsumeable;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_consumeable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::NewProp_out_numConsumeable = { UE4CodeGen_Private::EPropertyClass::Int, "out_numConsumeable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FGConsumableEquipment_eventGetConsumeable_Parms, out_numConsumeable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::NewProp_out_consumeable = { UE4CodeGen_Private::EPropertyClass::Class, "out_consumeable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGConsumableEquipment_eventGetConsumeable_Parms, out_consumeable), Z_Construct_UClass_UFGConsumableDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::NewProp_out_numConsumeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::NewProp_out_consumeable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Equipment/FGConsumableEquipment.h" },
		{ "ToolTip", "Get the consumeable currently in hands" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGConsumableEquipment, "GetConsumeable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54420401, sizeof(FGConsumableEquipment_eventGetConsumeable_Parms), Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_consumable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::NewProp_consumable = { UE4CodeGen_Private::EPropertyClass::Object, "consumable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGConsumableEquipment_eventPlayConsumeEffects_Parms, consumable), Z_Construct_UClass_UFGConsumableDescriptor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::NewProp_consumable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Consumeable" },
		{ "ModuleRelativePath", "Equipment/FGConsumableEquipment.h" },
		{ "ToolTip", "Plays effects when consuming stuff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGConsumableEquipment, "PlayConsumeEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGConsumableEquipment_eventPlayConsumeEffects_Parms), Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Equipment/FGConsumableEquipment.h" },
		{ "ToolTip", "Only server implementation of primary fire" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGConsumableEquipment, "Server_PrimaryFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGConsumableEquipment_NoRegister()
	{
		return AFGConsumableEquipment::StaticClass();
	}
	struct Z_Construct_UClass_AFGConsumableEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGConsumableEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGConsumableEquipment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGConsumableEquipment_GetConsumeable, "GetConsumeable" }, // 4058287089
		{ &Z_Construct_UFunction_AFGConsumableEquipment_PlayConsumeEffects, "PlayConsumeEffects" }, // 899784107
		{ &Z_Construct_UFunction_AFGConsumableEquipment_Server_PrimaryFire, "Server_PrimaryFire" }, // 764286891
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGConsumableEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGConsumableEquipment.h" },
		{ "ModuleRelativePath", "Equipment/FGConsumableEquipment.h" },
		{ "ToolTip", "Used to hold consumeables, so we can eat berries, and consume medpacks a.s.o" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGConsumableEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGConsumableEquipment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGConsumableEquipment_Statics::ClassParams = {
		&AFGConsumableEquipment::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGConsumableEquipment_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGConsumableEquipment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGConsumableEquipment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGConsumableEquipment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGConsumableEquipment, 993767612);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGConsumableEquipment(Z_Construct_UClass_AFGConsumableEquipment, &AFGConsumableEquipment::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGConsumableEquipment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGConsumableEquipment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
