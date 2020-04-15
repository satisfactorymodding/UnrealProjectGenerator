// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Resources/FGResourceDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGResourceDescriptor() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGResourceDescriptor();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGItemDescriptor();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UFGResourceDescriptor::StaticRegisterNativesUFGResourceDescriptor()
	{
		UClass* Class = UFGResourceDescriptor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeHandMined", &UFGResourceDescriptor::execCanBeHandMined },
			{ "GetCollectSpeedMultiplier", &UFGResourceDescriptor::execGetCollectSpeedMultiplier },
			{ "GetCompasTexture", &UFGResourceDescriptor::execGetCompasTexture },
			{ "GetDecalMaterial", &UFGResourceDescriptor::execGetDecalMaterial },
			{ "GetDecalSize", &UFGResourceDescriptor::execGetDecalSize },
			{ "GetDepositMaterial", &UFGResourceDescriptor::execGetDepositMaterial },
			{ "GetDepositMesh", &UFGResourceDescriptor::execGetDepositMesh },
			{ "GetDestroyedParticle", &UFGResourceDescriptor::execGetDestroyedParticle },
			{ "GetFactoryMiningParticle", &UFGResourceDescriptor::execGetFactoryMiningParticle },
			{ "GetManualMiningAudioName", &UFGResourceDescriptor::execGetManualMiningAudioName },
			{ "GetManualMiningParticle", &UFGResourceDescriptor::execGetManualMiningParticle },
			{ "GetPingColor", &UFGResourceDescriptor::execGetPingColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics
	{
		struct FGResourceDescriptor_eventCanBeHandMined_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
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
	void Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGResourceDescriptor_eventCanBeHandMined_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGResourceDescriptor_eventCanBeHandMined_Parms), &Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventCanBeHandMined_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "The static mesh we want the ResourceNode to use when it has this class selected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "CanBeHandMined", sizeof(FGResourceDescriptor_eventCanBeHandMined_Parms), Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics
	{
		struct FGResourceDescriptor_eventGetCollectSpeedMultiplier_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetCollectSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetCollectSpeedMultiplier_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "A multiplier for this resource to set if it is fast or slow to pick up. 1.0 = normal" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetCollectSpeedMultiplier", sizeof(FGResourceDescriptor_eventGetCollectSpeedMultiplier_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics
	{
		struct FGResourceDescriptor_eventGetCompasTexture_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetCompasTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetCompasTexture_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Texture to show in the compass when this resource has been scanned and found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetCompasTexture", sizeof(FGResourceDescriptor_eventGetCompasTexture_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics
	{
		struct FGResourceDescriptor_eventGetDecalMaterial_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			UMaterial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDecalMaterial_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Returns the decal this resource use (if any)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetDecalMaterial", sizeof(FGResourceDescriptor_eventGetDecalMaterial_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics
	{
		struct FGResourceDescriptor_eventGetDecalSize_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDecalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDecalSize_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "If we are using a decal, then this returns how big that decal should be" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetDecalSize", sizeof(FGResourceDescriptor_eventGetDecalSize_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics
	{
		struct FGResourceDescriptor_eventGetDepositMaterial_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			UMaterialInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDepositMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDepositMaterial_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Returns the material this resource deposit use (if any)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetDepositMaterial", sizeof(FGResourceDescriptor_eventGetDepositMaterial_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics
	{
		struct FGResourceDescriptor_eventGetDepositMesh_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			UStaticMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDepositMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDepositMesh_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "The static mesh we want the Resource Deposit to use when it has this class selected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetDepositMesh", sizeof(FGResourceDescriptor_eventGetDepositMesh_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics
	{
		struct FGResourceDescriptor_eventGetDestroyedParticle_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDestroyedParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetDestroyedParticle_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Gets particle for when node gets destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetDestroyedParticle", sizeof(FGResourceDescriptor_eventGetDestroyedParticle_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics
	{
		struct FGResourceDescriptor_eventGetFactoryMiningParticle_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetFactoryMiningParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetFactoryMiningParticle_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Gets particle for factory mining" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetFactoryMiningParticle", sizeof(FGResourceDescriptor_eventGetFactoryMiningParticle_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics
	{
		struct FGResourceDescriptor_eventGetManualMiningAudioName_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetManualMiningAudioName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetManualMiningAudioName_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Gets name used in audio event for mining manually" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetManualMiningAudioName", sizeof(FGResourceDescriptor_eventGetManualMiningAudioName_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics
	{
		struct FGResourceDescriptor_eventGetManualMiningParticle_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			UParticleSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetManualMiningParticle_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetManualMiningParticle_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Gets particle for manual mining" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetManualMiningParticle", sizeof(FGResourceDescriptor_eventGetManualMiningParticle_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics
	{
		struct FGResourceDescriptor_eventGetPingColor_Parms
		{
			TSubclassOf<UFGResourceDescriptor>  inClass;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetPingColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::NewProp_inClass = { "inClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGResourceDescriptor_eventGetPingColor_Parms, inClass), Z_Construct_UClass_UFGResourceDescriptor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::NewProp_inClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Descriptor|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "The color the ping should have for this material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGResourceDescriptor, nullptr, "GetPingColor", sizeof(FGResourceDescriptor_eventGetPingColor_Parms), Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGResourceDescriptor_NoRegister()
	{
		return UFGResourceDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UFGResourceDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mManualMiningAudioName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mManualMiningAudioName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDestroyedParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDestroyedParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFactoryMiningParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFactoryMiningParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mManualMiningParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mManualMiningParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCompassTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCompassTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCollectSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mCollectSpeedMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPingColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPingColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDecalSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDepositMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDepositMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDepositMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mDepositMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGResourceDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGItemDescriptor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGResourceDescriptor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGResourceDescriptor_CanBeHandMined, "CanBeHandMined" }, // 2536036105
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetCollectSpeedMultiplier, "GetCollectSpeedMultiplier" }, // 2348451231
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetCompasTexture, "GetCompasTexture" }, // 1683795935
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetDecalMaterial, "GetDecalMaterial" }, // 2013681619
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetDecalSize, "GetDecalSize" }, // 1154620606
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMaterial, "GetDepositMaterial" }, // 339947110
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetDepositMesh, "GetDepositMesh" }, // 2508367978
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetDestroyedParticle, "GetDestroyedParticle" }, // 3522595927
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetFactoryMiningParticle, "GetFactoryMiningParticle" }, // 2204010113
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningAudioName, "GetManualMiningAudioName" }, // 2442930396
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetManualMiningParticle, "GetManualMiningParticle" }, // 506450655
		{ &Z_Construct_UFunction_UFGResourceDescriptor_GetPingColor, "GetPingColor" }, // 1555725653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Icon Preview" },
		{ "IncludePath", "Resources/FGResourceDescriptor.h" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningAudioName_MetaData[] = {
		{ "Category", "Item|FX" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "name of sound to play when mining by hand" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningAudioName = { "mManualMiningAudioName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mManualMiningAudioName), METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningAudioName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningAudioName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDestroyedParticle_MetaData[] = {
		{ "Category", "Item|FX" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Particle to show when mining with machine" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDestroyedParticle = { "mDestroyedParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mDestroyedParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDestroyedParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDestroyedParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mFactoryMiningParticle_MetaData[] = {
		{ "Category", "Item|FX" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Particle to show when mining with machine" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mFactoryMiningParticle = { "mFactoryMiningParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mFactoryMiningParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mFactoryMiningParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mFactoryMiningParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningParticle_MetaData[] = {
		{ "Category", "Item|FX" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Particle to show when mining by hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningParticle = { "mManualMiningParticle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mManualMiningParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCompassTexture_MetaData[] = {
		{ "Category", "Item|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "Texture to show in the compass when this resource has been scanned and found." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCompassTexture = { "mCompassTexture", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mCompassTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCompassTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCompassTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCollectSpeedMultiplier_MetaData[] = {
		{ "Category", "Item|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "A multiplier for this resource to set if it is fast or slow to pick up. 1.0 = normal" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCollectSpeedMultiplier = { "mCollectSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mCollectSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCollectSpeedMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCollectSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mPingColor_MetaData[] = {
		{ "Category", "Item|Resource" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "The color the ping should have for this material" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mPingColor = { "mPingColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mPingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mPingColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mPingColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalSize_MetaData[] = {
		{ "Category", "Item|World" },
		{ "EditCondition", "mUseMaterialDecal" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "How big will the decal on the ground be (and the collision for it) if we have mUseMaterialDecal enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalSize = { "mDecalSize", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mDecalSize), METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalMaterial_MetaData[] = {
		{ "Category", "Item|World" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "The decal this resource use (if any)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalMaterial = { "mDecalMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mDecalMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMaterial_MetaData[] = {
		{ "Category", "Item|World" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "The material this resource deposit use (if any)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMaterial = { "mDepositMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mDepositMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMesh_MetaData[] = {
		{ "Category", "Item|World" },
		{ "EditCondition", "!mUseMaterialDecal" },
		{ "ModuleRelativePath", "Public/Resources/FGResourceDescriptor.h" },
		{ "ToolTip", "The static mesh we want the Resource Deposit to use when it has this class selected" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMesh = { "mDepositMesh", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGResourceDescriptor, mDepositMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGResourceDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningAudioName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDestroyedParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mFactoryMiningParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mManualMiningParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCompassTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mCollectSpeedMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mPingColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGResourceDescriptor_Statics::NewProp_mDepositMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGResourceDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGResourceDescriptor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGResourceDescriptor_Statics::ClassParams = {
		&UFGResourceDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGResourceDescriptor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGResourceDescriptor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGResourceDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGResourceDescriptor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGResourceDescriptor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGResourceDescriptor, 3471536287);
	template<> FACTORYGAME_API UClass* StaticClass<UFGResourceDescriptor>()
	{
		return UFGResourceDescriptor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGResourceDescriptor(Z_Construct_UClass_UFGResourceDescriptor, &UFGResourceDescriptor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGResourceDescriptor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGResourceDescriptor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
