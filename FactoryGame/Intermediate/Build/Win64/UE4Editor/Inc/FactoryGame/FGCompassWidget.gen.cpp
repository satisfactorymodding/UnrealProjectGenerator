// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGCompassWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCompassWidget() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCompassWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCompassWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCompassObjectWidget_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGActorRepresentationManager_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	static FName NAME_UFGCompassWidget_GetCompassLineOffset = FName(TEXT("GetCompassLineOffset"));
	FVector2D UFGCompassWidget::GetCompassLineOffset()
	{
		FGCompassWidget_eventGetCompassLineOffset_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFGCompassWidget_GetCompassLineOffset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFGCompassWidget_GetCompassObjectWidgetClass = FName(TEXT("GetCompassObjectWidgetClass"));
	TSubclassOf<UFGCompassObjectWidget>  UFGCompassWidget::GetCompassObjectWidgetClass(UFGActorRepresentation* actorRepresentation)
	{
		FGCompassWidget_eventGetCompassObjectWidgetClass_Parms Parms;
		Parms.actorRepresentation=actorRepresentation;
		ProcessEvent(FindFunctionChecked(NAME_UFGCompassWidget_GetCompassObjectWidgetClass),&Parms);
		return Parms.ReturnValue;
	}
	void UFGCompassWidget::StaticRegisterNativesUFGCompassWidget()
	{
		UClass* Class = UFGCompassWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAllCardinalDirections", &UFGCompassWidget::execAddAllCardinalDirections },
			{ "AddAllCompassRepresentations", &UFGCompassWidget::execAddAllCompassRepresentations },
			{ "AddCompassObjectForRepresentation", &UFGCompassWidget::execAddCompassObjectForRepresentation },
			{ "BindActorRepresentationManager", &UFGCompassWidget::execBindActorRepresentationManager },
			{ "CreateCompassObject", &UFGCompassWidget::execCreateCompassObject },
			{ "CreatePrimitiveCompassObject", &UFGCompassWidget::execCreatePrimitiveCompassObject },
			{ "GetCompassLineOffset", &UFGCompassWidget::execGetCompassLineOffset },
			{ "OnActorRepresentationAdded", &UFGCompassWidget::execOnActorRepresentationAdded },
			{ "OnActorRepresentationRemoved", &UFGCompassWidget::execOnActorRepresentationRemoved },
			{ "OnActorRepresentationUpdated", &UFGCompassWidget::execOnActorRepresentationUpdated },
			{ "RemoveAllCompassRepresentations", &UFGCompassWidget::execRemoveAllCompassRepresentations },
			{ "RemoveCompassObjectForRepresentation", &UFGCompassWidget::execRemoveCompassObjectForRepresentation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics
	{
		struct FGCompassWidget_eventAddAllCardinalDirections_Parms
		{
			TSubclassOf<UFGCompassObjectWidget>  compassObjectTemplate;
			UTexture2D* northTex;
			UTexture2D* eastTex;
			UTexture2D* southTex;
			UTexture2D* westTex;
			UTexture2D* northWestTex;
			UTexture2D* southEastTex;
			UTexture2D* southWestText;
			UTexture2D* northEastTex;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_northEastTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_southWestText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_southEastTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_northWestTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_westTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_southTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_eastTex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_northTex;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_compassObjectTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_northEastTex = { UE4CodeGen_Private::EPropertyClass::Object, "northEastTex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, northEastTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_southWestText = { UE4CodeGen_Private::EPropertyClass::Object, "southWestText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, southWestText), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_southEastTex = { UE4CodeGen_Private::EPropertyClass::Object, "southEastTex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, southEastTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_northWestTex = { UE4CodeGen_Private::EPropertyClass::Object, "northWestTex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, northWestTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_westTex = { UE4CodeGen_Private::EPropertyClass::Object, "westTex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, westTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_southTex = { UE4CodeGen_Private::EPropertyClass::Object, "southTex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, southTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_eastTex = { UE4CodeGen_Private::EPropertyClass::Object, "eastTex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, eastTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_northTex = { UE4CodeGen_Private::EPropertyClass::Object, "northTex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, northTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_compassObjectTemplate = { UE4CodeGen_Private::EPropertyClass::Class, "compassObjectTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCardinalDirections_Parms, compassObjectTemplate), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_northEastTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_southWestText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_southEastTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_northWestTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_westTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_southTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_eastTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_northTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::NewProp_compassObjectTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
		{ "ToolTip", "Creates compass objects for all cardinal directions (North, East, South, West)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "AddAllCardinalDirections", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGCompassWidget_eventAddAllCardinalDirections_Parms), Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics
	{
		struct FGCompassWidget_eventAddAllCompassRepresentations_Parms
		{
			AFGActorRepresentationManager* representationManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_representationManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::NewProp_representationManager = { UE4CodeGen_Private::EPropertyClass::Object, "representationManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddAllCompassRepresentations_Parms, representationManager), Z_Construct_UClass_AFGActorRepresentationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::NewProp_representationManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "AddAllCompassRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGCompassWidget_eventAddAllCompassRepresentations_Parms), Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics
	{
		struct FGCompassWidget_eventAddCompassObjectForRepresentation_Parms
		{
			TSubclassOf<UFGCompassObjectWidget>  compassObjectTemplate;
			UFGActorRepresentation* actorRepresentation;
			UFGCompassObjectWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_compassObjectTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddCompassObjectForRepresentation_Parms, ReturnValue), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddCompassObjectForRepresentation_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_compassObjectTemplate = { UE4CodeGen_Private::EPropertyClass::Class, "compassObjectTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventAddCompassObjectForRepresentation_Parms, compassObjectTemplate), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_actorRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::NewProp_compassObjectTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
		{ "ToolTip", "Creates and adds the given FGActorRepresentation represented in the compass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "AddCompassObjectForRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCompassWidget_eventAddCompassObjectForRepresentation_Parms), Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics
	{
		struct FGCompassWidget_eventBindActorRepresentationManager_Parms
		{
			AFGActorRepresentationManager* representationManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_representationManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::NewProp_representationManager = { UE4CodeGen_Private::EPropertyClass::Object, "representationManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventBindActorRepresentationManager_Parms, representationManager), Z_Construct_UClass_AFGActorRepresentationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::NewProp_representationManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
		{ "ToolTip", "Binds a ActorRepresentationManager with the widget, adding representations in the compass as they're updated in the manager\nIf nullptr is passed into the function, all events are unbound. This should be done at the destruction of this widget.\n\nWhen binding the ActorRepresentationManager, all compass objects will reflect it in this function. i.e. it will instantly\npopulate it with the current existing actor representations. If nullptr is passed it will also reflect this by removing\nall currently showing actor representations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "BindActorRepresentationManager", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCompassWidget_eventBindActorRepresentationManager_Parms), Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics
	{
		struct FGCompassWidget_eventCreateCompassObject_Parms
		{
			TSubclassOf<UFGCompassObjectWidget>  compassObjectTemplate;
			UFGActorRepresentation* actorRepresentation;
			UFGCompassObjectWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_compassObjectTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventCreateCompassObject_Parms, ReturnValue), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventCreateCompassObject_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_compassObjectTemplate = { UE4CodeGen_Private::EPropertyClass::Class, "compassObjectTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventCreateCompassObject_Parms, compassObjectTemplate), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_actorRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::NewProp_compassObjectTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
		{ "ToolTip", "Creates a widget in the compass from an actor representation and adds it to the compass panel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "CreateCompassObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGCompassWidget_eventCreateCompassObject_Parms), Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics
	{
		struct FGCompassWidget_eventCreatePrimitiveCompassObject_Parms
		{
			TSubclassOf<UFGCompassObjectWidget>  compassObjectTemplate;
			UTexture2D* texture;
			UFGCompassObjectWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_compassObjectTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventCreatePrimitiveCompassObject_Parms, ReturnValue), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_texture = { UE4CodeGen_Private::EPropertyClass::Object, "texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventCreatePrimitiveCompassObject_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_compassObjectTemplate = { UE4CodeGen_Private::EPropertyClass::Class, "compassObjectTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventCreatePrimitiveCompassObject_Parms, compassObjectTemplate), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::NewProp_compassObjectTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
		{ "ToolTip", "Creates a CompassObject widget, but without the actor representation data. The texture is optional and may be nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "CreatePrimitiveCompassObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGCompassWidget_eventCreatePrimitiveCompassObject_Parms), Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventGetCompassLineOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "GetCompassLineOffset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08880C00, sizeof(FGCompassWidget_eventGetCompassLineOffset_Parms), Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actorRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Class, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000580, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventGetCompassObjectWidgetClass_Parms, ReturnValue), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventGetCompassObjectWidgetClass_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "GetCompassObjectWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(FGCompassWidget_eventGetCompassObjectWidgetClass_Parms), Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics
	{
		struct FGCompassWidget_eventOnActorRepresentationAdded_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventOnActorRepresentationAdded_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "OnActorRepresentationAdded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGCompassWidget_eventOnActorRepresentationAdded_Parms), Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics
	{
		struct FGCompassWidget_eventOnActorRepresentationRemoved_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventOnActorRepresentationRemoved_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "OnActorRepresentationRemoved", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGCompassWidget_eventOnActorRepresentationRemoved_Parms), Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics
	{
		struct FGCompassWidget_eventOnActorRepresentationUpdated_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventOnActorRepresentationUpdated_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "OnActorRepresentationUpdated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FGCompassWidget_eventOnActorRepresentationUpdated_Parms), Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "RemoveAllCompassRepresentations", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics
	{
		struct FGCompassWidget_eventRemoveCompassObjectForRepresentation_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::NewProp_actorRepresentation = { UE4CodeGen_Private::EPropertyClass::Object, "actorRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGCompassWidget_eventRemoveCompassObjectForRepresentation_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
		{ "ToolTip", "Removes the CompassObject that is affiliated with the given FGActorRepresentation ptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassWidget, "RemoveCompassObjectForRepresentation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGCompassWidget_eventRemoveCompassObjectForRepresentation_Parms), Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCompassWidget_NoRegister()
	{
		return UFGCompassWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGCompassWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThresholdForCenteredResourceObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mThresholdForCenteredResourceObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mThresholdForCenteredObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mThresholdForCenteredObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentCenteredObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentCenteredObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCurrentCenteredResourceObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCurrentCenteredResourceObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCurrentCenteredResourceObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRepresentationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActorRepresentationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCenterableResourceCompassObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCenterableResourceCompassObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCenterableResourceCompassObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCenterableCompassObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCenterableCompassObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCenterableCompassObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCompassObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mCompassObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCompassObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCompassLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCompassLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mContentPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mContentPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCompassPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mCompassPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCompassWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCompassWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCompassWidget_AddAllCardinalDirections, "AddAllCardinalDirections" }, // 219989810
		{ &Z_Construct_UFunction_UFGCompassWidget_AddAllCompassRepresentations, "AddAllCompassRepresentations" }, // 2856242446
		{ &Z_Construct_UFunction_UFGCompassWidget_AddCompassObjectForRepresentation, "AddCompassObjectForRepresentation" }, // 3843942133
		{ &Z_Construct_UFunction_UFGCompassWidget_BindActorRepresentationManager, "BindActorRepresentationManager" }, // 1357725691
		{ &Z_Construct_UFunction_UFGCompassWidget_CreateCompassObject, "CreateCompassObject" }, // 2533606893
		{ &Z_Construct_UFunction_UFGCompassWidget_CreatePrimitiveCompassObject, "CreatePrimitiveCompassObject" }, // 2061569902
		{ &Z_Construct_UFunction_UFGCompassWidget_GetCompassLineOffset, "GetCompassLineOffset" }, // 3740687461
		{ &Z_Construct_UFunction_UFGCompassWidget_GetCompassObjectWidgetClass, "GetCompassObjectWidgetClass" }, // 3938427840
		{ &Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationAdded, "OnActorRepresentationAdded" }, // 831060813
		{ &Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationRemoved, "OnActorRepresentationRemoved" }, // 582728575
		{ &Z_Construct_UFunction_UFGCompassWidget_OnActorRepresentationUpdated, "OnActorRepresentationUpdated" }, // 3852092128
		{ &Z_Construct_UFunction_UFGCompassWidget_RemoveAllCompassRepresentations, "RemoveAllCompassRepresentations" }, // 732487730
		{ &Z_Construct_UFunction_UFGCompassWidget_RemoveCompassObjectForRepresentation, "RemoveCompassObjectForRepresentation" }, // 2619393241
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGCompassWidget.h" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredResourceObjects_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredResourceObjects = { UE4CodeGen_Private::EPropertyClass::Float, "mThresholdForCenteredResourceObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mThresholdForCenteredResourceObjects), METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredResourceObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredResourceObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredObjects_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredObjects = { UE4CodeGen_Private::EPropertyClass::Float, "mThresholdForCenteredObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mThresholdForCenteredObjects), METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredObject_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredObject = { UE4CodeGen_Private::EPropertyClass::Object, "mCurrentCenteredObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000082008, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mCurrentCenteredObject), Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredResourceObjects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredResourceObjects = { UE4CodeGen_Private::EPropertyClass::Array, "mCurrentCenteredResourceObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000002008, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mCurrentCenteredResourceObjects), METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredResourceObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredResourceObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredResourceObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mCurrentCenteredResourceObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mActorRepresentationManager_MetaData[] = {
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mActorRepresentationManager = { UE4CodeGen_Private::EPropertyClass::Object, "mActorRepresentationManager", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mActorRepresentationManager), Z_Construct_UClass_AFGActorRepresentationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mActorRepresentationManager_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mActorRepresentationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableResourceCompassObjects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableResourceCompassObjects = { UE4CodeGen_Private::EPropertyClass::Array, "mCenterableResourceCompassObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000002008, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mCenterableResourceCompassObjects), METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableResourceCompassObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableResourceCompassObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableResourceCompassObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mCenterableResourceCompassObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableCompassObjects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableCompassObjects = { UE4CodeGen_Private::EPropertyClass::Array, "mCenterableCompassObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000002008, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mCenterableCompassObjects), METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableCompassObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableCompassObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableCompassObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mCenterableCompassObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassObjects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassObjects = { UE4CodeGen_Private::EPropertyClass::Array, "mCompassObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020088000002008, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mCompassObjects), METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassObjects_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mCompassObjects", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UFGCompassObjectWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassLine_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Compass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassLine = { UE4CodeGen_Private::EPropertyClass::Object, "mCompassLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000c, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mCompassLine), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mContentPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Compass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mContentPanel = { UE4CodeGen_Private::EPropertyClass::Object, "mContentPanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000c, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mContentPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mContentPanel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mContentPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Compass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassPanel = { UE4CodeGen_Private::EPropertyClass::Object, "mCompassPanel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000c, 1, nullptr, STRUCT_OFFSET(UFGCompassWidget, mCompassPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassPanel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCompassWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredResourceObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mThresholdForCenteredObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredResourceObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCurrentCenteredResourceObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mActorRepresentationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableResourceCompassObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableResourceCompassObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableCompassObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCenterableCompassObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mContentPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassWidget_Statics::NewProp_mCompassPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCompassWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCompassWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCompassWidget_Statics::ClassParams = {
		&UFGCompassWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UFGCompassWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGCompassWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCompassWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCompassWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCompassWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCompassWidget, 2099362487);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCompassWidget(Z_Construct_UClass_UFGCompassWidget, &UFGCompassWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCompassWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCompassWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
