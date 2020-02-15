// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGActorRepresentationManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGActorRepresentationManager() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERepresentationType();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature();
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGActorRepresentationManager_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGActorRepresentationManager();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGSubsystem();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECompassViewDistance();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms
		{
			ERepresentationType representationType;
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_representationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_representationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType = { "representationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActorRepresentationTypeFilteredOnCompass__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms
		{
			ERepresentationType representationType;
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_representationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_representationType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType = { "representationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActorRepresentationTypeFilteredOnMap__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms
		{
			UFGActorRepresentation* updatedRepresentation;
			bool newShouldShowOnMap;
		};
		static void NewProp_newShouldShowOnMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newShouldShowOnMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_updatedRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_newShouldShowOnMap_SetBit(void* Obj)
	{
		((_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms*)Obj)->newShouldShowOnMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_newShouldShowOnMap = { "newShouldShowOnMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_newShouldShowOnMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_updatedRepresentation = { "updatedRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms, updatedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_newShouldShowOnMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_updatedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActorRepresentationUpdatedMapShow__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms
		{
			UFGActorRepresentation* updatedRepresentation;
			bool newShouldShowInCompass;
		};
		static void NewProp_newShouldShowInCompass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newShouldShowInCompass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_updatedRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_newShouldShowInCompass_SetBit(void* Obj)
	{
		((_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms*)Obj)->newShouldShowInCompass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_newShouldShowInCompass = { "newShouldShowInCompass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_newShouldShowInCompass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_updatedRepresentation = { "updatedRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms, updatedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_newShouldShowInCompass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_updatedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActorRepresentationUpdatedCompassShow__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActorRepresentationUpdated_Parms
		{
			UFGActorRepresentation* updatedRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_updatedRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::NewProp_updatedRepresentation = { "updatedRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationUpdated_Parms, updatedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::NewProp_updatedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActorRepresentationUpdated__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActorRepresentationRemoved_Parms
		{
			UFGActorRepresentation* removedRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_removedRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::NewProp_removedRepresentation = { "removedRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationRemoved_Parms, removedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::NewProp_removedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActorRepresentationRemoved__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActorRepresentationRemoved_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnActorRepresentationAdded_Parms
		{
			UFGActorRepresentation* newRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::NewProp_newRepresentation = { "newRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationAdded_Parms, newRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::NewProp_newRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnActorRepresentationAdded__DelegateSignature", sizeof(_Script_FactoryGame_eventOnActorRepresentationAdded_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AFGActorRepresentationManager::StaticRegisterNativesAFGActorRepresentationManager()
	{
		UClass* Class = AFGActorRepresentationManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAndAddNewRepresentation", &AFGActorRepresentationManager::execCreateAndAddNewRepresentation },
			{ "CreateAndAddNewRepresentationNoActor", &AFGActorRepresentationManager::execCreateAndAddNewRepresentationNoActor },
			{ "Get", &AFGActorRepresentationManager::execGet },
			{ "GetAllActorRepresentations", &AFGActorRepresentationManager::execGetAllActorRepresentations },
			{ "GetCompassRepresentationTypeFilter", &AFGActorRepresentationManager::execGetCompassRepresentationTypeFilter },
			{ "GetDistanceValueFromCompassViewDistance", &AFGActorRepresentationManager::execGetDistanceValueFromCompassViewDistance },
			{ "GetMapRepresentationTypeFilter", &AFGActorRepresentationManager::execGetMapRepresentationTypeFilter },
			{ "OnRep_ReplicatedRepresentations", &AFGActorRepresentationManager::execOnRep_ReplicatedRepresentations },
			{ "RemoveRepresentationOfActor", &AFGActorRepresentationManager::execRemoveRepresentationOfActor },
			{ "SetCompassRepresentationTypeFilter", &AFGActorRepresentationManager::execSetCompassRepresentationTypeFilter },
			{ "SetCompassViewDistanceForActorRepresentation", &AFGActorRepresentationManager::execSetCompassViewDistanceForActorRepresentation },
			{ "SetMapRepresentationTypeFilter", &AFGActorRepresentationManager::execSetMapRepresentationTypeFilter },
			{ "UpdateRepresentation", &AFGActorRepresentationManager::execUpdateRepresentation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics
	{
		struct FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms
		{
			AActor* realActor;
			bool isLocal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_isLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_realActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms*)Obj)->isLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal = { "isLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_realActor = { "realActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms, realActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_realActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "CPP_Default_isLocal", "false" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Creates a new actor representation. Must be called on server for representation that aren't local to appear for all players." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "CreateAndAddNewRepresentation", sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics
	{
		struct FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms
		{
			FVector location;
			UTexture2D* compassTexture;
			FLinearColor compassColor;
			float lifeTime;
			bool shouldShowInCompass;
			bool shouldShowOnMap;
			ERepresentationType representationType;
			bool isLocal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_isLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocal;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_representationType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_representationType_Underlying;
		static void NewProp_shouldShowOnMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldShowOnMap;
		static void NewProp_shouldShowInCompass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldShowInCompass;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_compassColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_compassTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_isLocal_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms*)Obj)->isLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_isLocal = { "isLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_isLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_representationType = { "representationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_representationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowOnMap_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms*)Obj)->shouldShowOnMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowOnMap = { "shouldShowOnMap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowOnMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowInCompass_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms*)Obj)->shouldShowInCompass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowInCompass = { "shouldShowInCompass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowInCompass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_lifeTime = { "lifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, lifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_compassColor = { "compassColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, compassColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_compassTexture = { "compassTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, compassTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_isLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_representationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowOnMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowInCompass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_lifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_compassColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_compassTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "CPP_Default_isLocal", "true" },
		{ "CPP_Default_representationType", "RT_Default" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Creates a new representation for something that doesn't have an actor. Must be called on server for representations that aren't local to appear for all players." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "CreateAndAddNewRepresentationNoActor", sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics
	{
		struct FGActorRepresentationManager_eventGet_Parms
		{
			UObject* worldContext;
			AFGActorRepresentationManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGActorRepresentationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetActorRepresentationManager" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Get the representation manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "Get", sizeof(FGActorRepresentationManager_eventGet_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics
	{
		struct FGActorRepresentationManager_eventGetAllActorRepresentations_Parms
		{
			TArray<UFGActorRepresentation*> out_AllRepresentations;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_AllRepresentations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_AllRepresentations_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations = { "out_AllRepresentations", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGetAllActorRepresentations_Parms, out_AllRepresentations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations_Inner = { "out_AllRepresentations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Gathers all representations and returns them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "GetAllActorRepresentations", sizeof(FGActorRepresentationManager_eventGetAllActorRepresentations_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics
	{
		struct FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms
		{
			APawn* owningPlayerPawn;
			ERepresentationType type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningPlayerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { "owningPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Returns true if representation type is visible on compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "GetCompassRepresentationTypeFilter", sizeof(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics
	{
		struct FGActorRepresentationManager_eventGetDistanceValueFromCompassViewDistance_Parms
		{
			ECompassViewDistance compassViewDistance;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_compassViewDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_compassViewDistance_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGetDistanceValueFromCompassViewDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::NewProp_compassViewDistance = { "compassViewDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGetDistanceValueFromCompassViewDistance_Parms, compassViewDistance), Z_Construct_UEnum_FactoryGame_ECompassViewDistance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::NewProp_compassViewDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::NewProp_compassViewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::NewProp_compassViewDistance_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "GetDistanceValueFromCompassViewDistance", sizeof(FGActorRepresentationManager_eventGetDistanceValueFromCompassViewDistance_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics
	{
		struct FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms
		{
			APawn* owningPlayerPawn;
			ERepresentationType type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningPlayerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { "owningPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Returns true if representation type is visible on map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "GetMapRepresentationTypeFilter", sizeof(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "OnRep_ReplicatedRepresentations", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics
	{
		struct FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms
		{
			AActor* realActor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_realActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_realActor = { "realActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms, realActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_realActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Removes the representation of an actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "RemoveRepresentationOfActor", sizeof(FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics
	{
		struct FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms
		{
			APawn* owningPlayerPawn;
			ERepresentationType type;
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningPlayerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { "owningPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Set if representation type should be visible on compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "SetCompassRepresentationTypeFilter", sizeof(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics
	{
		struct FGActorRepresentationManager_eventSetCompassViewDistanceForActorRepresentation_Parms
		{
			UFGActorRepresentation* actorRepresentation;
			ECompassViewDistance viewDistance;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_viewDistance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_viewDistance_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::NewProp_viewDistance = { "viewDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventSetCompassViewDistanceForActorRepresentation_Parms, viewDistance), Z_Construct_UEnum_FactoryGame_ECompassViewDistance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::NewProp_viewDistance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::NewProp_actorRepresentation = { "actorRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventSetCompassViewDistanceForActorRepresentation_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::NewProp_viewDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::NewProp_viewDistance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Sets the actor representations view distance on compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "SetCompassViewDistanceForActorRepresentation", sizeof(FGActorRepresentationManager_eventSetCompassViewDistanceForActorRepresentation_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics
	{
		struct FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms
		{
			APawn* owningPlayerPawn;
			ERepresentationType type;
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owningPlayerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { "owningPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Set if representation type should be visible on map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "SetMapRepresentationTypeFilter", sizeof(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics
	{
		struct FGActorRepresentationManager_eventUpdateRepresentation_Parms
		{
			AActor* realActor;
			bool isLocal;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_isLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_realActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventUpdateRepresentation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventUpdateRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventUpdateRepresentation_Parms*)Obj)->isLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal = { "isLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGActorRepresentationManager_eventUpdateRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_realActor = { "realActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGActorRepresentationManager_eventUpdateRepresentation_Parms, realActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_realActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "CPP_Default_isLocal", "false" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, nullptr, "UpdateRepresentation", sizeof(FGActorRepresentationManager_eventUpdateRepresentation_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGActorRepresentationManager_NoRegister()
	{
		return AFGActorRepresentationManager::StaticClass();
	}
	struct Z_Construct_UClass_AFGActorRepresentationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLocalRepresentations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mLocalRepresentations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLocalRepresentations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClientReplicatedRepresentations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mClientReplicatedRepresentations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClientReplicatedRepresentations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mReplicatedRepresentations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mReplicatedRepresentations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mReplicatedRepresentations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActorRepresentationTypeFilteredOnCompass_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActorRepresentationTypeFilteredOnCompass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActorRepresentationTypeFilteredOnMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActorRepresentationTypeFilteredOnMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActorRepresentationUpdatedMapShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActorRepresentationUpdatedMapShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActorRepresentationUpdatedCompassShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActorRepresentationUpdatedCompassShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActorRepresentationUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActorRepresentationUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActorRepresentationRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActorRepresentationRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnActorRepresentationAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnActorRepresentationAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGActorRepresentationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGActorRepresentationManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation, "CreateAndAddNewRepresentation" }, // 3504261590
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor, "CreateAndAddNewRepresentationNoActor" }, // 1401224972
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_Get, "Get" }, // 590036062
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations, "GetAllActorRepresentations" }, // 2792200708
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter, "GetCompassRepresentationTypeFilter" }, // 2098495243
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_GetDistanceValueFromCompassViewDistance, "GetDistanceValueFromCompassViewDistance" }, // 4194965451
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter, "GetMapRepresentationTypeFilter" }, // 2555318486
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations, "OnRep_ReplicatedRepresentations" }, // 2658672938
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor, "RemoveRepresentationOfActor" }, // 808900808
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter, "SetCompassRepresentationTypeFilter" }, // 501454946
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassViewDistanceForActorRepresentation, "SetCompassViewDistanceForActorRepresentation" }, // 858913145
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter, "SetMapRepresentationTypeFilter" }, // 2845328630
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation, "UpdateRepresentation" }, // 1555967696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGActorRepresentationManager.h" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This class manages all the representations of actors that are used in the compass and on the map." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "These are representation that the local player adds for them selves, often temporary stuff that others shouldn't see" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations = { "mLocalRepresentations", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mLocalRepresentations), METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_Inner = { "mLocalRepresentations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Simulated on client to keep track of added and removed representations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations = { "mClientReplicatedRepresentations", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mClientReplicatedRepresentations), METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_Inner = { "mClientReplicatedRepresentations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "These are all the representations of actors that should replicate from server to clients" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations = { "mReplicatedRepresentations", "OnRep_ReplicatedRepresentations", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mReplicatedRepresentations), METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_Inner = { "mReplicatedRepresentations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a representation type changes it's filter status on the compass" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass = { "mOnActorRepresentationTypeFilteredOnCompass", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationTypeFilteredOnCompass), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a representation type changes it's filter status on the map" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap = { "mOnActorRepresentationTypeFilteredOnMap", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationTypeFilteredOnMap), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation changes it's show value for the maps" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow = { "mOnActorRepresentationUpdatedMapShow", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationUpdatedMapShow), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation changes it's show value for the compass" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow = { "mOnActorRepresentationUpdatedCompassShow", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationUpdatedCompassShow), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a representation is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated = { "mOnActorRepresentationUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationUpdated), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation is removed, not sure how long it will be valid after a remove." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved = { "mOnActorRepresentationRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationRemoved), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "Public/FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation is added" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded = { "mOnActorRepresentationAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationAdded), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGActorRepresentationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGActorRepresentationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGActorRepresentationManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::ClassParams = {
		&AFGActorRepresentationManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGActorRepresentationManager_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGActorRepresentationManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGActorRepresentationManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGActorRepresentationManager, 1913219133);
	template<> FACTORYGAME_API UClass* StaticClass<AFGActorRepresentationManager>()
	{
		return AFGActorRepresentationManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGActorRepresentationManager(Z_Construct_UClass_AFGActorRepresentationManager, &AFGActorRepresentationManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGActorRepresentationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGActorRepresentationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
