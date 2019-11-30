// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/AI/FGAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAttack() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttack_GetAttackAngle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttack_GetAttackMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttack_GetAttackRange();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttack_GetDamage();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttack_GetDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttack_GetStopsMovement();
// End Cross Module References
	void UFGAttack::StaticRegisterNativesUFGAttack()
	{
		UClass* Class = UFGAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackActivationDistance", &UFGAttack::execGetAttackActivationDistance },
			{ "GetAttackAngle", &UFGAttack::execGetAttackAngle },
			{ "GetAttackMontage", &UFGAttack::execGetAttackMontage },
			{ "GetAttackRange", &UFGAttack::execGetAttackRange },
			{ "GetDamage", &UFGAttack::execGetDamage },
			{ "GetDamageType", &UFGAttack::execGetDamageType },
			{ "GetStopsMovement", &UFGAttack::execGetStopsMovement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics
	{
		struct FGAttack_eventGetAttackActivationDistance_Parms
		{
			TSubclassOf<UFGAttack>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackActivationDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackActivationDistance_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Get attack activation distance ( returns the attack range if the activation distance has not been set )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttack, "GetAttackActivationDistance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttack_eventGetAttackActivationDistance_Parms), Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics
	{
		struct FGAttack_eventGetAttackAngle_Parms
		{
			TSubclassOf<UFGAttack>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackAngle_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Get angle needed for this attack to hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttack, "GetAttackAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttack_eventGetAttackAngle_Parms), Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttack_GetAttackAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttack_GetAttackAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics
	{
		struct FGAttack_eventGetAttackMontage_Parms
		{
			TSubclassOf<UFGAttack>  inClass;
			UAnimMontage* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackMontage_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Get attack montage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttack, "GetAttackMontage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttack_eventGetAttackMontage_Parms), Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttack_GetAttackMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttack_GetAttackMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics
	{
		struct FGAttack_eventGetAttackRange_Parms
		{
			TSubclassOf<UFGAttack>  inClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetAttackRange_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Get attack range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttack, "GetAttackRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttack_eventGetAttackRange_Parms), Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttack_GetAttackRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttack_GetAttackRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttack_GetDamage_Statics
	{
		struct FGAttack_eventGetDamage_Parms
		{
			TSubclassOf<UFGAttack>  inClass;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGAttack_GetDamage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetDamage_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetDamage_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttack_GetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetDamage_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttack_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Get damage this attack does" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttack_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttack, "GetDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttack_eventGetDamage_Parms), Z_Construct_UFunction_UFGAttack_GetDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttack_GetDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttack_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttack_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttack_GetDamageType_Statics
	{
		struct FGAttack_eventGetDamageType_Parms
		{
			TSubclassOf<UFGAttack>  inClass;
			TSubclassOf<UDamageType>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetDamageType_Parms, ReturnValue), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetDamageType_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Get damage type for this attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttack, "GetDamageType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttack_eventGetDamageType_Parms), Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttack_GetDamageType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttack_GetDamageType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics
	{
		struct FGAttack_eventGetStopsMovement_Parms
		{
			TSubclassOf<UFGAttack>  inClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGAttack_eventGetStopsMovement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGAttack_eventGetStopsMovement_Parms), &Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttack_eventGetStopsMovement_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Get for stop movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttack, "GetStopsMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttack_eventGetStopsMovement_Parms), Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttack_GetStopsMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttack_GetStopsMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAttack_NoRegister()
	{
		return UFGAttack::StaticClass();
	}
	struct Z_Construct_UClass_UFGAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAttackAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDamageType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackActivationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAttackActivationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStopsMovement_MetaData[];
#endif
		static void NewProp_mStopsMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mStopsMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mAttackMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAttack_GetAttackActivationDistance, "GetAttackActivationDistance" }, // 3275664265
		{ &Z_Construct_UFunction_UFGAttack_GetAttackAngle, "GetAttackAngle" }, // 4211290238
		{ &Z_Construct_UFunction_UFGAttack_GetAttackMontage, "GetAttackMontage" }, // 2358477897
		{ &Z_Construct_UFunction_UFGAttack_GetAttackRange, "GetAttackRange" }, // 153767308
		{ &Z_Construct_UFunction_UFGAttack_GetDamage, "GetDamage" }, // 3250251038
		{ &Z_Construct_UFunction_UFGAttack_GetDamageType, "GetDamageType" }, // 1809444327
		{ &Z_Construct_UFunction_UFGAttack_GetStopsMovement, "GetStopsMovement" }, // 1858754908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/FGAttack.h" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackAngle_MetaData[] = {
		{ "Category", "FGAttack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Angle that target must be within in order to hit with attack ( 180 = full circle hit area )" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackAngle = { UE4CodeGen_Private::EPropertyClass::Float, "mAttackAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttack, mAttackAngle), METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamageType_MetaData[] = {
		{ "Category", "FGAttack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Damage type that this attack uses" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamageType = { UE4CodeGen_Private::EPropertyClass::Class, "mDamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttack, mDamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamageType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamageType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamage_MetaData[] = {
		{ "Category", "FGAttack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "How much damage to do when hitting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamage = { UE4CodeGen_Private::EPropertyClass::Int, "mDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttack, mDamage), METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackActivationDistance_MetaData[] = {
		{ "Category", "FGAttack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "How far can we attack" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackActivationDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mAttackActivationDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttack, mAttackActivationDistance), METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackActivationDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackActivationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackRange_MetaData[] = {
		{ "Category", "FGAttack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "How far can we attack" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackRange = { UE4CodeGen_Private::EPropertyClass::Float, "mAttackRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttack, mAttackRange), METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::NewProp_mStopsMovement_MetaData[] = {
		{ "Category", "FGAttack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "True if this attack stops movement" },
	};
#endif
	void Z_Construct_UClass_UFGAttack_Statics::NewProp_mStopsMovement_SetBit(void* Obj)
	{
		((UFGAttack*)Obj)->mStopsMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGAttack_Statics::NewProp_mStopsMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "mStopsMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGAttack), &Z_Construct_UClass_UFGAttack_Statics::NewProp_mStopsMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::NewProp_mStopsMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::NewProp_mStopsMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackMontage_MetaData[] = {
		{ "Category", "FGAttack" },
		{ "ModuleRelativePath", "AI/FGAttack.h" },
		{ "ToolTip", "Animation to play when attacking" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackMontage = { UE4CodeGen_Private::EPropertyClass::Object, "mAttackMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttack, mAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttack_Statics::NewProp_mDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackActivationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttack_Statics::NewProp_mStopsMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttack_Statics::NewProp_mAttackMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAttack_Statics::ClassParams = {
		&UFGAttack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGAttack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAttack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAttack, 1189341567);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAttack(Z_Construct_UClass_UFGAttack, &UFGAttack::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
