// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGMenuBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMenuBase() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMenuBase_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMenuBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuEnter();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuExit();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWidgetSwitcher_NoRegister();
// End Cross Module References
	static FName NAME_UFGMenuBase_OnMenuEnter = FName(TEXT("OnMenuEnter"));
	void UFGMenuBase::OnMenuEnter(UWidget* prevMenu)
	{
		FGMenuBase_eventOnMenuEnter_Parms Parms;
		Parms.prevMenu=prevMenu;
		ProcessEvent(FindFunctionChecked(NAME_UFGMenuBase_OnMenuEnter),&Parms);
	}
	static FName NAME_UFGMenuBase_OnMenuExit = FName(TEXT("OnMenuExit"));
	void UFGMenuBase::OnMenuExit(UWidget* prevMenu, bool noAnimation)
	{
		FGMenuBase_eventOnMenuExit_Parms Parms;
		Parms.prevMenu=prevMenu;
		Parms.noAnimation=noAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFGMenuBase_OnMenuExit),&Parms);
	}
	void UFGMenuBase::StaticRegisterNativesUFGMenuBase()
	{
		UClass* Class = UFGMenuBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMenuEnterDone", &UFGMenuBase::execOnMenuEnterDone },
			{ "OnMenuExitDone", &UFGMenuBase::execOnMenuExitDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prevMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prevMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::NewProp_prevMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::NewProp_prevMenu = { "prevMenu", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMenuBase_eventOnMenuEnter_Parms, prevMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::NewProp_prevMenu_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::NewProp_prevMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::NewProp_prevMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMenuBase, nullptr, "OnMenuEnter", sizeof(FGMenuBase_eventOnMenuEnter_Parms), Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMenuBase_OnMenuEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMenuBase, nullptr, "OnMenuEnterDone", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics
	{
		static void NewProp_noAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_noAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prevMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prevMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_noAnimation_SetBit(void* Obj)
	{
		((FGMenuBase_eventOnMenuExit_Parms*)Obj)->noAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_noAnimation = { "noAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGMenuBase_eventOnMenuExit_Parms), &Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_noAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_prevMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_prevMenu = { "prevMenu", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGMenuBase_eventOnMenuExit_Parms, prevMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_prevMenu_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_prevMenu_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_noAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::NewProp_prevMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMenuBase, nullptr, "OnMenuExit", sizeof(FGMenuBase_eventOnMenuExit_Parms), Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMenuBase_OnMenuExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMenuBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMenuBase, nullptr, "OnMenuExitDone", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMenuBase_NoRegister()
	{
		return UFGMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UFGMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMenuBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMenuBase_OnMenuEnter, "OnMenuEnter" }, // 788228871
		{ &Z_Construct_UFunction_UFGMenuBase_OnMenuEnterDone, "OnMenuEnterDone" }, // 926712985
		{ &Z_Construct_UFunction_UFGMenuBase_OnMenuExit, "OnMenuExit" }, // 1275177185
		{ &Z_Construct_UFunction_UFGMenuBase_OnMenuExitDone, "OnMenuExitDone" }, // 215214300
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMenuBase_Statics::Class_MetaDataParams[] = {
		{ "DisableNativeTick", "" },
		{ "IncludePath", "UI/FGMenuBase.h" },
		{ "ModuleRelativePath", "UI/FGMenuBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMenuBase_Statics::NewProp_mCachedOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGMenuBase.h" },
		{ "ToolTip", "Cached switcher owning this widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMenuBase_Statics::NewProp_mCachedOwner = { "mCachedOwner", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGMenuBase, mCachedOwner), Z_Construct_UClass_UFGWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMenuBase_Statics::NewProp_mCachedOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMenuBase_Statics::NewProp_mCachedOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMenuBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMenuBase_Statics::NewProp_mCachedOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMenuBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMenuBase_Statics::ClassParams = {
		&UFGMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGMenuBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGMenuBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGMenuBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMenuBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMenuBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMenuBase, 2998531639);
	template<> FACTORYGAME_API UClass* StaticClass<UFGMenuBase>()
	{
		return UFGMenuBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMenuBase(Z_Construct_UClass_UFGMenuBase, &UFGMenuBase::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMenuBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMenuBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
