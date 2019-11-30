// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGSaveInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSaveInterface() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveInterface_GatherDependencies();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveInterface_NeedTransform();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveInterface_PostLoadGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveInterface_PostSaveGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveInterface_PreLoadGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveInterface_PreSaveGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveInterface_ShouldSave();
// End Cross Module References
	void IFGSaveInterface::GatherDependencies(TArray<UObject*>& out_dependentObjects)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GatherDependencies instead.");
	}
	bool IFGSaveInterface::NeedTransform()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NeedTransform instead.");
		FGSaveInterface_eventNeedTransform_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGSaveInterface::PostLoadGame(int32 saveVersion, int32 gameVersion)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PostLoadGame instead.");
	}
	void IFGSaveInterface::PostSaveGame(int32 saveVersion, int32 gameVersion)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PostSaveGame instead.");
	}
	void IFGSaveInterface::PreLoadGame(int32 saveVersion, int32 gameVersion)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PreLoadGame instead.");
	}
	void IFGSaveInterface::PreSaveGame(int32 saveVersion, int32 gameVersion)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PreSaveGame instead.");
	}
	bool IFGSaveInterface::ShouldSave() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShouldSave instead.");
		FGSaveInterface_eventShouldSave_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFGSaveInterface::StaticRegisterNativesUFGSaveInterface()
	{
		UClass* Class = UFGSaveInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GatherDependencies", &IFGSaveInterface::execGatherDependencies },
			{ "NeedTransform", &IFGSaveInterface::execNeedTransform },
			{ "PostLoadGame", &IFGSaveInterface::execPostLoadGame },
			{ "PostSaveGame", &IFGSaveInterface::execPostSaveGame },
			{ "PreLoadGame", &IFGSaveInterface::execPreLoadGame },
			{ "PreSaveGame", &IFGSaveInterface::execPreSaveGame },
			{ "ShouldSave", &IFGSaveInterface::execShouldSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_dependentObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_out_dependentObjects_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::NewProp_out_dependentObjects = { "out_dependentObjects", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventGatherDependencies_Parms, out_dependentObjects), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::NewProp_out_dependentObjects_Inner = { "out_dependentObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::NewProp_out_dependentObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::NewProp_out_dependentObjects_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ToolTip", "Called before PreSaveGame, used to determine the order the objects is to be saved on disc @warning: make sure to NOT create any cyclic\ndependencies\n\n@param out_dependentObjects -        populate this with the object you are dependent on, no need to care about outer/owner, they are automatically\n                                                                     handled by calling code" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveInterface, nullptr, "GatherDependencies", sizeof(FGSaveInterface_eventGatherDependencies_Parms), Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveInterface_GatherDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveInterface_GatherDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSaveInterface_eventNeedTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSaveInterface_eventNeedTransform_Parms), &Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ToolTip", "Only relevant for actors.\nIf returning true, then when loading, we are returned to the location that was stored when saving" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveInterface, nullptr, "NeedTransform", sizeof(FGSaveInterface_eventNeedTransform_Parms), Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveInterface_NeedTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveInterface_NeedTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_saveVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::NewProp_gameVersion = { "gameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPostLoadGame_Parms, gameVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::NewProp_saveVersion = { "saveVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPostLoadGame_Parms, saveVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::NewProp_gameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::NewProp_saveVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ToolTip", "Called on all UObjects when they have gotten their data from serialization\n\n@param saveVersion - the version of the save game, incremented when doing native conversions\n@param gameVersion - the version of the game, is the CL of our internal Perforce server, will be a large number > 40k" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveInterface, nullptr, "PostLoadGame", sizeof(FGSaveInterface_eventPostLoadGame_Parms), Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveInterface_PostLoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveInterface_PostLoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_saveVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::NewProp_gameVersion = { "gameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPostSaveGame_Parms, gameVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::NewProp_saveVersion = { "saveVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPostSaveGame_Parms, saveVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::NewProp_gameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::NewProp_saveVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ToolTip", "Called on all UObjects right after they have written their data, so they can cleanup any mess done in PreSave\n\n@param saveVersion - the version of the save game, incremented when doing native conversions\n@param gameVersion - the version of the game, is the CL of our internal Perforce server, will be a large number > 40k" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveInterface, nullptr, "PostSaveGame", sizeof(FGSaveInterface_eventPostSaveGame_Parms), Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveInterface_PostSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveInterface_PostSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_saveVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::NewProp_gameVersion = { "gameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPreLoadGame_Parms, gameVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::NewProp_saveVersion = { "saveVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPreLoadGame_Parms, saveVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::NewProp_gameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::NewProp_saveVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ToolTip", "Called on all UObjects right after they will be loaded (or created prior to getting their data)\n\n@param saveVersion - the version of the save game, incremented when doing native conversions\n@param gameVersion - the version of the game, is the CL of our internal Perforce server, will be a large number > 40k" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveInterface, nullptr, "PreLoadGame", sizeof(FGSaveInterface_eventPreLoadGame_Parms), Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveInterface_PreLoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveInterface_PreLoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameVersion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_saveVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::NewProp_gameVersion = { "gameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPreSaveGame_Parms, gameVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::NewProp_saveVersion = { "saveVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveInterface_eventPreSaveGame_Parms, saveVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::NewProp_gameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::NewProp_saveVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ToolTip", "Called on all UObjects that will be saved right before the save is done\n\n@param saveVersion - the version of the save game, incremented when doing native conversions\n@param gameVersion - the version of the game, is the CL of our internal Perforce server, will be a large number > 40k" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveInterface, nullptr, "PreSaveGame", sizeof(FGSaveInterface_eventPreSaveGame_Parms), Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveInterface_PreSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveInterface_PreSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSaveInterface_eventShouldSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSaveInterface_eventShouldSave_Parms), &Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ToolTip", "Called before PreSaveGame, used to determine if the object want to be saved\n\n@return true if the object want to be saved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveInterface, nullptr, "ShouldSave", sizeof(FGSaveInterface_eventShouldSave_Parms), Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveInterface_ShouldSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveInterface_ShouldSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSaveInterface_NoRegister()
	{
		return UFGSaveInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGSaveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSaveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSaveInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSaveInterface_GatherDependencies, "GatherDependencies" }, // 3229574380
		{ &Z_Construct_UFunction_UFGSaveInterface_NeedTransform, "NeedTransform" }, // 1913437544
		{ &Z_Construct_UFunction_UFGSaveInterface_PostLoadGame, "PostLoadGame" }, // 3351486243
		{ &Z_Construct_UFunction_UFGSaveInterface_PostSaveGame, "PostSaveGame" }, // 4165616475
		{ &Z_Construct_UFunction_UFGSaveInterface_PreLoadGame, "PreLoadGame" }, // 2345123196
		{ &Z_Construct_UFunction_UFGSaveInterface_PreSaveGame, "PreSaveGame" }, // 596148663
		{ &Z_Construct_UFunction_UFGSaveInterface_ShouldSave, "ShouldSave" }, // 1698108161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSaveInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FGSaveInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSaveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGSaveInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSaveInterface_Statics::ClassParams = {
		&UFGSaveInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGSaveInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSaveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSaveInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSaveInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSaveInterface, 2292489956);
	template<> FACTORYGAME_API UClass* StaticClass<UFGSaveInterface>()
	{
		return UFGSaveInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSaveInterface(Z_Construct_UClass_UFGSaveInterface, &UFGSaveInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSaveInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSaveInterface);
	static FName NAME_UFGSaveInterface_GatherDependencies = FName(TEXT("GatherDependencies"));
	void IFGSaveInterface::Execute_GatherDependencies(UObject* O, TArray<UObject*>& out_dependentObjects)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSaveInterface::StaticClass()));
		FGSaveInterface_eventGatherDependencies_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGSaveInterface_GatherDependencies);
		if (Func)
		{
			Parms.out_dependentObjects=out_dependentObjects;
			O->ProcessEvent(Func, &Parms);
			out_dependentObjects=Parms.out_dependentObjects;
		}
		else if (auto I = (IFGSaveInterface*)(O->GetNativeInterfaceAddress(UFGSaveInterface::StaticClass())))
		{
			I->GatherDependencies_Implementation(out_dependentObjects);
		}
	}
	static FName NAME_UFGSaveInterface_NeedTransform = FName(TEXT("NeedTransform"));
	bool IFGSaveInterface::Execute_NeedTransform(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSaveInterface::StaticClass()));
		FGSaveInterface_eventNeedTransform_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGSaveInterface_NeedTransform);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGSaveInterface*)(O->GetNativeInterfaceAddress(UFGSaveInterface::StaticClass())))
		{
			Parms.ReturnValue = I->NeedTransform_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGSaveInterface_PostLoadGame = FName(TEXT("PostLoadGame"));
	void IFGSaveInterface::Execute_PostLoadGame(UObject* O, int32 saveVersion, int32 gameVersion)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSaveInterface::StaticClass()));
		FGSaveInterface_eventPostLoadGame_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGSaveInterface_PostLoadGame);
		if (Func)
		{
			Parms.saveVersion=saveVersion;
			Parms.gameVersion=gameVersion;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGSaveInterface*)(O->GetNativeInterfaceAddress(UFGSaveInterface::StaticClass())))
		{
			I->PostLoadGame_Implementation(saveVersion,gameVersion);
		}
	}
	static FName NAME_UFGSaveInterface_PostSaveGame = FName(TEXT("PostSaveGame"));
	void IFGSaveInterface::Execute_PostSaveGame(UObject* O, int32 saveVersion, int32 gameVersion)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSaveInterface::StaticClass()));
		FGSaveInterface_eventPostSaveGame_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGSaveInterface_PostSaveGame);
		if (Func)
		{
			Parms.saveVersion=saveVersion;
			Parms.gameVersion=gameVersion;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGSaveInterface*)(O->GetNativeInterfaceAddress(UFGSaveInterface::StaticClass())))
		{
			I->PostSaveGame_Implementation(saveVersion,gameVersion);
		}
	}
	static FName NAME_UFGSaveInterface_PreLoadGame = FName(TEXT("PreLoadGame"));
	void IFGSaveInterface::Execute_PreLoadGame(UObject* O, int32 saveVersion, int32 gameVersion)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSaveInterface::StaticClass()));
		FGSaveInterface_eventPreLoadGame_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGSaveInterface_PreLoadGame);
		if (Func)
		{
			Parms.saveVersion=saveVersion;
			Parms.gameVersion=gameVersion;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGSaveInterface*)(O->GetNativeInterfaceAddress(UFGSaveInterface::StaticClass())))
		{
			I->PreLoadGame_Implementation(saveVersion,gameVersion);
		}
	}
	static FName NAME_UFGSaveInterface_PreSaveGame = FName(TEXT("PreSaveGame"));
	void IFGSaveInterface::Execute_PreSaveGame(UObject* O, int32 saveVersion, int32 gameVersion)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSaveInterface::StaticClass()));
		FGSaveInterface_eventPreSaveGame_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGSaveInterface_PreSaveGame);
		if (Func)
		{
			Parms.saveVersion=saveVersion;
			Parms.gameVersion=gameVersion;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGSaveInterface*)(O->GetNativeInterfaceAddress(UFGSaveInterface::StaticClass())))
		{
			I->PreSaveGame_Implementation(saveVersion,gameVersion);
		}
	}
	static FName NAME_UFGSaveInterface_ShouldSave = FName(TEXT("ShouldSave"));
	bool IFGSaveInterface::Execute_ShouldSave(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGSaveInterface::StaticClass()));
		FGSaveInterface_eventShouldSave_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGSaveInterface_ShouldSave);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGSaveInterface*)(O->GetNativeInterfaceAddress(UFGSaveInterface::StaticClass())))
		{
			Parms.ReturnValue = I->ShouldSave_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
