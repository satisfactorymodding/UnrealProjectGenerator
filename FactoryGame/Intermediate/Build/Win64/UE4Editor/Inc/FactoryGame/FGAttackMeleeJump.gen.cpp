// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/AI/FGAttackMeleeJump.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGAttackMeleeJump() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttackMeleeJump_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttackMeleeJump();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttackMelee();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack_NoRegister();
// End Cross Module References
	void UFGAttackMeleeJump::StaticRegisterNativesUFGAttackMeleeJump()
	{
		UClass* Class = UFGAttackMeleeJump::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJumpRange", &UFGAttackMeleeJump::execGetJumpRange },
			{ "GetJumpVelocity", &UFGAttackMeleeJump::execGetJumpVelocity },
			{ "GetPreJumpMontage", &UFGAttackMeleeJump::execGetPreJumpMontage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics
	{
		struct FGAttackMeleeJump_eventGetJumpRange_Parms
		{
			TSubclassOf<UFGAttackMeleeJump>  inClass;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttackMeleeJump_eventGetJumpRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttackMeleeJump_eventGetJumpRange_Parms, inClass), Z_Construct_UClass_UFGAttackMeleeJump_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttackMeleeJump.h" },
		{ "ToolTip", "Range of the jump attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttackMeleeJump, "GetJumpRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttackMeleeJump_eventGetJumpRange_Parms), Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics
	{
		struct FGAttackMeleeJump_eventGetJumpVelocity_Parms
		{
			TSubclassOf<UFGAttackMeleeJump>  inClass;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttackMeleeJump_eventGetJumpVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttackMeleeJump_eventGetJumpVelocity_Parms, inClass), Z_Construct_UClass_UFGAttackMeleeJump_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttackMeleeJump.h" },
		{ "ToolTip", "Get Velocity when jumping ( excluding the Z velocity which is handled by the Jump() in Character" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttackMeleeJump, "GetJumpVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(FGAttackMeleeJump_eventGetJumpVelocity_Parms), Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics
	{
		struct FGAttackMeleeJump_eventGetPreJumpMontage_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGAttackMeleeJump_eventGetPreJumpMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::NewProp_inClass = { UE4CodeGen_Private::EPropertyClass::Class, "inClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGAttackMeleeJump_eventGetPreJumpMontage_Parms, inClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Enemy|Attack" },
		{ "ModuleRelativePath", "AI/FGAttackMeleeJump.h" },
		{ "ToolTip", "Get pre jump montage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGAttackMeleeJump, "GetPreJumpMontage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGAttackMeleeJump_eventGetPreJumpMontage_Parms), Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGAttackMeleeJump_NoRegister()
	{
		return UFGAttackMeleeJump::StaticClass();
	}
	struct Z_Construct_UClass_UFGAttackMeleeJump_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreJumpMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mPreJumpMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJumpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mJumpVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mJumpRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mJumpRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGAttackMeleeJump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGAttackMelee,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGAttackMeleeJump_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpRange, "GetJumpRange" }, // 2307143374
		{ &Z_Construct_UFunction_UFGAttackMeleeJump_GetJumpVelocity, "GetJumpVelocity" }, // 3625686930
		{ &Z_Construct_UFunction_UFGAttackMeleeJump_GetPreJumpMontage, "GetPreJumpMontage" }, // 928193173
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttackMeleeJump_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/FGAttackMeleeJump.h" },
		{ "ModuleRelativePath", "AI/FGAttackMeleeJump.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mPreJumpMontage_MetaData[] = {
		{ "Category", "FGAttackMeleeJump" },
		{ "ModuleRelativePath", "AI/FGAttackMeleeJump.h" },
		{ "ToolTip", "Animation to play before jumping" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mPreJumpMontage = { UE4CodeGen_Private::EPropertyClass::Object, "mPreJumpMontage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttackMeleeJump, mPreJumpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mPreJumpMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mPreJumpMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpVelocity_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AI/FGAttackMeleeJump.h" },
		{ "ToolTip", "Velocity when jumping ( excluding the Z velocity which is handled by the Jump() in Character" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "mJumpVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttackMeleeJump, mJumpVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpRange_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AI/FGAttackMeleeJump.h" },
		{ "ToolTip", "From where in relation to the target should the jump start" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpRange = { UE4CodeGen_Private::EPropertyClass::Float, "mJumpRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGAttackMeleeJump, mJumpRange), METADATA_PARAMS(Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGAttackMeleeJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mPreJumpMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGAttackMeleeJump_Statics::NewProp_mJumpRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGAttackMeleeJump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGAttackMeleeJump>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGAttackMeleeJump_Statics::ClassParams = {
		&UFGAttackMeleeJump::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGAttackMeleeJump_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGAttackMeleeJump_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGAttackMeleeJump_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGAttackMeleeJump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGAttackMeleeJump()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGAttackMeleeJump_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGAttackMeleeJump, 3097359413);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGAttackMeleeJump(Z_Construct_UClass_UFGAttackMeleeJump, &UFGAttackMeleeJump::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGAttackMeleeJump"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGAttackMeleeJump);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
