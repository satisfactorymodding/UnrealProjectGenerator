// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Buildables/FGBuildableSignWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGBuildableSignWall() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSignWallData();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSignWall_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableSignWall();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGBuildableWall();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSignWall_GetSignData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGBuildableSignWall_SetSignData();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FSignWallData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSignWallData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSignWallData, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SignWallData"), sizeof(FSignWallData), Get_Z_Construct_UScriptStruct_FSignWallData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSignWallData(FSignWallData::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SignWallData"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSignWallData
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSignWallData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SignWallData")),new UScriptStruct::TCppStructOps<FSignWallData>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSignWallData;
	struct Z_Construct_UScriptStruct_FSignWallData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SignText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BackgroundColorIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColorIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextColorIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignWallData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSignWallData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSignWallData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_SignText_MetaData[] = {
		{ "Category", "SignWall" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Text to be displayed on the sign" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_SignText = { UE4CodeGen_Private::EPropertyClass::Str, "SignText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FSignWallData, SignText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_SignText_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_SignText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_BackgroundColorIndex_MetaData[] = {
		{ "Category", "SignWall" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Index of the selected color for the background from the FGSignSettings color data array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_BackgroundColorIndex = { UE4CodeGen_Private::EPropertyClass::Int, "BackgroundColorIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FSignWallData, BackgroundColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_BackgroundColorIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_BackgroundColorIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_TextColorIndex_MetaData[] = {
		{ "Category", "SignWall" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Index of the selected color for the text from the FGSignSettings color data array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_TextColorIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TextColorIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000001000004, 1, nullptr, STRUCT_OFFSET(FSignWallData, TextColorIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_TextColorIndex_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_TextColorIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSignWallData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_SignText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_BackgroundColorIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSignWallData_Statics::NewProp_TextColorIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSignWallData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SignWallData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FSignWallData),
		alignof(FSignWallData),
		Z_Construct_UScriptStruct_FSignWallData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignWallData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSignWallData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSignWallData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSignWallData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSignWallData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SignWallData"), sizeof(FSignWallData), Get_Z_Construct_UScriptStruct_FSignWallData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSignWallData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSignWallData_CRC() { return 2813139800U; }
	void AFGBuildableSignWall::StaticRegisterNativesAFGBuildableSignWall()
	{
		UClass* Class = AFGBuildableSignWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSignData", &AFGBuildableSignWall::execGetSignData },
			{ "OnRep_SignData", &AFGBuildableSignWall::execOnRep_SignData },
			{ "SetSignData", &AFGBuildableSignWall::execSetSignData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics
	{
		struct FGBuildableSignWall_eventGetSignData_Parms
		{
			FSignWallData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000582, 1, nullptr, STRUCT_OFFSET(FGBuildableSignWall_eventGetSignData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSignWallData, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::Function_MetaDataParams[] = {
		{ "Category", "WallSign" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSignWall, "GetSignData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(FGBuildableSignWall_eventGetSignData_Parms), Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSignWall_GetSignData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSignWall_GetSignData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Update sign components on replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSignWall, "OnRep_SignData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics
	{
		struct FGBuildableSignWall_eventSetSignData_Parms
		{
			FSignWallData signData;
			bool bUpdate;
		};
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_signData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((FGBuildableSignWall_eventSetSignData_Parms*)Obj)->bUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::NewProp_bUpdate = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGBuildableSignWall_eventSetSignData_Parms), &Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::NewProp_signData = { UE4CodeGen_Private::EPropertyClass::Struct, "signData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FGBuildableSignWall_eventSetSignData_Parms, signData), Z_Construct_UScriptStruct_FSignWallData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::NewProp_bUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::NewProp_signData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::Function_MetaDataParams[] = {
		{ "Category", "WallSign" },
		{ "CPP_Default_bUpdate", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Called by server or client to update sign data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGBuildableSignWall, "SetSignData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(FGBuildableSignWall_eventSetSignData_Parms), Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGBuildableSignWall_SetSignData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGBuildableSignWall_SetSignData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGBuildableSignWall_NoRegister()
	{
		return AFGBuildableSignWall::StaticClass();
	}
	struct Z_Construct_UClass_AFGBuildableSignWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mSignData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTextRenderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTextRenderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTextDisplayRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTextDisplayRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSignDisplayRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mSignDisplayRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGBuildableSignWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFGBuildableWall,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGBuildableSignWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGBuildableSignWall_GetSignData, "GetSignData" }, // 4126177220
		{ &Z_Construct_UFunction_AFGBuildableSignWall_OnRep_SignData, "OnRep_SignData" }, // 915787522
		{ &Z_Construct_UFunction_AFGBuildableSignWall_SetSignData, "SetSignData" }, // 2883031347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSignWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/FGBuildableSignWall.h" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Represents a wall that contains sign elements and is interactable" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignData_MetaData[] = {
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignData = { UE4CodeGen_Private::EPropertyClass::Struct, "mSignData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000101000020, 1, "OnRep_SignData", STRUCT_OFFSET(AFGBuildableSignWall, mSignData), Z_Construct_UScriptStruct_FSignWallData, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextRenderComponent_MetaData[] = {
		{ "Category", "WallSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Front text render component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextRenderComponent = { UE4CodeGen_Private::EPropertyClass::Object, "mTextRenderComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableSignWall, mTextRenderComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextRenderComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextRenderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextDisplayRoot_MetaData[] = {
		{ "Category", "WallSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Root component that parents the text objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextDisplayRoot = { UE4CodeGen_Private::EPropertyClass::Object, "mTextDisplayRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableSignWall, mTextDisplayRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextDisplayRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextDisplayRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignDisplayRoot_MetaData[] = {
		{ "Category", "WallSign" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Buildables/FGBuildableSignWall.h" },
		{ "ToolTip", "Root Component that holds all the sign elements, text, mesh etc." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignDisplayRoot = { UE4CodeGen_Private::EPropertyClass::Object, "mSignDisplayRoot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(AFGBuildableSignWall, mSignDisplayRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignDisplayRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignDisplayRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGBuildableSignWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextRenderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mTextDisplayRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGBuildableSignWall_Statics::NewProp_mSignDisplayRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGBuildableSignWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGBuildableSignWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGBuildableSignWall_Statics::ClassParams = {
		&AFGBuildableSignWall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGBuildableSignWall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSignWall_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGBuildableSignWall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGBuildableSignWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGBuildableSignWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGBuildableSignWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGBuildableSignWall, 2280673968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGBuildableSignWall(Z_Construct_UClass_AFGBuildableSignWall, &AFGBuildableSignWall::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGBuildableSignWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGBuildableSignWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
