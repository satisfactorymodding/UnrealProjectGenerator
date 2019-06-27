// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGColorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGColorInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColorInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGColorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetCanBeColored();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_SetColorSlot();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor();
// End Cross Module References
	bool IFGColorInterface::GetCanBeColored()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCanBeColored instead.");
		FGColorInterface_eventGetCanBeColored_Parms Parms;
		return Parms.ReturnValue;
	}
	uint8 IFGColorInterface::GetColorSlot()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetColorSlot instead.");
		FGColorInterface_eventGetColorSlot_Parms Parms;
		return Parms.ReturnValue;
	}
	FLinearColor IFGColorInterface::GetPrimaryColor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPrimaryColor instead.");
		FGColorInterface_eventGetPrimaryColor_Parms Parms;
		return Parms.ReturnValue;
	}
	FLinearColor IFGColorInterface::GetSecondaryColor()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSecondaryColor instead.");
		FGColorInterface_eventGetSecondaryColor_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGColorInterface::SetColorSlot(uint8 index)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetColorSlot instead.");
	}
	void IFGColorInterface::SetPrimaryColor(FLinearColor newColor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPrimaryColor instead.");
	}
	void IFGColorInterface::SetSecondaryColor(FLinearColor newColor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSecondaryColor instead.");
	}
	void IFGColorInterface::StartIsAimedAtForColor(AFGCharacterPlayer* byCharacter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartIsAimedAtForColor instead.");
	}
	void IFGColorInterface::StopIsAimedAtForColor(AFGCharacterPlayer* byCharacter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopIsAimedAtForColor instead.");
	}
	void UFGColorInterface::StaticRegisterNativesUFGColorInterface()
	{
		UClass* Class = UFGColorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanBeColored", &IFGColorInterface::execGetCanBeColored },
			{ "GetColorSlot", &IFGColorInterface::execGetColorSlot },
			{ "GetPrimaryColor", &IFGColorInterface::execGetPrimaryColor },
			{ "GetSecondaryColor", &IFGColorInterface::execGetSecondaryColor },
			{ "SetColorSlot", &IFGColorInterface::execSetColorSlot },
			{ "SetPrimaryColor", &IFGColorInterface::execSetPrimaryColor },
			{ "SetSecondaryColor", &IFGColorInterface::execSetSecondaryColor },
			{ "StartIsAimedAtForColor", &IFGColorInterface::execStartIsAimedAtForColor },
			{ "StopIsAimedAtForColor", &IFGColorInterface::execStopIsAimedAtForColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGColorInterface_eventGetCanBeColored_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGColorInterface_eventGetCanBeColored_Parms), &Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns wherther the building can be colored right now or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "GetCanBeColored", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGColorInterface_eventGetCanBeColored_Parms), Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetCanBeColored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetCanBeColored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventGetColorSlot_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns the color slot index of this building" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "GetColorSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGColorInterface_eventGetColorSlot_Parms), Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventGetPrimaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns the primary color of this building" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "GetPrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(FGColorInterface_eventGetPrimaryColor_Parms), Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventGetSecondaryColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Returns the primary color of this building" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "GetSecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(FGColorInterface_eventGetSecondaryColor_Parms), Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::NewProp_index = { UE4CodeGen_Private::EPropertyClass::Byte, "index", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventSetColorSlot_Parms, index), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Sets the color slot for the buildable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "SetColorSlot", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGColorInterface_eventSetColorSlot_Parms), Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_SetColorSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_SetColorSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventSetPrimaryColor_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Sets the primary color for the buildable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "SetPrimaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(FGColorInterface_eventSetPrimaryColor_Parms), Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::NewProp_newColor = { UE4CodeGen_Private::EPropertyClass::Struct, "newColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventSetSecondaryColor_Parms, newColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::NewProp_newColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Factory Color" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Sets the secondary color for the buildable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "SetSecondaryColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08820C00, sizeof(FGColorInterface_eventSetSecondaryColor_Parms), Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::NewProp_byCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "byCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventStartIsAimedAtForColor_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Called on by the interface if we are looking at something that's useable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "StartIsAimedAtForColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGColorInterface_eventStartIsAimedAtForColor_Parms), Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::NewProp_byCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "byCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGColorInterface_eventStopIsAimedAtForColor_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
		{ "ToolTip", "Called when we stop looking at the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGColorInterface, "StopIsAimedAtForColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(FGColorInterface_eventStopIsAimedAtForColor_Parms), Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGColorInterface_NoRegister()
	{
		return UFGColorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGColorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGColorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGColorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGColorInterface_GetCanBeColored, "GetCanBeColored" }, // 3818106438
		{ &Z_Construct_UFunction_UFGColorInterface_GetColorSlot, "GetColorSlot" }, // 4086471325
		{ &Z_Construct_UFunction_UFGColorInterface_GetPrimaryColor, "GetPrimaryColor" }, // 1863479996
		{ &Z_Construct_UFunction_UFGColorInterface_GetSecondaryColor, "GetSecondaryColor" }, // 805787
		{ &Z_Construct_UFunction_UFGColorInterface_SetColorSlot, "SetColorSlot" }, // 1906623779
		{ &Z_Construct_UFunction_UFGColorInterface_SetPrimaryColor, "SetPrimaryColor" }, // 1970121387
		{ &Z_Construct_UFunction_UFGColorInterface_SetSecondaryColor, "SetSecondaryColor" }, // 1039925950
		{ &Z_Construct_UFunction_UFGColorInterface_StartIsAimedAtForColor, "StartIsAimedAtForColor" }, // 541473653
		{ &Z_Construct_UFunction_UFGColorInterface_StopIsAimedAtForColor, "StopIsAimedAtForColor" }, // 215107436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGColorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGColorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGColorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGColorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGColorInterface_Statics::ClassParams = {
		&UFGColorInterface::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000040A1u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UFGColorInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGColorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGColorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGColorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGColorInterface, 3112327649);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGColorInterface(Z_Construct_UClass_UFGColorInterface, &UFGColorInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGColorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGColorInterface);
	static FName NAME_UFGColorInterface_GetCanBeColored = FName(TEXT("GetCanBeColored"));
	bool IFGColorInterface::Execute_GetCanBeColored(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetCanBeColored_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetCanBeColored);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCanBeColored_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_GetColorSlot = FName(TEXT("GetColorSlot"));
	uint8 IFGColorInterface::Execute_GetColorSlot(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetColorSlot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetColorSlot);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetColorSlot_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_GetPrimaryColor = FName(TEXT("GetPrimaryColor"));
	FLinearColor IFGColorInterface::Execute_GetPrimaryColor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetPrimaryColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetPrimaryColor);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPrimaryColor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_GetSecondaryColor = FName(TEXT("GetSecondaryColor"));
	FLinearColor IFGColorInterface::Execute_GetSecondaryColor(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventGetSecondaryColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_GetSecondaryColor);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSecondaryColor_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGColorInterface_SetColorSlot = FName(TEXT("SetColorSlot"));
	void IFGColorInterface::Execute_SetColorSlot(UObject* O, uint8 index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventSetColorSlot_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_SetColorSlot);
		if (Func)
		{
			Parms.index=index;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->SetColorSlot_Implementation(index);
		}
	}
	static FName NAME_UFGColorInterface_SetPrimaryColor = FName(TEXT("SetPrimaryColor"));
	void IFGColorInterface::Execute_SetPrimaryColor(UObject* O, FLinearColor newColor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventSetPrimaryColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_SetPrimaryColor);
		if (Func)
		{
			Parms.newColor=newColor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->SetPrimaryColor_Implementation(newColor);
		}
	}
	static FName NAME_UFGColorInterface_SetSecondaryColor = FName(TEXT("SetSecondaryColor"));
	void IFGColorInterface::Execute_SetSecondaryColor(UObject* O, FLinearColor newColor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventSetSecondaryColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_SetSecondaryColor);
		if (Func)
		{
			Parms.newColor=newColor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->SetSecondaryColor_Implementation(newColor);
		}
	}
	static FName NAME_UFGColorInterface_StartIsAimedAtForColor = FName(TEXT("StartIsAimedAtForColor"));
	void IFGColorInterface::Execute_StartIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventStartIsAimedAtForColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_StartIsAimedAtForColor);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->StartIsAimedAtForColor_Implementation(byCharacter);
		}
	}
	static FName NAME_UFGColorInterface_StopIsAimedAtForColor = FName(TEXT("StopIsAimedAtForColor"));
	void IFGColorInterface::Execute_StopIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGColorInterface::StaticClass()));
		FGColorInterface_eventStopIsAimedAtForColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGColorInterface_StopIsAimedAtForColor);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGColorInterface*)(O->GetNativeInterfaceAddress(UFGColorInterface::StaticClass())))
		{
			I->StopIsAimedAtForColor_Implementation(byCharacter);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
