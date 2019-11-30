// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/Enemy/FGGameplayTask_AttackMelee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameplayTask_AttackMelee() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_AttackMelee_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_AttackMelee();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Attack();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAggroTargetInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemy_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
// End Cross Module References
	void UFGGameplayTask_AttackMelee::StaticRegisterNativesUFGGameplayTask_AttackMelee()
	{
		UClass* Class = UFGGameplayTask_AttackMelee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &UFGGameplayTask_AttackMelee::execAttack },
			{ "OnMontageBlendingOut", &UFGGameplayTask_AttackMelee::execOnMontageBlendingOut },
			{ "OnMontageEnded", &UFGGameplayTask_AttackMelee::execOnMontageEnded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics
	{
		struct FGGameplayTask_AttackMelee_eventAttack_Parms
		{
			AFGEnemy* enemy;
			TScriptInterface<IFGAggroTargetInterface> attackTarget;
			TSubclassOf<UFGAttack>  attackClass;
			UFGGameplayTask_AttackMelee* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_attackClass;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_attackTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameplayTask_AttackMelee_eventAttack_Parms, ReturnValue), Z_Construct_UClass_UFGGameplayTask_AttackMelee_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_attackClass = { "attackClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameplayTask_AttackMelee_eventAttack_Parms, attackClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_attackTarget = { "attackTarget", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameplayTask_AttackMelee_eventAttack_Parms, attackTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_enemy = { "enemy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameplayTask_AttackMelee_eventAttack_Parms, enemy), Z_Construct_UClass_AFGEnemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_attackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_attackTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::NewProp_enemy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Tasks" },
		{ "DefaultToSelf", "Controller" },
		{ "DisplayName", "Attack Target" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackMelee.h" },
		{ "ToolTip", "@todoai: document" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameplayTask_AttackMelee, nullptr, "Attack", sizeof(FGGameplayTask_AttackMelee_eventAttack_Parms), Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics
	{
		struct FGGameplayTask_AttackMelee_eventOnMontageBlendingOut_Parms
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
	void Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((FGGameplayTask_AttackMelee_eventOnMontageBlendingOut_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGameplayTask_AttackMelee_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameplayTask_AttackMelee_eventOnMontageBlendingOut_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackMelee.h" },
		{ "ToolTip", "Called when attack animation starts to blend out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameplayTask_AttackMelee, nullptr, "OnMontageBlendingOut", sizeof(FGGameplayTask_AttackMelee_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics
	{
		struct FGGameplayTask_AttackMelee_eventOnMontageEnded_Parms
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
	void Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::NewProp_interrupted_SetBit(void* Obj)
	{
		((FGGameplayTask_AttackMelee_eventOnMontageEnded_Parms*)Obj)->interrupted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::NewProp_interrupted = { "interrupted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGGameplayTask_AttackMelee_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::NewProp_interrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::NewProp_montage = { "montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGGameplayTask_AttackMelee_eventOnMontageEnded_Parms, montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::NewProp_interrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::NewProp_montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackMelee.h" },
		{ "ToolTip", "Called when attack animation ended" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGGameplayTask_AttackMelee, nullptr, "OnMontageEnded", sizeof(FGGameplayTask_AttackMelee_eventOnMontageEnded_Parms), Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGGameplayTask_AttackMelee_NoRegister()
	{
		return UFGGameplayTask_AttackMelee::StaticClass();
	}
	struct Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_mAttackTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnAttackFailed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnAttackFailed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnAttackFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnAttackFinished;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGGameplayTask_Attack,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGGameplayTask_AttackMelee_Attack, "Attack" }, // 3514593422
		{ &Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 1986421642
		{ &Z_Construct_UFunction_UFGGameplayTask_AttackMelee_OnMontageEnded, "OnMontageEnded" }, // 3128095703
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Creature/Enemy/FGGameplayTask_AttackMelee.h" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackMelee.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mAttackTarget_MetaData[] = {
		{ "Category", "FGGameplayTask_AttackMelee" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackMelee.h" },
		{ "ToolTip", "The target we are attacking" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mAttackTarget = { "mAttackTarget", nullptr, (EPropertyFlags)0x0024080000000034, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGGameplayTask_AttackMelee, mAttackTarget), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mAttackTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mAttackTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFailed = { "mOnAttackFailed", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGGameplayTask_AttackMelee, mOnAttackFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFailed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFailed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGGameplayTask_AttackMelee.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFinished = { "mOnAttackFinished", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGGameplayTask_AttackMelee, mOnAttackFinished), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFinished_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mAttackTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFailed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::NewProp_mOnAttackFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGGameplayTask_AttackMelee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::ClassParams = {
		&UFGGameplayTask_AttackMelee::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGGameplayTask_AttackMelee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGGameplayTask_AttackMelee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGGameplayTask_AttackMelee, 1818432059);
	template<> FACTORYGAME_API UClass* StaticClass<UFGGameplayTask_AttackMelee>()
	{
		return UFGGameplayTask_AttackMelee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGGameplayTask_AttackMelee(Z_Construct_UClass_UFGGameplayTask_AttackMelee, &UFGGameplayTask_AttackMelee::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGGameplayTask_AttackMelee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGGameplayTask_AttackMelee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
