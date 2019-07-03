// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGCharacterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCharacterAnimInstance() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterAnimInstance_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCharacterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterBase_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FName NAME_UFGCharacterAnimInstance_OnAnyDamageTaken = FName(TEXT("OnAnyDamageTaken"));
	void UFGCharacterAnimInstance::OnAnyDamageTaken()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGCharacterAnimInstance_OnAnyDamageTaken),NULL);
	}
	static FName NAME_UFGCharacterAnimInstance_OnPointDamageTaken = FName(TEXT("OnPointDamageTaken"));
	void UFGCharacterAnimInstance::OnPointDamageTaken(FVector shootDIrection)
	{
		FGCharacterAnimInstance_eventOnPointDamageTaken_Parms Parms;
		Parms.shootDIrection=shootDIrection;
		ProcessEvent(FindFunctionChecked(NAME_UFGCharacterAnimInstance_OnPointDamageTaken),&Parms);
	}
	static FName NAME_UFGCharacterAnimInstance_OnRadialDamageTaken = FName(TEXT("OnRadialDamageTaken"));
	void UFGCharacterAnimInstance::OnRadialDamageTaken()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGCharacterAnimInstance_OnRadialDamageTaken),NULL);
	}
	void UFGCharacterAnimInstance::StaticRegisterNativesUFGCharacterAnimInstance()
	{
		UClass* Class = UFGCharacterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccelerationVectorLength", &UFGCharacterAnimInstance::execGetAccelerationVectorLength },
			{ "GetCachedCharacter", &UFGCharacterAnimInstance::execGetCachedCharacter },
			{ "GetDesiredRunLeanRotation", &UFGCharacterAnimInstance::execGetDesiredRunLeanRotation },
			{ "GetDesiredWalkRotation", &UFGCharacterAnimInstance::execGetDesiredWalkRotation },
			{ "GetVelocity", &UFGCharacterAnimInstance::execGetVelocity },
			{ "GetVelocityDirection", &UFGCharacterAnimInstance::execGetVelocityDirection },
			{ "OnAnyDamageTaken", &UFGCharacterAnimInstance::execOnAnyDamageTaken },
			{ "OnPointDamageTaken", &UFGCharacterAnimInstance::execOnPointDamageTaken },
			{ "OnRadialDamageTaken", &UFGCharacterAnimInstance::execOnRadialDamageTaken },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics
	{
		struct FGCharacterAnimInstance_eventGetAccelerationVectorLength_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCharacterAnimInstance_eventGetAccelerationVectorLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Returns velocitys direction in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "GetAccelerationVectorLength", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGCharacterAnimInstance_eventGetAccelerationVectorLength_Parms), Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics
	{
		struct FGCharacterAnimInstance_eventGetCachedCharacter_Parms
		{
			AFGCharacterBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCharacterAnimInstance_eventGetCachedCharacter_Parms, ReturnValue), Z_Construct_UClass_AFGCharacterBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "cached character of this animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "GetCachedCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGCharacterAnimInstance_eventGetCachedCharacter_Parms), Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics
	{
		struct FGCharacterAnimInstance_eventGetDesiredRunLeanRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCharacterAnimInstance_eventGetDesiredRunLeanRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Return desired character rotation based on floor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "GetDesiredRunLeanRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(FGCharacterAnimInstance_eventGetDesiredRunLeanRotation_Parms), Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics
	{
		struct FGCharacterAnimInstance_eventGetDesiredWalkRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCharacterAnimInstance_eventGetDesiredWalkRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Return desired character rotation based on floor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "GetDesiredWalkRotation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(FGCharacterAnimInstance_eventGetDesiredWalkRotation_Parms), Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics
	{
		struct FGCharacterAnimInstance_eventGetVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCharacterAnimInstance_eventGetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Returns velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "GetVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(FGCharacterAnimInstance_eventGetVelocity_Parms), Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics
	{
		struct FGCharacterAnimInstance_eventGetVelocityDirection_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCharacterAnimInstance_eventGetVelocityDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Returns velocitys direction in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "GetVelocityDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGCharacterAnimInstance_eventGetVelocityDirection_Parms), Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Our pawn has taken any damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "OnAnyDamageTaken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shootDIrection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::NewProp_shootDIrection = { UE4CodeGen_Private::EPropertyClass::Struct, "shootDIrection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCharacterAnimInstance_eventOnPointDamageTaken_Parms, shootDIrection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::NewProp_shootDIrection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Our pawn has taken point damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "OnPointDamageTaken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(FGCharacterAnimInstance_eventOnPointDamageTaken_Parms), Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Our pawn has taken radial damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCharacterAnimInstance, "OnRadialDamageTaken", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCharacterAnimInstance_NoRegister()
	{
		return UFGCharacterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFGCharacterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreLandCollisionChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mPreLandCollisionChannels;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mPreLandCollisionChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreLandVelocityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPreLandVelocityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPreLand_MetaData[];
#endif
		static void NewProp_mPreLand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mPreLand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUsePreLand_MetaData[];
#endif
		static void NewProp_mUsePreLand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUsePreLand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGetDeltaPitchRotation_MetaData[];
#endif
		static void NewProp_mGetDeltaPitchRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mGetDeltaPitchRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAimPitchInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAimPitchInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAimPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAimPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mYawAimMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mYawAimMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mYawAimMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mYawAimMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCanUpdateActorRotationReference_MetaData[];
#endif
		static void NewProp_mCanUpdateActorRotationReference_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCanUpdateActorRotationReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseTurnInPlace_MetaData[];
#endif
		static void NewProp_mUseTurnInPlace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseTurnInPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTurnInPlaceDefaultTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTurnInPlaceDefaultTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAllowedToTurn_MetaData[];
#endif
		static void NewProp_mAllowedToTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mAllowedToTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRootRotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mRootRotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mYawRotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mYawRotationInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mYawRotationStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mYawRotationStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRotationLastTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mActorRotationLastTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAimYawReductionCurrentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAimYawReductionCurrentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAimYawReductionStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAimYawReductionStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRotationForwardVectorReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mActorRotationForwardVectorReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRotationForwardVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mActorRotationForwardVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTurnRightCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTurnRightCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTurnLeftCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTurnLeftCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTurnInPlaceComplete_MetaData[];
#endif
		static void NewProp_mTurnInPlaceComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mTurnInPlaceComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTurnInPlaceRight_MetaData[];
#endif
		static void NewProp_mTurnInPlaceRight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mTurnInPlaceRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTurnInPlaceLeft_MetaData[];
#endif
		static void NewProp_mTurnInPlaceLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mTurnInPlaceLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRootRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mRootRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAimYawInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAimYawInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAimYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAimYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mYawDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mYawDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsAccelerating_MetaData[];
#endif
		static void NewProp_mIsAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsStandingStill_MetaData[];
#endif
		static void NewProp_mIsStandingStill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsStandingStill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWalkRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mWalkRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeedZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeedZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeedLastFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeedLastFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedDefaultWalkMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mCachedDefaultWalkMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedMovementMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mCachedMovementMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCachedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCachedCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mActorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAccelerationLocalNormalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mAccelerationLocalNormalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVelocityLocalNormalized_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mVelocityLocalNormalized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAccelerationVectorLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mAccelerationVectorLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCharacterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCharacterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_GetAccelerationVectorLength, "GetAccelerationVectorLength" }, // 2785065776
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_GetCachedCharacter, "GetCachedCharacter" }, // 367885618
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredRunLeanRotation, "GetDesiredRunLeanRotation" }, // 218760500
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_GetDesiredWalkRotation, "GetDesiredWalkRotation" }, // 4110316868
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocity, "GetVelocity" }, // 2033753561
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_GetVelocityDirection, "GetVelocityDirection" }, // 1252621773
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_OnAnyDamageTaken, "OnAnyDamageTaken" }, // 228278497
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_OnPointDamageTaken, "OnPointDamageTaken" }, // 216212729
		{ &Z_Construct_UFunction_UFGCharacterAnimInstance_OnRadialDamageTaken, "OnRadialDamageTaken" }, // 3019289840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "FGCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Common base class for player and enemies so we can add functionality for hit animations and such" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandCollisionChannels_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "What to collide against in pre land" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandCollisionChannels = { UE4CodeGen_Private::EPropertyClass::Array, "mPreLandCollisionChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mPreLandCollisionChannels), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandCollisionChannels_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandCollisionChannels_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandCollisionChannels_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "mPreLandCollisionChannels", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandVelocityMultiplier_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Multiplier for velocity that determines how long the preland trace is" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandVelocityMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "mPreLandVelocityMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mPreLandVelocityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandVelocityMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandVelocityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLand_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Pre land value" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLand_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mPreLand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLand = { UE4CodeGen_Private::EPropertyClass::Bool, "mPreLand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUsePreLand_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Should we do pre land calculations?" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUsePreLand_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mUsePreLand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUsePreLand = { UE4CodeGen_Private::EPropertyClass::Bool, "mUsePreLand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUsePreLand_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUsePreLand_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUsePreLand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mGetDeltaPitchRotation_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Used in the 1p anim of the player only" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mGetDeltaPitchRotation_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mGetDeltaPitchRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mGetDeltaPitchRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "mGetDeltaPitchRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mGetDeltaPitchRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mGetDeltaPitchRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mGetDeltaPitchRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitchInterpSpeed_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Interpspeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitchInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mAimPitchInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAimPitchInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitchInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitchInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitch_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Look up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitch = { UE4CodeGen_Private::EPropertyClass::Float, "mAimPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAimPitch), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMinValue_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "when should we turn to the left" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMinValue = { UE4CodeGen_Private::EPropertyClass::Float, "mYawAimMinValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mYawAimMinValue), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMinValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMaxValue_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "When should we turn to the right" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMaxValue = { UE4CodeGen_Private::EPropertyClass::Float, "mYawAimMaxValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mYawAimMaxValue), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMaxValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCanUpdateActorRotationReference_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "should we run the turn in place code" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCanUpdateActorRotationReference_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mCanUpdateActorRotationReference = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCanUpdateActorRotationReference = { UE4CodeGen_Private::EPropertyClass::Bool, "mCanUpdateActorRotationReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCanUpdateActorRotationReference_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCanUpdateActorRotationReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCanUpdateActorRotationReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUseTurnInPlace_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "should we run the turn in place code" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUseTurnInPlace_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mUseTurnInPlace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUseTurnInPlace = { UE4CodeGen_Private::EPropertyClass::Bool, "mUseTurnInPlace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUseTurnInPlace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUseTurnInPlace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUseTurnInPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceDefaultTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "How long the turn should take" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceDefaultTime = { UE4CodeGen_Private::EPropertyClass::Float, "mTurnInPlaceDefaultTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mTurnInPlaceDefaultTime), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceDefaultTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceDefaultTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAllowedToTurn_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "reset variable for turn stuff" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAllowedToTurn_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mAllowedToTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAllowedToTurn = { UE4CodeGen_Private::EPropertyClass::Bool, "mAllowedToTurn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAllowedToTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAllowedToTurn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAllowedToTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotationInterpSpeed_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Configable interp speed for root rotation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotationInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mRootRotationInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mRootRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotationInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationInterpSpeed_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Editable for Bigges sake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mYawRotationInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mYawRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationStrength_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Editable for Bigges sake" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationStrength = { UE4CodeGen_Private::EPropertyClass::Float, "mYawRotationStrength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mYawRotationStrength), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationLastTick_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Last Rotation saved" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationLastTick = { UE4CodeGen_Private::EPropertyClass::Struct, "mActorRotationLastTick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mActorRotationLastTick), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationLastTick_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationLastTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionCurrentTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "I don't even know anymore, converting BP stuff" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionCurrentTime = { UE4CodeGen_Private::EPropertyClass::Float, "mAimYawReductionCurrentTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAimYawReductionCurrentTime), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionCurrentTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionCurrentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionStartTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "I don't even know anymore, converting BP stuff" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "mAimYawReductionStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAimYawReductionStartTime), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVectorReference_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "I don't even know anymore, converting BP stuff" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVectorReference = { UE4CodeGen_Private::EPropertyClass::Struct, "mActorRotationForwardVectorReference", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mActorRotationForwardVectorReference), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVectorReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVectorReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVector_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "I don't even know anymore, converting BP stuff" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVector = { UE4CodeGen_Private::EPropertyClass::Struct, "mActorRotationForwardVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mActorRotationForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVector_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnRightCurve_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Rotation values when turning right" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnRightCurve = { UE4CodeGen_Private::EPropertyClass::Object, "mTurnRightCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mTurnRightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnRightCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnRightCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnLeftCurve_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Rotation values when turning left" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnLeftCurve = { UE4CodeGen_Private::EPropertyClass::Object, "mTurnLeftCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mTurnLeftCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnLeftCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnLeftCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceComplete_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "are we done turning?" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceComplete_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mTurnInPlaceComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceComplete = { UE4CodeGen_Private::EPropertyClass::Bool, "mTurnInPlaceComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceRight_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "or right" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceRight_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mTurnInPlaceRight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceRight = { UE4CodeGen_Private::EPropertyClass::Bool, "mTurnInPlaceRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceLeft_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "should we turn left" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceLeft_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mTurnInPlaceLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceLeft = { UE4CodeGen_Private::EPropertyClass::Bool, "mTurnInPlaceLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotation_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Rotation of root component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "mRootRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mRootRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawInterpSpeed_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Configable interpspeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mAimYawInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010001, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAimYawInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYaw_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Where do we want to aim" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYaw = { UE4CodeGen_Private::EPropertyClass::Float, "mAimYaw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAimYaw), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYaw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawDelta_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Used for lean/run calculations" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawDelta = { UE4CodeGen_Private::EPropertyClass::Float, "mYawDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mYawDelta), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawDelta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsAccelerating_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Did we begin movement" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsAccelerating_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mIsAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsAccelerating = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsAccelerating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsAccelerating_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsStandingStill_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Are we standing still" },
	};
#endif
	void Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsStandingStill_SetBit(void* Obj)
	{
		((UFGCharacterAnimInstance*)Obj)->mIsStandingStill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsStandingStill = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsStandingStill", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFGCharacterAnimInstance), &Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsStandingStill_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsStandingStill_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsStandingStill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mWalkRotation_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Walk rotation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mWalkRotation = { UE4CodeGen_Private::EPropertyClass::Float, "mWalkRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mWalkRotation), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mWalkRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mWalkRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedZ_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Speed in movement Z" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedZ = { UE4CodeGen_Private::EPropertyClass::Float, "mSpeedZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mSpeedZ), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedZ_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedLastFrame_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Saved speed from last time we checked" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedLastFrame = { UE4CodeGen_Private::EPropertyClass::Float, "mSpeedLastFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mSpeedLastFrame), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedLastFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedLastFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeed_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Speed in movement" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "mSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mSpeed), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedDefaultWalkMode_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Cached default value of movement mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedDefaultWalkMode = { UE4CodeGen_Private::EPropertyClass::Byte, "mCachedDefaultWalkMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mCachedDefaultWalkMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedDefaultWalkMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedDefaultWalkMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedMovementMode_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Caching movement mode" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedMovementMode = { UE4CodeGen_Private::EPropertyClass::Byte, "mCachedMovementMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mCachedMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedMovementMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedMovementMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedCharacter_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Caching the character one" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "mCachedCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mCachedCharacter), Z_Construct_UClass_AFGCharacterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorTransform_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Velocity normalized in local space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "mActorTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationLocalNormalized_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Acceleration normalized in local space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationLocalNormalized = { UE4CodeGen_Private::EPropertyClass::Struct, "mAccelerationLocalNormalized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAccelerationLocalNormalized), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationLocalNormalized_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationLocalNormalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocityLocalNormalized_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Velocity normalized in local space" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocityLocalNormalized = { UE4CodeGen_Private::EPropertyClass::Struct, "mVelocityLocalNormalized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mVelocityLocalNormalized), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocityLocalNormalized_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocityLocalNormalized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocity_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "Velocity" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "mVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationVectorLength_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "acceleration length normalized" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationVectorLength = { UE4CodeGen_Private::EPropertyClass::Float, "mAccelerationVectorLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mAccelerationVectorLength), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationVectorLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationVectorLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mDirection_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "FGCharacterAnimInstance.h" },
		{ "ToolTip", "in degrees" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mDirection = { UE4CodeGen_Private::EPropertyClass::Float, "mDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UFGCharacterAnimInstance, mDirection), METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCharacterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandCollisionChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandCollisionChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLandVelocityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mPreLand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUsePreLand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mGetDeltaPitchRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitchInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawAimMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCanUpdateActorRotationReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mUseTurnInPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceDefaultTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAllowedToTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawRotationStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationLastTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionCurrentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawReductionStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVectorReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorRotationForwardVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnRightCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnLeftCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mTurnInPlaceLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mRootRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYawInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAimYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mYawDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mIsStandingStill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mWalkRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeedLastFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedDefaultWalkMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedMovementMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mCachedCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mActorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationLocalNormalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocityLocalNormalized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mAccelerationVectorLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCharacterAnimInstance_Statics::NewProp_mDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCharacterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCharacterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCharacterAnimInstance_Statics::ClassParams = {
		&UFGCharacterAnimInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGCharacterAnimInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCharacterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCharacterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCharacterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCharacterAnimInstance, 4267619933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCharacterAnimInstance(Z_Construct_UClass_UFGCharacterAnimInstance, &UFGCharacterAnimInstance::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCharacterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCharacterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
