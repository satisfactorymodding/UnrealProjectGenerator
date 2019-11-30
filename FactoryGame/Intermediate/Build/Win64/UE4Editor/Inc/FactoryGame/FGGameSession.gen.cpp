// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGGameSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGGameSession() {}
// Cross Module References
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGameSession_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated();
// End Cross Module References
	void AFGGameSession::StaticRegisterNativesAFGGameSession()
	{
		UClass* Class = AFGGameSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IntroSequenceUpdated", &AFGGameSession::execIntroSequenceUpdated },
			{ "ListenForIntroSequenceUpdated", &AFGGameSession::execListenForIntroSequenceUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGGameSession.h" },
		{ "ToolTip", "Game can become public after this, and the current visibility is applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGameSession, nullptr, "IntroSequenceUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGGameSession.h" },
		{ "ToolTip", "Make sure we have a tutorial intro managere" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGGameSession, nullptr, "ListenForIntroSequenceUpdated", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGGameSession_NoRegister()
	{
		return AFGGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AFGGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGGameSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGGameSession_IntroSequenceUpdated, "IntroSequenceUpdated" }, // 1609097493
		{ &Z_Construct_UFunction_AFGGameSession_ListenForIntroSequenceUpdated, "ListenForIntroSequenceUpdated" }, // 127989462
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameSession_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FGGameSession.h" },
		{ "ModuleRelativePath", "Public/FGGameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGameSession_Statics::ClassParams = {
		&AFGGameSession::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGGameSession_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGGameSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGGameSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGGameSession, 210907968);
	template<> FACTORYGAME_API UClass* StaticClass<AFGGameSession>()
	{
		return AFGGameSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGGameSession(Z_Construct_UClass_AFGGameSession, &AFGGameSession::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGGameSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGGameSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
