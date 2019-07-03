// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Resources/FGResourceDeposit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceDeposit() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceDeposit_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceDeposit();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGResourceNode();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FResourceDepositPackage();
// End Cross Module References
	static FName NAME_AFGResourceDeposit_PlayDepletedEffect = FName(TEXT("PlayDepletedEffect"));
	void AFGResourceDeposit::PlayDepletedEffect(TSubclassOf<UFGResourceDescriptor>  descriptor)
	{
		FGResourceDeposit_eventPlayDepletedEffect_Parms Parms;
		Parms.descriptor=descriptor;
		ProcessEvent(FindFunctionChecked(NAME_AFGResourceDeposit_PlayDepletedEffect),&Parms);
	}
	void AFGResourceDeposit::StaticRegisterNativesAFGResourceDeposit()
	{
		UClass* Class = AFGResourceDeposit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMineAmount", &AFGResourceDeposit::execGetMineAmount },
			{ "IsDepositEmpty", &AFGResourceDeposit::execIsDepositEmpty },
			{ "OnRep_ResourceDepositEmptied", &AFGResourceDeposit::execOnRep_ResourceDepositEmptied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics
	{
		struct FGResourceDeposit_eventGetMineAmount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGResourceDeposit_eventGetMineAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deposit" },
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "How much to mine per cycle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceDeposit, "GetMineAmount", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGResourceDeposit_eventGetMineAmount_Parms), Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics
	{
		struct FGResourceDeposit_eventIsDepositEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResourceDeposit_eventIsDepositEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGResourceDeposit_eventIsDepositEmpty_Parms), &Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deposit" },
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "Is deposit empty?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceDeposit, "IsDepositEmpty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGResourceDeposit_eventIsDepositEmpty_Parms), Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "Called on client when resource deposit has been emptied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceDeposit, "OnRep_ResourceDepositEmptied", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_descriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::NewProp_descriptor = { UE4CodeGen_Private::EPropertyClass::Class, "descriptor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGResourceDeposit_eventPlayDepletedEffect_Parms, descriptor), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::NewProp_descriptor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deposit" },
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "Function used to play effects and change mesh when a deposit is emptied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGResourceDeposit, "PlayDepletedEffect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(FGResourceDeposit_eventPlayDepletedEffect_Parms), Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGResourceDeposit_NoRegister()
	{
		return AFGResourceDeposit::StaticClass();
	}
	struct Z_Construct_UClass_AFGResourceDeposit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOverrideResourceClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mOverrideResourceClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDepositMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDepositMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMineAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mMineAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsEmptied_MetaData[];
#endif
		static void NewProp_mIsEmptied_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsEmptied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceDepositTableIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mResourceDepositTableIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mResourceDepositPackage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mResourceDepositPackage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGResourceDeposit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGResourceNode,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGResourceDeposit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGResourceDeposit_GetMineAmount, "GetMineAmount" }, // 1346881840
		{ &Z_Construct_UFunction_AFGResourceDeposit_IsDepositEmpty, "IsDepositEmpty" }, // 3513441948
		{ &Z_Construct_UFunction_AFGResourceDeposit_OnRep_ResourceDepositEmptied, "OnRep_ResourceDepositEmptied" }, // 110044117
		{ &Z_Construct_UFunction_AFGResourceDeposit_PlayDepletedEffect, "PlayDepletedEffect" }, // 1608320765
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceDeposit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Resources/FGResourceDeposit.h" },
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mOverrideResourceClass_MetaData[] = {
		{ "Category", "Resources" },
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mOverrideResourceClass = { UE4CodeGen_Private::EPropertyClass::Class, "mOverrideResourceClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000801, 1, nullptr, STRUCT_OFFSET(AFGResourceDeposit, mOverrideResourceClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mOverrideResourceClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mOverrideResourceClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mDepositMeshComponent_MetaData[] = {
		{ "Category", "Resources" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "The mesh we use for displaying the resource deposit" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mDepositMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mDepositMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AFGResourceDeposit, mDepositMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mDepositMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mDepositMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mMineAmount_MetaData[] = {
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "How much to mine per cycle" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mMineAmount = { UE4CodeGen_Private::EPropertyClass::Int, "mMineAmount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(AFGResourceDeposit, mMineAmount), METADATA_PARAMS(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mMineAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mMineAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mIsEmptied_MetaData[] = {
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "is deposit emptied" },
	};
#endif
	void Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mIsEmptied_SetBit(void* Obj)
	{
		((AFGResourceDeposit*)Obj)->mIsEmptied = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mIsEmptied = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsEmptied", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101000020, 1, "OnRep_ResourceDepositEmptied", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGResourceDeposit), &Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mIsEmptied_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mIsEmptied_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mIsEmptied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositTableIndex_MetaData[] = {
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "Index in the resource deposit table" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositTableIndex = { UE4CodeGen_Private::EPropertyClass::Int, "mResourceDepositTableIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000001000020, 1, nullptr, STRUCT_OFFSET(AFGResourceDeposit, mResourceDepositTableIndex), METADATA_PARAMS(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositTableIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositTableIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositPackage_MetaData[] = {
		{ "ModuleRelativePath", "Resources/FGResourceDeposit.h" },
		{ "ToolTip", "Valid if mLootTableIndex is not INDEX_NONE" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositPackage = { UE4CodeGen_Private::EPropertyClass::Struct, "mResourceDepositPackage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGResourceDeposit, mResourceDepositPackage), Z_Construct_UScriptStruct_FResourceDepositPackage, METADATA_PARAMS(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositPackage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositPackage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGResourceDeposit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mOverrideResourceClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mDepositMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mMineAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mIsEmptied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositTableIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGResourceDeposit_Statics::NewProp_mResourceDepositPackage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGResourceDeposit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGResourceDeposit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGResourceDeposit_Statics::ClassParams = {
		&AFGResourceDeposit::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGResourceDeposit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGResourceDeposit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGResourceDeposit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGResourceDeposit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGResourceDeposit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGResourceDeposit, 626148919);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGResourceDeposit(Z_Construct_UClass_AFGResourceDeposit, &AFGResourceDeposit::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGResourceDeposit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGResourceDeposit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
