// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGDamageOverTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGDamageOverTime() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageOverTime_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageOverTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UFGDamageOverTime::StaticRegisterNativesUFGDamageOverTime()
	{
		UClass* Class = UFGDamageOverTime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamageAmount", &UFGDamageOverTime::execGetDamageAmount },
			{ "GetDamageClass", &UFGDamageOverTime::execGetDamageClass },
			{ "GetDamageInterval", &UFGDamageOverTime::execGetDamageInterval },
			{ "ShouldBeAppliedToActor", &UFGDamageOverTime::execShouldBeAppliedToActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics
	{
		struct FGDamageOverTime_eventGetDamageAmount_Parms
		{
			TSubclassOf<UFGDamageOverTime>  dotClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_dotClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventGetDamageAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::NewProp_dotClass = { "dotClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventGetDamageAmount_Parms, dotClass), Z_Construct_UClass_UFGDamageOverTime_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::NewProp_dotClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "Returns how much damage the dot does every interval\n@return The damage to take; no damage if dotClass is nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDamageOverTime, nullptr, "GetDamageAmount", sizeof(FGDamageOverTime_eventGetDamageAmount_Parms), Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics
	{
		struct FGDamageOverTime_eventGetDamageClass_Parms
		{
			TSubclassOf<UFGDamageOverTime>  dotClass;
			TSubclassOf<UFGDamageType>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_dotClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventGetDamageClass_Parms, ReturnValue), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::NewProp_dotClass = { "dotClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventGetDamageClass_Parms, dotClass), Z_Construct_UClass_UFGDamageOverTime_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::NewProp_dotClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "Returns the damage type of the dot-class\n@return nullptr if dotClass is nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDamageOverTime, nullptr, "GetDamageClass", sizeof(FGDamageOverTime_eventGetDamageClass_Parms), Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics
	{
		struct FGDamageOverTime_eventGetDamageInterval_Parms
		{
			TSubclassOf<UFGDamageOverTime>  dotClass;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_dotClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventGetDamageInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::NewProp_dotClass = { "dotClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventGetDamageInterval_Parms, dotClass), Z_Construct_UClass_UFGDamageOverTime_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::NewProp_dotClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "Returns the the damage interval of the dot\n@return -1 if dotClass is nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDamageOverTime, nullptr, "GetDamageInterval", sizeof(FGDamageOverTime_eventGetDamageInterval_Parms), Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics
	{
		struct FGDamageOverTime_eventShouldBeAppliedToActor_Parms
		{
			TSubclassOf<UFGDamageOverTime>  dotClass;
			AActor* actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_dotClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGDamageOverTime_eventShouldBeAppliedToActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGDamageOverTime_eventShouldBeAppliedToActor_Parms), &Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventShouldBeAppliedToActor_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_dotClass = { "dotClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGDamageOverTime_eventShouldBeAppliedToActor_Parms, dotClass), Z_Construct_UClass_UFGDamageOverTime_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::NewProp_dotClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "Returns true if this dot-class should be applied to the actor\n@return false if dotClass or actor is nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGDamageOverTime, nullptr, "ShouldBeAppliedToActor", sizeof(FGDamageOverTime_eventShouldBeAppliedToActor_Parms), Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGDamageOverTime_NoRegister()
	{
		return UFGDamageOverTime::StaticClass();
	}
	struct Z_Construct_UClass_UFGDamageOverTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mActorFilter;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mActorFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDamageClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDamageInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGDamageOverTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGDamageOverTime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGDamageOverTime_GetDamageAmount, "GetDamageAmount" }, // 4168947680
		{ &Z_Construct_UFunction_UFGDamageOverTime_GetDamageClass, "GetDamageClass" }, // 699730496
		{ &Z_Construct_UFunction_UFGDamageOverTime_GetDamageInterval, "GetDamageInterval" }, // 957444298
		{ &Z_Construct_UFunction_UFGDamageOverTime_ShouldBeAppliedToActor, "ShouldBeAppliedToActor" }, // 2466440002
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageOverTime_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGDamageOverTime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "Shareable info about damage over time" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mActorFilter_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "Only deal damage to subclasses of these actor classes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mActorFilter = { "mActorFilter", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDamageOverTime, mActorFilter), METADATA_PARAMS(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mActorFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mActorFilter_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mActorFilter_Inner = { "mActorFilter", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageClass_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "What type of damage should we give the character" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageClass = { "mDamageClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDamageOverTime, mDamageClass), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageAmount_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "How much damage should the actor take each time it receives damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageAmount = { "mDamageAmount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDamageOverTime, mDamageAmount), METADATA_PARAMS(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageInterval_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGDamageOverTime.h" },
		{ "ToolTip", "How often should we damage actors inside of this cloud (in seconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageInterval = { "mDamageInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGDamageOverTime, mDamageInterval), METADATA_PARAMS(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGDamageOverTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mActorFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mActorFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGDamageOverTime_Statics::NewProp_mDamageInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGDamageOverTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGDamageOverTime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGDamageOverTime_Statics::ClassParams = {
		&UFGDamageOverTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGDamageOverTime_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGDamageOverTime_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGDamageOverTime_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGDamageOverTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGDamageOverTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGDamageOverTime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGDamageOverTime, 1071358929);
	template<> FACTORYGAME_API UClass* StaticClass<UFGDamageOverTime>()
	{
		return UFGDamageOverTime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGDamageOverTime(Z_Construct_UClass_UFGDamageOverTime, &UFGDamageOverTime::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGDamageOverTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGDamageOverTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
