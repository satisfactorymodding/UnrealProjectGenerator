// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGPowerConnectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGPowerConnectionComponent() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerConnectionComponent();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCircuitConnectionComponent();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerCircuit_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGPowerInfoComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo();
// End Cross Module References
	void UFGPowerConnectionComponent::StaticRegisterNativesUFGPowerConnectionComponent()
	{
		UClass* Class = UFGPowerConnectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPowerCircuit", &UFGPowerConnectionComponent::execGetPowerCircuit },
			{ "GetPowerInfo", &UFGPowerConnectionComponent::execGetPowerInfo },
			{ "SetPowerInfo", &UFGPowerConnectionComponent::execSetPowerInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics
	{
		struct FGPowerConnectionComponent_eventGetPowerCircuit_Parms
		{
			UFGPowerCircuit* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGPowerConnectionComponent_eventGetPowerCircuit_Parms, ReturnValue), Z_Construct_UClass_UFGPowerCircuit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerConnection" },
		{ "ModuleRelativePath", "FGPowerConnectionComponent.h" },
		{ "ToolTip", "@return The circuit this is connected to; nullptr if not connected.\n@note This can be changed/removed at any time so do not save copies to it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerConnectionComponent, "GetPowerCircuit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerConnectionComponent_eventGetPowerCircuit_Parms), Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics
	{
		struct FGPowerConnectionComponent_eventGetPowerInfo_Parms
		{
			UFGPowerInfoComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGPowerConnectionComponent_eventGetPowerInfo_Parms, ReturnValue), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerConnection" },
		{ "ModuleRelativePath", "FGPowerConnectionComponent.h" },
		{ "ToolTip", "Get the power info from which to get the consumption/production." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerConnectionComponent, "GetPowerInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGPowerConnectionComponent_eventGetPowerInfo_Parms), Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics
	{
		struct FGPowerConnectionComponent_eventSetPowerInfo_Parms
		{
			UFGPowerInfoComponent* powerInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_powerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::NewProp_powerInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::NewProp_powerInfo = { UE4CodeGen_Private::EPropertyClass::Object, "powerInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGPowerConnectionComponent_eventSetPowerInfo_Parms, powerInfo), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::NewProp_powerInfo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::NewProp_powerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::NewProp_powerInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PowerConnection" },
		{ "ModuleRelativePath", "FGPowerConnectionComponent.h" },
		{ "ToolTip", "Set the power info for this connection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGPowerConnectionComponent, "SetPowerInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGPowerConnectionComponent_eventSetPowerInfo_Parms), Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGPowerConnectionComponent_NoRegister()
	{
		return UFGPowerConnectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFGPowerConnectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPowerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPowerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGPowerConnectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGCircuitConnectionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGPowerConnectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerCircuit, "GetPowerCircuit" }, // 3233766179
		{ &Z_Construct_UFunction_UFGPowerConnectionComponent_GetPowerInfo, "GetPowerInfo" }, // 3995271302
		{ &Z_Construct_UFunction_UFGPowerConnectionComponent_SetPowerInfo, "SetPowerInfo" }, // 3626236488
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerConnectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "FGPowerConnectionComponent.h" },
		{ "ModuleRelativePath", "FGPowerConnectionComponent.h" },
		{ "ToolTip", "Special type of circuit connection that provides a connection to the power grid." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGPowerConnectionComponent_Statics::NewProp_mPowerInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGPowerConnectionComponent.h" },
		{ "ToolTip", "The power info for this connection.\nShould be unique for each connection or a race condition can occur for setting the circuit ID on the power info." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGPowerConnectionComponent_Statics::NewProp_mPowerInfo = { UE4CodeGen_Private::EPropertyClass::Object, "mPowerInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080008, 1, nullptr, STRUCT_OFFSET(UFGPowerConnectionComponent, mPowerInfo), Z_Construct_UClass_UFGPowerInfoComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGPowerConnectionComponent_Statics::NewProp_mPowerInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGPowerConnectionComponent_Statics::NewProp_mPowerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGPowerConnectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGPowerConnectionComponent_Statics::NewProp_mPowerInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGPowerConnectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGPowerConnectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGPowerConnectionComponent_Statics::ClassParams = {
		&UFGPowerConnectionComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGPowerConnectionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGPowerConnectionComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGPowerConnectionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGPowerConnectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGPowerConnectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGPowerConnectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGPowerConnectionComponent, 384524329);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGPowerConnectionComponent(Z_Construct_UClass_UFGPowerConnectionComponent, &UFGPowerConnectionComponent::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGPowerConnectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGPowerConnectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
