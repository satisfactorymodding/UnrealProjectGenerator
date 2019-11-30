// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/UI/FGManufacturingButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGManufacturingButton() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGManufacturingButton_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGManufacturingButton();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGManufacturingButton_SetButton();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventManufacturePressed_Parms
		{
			float produceMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_produceMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::NewProp_produceMultiplier = { "produceMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventManufacturePressed_Parms, produceMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::NewProp_produceMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "ManufacturePressed__DelegateSignature", sizeof(_Script_FactoryGame_eventManufacturePressed_Parms), Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UFGManufacturingButton::StaticRegisterNativesUFGManufacturingButton()
	{
		UClass* Class = UFGManufacturingButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPressedButton", &UFGManufacturingButton::execOnPressedButton },
			{ "OnReleasedButton", &UFGManufacturingButton::execOnReleasedButton },
			{ "SetButton", &UFGManufacturingButton::execSetButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
		{ "ToolTip", "Internal button was pressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGManufacturingButton, nullptr, "OnPressedButton", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manufacturing Button" },
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
		{ "ToolTip", "Internal button was released, added BlueprintCallable to be able to simulate button release" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGManufacturingButton, nullptr, "OnReleasedButton", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics
	{
		struct FGManufacturingButton_eventSetButton_Parms
		{
			UButton* inButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::NewProp_inButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::NewProp_inButton = { "inButton", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGManufacturingButton_eventSetButton_Parms, inButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::NewProp_inButton_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::NewProp_inButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::NewProp_inButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manufacturing Button" },
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
		{ "ToolTip", "Sets our internal button that will be used for focus handling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGManufacturingButton, nullptr, "SetButton", sizeof(FGManufacturingButton_eventSetButton_Parms), Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGManufacturingButton_SetButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGManufacturingButton_SetButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGManufacturingButton_NoRegister()
	{
		return UFGManufacturingButton::StaticClass();
	}
	struct Z_Construct_UClass_UFGManufacturingButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHoldProduceSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mHoldProduceSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mHoldTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mHoldTimeMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMinTimeBetweenPress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mMinTimeBetweenPress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnManufacturePressed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManufacturePressed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGManufacturingButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGManufacturingButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGManufacturingButton_OnPressedButton, "OnPressedButton" }, // 2135694672
		{ &Z_Construct_UFunction_UFGManufacturingButton_OnReleasedButton, "OnReleasedButton" }, // 3960498724
		{ &Z_Construct_UFunction_UFGManufacturingButton_SetButton, "SetButton" }, // 3791593881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGManufacturingButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGManufacturingButton.h" },
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldProduceSpeed_MetaData[] = {
		{ "Category", "Manufacturing Button" },
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
		{ "ToolTip", "produce speed when holding the button" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldProduceSpeed = { "mHoldProduceSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGManufacturingButton, mHoldProduceSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldProduceSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldProduceSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldTimeMax_MetaData[] = {
		{ "Category", "Manufacturing Button" },
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
		{ "ToolTip", "How long to hold for a manufacture to be called" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldTimeMax = { "mHoldTimeMax", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGManufacturingButton, mHoldTimeMax), METADATA_PARAMS(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldTimeMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldTimeMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mMinTimeBetweenPress_MetaData[] = {
		{ "Category", "Manufacturing Button" },
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
		{ "ToolTip", "Minimum time between button presses to register a manufacture event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mMinTimeBetweenPress = { "mMinTimeBetweenPress", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGManufacturingButton, mMinTimeBetweenPress), METADATA_PARAMS(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mMinTimeBetweenPress_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mMinTimeBetweenPress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_OnManufacturePressed_MetaData[] = {
		{ "Category", "Manufacturing Button" },
		{ "ModuleRelativePath", "Public/UI/FGManufacturingButton.h" },
		{ "ToolTip", "Called when a valid press on manufacture happens" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_OnManufacturePressed = { "OnManufacturePressed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGManufacturingButton, OnManufacturePressed), Z_Construct_UDelegateFunction_FactoryGame_ManufacturePressed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_OnManufacturePressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_OnManufacturePressed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGManufacturingButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldProduceSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mHoldTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_mMinTimeBetweenPress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGManufacturingButton_Statics::NewProp_OnManufacturePressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGManufacturingButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGManufacturingButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGManufacturingButton_Statics::ClassParams = {
		&UFGManufacturingButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGManufacturingButton_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGManufacturingButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGManufacturingButton_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGManufacturingButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGManufacturingButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGManufacturingButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGManufacturingButton, 2561607153);
	template<> FACTORYGAME_API UClass* StaticClass<UFGManufacturingButton>()
	{
		return UFGManufacturingButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGManufacturingButton(Z_Construct_UClass_UFGManufacturingButton, &UFGManufacturingButton::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGManufacturingButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGManufacturingButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
