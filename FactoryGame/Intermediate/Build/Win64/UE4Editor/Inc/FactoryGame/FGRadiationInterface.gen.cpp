// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRadiationInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRadiationInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRadiationInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRadiationInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void IFGRadiationInterface::ReceiveRadiation(float amount, float duration, FVector direction, TSubclassOf<UFGDamageType>  damageType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveRadiation instead.");
	}
	void UFGRadiationInterface::StaticRegisterNativesUFGRadiationInterface()
	{
		UClass* Class = UFGRadiationInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveRadiation", &IFGRadiationInterface::execReceiveRadiation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_damageType = { "damageType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadiationInterface_eventReceiveRadiation_Parms, damageType), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadiationInterface_eventReceiveRadiation_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadiationInterface_eventReceiveRadiation_Parms, duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRadiationInterface_eventReceiveRadiation_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radioactivity" },
		{ "ModuleRelativePath", "FGRadiationInterface.h" },
		{ "ToolTip", "@param amount                How much radiation we're exposed to. [units/s]\n@param duration              For how long we've been exposed. [s]\n@param damageType    The type of damage you take from this radiation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRadiationInterface, nullptr, "ReceiveRadiation", sizeof(FGRadiationInterface_eventReceiveRadiation_Parms), Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRadiationInterface_NoRegister()
	{
		return UFGRadiationInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGRadiationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRadiationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRadiationInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRadiationInterface_ReceiveRadiation, "ReceiveRadiation" }, // 463502682
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRadiationInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGRadiationInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRadiationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGRadiationInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRadiationInterface_Statics::ClassParams = {
		&UFGRadiationInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGRadiationInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRadiationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRadiationInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRadiationInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRadiationInterface, 1588920146);
	template<> FACTORYGAME_API UClass* StaticClass<UFGRadiationInterface>()
	{
		return UFGRadiationInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRadiationInterface(Z_Construct_UClass_UFGRadiationInterface, &UFGRadiationInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRadiationInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRadiationInterface);
	static FName NAME_UFGRadiationInterface_ReceiveRadiation = FName(TEXT("ReceiveRadiation"));
	void IFGRadiationInterface::Execute_ReceiveRadiation(UObject* O, float amount, float duration, FVector direction, TSubclassOf<UFGDamageType>  damageType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGRadiationInterface::StaticClass()));
		FGRadiationInterface_eventReceiveRadiation_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGRadiationInterface_ReceiveRadiation);
		if (Func)
		{
			Parms.amount=amount;
			Parms.duration=duration;
			Parms.direction=direction;
			Parms.damageType=damageType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGRadiationInterface*)(O->GetNativeInterfaceAddress(UFGRadiationInterface::StaticClass())))
		{
			I->ReceiveRadiation_Implementation(amount,duration,direction,damageType);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
