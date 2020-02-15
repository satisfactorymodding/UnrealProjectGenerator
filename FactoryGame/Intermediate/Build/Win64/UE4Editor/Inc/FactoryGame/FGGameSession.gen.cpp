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
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLoggedInAdmins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mLoggedInAdmins;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLoggedInAdmins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mFailedLoginCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mFailedLoginCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mFailedLoginCount_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mFailedLoginCount_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLastLoginFailTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_mLastLoginFailTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLastLoginFailTime_Key_KeyProp;
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_mLastLoginFailTime_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLoggedInAdmins_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameSession.h" },
		{ "ToolTip", "List of logged in admins" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLoggedInAdmins = { "mLoggedInAdmins", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameSession, mLoggedInAdmins), METADATA_PARAMS(Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLoggedInAdmins_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLoggedInAdmins_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLoggedInAdmins_Inner = { "mLoggedInAdmins", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameSession.h" },
		{ "ToolTip", "Used to keep track of how many times a player has failed to login in a row" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount = { "mFailedLoginCount", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameSession, mFailedLoginCount), METADATA_PARAMS(Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount_Key_KeyProp = { "mFailedLoginCount_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount_ValueProp = { "mFailedLoginCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGGameSession.h" },
		{ "ToolTip", "Used to keep track of players when they last tried to login and failed to detect brute force logins" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime = { "mLastLoginFailTime", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGGameSession, mLastLoginFailTime), METADATA_PARAMS(Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime_Key_KeyProp = { "mLastLoginFailTime_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime_ValueProp = { "mLastLoginFailTime", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLoggedInAdmins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLoggedInAdmins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mFailedLoginCount_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGGameSession_Statics::NewProp_mLastLoginFailTime_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGGameSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGGameSession_Statics::ClassParams = {
		&AFGGameSession::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGGameSession_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGGameSession_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AFGGameSession, 479041127);
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
