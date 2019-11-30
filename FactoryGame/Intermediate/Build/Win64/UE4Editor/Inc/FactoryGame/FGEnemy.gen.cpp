// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Creature/Enemy/FGEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEnemy() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemy_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEnemy();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCreature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemy_GetAttackLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGGameplayTask_Attack_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack();
// End Cross Module References
	static FName NAME_AFGEnemy_GetAttackLocation = FName(TEXT("GetAttackLocation"));
	FVector AFGEnemy::GetAttackLocation()
	{
		FGEnemy_eventGetAttackLocation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AFGEnemy_GetAttackLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AFGEnemy_OnCurrentAggroTargetReplicated = FName(TEXT("OnCurrentAggroTargetReplicated"));
	void AFGEnemy::OnCurrentAggroTargetReplicated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEnemy_OnCurrentAggroTargetReplicated),NULL);
	}
	static FName NAME_AFGEnemy_PerformCustomRadialAttack = FName(TEXT("PerformCustomRadialAttack"));
	void AFGEnemy::PerformCustomRadialAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEnemy_PerformCustomRadialAttack),NULL);
	}
	void AFGEnemy::StaticRegisterNativesAFGEnemy()
	{
		UClass* Class = AFGEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttackLocation", &AFGEnemy::execGetAttackLocation },
			{ "GetCurrentAggroTarget", &AFGEnemy::execGetCurrentAggroTarget },
			{ "GetCurrentAttackTask", &AFGEnemy::execGetCurrentAttackTask },
			{ "OnCurrentAggroTargetReplicated", &AFGEnemy::execOnCurrentAggroTargetReplicated },
			{ "OnRep_CurrentAggroTarget", &AFGEnemy::execOnRep_CurrentAggroTarget },
			{ "PerformCustomRadialAttack", &AFGEnemy::execPerformCustomRadialAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemy_eventGetAttackLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ToolTip", "Returns the location we want to originate an attack from" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, "GetAttackLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(FGEnemy_eventGetAttackLocation_Parms), Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_GetAttackLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_GetAttackLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics
	{
		struct FGEnemy_eventGetCurrentAggroTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemy_eventGetCurrentAggroTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ToolTip", "Get aggrotarget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, "GetCurrentAggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGEnemy_eventGetCurrentAggroTarget_Parms), Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics
	{
		struct FGEnemy_eventGetCurrentAttackTask_Parms
		{
			UFGGameplayTask_Attack* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGEnemy_eventGetCurrentAttackTask_Parms, ReturnValue), Z_Construct_UClass_UFGGameplayTask_Attack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ToolTip", "Returns the current attack task ( can be nullptr )" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, "GetCurrentAttackTask", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGEnemy_eventGetCurrentAttackTask_Parms), Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ToolTip", "Called on both server and client when aggro target has changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, "OnCurrentAggroTargetReplicated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ToolTip", "Replicating mCurrentAggroTarget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, "OnRep_CurrentAggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ToolTip", "Hook for us to be able to go to blueprrint in order to do the custom radial attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEnemy, "PerformCustomRadialAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGEnemy_NoRegister()
	{
		return AFGEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AFGEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentAggroTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentAggroTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGCreature,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGEnemy_GetAttackLocation, "GetAttackLocation" }, // 388203892
		{ &Z_Construct_UFunction_AFGEnemy_GetCurrentAggroTarget, "GetCurrentAggroTarget" }, // 3222893917
		{ &Z_Construct_UFunction_AFGEnemy_GetCurrentAttackTask, "GetCurrentAttackTask" }, // 468702031
		{ &Z_Construct_UFunction_AFGEnemy_OnCurrentAggroTargetReplicated, "OnCurrentAggroTargetReplicated" }, // 53340814
		{ &Z_Construct_UFunction_AFGEnemy_OnRep_CurrentAggroTarget, "OnRep_CurrentAggroTarget" }, // 1916125444
		{ &Z_Construct_UFunction_AFGEnemy_PerformCustomRadialAttack, "PerformCustomRadialAttack" }, // 1342220382
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Creature/Enemy/FGEnemy.h" },
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAggroTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAggroTarget = { UE4CodeGen_Private::EPropertyClass::Object, "mCurrentAggroTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_CurrentAggroTarget", STRUCT_OFFSET(AFGEnemy, mCurrentAggroTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAggroTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAggroTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAttack_MetaData[] = {
		{ "ModuleRelativePath", "Public/Creature/Enemy/FGEnemy.h" },
		{ "ToolTip", "The current attack that the pawn is issuing @todoai: Verify if clients need this replicated or if the task get a activate on clients too" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAttack = { UE4CodeGen_Private::EPropertyClass::Object, "mCurrentAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000020, 1, nullptr, STRUCT_OFFSET(AFGEnemy, mCurrentAttack), Z_Construct_UClass_UFGGameplayTask_Attack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAggroTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEnemy_Statics::NewProp_mCurrentAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEnemy_Statics::ClassParams = {
		&AFGEnemy::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGEnemy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGEnemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGEnemy, 1767053660);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGEnemy(Z_Construct_UClass_AFGEnemy, &AFGEnemy::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
