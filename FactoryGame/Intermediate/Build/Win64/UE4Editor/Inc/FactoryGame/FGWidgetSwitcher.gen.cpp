// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGWidgetSwitcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGWidgetSwitcher() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWidgetSwitcher_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGWidgetSwitcher();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMenuBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnMenuAnimDone__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActiveWidgetSet_Parms
		{
			UWidget* oldWidget;
			UWidget* newWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_oldWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_newWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_newWidget = { "newWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActiveWidgetSet_Parms, newWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_newWidget_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_newWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_oldWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_oldWidget = { "oldWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActiveWidgetSet_Parms, oldWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_oldWidget_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_oldWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_newWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::NewProp_oldWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActiveWidgetSet__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActiveWidgetSet_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFGWidgetSwitcher::StaticRegisterNativesUFGWidgetSwitcher()
	{
		UClass* Class = UFGWidgetSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterAnimationTookToLong", &UFGWidgetSwitcher::execEnterAnimationTookToLong },
			{ "ExitAnimationTookToLong", &UFGWidgetSwitcher::execExitAnimationTookToLong },
			{ "FadeOut", &UFGWidgetSwitcher::execFadeOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
		{ "ToolTip", "Called if a childs Enter animation took too long. So we just skip it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWidgetSwitcher, nullptr, "EnterAnimationTookToLong", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
		{ "ToolTip", "Called if a childs Exit animation took too long. So we just skip it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWidgetSwitcher, nullptr, "ExitAnimationTookToLong", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGWidgetSwitcher, nullptr, "FadeOut", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGWidgetSwitcher_NoRegister()
	{
		return UFGWidgetSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UFGWidgetSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mExitingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mExitingWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mEnteringWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mEnteringWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPendingNewWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPendingNewWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnFadoutDone_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnFadoutDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnWidgetSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnWidgetSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mFadeOutTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGWidgetSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetSwitcher,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGWidgetSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGWidgetSwitcher_EnterAnimationTookToLong, "EnterAnimationTookToLong" }, // 3536197974
		{ &Z_Construct_UFunction_UFGWidgetSwitcher_ExitAnimationTookToLong, "ExitAnimationTookToLong" }, // 868498305
		{ &Z_Construct_UFunction_UFGWidgetSwitcher_FadeOut, "FadeOut" }, // 3192454748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetSwitcher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGWidgetSwitcher.h" },
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mExitingWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
		{ "ToolTip", "Widget currently running it's exiting animation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mExitingWidget = { "mExitingWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetSwitcher, mExitingWidget), Z_Construct_UClass_UFGMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mExitingWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mExitingWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mEnteringWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
		{ "ToolTip", "Widget currently running it's entering animation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mEnteringWidget = { "mEnteringWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetSwitcher, mEnteringWidget), Z_Construct_UClass_UFGMenuBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mEnteringWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mEnteringWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mPendingNewWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
		{ "ToolTip", "Pending widget that will be set when the animations is done" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mPendingNewWidget = { "mPendingNewWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetSwitcher, mPendingNewWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mPendingNewWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mPendingNewWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnFadoutDone_MetaData[] = {
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnFadoutDone = { "mOnFadoutDone", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetSwitcher, mOnFadoutDone), Z_Construct_UDelegateFunction_FactoryGame_OnMenuAnimDone__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnFadoutDone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnFadoutDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnWidgetSet_MetaData[] = {
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnWidgetSet = { "mOnWidgetSet", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetSwitcher, mOnWidgetSet), Z_Construct_UDelegateFunction_FactoryGame_OnActiveWidgetSet__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnWidgetSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnWidgetSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mFadeOutTime_MetaData[] = {
		{ "Category", "FGWidgetSwitcher" },
		{ "ModuleRelativePath", "UI/FGWidgetSwitcher.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mFadeOutTime = { "mFadeOutTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGWidgetSwitcher, mFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mFadeOutTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mFadeOutTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGWidgetSwitcher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mExitingWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mEnteringWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mPendingNewWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnFadoutDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mOnWidgetSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGWidgetSwitcher_Statics::NewProp_mFadeOutTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGWidgetSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGWidgetSwitcher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGWidgetSwitcher_Statics::ClassParams = {
		&UFGWidgetSwitcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGWidgetSwitcher_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGWidgetSwitcher_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGWidgetSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGWidgetSwitcher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGWidgetSwitcher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGWidgetSwitcher, 410431125);
	template<> FACTORYGAME_API UClass* StaticClass<UFGWidgetSwitcher>()
	{
		return UFGWidgetSwitcher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGWidgetSwitcher(Z_Construct_UClass_UFGWidgetSwitcher, &UFGWidgetSwitcher::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGWidgetSwitcher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGWidgetSwitcher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
