// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/UI/FGCompassObjectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGCompassObjectWidget() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCompassObjectWidget_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGCompassObjectWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGActorRepresentation_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ERepresentationType();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_UFGCompassObjectWidget_OnCompassObjectAddedToPanel = FName(TEXT("OnCompassObjectAddedToPanel"));
	void UFGCompassObjectWidget::OnCompassObjectAddedToPanel(UCanvasPanelSlot* parentSlot)
	{
		FGCompassObjectWidget_eventOnCompassObjectAddedToPanel_Parms Parms;
		Parms.parentSlot=parentSlot;
		ProcessEvent(FindFunctionChecked(NAME_UFGCompassObjectWidget_OnCompassObjectAddedToPanel),&Parms);
	}
	static FName NAME_UFGCompassObjectWidget_OnCompassObjectUpdated = FName(TEXT("OnCompassObjectUpdated"));
	void UFGCompassObjectWidget::OnCompassObjectUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UFGCompassObjectWidget_OnCompassObjectUpdated),NULL);
	}
	static FName NAME_UFGCompassObjectWidget_OnObjectCentered = FName(TEXT("OnObjectCentered"));
	void UFGCompassObjectWidget::OnObjectCentered(bool centered)
	{
		FGCompassObjectWidget_eventOnObjectCentered_Parms Parms;
		Parms.centered=centered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UFGCompassObjectWidget_OnObjectCentered),&Parms);
	}
	void UFGCompassObjectWidget::StaticRegisterNativesUFGCompassObjectWidget()
	{
		UClass* Class = UFGCompassObjectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorRepresentation", &UFGCompassObjectWidget::execGetActorRepresentation },
			{ "GetAlphaAmount", &UFGCompassObjectWidget::execGetAlphaAmount },
			{ "GetAngleFromDirection", &UFGCompassObjectWidget::execGetAngleFromDirection },
			{ "GetBlockingAmount", &UFGCompassObjectWidget::execGetBlockingAmount },
			{ "GetDirectionFromLocation", &UFGCompassObjectWidget::execGetDirectionFromLocation },
			{ "GetRepresentationType", &UFGCompassObjectWidget::execGetRepresentationType },
			{ "OnCompassObjectAddedToPanel", &UFGCompassObjectWidget::execOnCompassObjectAddedToPanel },
			{ "OnCompassObjectUpdated", &UFGCompassObjectWidget::execOnCompassObjectUpdated },
			{ "SetActorRepresentation", &UFGCompassObjectWidget::execSetActorRepresentation },
			{ "SetAsStaticDirection", &UFGCompassObjectWidget::execSetAsStaticDirection },
			{ "SetCompassObjectVisbility", &UFGCompassObjectWidget::execSetCompassObjectVisbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics
	{
		struct FGCompassObjectWidget_eventGetActorRepresentation_Parms
		{
			UFGActorRepresentation* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetActorRepresentation_Parms, ReturnValue), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
		{ "ToolTip", "Getter for the Actor Representation that this CompassObject is set to represent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "GetActorRepresentation", sizeof(FGCompassObjectWidget_eventGetActorRepresentation_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics
	{
		struct FGCompassObjectWidget_eventGetAlphaAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetAlphaAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "GetAlphaAmount", sizeof(FGCompassObjectWidget_eventGetAlphaAmount_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics
	{
		struct FGCompassObjectWidget_eventGetAngleFromDirection_Parms
		{
			FVector direction;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetAngleFromDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetAngleFromDirection_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "GetAngleFromDirection", sizeof(FGCompassObjectWidget_eventGetAngleFromDirection_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics
	{
		struct FGCompassObjectWidget_eventGetBlockingAmount_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetBlockingAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "GetBlockingAmount", sizeof(FGCompassObjectWidget_eventGetBlockingAmount_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics
	{
		struct FGCompassObjectWidget_eventGetDirectionFromLocation_Parms
		{
			FVector location;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetDirectionFromLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetDirectionFromLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::NewProp_location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "GetDirectionFromLocation", sizeof(FGCompassObjectWidget_eventGetDirectionFromLocation_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics
	{
		struct FGCompassObjectWidget_eventGetRepresentationType_Parms
		{
			ERepresentationType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventGetRepresentationType_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ERepresentationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "GetRepresentationType", sizeof(FGCompassObjectWidget_eventGetRepresentationType_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parentSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parentSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::NewProp_parentSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::NewProp_parentSlot = { "parentSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventOnCompassObjectAddedToPanel_Parms, parentSlot), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::NewProp_parentSlot_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::NewProp_parentSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::NewProp_parentSlot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
		{ "ToolTip", "This function is called when the compass object is added to the compass. This function should deal with layouts, anchoring, positioning, etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "OnCompassObjectAddedToPanel", sizeof(FGCompassObjectWidget_eventOnCompassObjectAddedToPanel_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
		{ "ToolTip", "This function is called when the representation of the compass object is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "OnCompassObjectUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics
	{
		static void NewProp_centered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_centered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::NewProp_centered_SetBit(void* Obj)
	{
		((FGCompassObjectWidget_eventOnObjectCentered_Parms*)Obj)->centered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::NewProp_centered = { "centered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCompassObjectWidget_eventOnObjectCentered_Parms), &Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::NewProp_centered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::NewProp_centered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
		{ "ToolTip", "This function is called when the representation of the compass object is updated." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "OnObjectCentered", sizeof(FGCompassObjectWidget_eventOnObjectCentered_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics
	{
		struct FGCompassObjectWidget_eventSetActorRepresentation_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::NewProp_actorRepresentation = { "actorRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventSetActorRepresentation_Parms, actorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::NewProp_actorRepresentation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
		{ "ToolTip", "Setter for the Actor Representations that this CompassObject is set to represent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "SetActorRepresentation", sizeof(FGCompassObjectWidget_eventSetActorRepresentation_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics
	{
		struct FGCompassObjectWidget_eventSetAsStaticDirection_Parms
		{
			FVector direction;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGCompassObjectWidget_eventSetAsStaticDirection_Parms, direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
		{ "ToolTip", "Sets this CompassObject as a static direction in relation to the player's location (e.g. cardinal coordinates). Must be normalized!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "SetAsStaticDirection", sizeof(FGCompassObjectWidget_eventSetAsStaticDirection_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics
	{
		struct FGCompassObjectWidget_eventSetCompassObjectVisbility_Parms
		{
			bool visibile;
		};
		static void NewProp_visibile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visibile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::NewProp_visibile_SetBit(void* Obj)
	{
		((FGCompassObjectWidget_eventSetCompassObjectVisbility_Parms*)Obj)->visibile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::NewProp_visibile = { "visibile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGCompassObjectWidget_eventSetCompassObjectVisbility_Parms), &Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::NewProp_visibile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::NewProp_visibile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGCompassObjectWidget, nullptr, "SetCompassObjectVisbility", sizeof(FGCompassObjectWidget_eventSetCompassObjectVisbility_Parms), Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGCompassObjectWidget_NoRegister()
	{
		return UFGCompassObjectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFGCompassObjectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsBlocking_MetaData[];
#endif
		static void NewProp_mIsBlocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsBlocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mStaticDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mStaticDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mActorRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mActorRepresentation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mCheckForBlockingInCompass_MetaData[];
#endif
		static void NewProp_mCheckForBlockingInCompass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mCheckForBlockingInCompass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mShouldFadeInEdges_MetaData[];
#endif
		static void NewProp_mShouldFadeInEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mShouldFadeInEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClampPosition_MetaData[];
#endif
		static void NewProp_mClampPosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mClampPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPositionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mPositionOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGCompassObjectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGCompassObjectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_GetActorRepresentation, "GetActorRepresentation" }, // 478830321
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_GetAlphaAmount, "GetAlphaAmount" }, // 481632219
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_GetAngleFromDirection, "GetAngleFromDirection" }, // 1416714722
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_GetBlockingAmount, "GetBlockingAmount" }, // 3933469125
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_GetDirectionFromLocation, "GetDirectionFromLocation" }, // 3094885924
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_GetRepresentationType, "GetRepresentationType" }, // 1056746804
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectAddedToPanel, "OnCompassObjectAddedToPanel" }, // 2882374255
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_OnCompassObjectUpdated, "OnCompassObjectUpdated" }, // 3319356910
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_OnObjectCentered, "OnObjectCentered" }, // 1728198716
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_SetActorRepresentation, "SetActorRepresentation" }, // 2058853269
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_SetAsStaticDirection, "SetAsStaticDirection" }, // 2781088788
		{ &Z_Construct_UFunction_UFGCompassObjectWidget_SetCompassObjectVisbility, "SetCompassObjectVisbility" }, // 1187885606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/FGCompassObjectWidget.h" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mIsBlocking_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	void Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mIsBlocking_SetBit(void* Obj)
	{
		((UFGCompassObjectWidget*)Obj)->mIsBlocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mIsBlocking = { "mIsBlocking", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGCompassObjectWidget), &Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mIsBlocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mIsBlocking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mIsBlocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mStaticDirection_MetaData[] = {
		{ "Category", "FGCompassObjectWidget" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mStaticDirection = { "mStaticDirection", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCompassObjectWidget, mStaticDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mStaticDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mStaticDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mActorRepresentation_MetaData[] = {
		{ "Category", "Compass" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mActorRepresentation = { "mActorRepresentation", nullptr, (EPropertyFlags)0x0021080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCompassObjectWidget, mActorRepresentation), Z_Construct_UClass_UFGActorRepresentation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mActorRepresentation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mActorRepresentation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mCheckForBlockingInCompass_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	void Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mCheckForBlockingInCompass_SetBit(void* Obj)
	{
		((UFGCompassObjectWidget*)Obj)->mCheckForBlockingInCompass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mCheckForBlockingInCompass = { "mCheckForBlockingInCompass", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGCompassObjectWidget), &Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mCheckForBlockingInCompass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mCheckForBlockingInCompass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mCheckForBlockingInCompass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FGCompassObjectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mImage = { "mImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCompassObjectWidget, mImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mShouldFadeInEdges_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	void Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mShouldFadeInEdges_SetBit(void* Obj)
	{
		((UFGCompassObjectWidget*)Obj)->mShouldFadeInEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mShouldFadeInEdges = { "mShouldFadeInEdges", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGCompassObjectWidget), &Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mShouldFadeInEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mShouldFadeInEdges_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mShouldFadeInEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mClampPosition_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	void Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mClampPosition_SetBit(void* Obj)
	{
		((UFGCompassObjectWidget*)Obj)->mClampPosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mClampPosition = { "mClampPosition", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGCompassObjectWidget), &Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mClampPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mClampPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mClampPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mPositionOffset_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mPositionOffset = { "mPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCompassObjectWidget, mPositionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mPositionOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mPositionOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mText_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mText = { "mText", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCompassObjectWidget, mText), METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mTexture_MetaData[] = {
		{ "Category", "Compass" },
		{ "ModuleRelativePath", "UI/FGCompassObjectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mTexture = { "mTexture", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGCompassObjectWidget, mTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGCompassObjectWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mIsBlocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mStaticDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mActorRepresentation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mCheckForBlockingInCompass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mShouldFadeInEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mClampPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mPositionOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGCompassObjectWidget_Statics::NewProp_mTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGCompassObjectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGCompassObjectWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGCompassObjectWidget_Statics::ClassParams = {
		&UFGCompassObjectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGCompassObjectWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGCompassObjectWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGCompassObjectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGCompassObjectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGCompassObjectWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGCompassObjectWidget, 3927478836);
	template<> FACTORYGAME_API UClass* StaticClass<UFGCompassObjectWidget>()
	{
		return UFGCompassObjectWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGCompassObjectWidget(Z_Construct_UClass_UFGCompassObjectWidget, &UFGCompassObjectWidget::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGCompassObjectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGCompassObjectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
