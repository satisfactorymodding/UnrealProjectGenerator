// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/FGNewsFeedActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGNewsFeedActor() {}
// Cross Module References
	FACTORYGAME_API UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FNewsFeedMap();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EGameVersion();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNewsFeedActor_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGNewsFeedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics
	{
		struct _Script_FactoryGame_eventOnNewsReceived_Parms
		{
			FText news;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_news;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::NewProp_news = { "news", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_FactoryGame_eventOnNewsReceived_Parms, news), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::NewProp_news,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FactoryGame, nullptr, "OnNewsReceived__DelegateSignature", sizeof(_Script_FactoryGame_eventOnNewsReceived_Parms), Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FNewsFeedMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FNewsFeedMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewsFeedMap, Z_Construct_UPackage__Script_FactoryGame(), TEXT("NewsFeedMap"), sizeof(FNewsFeedMap), Get_Z_Construct_UScriptStruct_FNewsFeedMap_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FNewsFeedMap>()
{
	return FNewsFeedMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNewsFeedMap(FNewsFeedMap::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("NewsFeedMap"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFNewsFeedMap
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFNewsFeedMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NewsFeedMap")),new UScriptStruct::TCppStructOps<FNewsFeedMap>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFNewsFeedMap;
	struct Z_Construct_UScriptStruct_FNewsFeedMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameVersion_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewsFeedMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewsFeedMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_URL_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewsFeedMap, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_URL_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_GameVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNewsFeedMap, GameVersion), Z_Construct_UEnum_FactoryGame_EGameVersion, METADATA_PARAMS(Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_GameVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_GameVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNewsFeedMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_GameVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNewsFeedMap_Statics::NewProp_GameVersion_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewsFeedMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"NewsFeedMap",
		sizeof(FNewsFeedMap),
		alignof(FNewsFeedMap),
		Z_Construct_UScriptStruct_FNewsFeedMap_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FNewsFeedMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNewsFeedMap_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FNewsFeedMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNewsFeedMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNewsFeedMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NewsFeedMap"), sizeof(FNewsFeedMap), Get_Z_Construct_UScriptStruct_FNewsFeedMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNewsFeedMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNewsFeedMap_Hash() { return 3866075094U; }
	void AFGNewsFeedActor::StaticRegisterNativesAFGNewsFeedActor()
	{
	}
	UClass* Z_Construct_UClass_AFGNewsFeedActor_NoRegister()
	{
		return AFGNewsFeedActor::StaticClass();
	}
	struct Z_Construct_UClass_AFGNewsFeedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNewsFeedURLs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mNewsFeedURLs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mNewsFeedURLs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNewsFeedRequestFailedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mNewsFeedRequestFailedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mNewFeedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_mNewFeedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mOnNewsReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mOnNewsReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGNewsFeedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNewsFeedActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGNewsFeedActor.h" },
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedURLs_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedURLs = { "mNewsFeedURLs", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNewsFeedActor, mNewsFeedURLs), METADATA_PARAMS(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedURLs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedURLs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedURLs_Inner = { "mNewsFeedURLs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNewsFeedMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedRequestFailedText_MetaData[] = {
		{ "Category", "News Feed" },
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
		{ "ToolTip", "Display this text if we fail to get the news feed text" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedRequestFailedText = { "mNewsFeedRequestFailedText", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNewsFeedActor, mNewsFeedRequestFailedText), METADATA_PARAMS(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedRequestFailedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedRequestFailedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewFeedText_MetaData[] = {
		{ "Category", "FGNewsFeedActor" },
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
		{ "ToolTip", "Yeah yeah, this is only a prototype class it breaks code convention, fix it when we make a proper news feed" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewFeedText = { "mNewFeedText", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNewsFeedActor, mNewFeedText), METADATA_PARAMS(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewFeedText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewFeedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mOnNewsReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/FGNewsFeedActor.h" },
		{ "ToolTip", "Fired when we get the result back from the HTTP Get request" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mOnNewsReceived = { "mOnNewsReceived", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGNewsFeedActor, mOnNewsReceived), Z_Construct_UDelegateFunction_FactoryGame_OnNewsReceived__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mOnNewsReceived_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mOnNewsReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGNewsFeedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedURLs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedURLs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewsFeedRequestFailedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mNewFeedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGNewsFeedActor_Statics::NewProp_mOnNewsReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGNewsFeedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGNewsFeedActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGNewsFeedActor_Statics::ClassParams = {
		&AFGNewsFeedActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFGNewsFeedActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AFGNewsFeedActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFGNewsFeedActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGNewsFeedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGNewsFeedActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGNewsFeedActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGNewsFeedActor, 1095107329);
	template<> FACTORYGAME_API UClass* StaticClass<AFGNewsFeedActor>()
	{
		return AFGNewsFeedActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGNewsFeedActor(Z_Construct_UClass_AFGNewsFeedActor, &AFGNewsFeedActor::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGNewsFeedActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGNewsFeedActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
