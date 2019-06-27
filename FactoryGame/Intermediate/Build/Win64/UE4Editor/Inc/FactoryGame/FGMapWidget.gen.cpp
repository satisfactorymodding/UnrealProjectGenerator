// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGMapWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGMapWidget() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGMapWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_OnMapCentered();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGActorRepresentationManager_NoRegister();
// End Cross Module References
	static FName NAME_UFGMapWidget_OnMapCentered = FName(TEXT("OnMapCentered"));
	void UFGMapWidget::OnMapCentered(FVector2D normalizedWorldLocation)
	{
		FGMapWidget_eventOnMapCentered_Parms Parms;
		Parms.normalizedWorldLocation=normalizedWorldLocation;
		ProcessEvent(FindFunctionChecked(NAME_UFGMapWidget_OnMapCentered),&Parms);
	}
	static FName NAME_UFGMapWidget_OnObjectAddedToMap = FName(TEXT("OnObjectAddedToMap"));
	void UFGMapWidget::OnObjectAddedToMap(UFGActorRepresentation* actorRepresentation)
	{
		FGMapWidget_eventOnObjectAddedToMap_Parms Parms;
		Parms.actorRepresentation=actorRepresentation;
		ProcessEvent(FindFunctionChecked(NAME_UFGMapWidget_OnObjectAddedToMap),&Parms);
	}
	static FName NAME_UFGMapWidget_OnObjectRemovedFromMap = FName(TEXT("OnObjectRemovedFromMap"));
	void UFGMapWidget::OnObjectRemovedFromMap(UFGActorRepresentation* actorRepresentation)
	{
		FGMapWidget_eventOnObjectRemovedFromMap_Parms Parms;
		Parms.actorRepresentation=actorRepresentation;
		ProcessEvent(FindFunctionChecked(NAME_UFGMapWidget_OnObjectRemovedFromMap),&Parms);
	}
	static FName NAME_UFGMapWidget_OnObjectUpdatedOnMap = FName(TEXT("OnObjectUpdatedOnMap"));
	void UFGMapWidget::OnObjectUpdatedOnMap(UFGActorRepresentation* actorRepresentation)
	{
		FGMapWidget_eventOnObjectUpdatedOnMap_Parms Parms;
		Parms.actorRepresentation=actorRepresentation;
		ProcessEvent(FindFunctionChecked(NAME_UFGMapWidget_OnObjectUpdatedOnMap),&Parms);
	}
	void UFGMapWidget::StaticRegisterNativesUFGMapWidget()
	{
		UClass* Class = UFGMapWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFogOfWarTexture", &UFGMapWidget::execGetFogOfWarTexture },
			{ "OnActorRepresentationAdded", &UFGMapWidget::execOnActorRepresentationAdded },
			{ "OnActorRepresentationRemoved", &UFGMapWidget::execOnActorRepresentationRemoved },
			{ "OnActorRepresentationUpdated", &UFGMapWidget::execOnActorRepresentationUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics
	{
		struct FGMapWidget_eventGetFogOfWarTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventGetFogOfWarTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "GetFogOfWarTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14080401, sizeof(FGMapWidget_eventGetFogOfWarTexture_Parms), Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics
	{
		struct FGMapWidget_eventOnActorRepresentationAdded_Parms
		{
			UFGActorRepresentation* actorRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventOnActorRepresentationAdded_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "OnActorRepresentationAdded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGMapWidget_eventOnActorRepresentationAdded_Parms), Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics
	{
		struct FGMapWidget_eventOnActorRepresentationRemoved_Parms
		{
			UFGActorRepresentation* actorRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventOnActorRepresentationRemoved_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "OnActorRepresentationRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGMapWidget_eventOnActorRepresentationRemoved_Parms), Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics
	{
		struct FGMapWidget_eventOnActorRepresentationUpdated_Parms
		{
			UFGActorRepresentation* actorRepresentation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventOnActorRepresentationUpdated_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "OnActorRepresentationUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, sizeof(FGMapWidget_eventOnActorRepresentationUpdated_Parms), Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normalizedWorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::NewProp_normalizedWorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "normalizedWorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventOnMapCentered_Parms, normalizedWorldLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::NewProp_normalizedWorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "OnMapCentered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820800, sizeof(FGMapWidget_eventOnMapCentered_Parms), Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_OnMapCentered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_OnMapCentered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventOnObjectAddedToMap_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "OnObjectAddedToMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGMapWidget_eventOnObjectAddedToMap_Parms), Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventOnObjectRemovedFromMap_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "OnObjectRemovedFromMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGMapWidget_eventOnObjectRemovedFromMap_Parms), Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGMapWidget_eventOnObjectUpdatedOnMap_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGMapWidget, "OnObjectUpdatedOnMap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGMapWidget_eventOnObjectUpdatedOnMap_Parms), Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGMapWidget_NoRegister()
	{
		return UFGMapWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGMapWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRepresentationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActorRepresentationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMapActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mMapActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mMapActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFogOfWarTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFogOfWarTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGMapWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGMapWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGMapWidget_GetFogOfWarTexture, "GetFogOfWarTexture" }, // 1768030622
		{ &Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationAdded, "OnActorRepresentationAdded" }, // 4234674712
		{ &Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationRemoved, "OnActorRepresentationRemoved" }, // 4104142849
		{ &Z_Construct_UFunction_UFGMapWidget_OnActorRepresentationUpdated, "OnActorRepresentationUpdated" }, // 3465225778
		{ &Z_Construct_UFunction_UFGMapWidget_OnMapCentered, "OnMapCentered" }, // 1629533444
		{ &Z_Construct_UFunction_UFGMapWidget_OnObjectAddedToMap, "OnObjectAddedToMap" }, // 265779930
		{ &Z_Construct_UFunction_UFGMapWidget_OnObjectRemovedFromMap, "OnObjectRemovedFromMap" }, // 2803757753
		{ &Z_Construct_UFunction_UFGMapWidget_OnObjectUpdatedOnMap, "OnObjectUpdatedOnMap" }, // 3204330533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGMapWidget.h" },
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mActorRepresentationManager_MetaData[] = {
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mActorRepresentationManager = { UE4CodeGen_Private::EPropertyClass::Object, "mActorRepresentationManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UFGMapWidget, mActorRepresentationManager), Z_Construct_UClass_AFGActorRepresentationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mActorRepresentationManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mActorRepresentationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mMapActors_MetaData[] = {
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mMapActors = { UE4CodeGen_Private::EPropertyClass::Array, "mMapActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapWidget, mMapActors), METADATA_PARAMS(Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mMapActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mMapActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mMapActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mMapActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mFogOfWarTexture_MetaData[] = {
		{ "ModuleRelativePath", "UI/FGMapWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mFogOfWarTexture = { UE4CodeGen_Private::EPropertyClass::Object, "mFogOfWarTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UFGMapWidget, mFogOfWarTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mFogOfWarTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mFogOfWarTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGMapWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mActorRepresentationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mMapActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mMapActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGMapWidget_Statics::NewProp_mFogOfWarTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGMapWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGMapWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGMapWidget_Statics::ClassParams = {
		&UFGMapWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGMapWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGMapWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGMapWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGMapWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGMapWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGMapWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGMapWidget, 1216302791);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGMapWidget(Z_Construct_UClass_UFGMapWidget, &UFGMapWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGMapWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGMapWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
