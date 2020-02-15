// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGRemoteCallObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGRemoteCallObject() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRemoteCallObject_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRemoteCallObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRemoteCallObject_GetGameState();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGameState_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FConstructHologramMessage();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FNetConstructionID();
// End Cross Module References
	static FName NAME_UFGRemoteCallObject_Server_ConstructHologram = FName(TEXT("Server_ConstructHologram"));
	void UFGRemoteCallObject::Server_ConstructHologram(FNetConstructionID netConstructionID, FConstructHologramMessage message)
	{
		FGRemoteCallObject_eventServer_ConstructHologram_Parms Parms;
		Parms.netConstructionID=netConstructionID;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_UFGRemoteCallObject_Server_ConstructHologram),&Parms);
	}
	void UFGRemoteCallObject::StaticRegisterNativesUFGRemoteCallObject()
	{
		UClass* Class = UFGRemoteCallObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameState", &UFGRemoteCallObject::execGetGameState },
			{ "Server_ConstructHologram", &UFGRemoteCallObject::execServer_ConstructHologram },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics
	{
		struct FGRemoteCallObject_eventGetGameState_Parms
		{
			AFGGameState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRemoteCallObject_eventGetGameState_Parms, ReturnValue), Z_Construct_UClass_AFGGameState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Public/FGRemoteCallObject.h" },
		{ "ToolTip", "Helper function to get the game state. Can't be done in BluePrint since the GetGameState function hides it world context pin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRemoteCallObject, nullptr, "GetGameState", sizeof(FGRemoteCallObject_eventGetGameState_Parms), Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRemoteCallObject_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRemoteCallObject_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_netConstructionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRemoteCallObject_eventServer_ConstructHologram_Parms, message), Z_Construct_UScriptStruct_FConstructHologramMessage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::NewProp_netConstructionID = { "netConstructionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGRemoteCallObject_eventServer_ConstructHologram_Parms, netConstructionID), Z_Construct_UScriptStruct_FNetConstructionID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::NewProp_netConstructionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGRemoteCallObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGRemoteCallObject, nullptr, "Server_ConstructHologram", sizeof(FGRemoteCallObject_eventServer_ConstructHologram_Parms), Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGRemoteCallObject_NoRegister()
	{
		return UFGRemoteCallObject::StaticClass();
	}
	struct Z_Construct_UClass_UFGRemoteCallObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGRemoteCallObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGRemoteCallObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGRemoteCallObject_GetGameState, "GetGameState" }, // 2046685099
		{ &Z_Construct_UFunction_UFGRemoteCallObject_Server_ConstructHologram, "Server_ConstructHologram" }, // 3439915078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRemoteCallObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGRemoteCallObject.h" },
		{ "ModuleRelativePath", "Public/FGRemoteCallObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGRemoteCallObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGRemoteCallObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGRemoteCallObject_Statics::ClassParams = {
		&UFGRemoteCallObject::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGRemoteCallObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGRemoteCallObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGRemoteCallObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGRemoteCallObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGRemoteCallObject, 2468189453);
	template<> FACTORYGAME_API UClass* StaticClass<UFGRemoteCallObject>()
	{
		return UFGRemoteCallObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGRemoteCallObject(Z_Construct_UClass_UFGRemoteCallObject, &UFGRemoteCallObject::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGRemoteCallObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGRemoteCallObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
