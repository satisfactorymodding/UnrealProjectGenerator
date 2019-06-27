// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGCombatFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCombatFunctionLibrary() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCombatFunctionLibrary_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCombatFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGDamageType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAttack_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGAggroTargetInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UFGCombatFunctionLibrary::StaticRegisterNativesUFGCombatFunctionLibrary()
	{
		UClass* Class = UFGCombatFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoRadialDamageWithinCollision", &UFGCombatFunctionLibrary::execDoRadialDamageWithinCollision },
			{ "IsWithinAttackRange", &UFGCombatFunctionLibrary::execIsWithinAttackRange },
			{ "IsWithinRange", &UFGCombatFunctionLibrary::execIsWithinRange },
			{ "TryGetCharacterFromDamageCauser", &UFGCombatFunctionLibrary::execTryGetCharacterFromDamageCauser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics
	{
		struct FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms
		{
			AController* controller;
			UShapeComponent* collisionShape;
			FVector centerLocation;
			TSubclassOf<UFGDamageType>  damageType;
			float damage;
			float radius;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_damageType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_centerLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collisionShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collisionShape;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_radius = { UE4CodeGen_Private::EPropertyClass::Float, "radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms, radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_damage = { UE4CodeGen_Private::EPropertyClass::Float, "damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_damageType = { UE4CodeGen_Private::EPropertyClass::Class, "damageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms, damageType), Z_Construct_UClass_UFGDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_centerLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "centerLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms, centerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_collisionShape_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_collisionShape = { UE4CodeGen_Private::EPropertyClass::Object, "collisionShape", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms, collisionShape), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_collisionShape_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_collisionShape_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_controller = { UE4CodeGen_Private::EPropertyClass::Object, "controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms, controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_damageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_centerLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_collisionShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::NewProp_controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGCombatFunctionLibrary.h" },
		{ "ToolTip", "Uses a shape to do damage within the shape\n@param controller - controller doing the damage\n@param collisionShape - shape we want to check for overlapping actors\n@param centerLocation - the location that damage origins from\n@param damageType - damagetype for the damage\n@param damage - how much damage\n@param radius - radial reach of the damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCombatFunctionLibrary, "DoRadialDamageWithinCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(FGCombatFunctionLibrary_eventDoRadialDamageWithinCollision_Parms), Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics
	{
		struct FGCombatFunctionLibrary_eventIsWithinAttackRange_Parms
		{
			APawn* attacker;
			TScriptInterface<IFGAggroTargetInterface> victim;
			TSubclassOf<UFGAttack>  attackClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_attackClass;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_victim;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCombatFunctionLibrary_eventIsWithinAttackRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCombatFunctionLibrary_eventIsWithinAttackRange_Parms), &Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_attackClass = { UE4CodeGen_Private::EPropertyClass::Class, "attackClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventIsWithinAttackRange_Parms, attackClass), Z_Construct_UClass_UFGAttack_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_victim = { UE4CodeGen_Private::EPropertyClass::Interface, "victim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventIsWithinAttackRange_Parms, victim), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_attacker = { UE4CodeGen_Private::EPropertyClass::Object, "attacker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventIsWithinAttackRange_Parms, attacker), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_attackClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_victim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "FGCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if the aggro target is within attack range of a attack\n@param aggroTarget - the aggro target we want to check if they are within our attack range\n@param attackClass - the attack that we want to check if we are within attack range for\n@return true if they can be attacked and hit from our pawns location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCombatFunctionLibrary, "IsWithinAttackRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGCombatFunctionLibrary_eventIsWithinAttackRange_Parms), Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics
	{
		struct FGCombatFunctionLibrary_eventIsWithinRange_Parms
		{
			APawn* attacker;
			TScriptInterface<IFGAggroTargetInterface> victim;
			float range;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_range;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_victim;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_attacker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGCombatFunctionLibrary_eventIsWithinRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGCombatFunctionLibrary_eventIsWithinRange_Parms), &Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_range = { UE4CodeGen_Private::EPropertyClass::Float, "range", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventIsWithinRange_Parms, range), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_victim = { UE4CodeGen_Private::EPropertyClass::Interface, "victim", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventIsWithinRange_Parms, victim), Z_Construct_UClass_UFGAggroTargetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_attacker = { UE4CodeGen_Private::EPropertyClass::Object, "attacker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventIsWithinRange_Parms, attacker), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_victim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::NewProp_attacker,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "FGCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if the aggro target is within specified range\n@param aggroTarget - the aggro target we want to check if they are within our  range\n@param range - the range that we want to check if we are within\n@return true if they can be reached from this range" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCombatFunctionLibrary, "IsWithinRange", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGCombatFunctionLibrary_eventIsWithinRange_Parms), Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics
	{
		struct FGCombatFunctionLibrary_eventTryGetCharacterFromDamageCauser_Parms
		{
			AActor* damageCauser;
			AFGCharacterBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_damageCauser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventTryGetCharacterFromDamageCauser_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::NewProp_damageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "damageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCombatFunctionLibrary_eventTryGetCharacterFromDamageCauser_Parms, damageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::NewProp_damageCauser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "FGCombatFunctionLibrary.h" },
		{ "ToolTip", "Try get a pawn from a damage causer in take damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCombatFunctionLibrary, "TryGetCharacterFromDamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FGCombatFunctionLibrary_eventTryGetCharacterFromDamageCauser_Parms), Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCombatFunctionLibrary_NoRegister()
	{
		return UFGCombatFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFGCombatFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCombatFunctionLibrary_DoRadialDamageWithinCollision, "DoRadialDamageWithinCollision" }, // 709760535
		{ &Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinAttackRange, "IsWithinAttackRange" }, // 3776542952
		{ &Z_Construct_UFunction_UFGCombatFunctionLibrary_IsWithinRange, "IsWithinRange" }, // 1972183324
		{ &Z_Construct_UFunction_UFGCombatFunctionLibrary_TryGetCharacterFromDamageCauser, "TryGetCharacterFromDamageCauser" }, // 1712015008
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGCombatFunctionLibrary.h" },
		{ "ModuleRelativePath", "FGCombatFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCombatFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::ClassParams = {
		&UFGCombatFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCombatFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCombatFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCombatFunctionLibrary, 2837774257);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCombatFunctionLibrary(Z_Construct_UClass_UFGCombatFunctionLibrary, &UFGCombatFunctionLibrary::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCombatFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCombatFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
