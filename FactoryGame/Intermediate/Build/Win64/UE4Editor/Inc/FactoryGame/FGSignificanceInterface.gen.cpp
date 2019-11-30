// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSignificanceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSignificanceInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSignificanceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance();
// End Cross Module References
	void IFGSignificanceInterface::GainedSignificance()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GainedSignificance instead.");
	}
	void IFGSignificanceInterface::LostSignificance()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LostSignificance instead.");
	}
	void UFGSignificanceInterface::StaticRegisterNativesUFGSignificanceInterface()
	{
		UClass* Class = UFGSignificanceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GainedSignificance", &IFGSignificanceInterface::execGainedSignificance },
			{ "GetSignificanceBias", &IFGSignificanceInterface::execGetSignificanceBias },
			{ "GetSignificanceRange", &IFGSignificanceInterface::execGetSignificanceRange },
			{ "LostSignificance", &IFGSignificanceInterface::execLostSignificance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "FGSignificanceInterface.h" },
		{ "ToolTip", "Call when actor gained significance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSignificanceInterface, "GainedSignificance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics
	{
		struct FGSignificanceInterface_eventGetSignificanceBias_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSignificanceInterface_eventGetSignificanceBias_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGSignificanceInterface.h" },
		{ "ToolTip", "Defaults to 0.0f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSignificanceInterface, "GetSignificanceBias", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(FGSignificanceInterface_eventGetSignificanceBias_Parms), Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics
	{
		struct FGSignificanceInterface_eventGetSignificanceRange_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGSignificanceInterface_eventGetSignificanceRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGSignificanceInterface.h" },
		{ "ToolTip", "Defaults to 10000.0ff" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSignificanceInterface, "GetSignificanceRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(FGSignificanceInterface_eventGetSignificanceRange_Parms), Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Significance" },
		{ "ModuleRelativePath", "FGSignificanceInterface.h" },
		{ "ToolTip", "Call when actor gained significance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSignificanceInterface, "LostSignificance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSignificanceInterface_NoRegister()
	{
		return UFGSignificanceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGSignificanceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSignificanceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSignificanceInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSignificanceInterface_GainedSignificance, "GainedSignificance" }, // 1274076365
		{ &Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceBias, "GetSignificanceBias" }, // 684705353
		{ &Z_Construct_UFunction_UFGSignificanceInterface_GetSignificanceRange, "GetSignificanceRange" }, // 2872826756
		{ &Z_Construct_UFunction_UFGSignificanceInterface_LostSignificance, "LostSignificance" }, // 4199096359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSignificanceInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGSignificanceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSignificanceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGSignificanceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSignificanceInterface_Statics::ClassParams = {
		&UFGSignificanceInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGSignificanceInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSignificanceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSignificanceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSignificanceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSignificanceInterface, 3574100319);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSignificanceInterface(Z_Construct_UClass_UFGSignificanceInterface, &UFGSignificanceInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSignificanceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSignificanceInterface);
	static FName NAME_UFGSignificanceInterface_GainedSignificance = FName(TEXT("GainedSignificance"));
	void IFGSignificanceInterface::Execute_GainedSignificance(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSignificanceInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGSignificanceInterface_GainedSignificance);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGSignificanceInterface*)(O->GetNativeInterfaceAddress(UFGSignificanceInterface::StaticClass())))
		{
			I->GainedSignificance_Implementation();
		}
	}
	static FName NAME_UFGSignificanceInterface_LostSignificance = FName(TEXT("LostSignificance"));
	void IFGSignificanceInterface::Execute_LostSignificance(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSignificanceInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFGSignificanceInterface_LostSignificance);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFGSignificanceInterface*)(O->GetNativeInterfaceAddress(UFGSignificanceInterface::StaticClass())))
		{
			I->LostSignificance_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
