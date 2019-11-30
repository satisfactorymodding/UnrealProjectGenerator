// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Equipment/FGEquipmentStunSpear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGEquipmentStunSpear() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentStunSpear_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipmentStunSpear();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGEquipment();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFGEquipmentStunSpear_OnHitTarget = FName(TEXT("OnHitTarget"));
	void AFGEquipmentStunSpear::OnHitTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentStunSpear_OnHitTarget),NULL);
	}
	static FName NAME_AFGEquipmentStunSpear_PlayStunEffects = FName(TEXT("PlayStunEffects"));
	void AFGEquipmentStunSpear::PlayStunEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentStunSpear_PlayStunEffects),NULL);
	}
	static FName NAME_AFGEquipmentStunSpear_Server_ShockEnemy = FName(TEXT("Server_ShockEnemy"));
	void AFGEquipmentStunSpear::Server_ShockEnemy()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGEquipmentStunSpear_Server_ShockEnemy),NULL);
	}
	void AFGEquipmentStunSpear::StaticRegisterNativesAFGEquipmentStunSpear()
	{
		UClass* Class = AFGEquipmentStunSpear::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoAttack", &AFGEquipmentStunSpear::execDoAttack },
			{ "GetShouldPlaySecondSwing", &AFGEquipmentStunSpear::execGetShouldPlaySecondSwing },
			{ "OnHitTarget", &AFGEquipmentStunSpear::execOnHitTarget },
			{ "Server_ShockEnemy", &AFGEquipmentStunSpear::execServer_ShockEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "Start the damage chain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentStunSpear, "DoAttack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics
	{
		struct FGEquipmentStunSpear_eventGetShouldPlaySecondSwing_Parms
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
	void Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGEquipmentStunSpear_eventGetShouldPlaySecondSwing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGEquipmentStunSpear_eventGetShouldPlaySecondSwing_Parms), &Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "Getter for mShouldPlaySecondSwing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentStunSpear, "GetShouldPlaySecondSwing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGEquipmentStunSpear_eventGetShouldPlaySecondSwing_Parms), Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hit Response" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentStunSpear, "OnHitTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "Called when the player clicks to \"fire\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentStunSpear, "PlayStunEffects", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "server notified of hit from client to verify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGEquipmentStunSpear, "Server_ShockEnemy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80280CC0, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGEquipmentStunSpear_NoRegister()
	{
		return AFGEquipmentStunSpear::StaticClass();
	}
	struct Z_Construct_UClass_AFGEquipmentStunSpear_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondSwingCooldDownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSecondSwingCooldDownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSecondSwingMaxTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSecondSwingMaxTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDamageTypeClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mDamageTypeClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCollisionComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGEquipmentStunSpear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGEquipment,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGEquipmentStunSpear_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGEquipmentStunSpear_DoAttack, "DoAttack" }, // 4071102305
		{ &Z_Construct_UFunction_AFGEquipmentStunSpear_GetShouldPlaySecondSwing, "GetShouldPlaySecondSwing" }, // 331943872
		{ &Z_Construct_UFunction_AFGEquipmentStunSpear_OnHitTarget, "OnHitTarget" }, // 1449477089
		{ &Z_Construct_UFunction_AFGEquipmentStunSpear_PlayStunEffects, "PlayStunEffects" }, // 4195103893
		{ &Z_Construct_UFunction_AFGEquipmentStunSpear_Server_ShockEnemy, "Server_ShockEnemy" }, // 4238492761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentStunSpear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/FGEquipmentStunSpear.h" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mAttackDistance_MetaData[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "How much inf ront of character the attack is" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mAttackDistance = { UE4CodeGen_Private::EPropertyClass::Float, "mAttackDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEquipmentStunSpear, mAttackDistance), METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mAttackDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mAttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamage_MetaData[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "Damage amount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamage = { UE4CodeGen_Private::EPropertyClass::Int, "mDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEquipmentStunSpear, mDamage), METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingCooldDownTime_MetaData[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "The max amount of time between the first swing that will still trigger the second swing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingCooldDownTime = { UE4CodeGen_Private::EPropertyClass::Float, "mSecondSwingCooldDownTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEquipmentStunSpear, mSecondSwingCooldDownTime), METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingCooldDownTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingCooldDownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingMaxTime_MetaData[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "The max amount of time between the first swing that will still trigger the second swing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingMaxTime = { UE4CodeGen_Private::EPropertyClass::Float, "mSecondSwingMaxTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AFGEquipmentStunSpear, mSecondSwingMaxTime), METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingMaxTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingMaxTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamageTypeClass_MetaData[] = {
		{ "Category", "Stun Spear" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "Damage type to use when hitting others" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamageTypeClass = { UE4CodeGen_Private::EPropertyClass::Class, "mDamageTypeClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000010001, 1, nullptr, STRUCT_OFFSET(AFGEquipmentStunSpear, mDamageTypeClass), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamageTypeClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamageTypeClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mCollisionComp_MetaData[] = {
		{ "Category", "Stun Spear" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/FGEquipmentStunSpear.h" },
		{ "ToolTip", "Sphere collision component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mCollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "mCollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFGEquipmentStunSpear, mCollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mCollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mCollisionComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGEquipmentStunSpear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mAttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingCooldDownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mSecondSwingMaxTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mDamageTypeClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGEquipmentStunSpear_Statics::NewProp_mCollisionComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGEquipmentStunSpear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGEquipmentStunSpear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGEquipmentStunSpear_Statics::ClassParams = {
		&AFGEquipmentStunSpear::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGEquipmentStunSpear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGEquipmentStunSpear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGEquipmentStunSpear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGEquipmentStunSpear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGEquipmentStunSpear, 440318245);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGEquipmentStunSpear(Z_Construct_UClass_AFGEquipmentStunSpear, &AFGEquipmentStunSpear::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGEquipmentStunSpear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGEquipmentStunSpear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
