// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGOnlineSessionClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGOnlineSessionClient() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FPendingInvite();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGOnlineSessionClient_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGOnlineSessionClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient();
// End Cross Module References
class UScriptStruct* FPendingInvite::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FPendingInvite_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingInvite, Z_Construct_UPackage__Script_FactoryGame(), TEXT("PendingInvite"), sizeof(FPendingInvite), Get_Z_Construct_UScriptStruct_FPendingInvite_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FPendingInvite>()
{
	return FPendingInvite::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPendingInvite(FPendingInvite::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("PendingInvite"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFPendingInvite
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFPendingInvite()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PendingInvite")),new UScriptStruct::TCppStructOps<FPendingInvite>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFPendingInvite;
	struct Z_Construct_UScriptStruct_FPendingInvite_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingInvite_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGOnlineSessionClient.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingInvite_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingInvite>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingInvite_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"PendingInvite",
		sizeof(FPendingInvite),
		alignof(FPendingInvite),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingInvite_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingInvite_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingInvite()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPendingInvite_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PendingInvite"), sizeof(FPendingInvite), Get_Z_Construct_UScriptStruct_FPendingInvite_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPendingInvite_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPendingInvite_Hash() { return 1843763605U; }
	void UFGOnlineSessionClient::StaticRegisterNativesUFGOnlineSessionClient()
	{
	}
	UClass* Z_Construct_UClass_UFGOnlineSessionClient_NoRegister()
	{
		return UFGOnlineSessionClient::StaticClass();
	}
	struct Z_Construct_UClass_UFGOnlineSessionClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGOnlineSessionClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineSessionClient,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGOnlineSessionClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGOnlineSessionClient.h" },
		{ "ModuleRelativePath", "FGOnlineSessionClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGOnlineSessionClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGOnlineSessionClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGOnlineSessionClient_Statics::ClassParams = {
		&UFGOnlineSessionClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGOnlineSessionClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGOnlineSessionClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGOnlineSessionClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGOnlineSessionClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGOnlineSessionClient, 1496645504);
	template<> FACTORYGAME_API UClass* StaticClass<UFGOnlineSessionClient>()
	{
		return UFGOnlineSessionClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGOnlineSessionClient(Z_Construct_UClass_UFGOnlineSessionClient, &UFGOnlineSessionClient::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGOnlineSessionClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGOnlineSessionClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
