// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGChainsawableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGChainsawableInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGChainsawableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGChainsawableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable();
// End Cross Module References
	UStaticMeshComponent* IFGChainsawableInterface::GetMeshComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMeshComponent instead.");
		FGChainsawableInterface_eventGetMeshComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IFGChainsawableInterface::IsChainsawable()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsChainsawable instead.");
		FGChainsawableInterface_eventIsChainsawable_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFGChainsawableInterface::StaticRegisterNativesUFGChainsawableInterface()
	{
		UClass* Class = UFGChainsawableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeshComponent", &IFGChainsawableInterface::execGetMeshComponent },
			{ "IsChainsawable", &IFGChainsawableInterface::execIsChainsawable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGChainsawableInterface_eventGetMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/FGChainsawableInterface.h" },
		{ "ToolTip", "@returns true if this thing is chainsawable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGChainsawableInterface, nullptr, "GetMeshComponent", sizeof(FGChainsawableInterface_eventGetMeshComponent_Parms), Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGChainsawableInterface_eventIsChainsawable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGChainsawableInterface_eventIsChainsawable_Parms), &Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chainsaw" },
		{ "ModuleRelativePath", "Public/FGChainsawableInterface.h" },
		{ "ToolTip", "@returns true if this thing is chainsawable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGChainsawableInterface, nullptr, "IsChainsawable", sizeof(FGChainsawableInterface_eventIsChainsawable_Parms), Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGChainsawableInterface_NoRegister()
	{
		return UFGChainsawableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGChainsawableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGChainsawableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGChainsawableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGChainsawableInterface_GetMeshComponent, "GetMeshComponent" }, // 128245421
		{ &Z_Construct_UFunction_UFGChainsawableInterface_IsChainsawable, "IsChainsawable" }, // 2518094307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGChainsawableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGChainsawableInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGChainsawableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGChainsawableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGChainsawableInterface_Statics::ClassParams = {
		&UFGChainsawableInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGChainsawableInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGChainsawableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGChainsawableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGChainsawableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGChainsawableInterface, 3390016956);
	template<> FACTORYGAME_API UClass* StaticClass<UFGChainsawableInterface>()
	{
		return UFGChainsawableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGChainsawableInterface(Z_Construct_UClass_UFGChainsawableInterface, &UFGChainsawableInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGChainsawableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGChainsawableInterface);
	static FName NAME_UFGChainsawableInterface_GetMeshComponent = FName(TEXT("GetMeshComponent"));
	UStaticMeshComponent* IFGChainsawableInterface::Execute_GetMeshComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGChainsawableInterface::StaticClass()));
		FGChainsawableInterface_eventGetMeshComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGChainsawableInterface_GetMeshComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGChainsawableInterface*)(O->GetNativeInterfaceAddress(UFGChainsawableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMeshComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGChainsawableInterface_IsChainsawable = FName(TEXT("IsChainsawable"));
	bool IFGChainsawableInterface::Execute_IsChainsawable(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGChainsawableInterface::StaticClass()));
		FGChainsawableInterface_eventIsChainsawable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGChainsawableInterface_IsChainsawable);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGChainsawableInterface*)(O->GetNativeInterfaceAddress(UFGChainsawableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsChainsawable_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
