// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/Enemy/FGGameplayTask_AttackJump.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameplayTask_AttackJump() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_AttackJump_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_AttackJump();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Attack();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttackMeleeJump_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemy_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
// End Cross Module References
	void UFGGameplayTask_AttackJump::StaticRegisterNativesUFGGameplayTask_AttackJump()
	{
		UClass* Class = UFGGameplayTask_AttackJump::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLandedCallback", &UFGGameplayTask_AttackJump::execOnLandedCallback },
			{ "OnMontageEnded", &UFGGameplayTask_AttackJump::execOnMontageEnded },
			{ "StartJump", &UFGGameplayTask_AttackJump::execStartJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics
	{
		struct FGGameplayTask_AttackJump_eventOnLandedCallback_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FGGameplayTask_AttackJump_eventOnLandedCallback_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackJump.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameplayTask_AttackJump, "OnLandedCallback", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(FGGameplayTask_AttackJump_eventOnLandedCallback_Parms), Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics
	{
		struct FGGameplayTask_AttackJump_eventOnMontageEnded_Parms
		{
			UAnimMontage* montage;
			bool interrupted;
		};
		static void NewProp_interrupted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_interrupted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((FGGameplayTask_AttackJump_eventOnMontageEnded_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::NewProp_interrupted = { UE4CodeGen_Private::EPropertyClass::Bool, "interrupted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameplayTask_AttackJump_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::NewProp_montage = { UE4CodeGen_Private::EPropertyClass::Object, "montage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameplayTask_AttackJump_eventOnMontageEnded_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackJump.h" },
		{ "ToolTip", "Called when pre jump animation ended" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameplayTask_AttackJump, "OnMontageEnded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGGameplayTask_AttackJump_eventOnMontageEnded_Parms), Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics
	{
		struct FGGameplayTask_AttackJump_eventStartJump_Parms
		{
			AFGEnemy* enemy;
			TSubclassOf<UFGAttackMeleeJump>  attackClass;
			bool startJump;
			UFGGameplayTask_AttackJump* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_startJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startJump;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_attackClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGGameplayTask_AttackJump_eventStartJump_Parms, ReturnValue), Z_Construct_UClass_UFGGameplayTask_AttackJump_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_startJump_SetBit(void* Obj)
	{
		((FGGameplayTask_AttackJump_eventStartJump_Parms*)Obj)->startJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_startJump = { UE4CodeGen_Private::EPropertyClass::Bool, "startJump", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGGameplayTask_AttackJump_eventStartJump_Parms), &Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_startJump_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_attackClass = { UE4CodeGen_Private::EPropertyClass::Class, "attackClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGGameplayTask_AttackJump_eventStartJump_Parms, attackClass), Z_Construct_UClass_UFGAttackMeleeJump_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_enemy = { UE4CodeGen_Private::EPropertyClass::Object, "enemy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGGameplayTask_AttackJump_eventStartJump_Parms, enemy), Z_Construct_UClass_AFGEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_startJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_attackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::NewProp_enemy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Tasks" },
		{ "DefaultToSelf", "Controller" },
		{ "DisplayName", "Jump attack" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackJump.h" },
		{ "ToolTip", "Starts the task of doing a jump attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameplayTask_AttackJump, "StartJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGGameplayTask_AttackJump_eventStartJump_Parms), Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGGameplayTask_AttackJump_NoRegister()
	{
		return UFGGameplayTask_AttackJump::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDoJump_MetaData[];
#endif
		static void NewProp_mDoJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mDoJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnJumpAttackFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnJumpAttackFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnJumpAttackFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnJumpAttackFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGGameplayTask_Attack,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnLandedCallback, "OnLandedCallback" }, // 1905658448
		{ &Z_Construct_UFunction_UFGGameplayTask_AttackJump_OnMontageEnded, "OnMontageEnded" }, // 3305307267
		{ &Z_Construct_UFunction_UFGGameplayTask_AttackJump_StartJump, "StartJump" }, // 211996775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Creature/Enemy/FGGameplayTask_AttackJump.h" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackJump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mDoJump_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackJump.h" },
		{ "ToolTip", "Should jump logic be handled in the task" },
	};
#endif
	void Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mDoJump_SetBit(void* Obj)
	{
		((UFGGameplayTask_AttackJump*)Obj)->mDoJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mDoJump = { UE4CodeGen_Private::EPropertyClass::Bool, "mDoJump", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGGameplayTask_AttackJump), &Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mDoJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mDoJump_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mDoJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackJump.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFailed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnJumpAttackFailed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGGameplayTask_AttackJump, mOnJumpAttackFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackJump.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnJumpAttackFinished", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080010080000, 1, nullptr, STRUCT_OFFSET(UFGGameplayTask_AttackJump, mOnJumpAttackFinished), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mDoJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::NewProp_mOnJumpAttackFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameplayTask_AttackJump>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::ClassParams = {
		&UFGGameplayTask_AttackJump::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameplayTask_AttackJump()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameplayTask_AttackJump_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameplayTask_AttackJump, 4764065);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameplayTask_AttackJump(Z_Construct_UClass_UFGGameplayTask_AttackJump, &UFGGameplayTask_AttackJump::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameplayTask_AttackJump"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameplayTask_AttackJump);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
