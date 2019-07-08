// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGActorRepresentationManager.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter();
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "visible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType = { UE4CodeGen_Private::EPropertyClass::Enum, "representationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::NewProp_representationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActorRepresentationTypeFilteredOnCompass__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnCompass_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "visible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType = { UE4CodeGen_Private::EPropertyClass::Enum, "representationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::NewProp_representationType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActorRepresentationTypeFilteredOnMap__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActorRepresentationTypeFilteredOnMap_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_newShouldShowOnMap = { UE4CodeGen_Private::EPropertyClass::Bool, "newShouldShowOnMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_newShouldShowOnMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_updatedRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "updatedRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms, updatedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_newShouldShowOnMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::NewProp_updatedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActorRepresentationUpdatedMapShow__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedMapShow_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_newShouldShowInCompass = { UE4CodeGen_Private::EPropertyClass::Bool, "newShouldShowInCompass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms), &Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_newShouldShowInCompass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_updatedRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "updatedRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms, updatedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_newShouldShowInCompass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::NewProp_updatedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActorRepresentationUpdatedCompassShow__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdatedCompassShow_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::NewProp_updatedRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "updatedRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationUpdated_Parms, updatedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::NewProp_updatedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActorRepresentationUpdated__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActorRepresentationUpdated_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::NewProp_removedRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "removedRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationRemoved_Parms, removedRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::NewProp_removedRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActorRepresentationRemoved__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActorRepresentationRemoved_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::NewProp_newRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "newRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_FactoryGame_eventOnActorRepresentationAdded_Parms, newRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::NewProp_newRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, "OnActorRepresentationAdded__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_FactoryGame_eventOnActorRepresentationAdded_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
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
			{ "GetMapRepresentationTypeFilter", &AFGActorRepresentationManager::execGetMapRepresentationTypeFilter },
			{ "OnRep_ReplicatedRepresentations", &AFGActorRepresentationManager::execOnRep_ReplicatedRepresentations },
			{ "RemoveRepresentationOfActor", &AFGActorRepresentationManager::execRemoveRepresentationOfActor },
			{ "SetCompassRepresentationTypeFilter", &AFGActorRepresentationManager::execSetCompassRepresentationTypeFilter },
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms*)Obj)->isLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal = { UE4CodeGen_Private::EPropertyClass::Bool, "isLocal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_realActor = { UE4CodeGen_Private::EPropertyClass::Object, "realActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms, realActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_isLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::NewProp_realActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "CPP_Default_isLocal", "false" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Creates a new actor representation. Must be called on server for representation that aren't local to appear for all players." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "CreateAndAddNewRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentation_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_isLocal_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms*)Obj)->isLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_isLocal = { UE4CodeGen_Private::EPropertyClass::Bool, "isLocal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_isLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_representationType = { UE4CodeGen_Private::EPropertyClass::Enum, "representationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, representationType), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_representationType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowOnMap_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms*)Obj)->shouldShowOnMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowOnMap = { UE4CodeGen_Private::EPropertyClass::Bool, "shouldShowOnMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowOnMap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowInCompass_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms*)Obj)->shouldShowInCompass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowInCompass = { UE4CodeGen_Private::EPropertyClass::Bool, "shouldShowInCompass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_shouldShowInCompass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_lifeTime = { UE4CodeGen_Private::EPropertyClass::Float, "lifeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, lifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_compassColor = { UE4CodeGen_Private::EPropertyClass::Struct, "compassColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, compassColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_compassTexture = { UE4CodeGen_Private::EPropertyClass::Object, "compassTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, compassTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
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
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Creates a new representation for something that doesn't have an actor. Must be called on server for representations that aren't local to appear for all players." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "CreateAndAddNewRepresentationNoActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(FGActorRepresentationManager_eventCreateAndAddNewRepresentationNoActor_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventGet_Parms, ReturnValue), Z_Construct_UClass_AFGActorRepresentationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_worldContext = { UE4CodeGen_Private::EPropertyClass::Object, "worldContext", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "DefaultToSelf", "worldContext" },
		{ "DisplayName", "GetActorRepresentationManager" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Get the representation manager from a world context, this should always return something unless you call it really early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "Get", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FGActorRepresentationManager_eventGet_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_Get_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations = { UE4CodeGen_Private::EPropertyClass::Array, "out_AllRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000180, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventGetAllActorRepresentations_Parms, out_AllRepresentations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "out_AllRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::NewProp_out_AllRepresentations_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Gathers all representations and returns them" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "GetAllActorRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(FGActorRepresentationManager_eventGetAllActorRepresentations_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "owningPlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Returns true if representation type is visible on compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "GetCompassRepresentationTypeFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGActorRepresentationManager_eventGetCompassRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "owningPlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Returns true if representation type is visible on map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "GetMapRepresentationTypeFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGActorRepresentationManager_eventGetMapRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "OnRep_ReplicatedRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_realActor = { UE4CodeGen_Private::EPropertyClass::Object, "realActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms, realActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::NewProp_realActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Removes the representation of an actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "RemoveRepresentationOfActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020405, sizeof(FGActorRepresentationManager_eventRemoveRepresentationOfActor_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "visible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "owningPlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Set if representation type should be visible on compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "SetCompassRepresentationTypeFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGActorRepresentationManager_eventSetCompassRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_visible = { UE4CodeGen_Private::EPropertyClass::Bool, "visible", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms, type), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "owningPlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms, owningPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::NewProp_owningPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Filtering" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Set if representation type should be visible on map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "SetMapRepresentationTypeFilter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGActorRepresentationManager_eventSetMapRepresentationTypeFilter_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventUpdateRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal_SetBit(void* Obj)
	{
		((FGActorRepresentationManager_eventUpdateRepresentation_Parms*)Obj)->isLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal = { UE4CodeGen_Private::EPropertyClass::Bool, "isLocal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGActorRepresentationManager_eventUpdateRepresentation_Parms), &Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_realActor = { UE4CodeGen_Private::EPropertyClass::Object, "realActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGActorRepresentationManager_eventUpdateRepresentation_Parms, realActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_isLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::NewProp_realActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Representation" },
		{ "CPP_Default_isLocal", "false" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGActorRepresentationManager, "UpdateRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGActorRepresentationManager_eventUpdateRepresentation_Parms), Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentation, "CreateAndAddNewRepresentation" }, // 1336603398
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_CreateAndAddNewRepresentationNoActor, "CreateAndAddNewRepresentationNoActor" }, // 713166200
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_Get, "Get" }, // 851338603
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_GetAllActorRepresentations, "GetAllActorRepresentations" }, // 320921690
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_GetCompassRepresentationTypeFilter, "GetCompassRepresentationTypeFilter" }, // 677753779
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_GetMapRepresentationTypeFilter, "GetMapRepresentationTypeFilter" }, // 1651582928
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_OnRep_ReplicatedRepresentations, "OnRep_ReplicatedRepresentations" }, // 3961423135
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_RemoveRepresentationOfActor, "RemoveRepresentationOfActor" }, // 2751606883
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_SetCompassRepresentationTypeFilter, "SetCompassRepresentationTypeFilter" }, // 526734093
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_SetMapRepresentationTypeFilter, "SetMapRepresentationTypeFilter" }, // 907952792
		{ &Z_Construct_UFunction_AFGActorRepresentationManager_UpdateRepresentation, "UpdateRepresentation" }, // 1885077985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Rendering Actor Tick Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGActorRepresentationManager.h" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "This class manages all the representations of actors that are used in the compass and on the map." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "These are representation that the local player adds for them selves, often temporary stuff that others shouldn't see" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations = { UE4CodeGen_Private::EPropertyClass::Array, "mLocalRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mLocalRepresentations), METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mLocalRepresentations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mLocalRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Simulated on client to keep track of added and removed representations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations = { UE4CodeGen_Private::EPropertyClass::Array, "mClientReplicatedRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mClientReplicatedRepresentations), METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mClientReplicatedRepresentations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mClientReplicatedRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_MetaData[] = {
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "These are all the representations of actors that should replicate from server to clients" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations = { UE4CodeGen_Private::EPropertyClass::Array, "mReplicatedRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_ReplicatedRepresentations", STRUCT_OFFSET(AFGActorRepresentationManager, mReplicatedRepresentations), METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mReplicatedRepresentations_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mReplicatedRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a representation type changes it's filter status on the compass" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActorRepresentationTypeFilteredOnCompass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationTypeFilteredOnCompass), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnCompass__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnCompass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a representation type changes it's filter status on the map" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActorRepresentationTypeFilteredOnMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationTypeFilteredOnMap), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationTypeFilteredOnMap__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationTypeFilteredOnMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation changes it's show value for the maps" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActorRepresentationUpdatedMapShow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationUpdatedMapShow), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedMapShow__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedMapShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation changes it's show value for the compass" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActorRepresentationUpdatedCompassShow", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationUpdatedCompassShow), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdatedCompassShow__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdatedCompassShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a representation is updated" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActorRepresentationUpdated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationUpdated), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation is removed, not sure how long it will be valid after a remove." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActorRepresentationRemoved", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationRemoved), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded_MetaData[] = {
		{ "Category", "Representation" },
		{ "ModuleRelativePath", "FGActorRepresentationManager.h" },
		{ "ToolTip", "Called whenever a new representation is added" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "mOnActorRepresentationAdded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AFGActorRepresentationManager, mOnActorRepresentationAdded), Z_Construct_UDelegateFunction_FactoryGame_OnActorRepresentationAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::NewProp_mOnActorRepresentationAdded_MetaData)) };
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGActorRepresentationManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGActorRepresentationManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AFGActorRepresentationManager, 2649814053);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGActorRepresentationManager(Z_Construct_UClass_AFGActorRepresentationManager, &AFGActorRepresentationManager::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGActorRepresentationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGActorRepresentationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
