// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGRemoteCallObject.h"
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
// End Cross Module References
	void UFGRemoteCallObject::StaticRegisterNativesUFGRemoteCallObject()
	{
		UClass* Class = UFGRemoteCallObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameState", &UFGRemoteCallObject::execGetGameState },
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
		{ "ModuleRelativePath", "FGRemoteCallObject.h" },
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
		{ &Z_Construct_UFunction_UFGRemoteCallObject_GetGameState, "GetGameState" }, // 3046557556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGRemoteCallObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGRemoteCallObject.h" },
		{ "ModuleRelativePath", "FGRemoteCallObject.h" },
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
	IMPLEMENT_CLASS(UFGRemoteCallObject, 2420572653);
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
