// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGOnlineSessionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGOnlineSessionSettings() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESessionVisibility();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FFGOnlineSessionSettings();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ECachedNATType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
	static UEnum* ESessionVisibility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ESessionVisibility, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ESessionVisibility"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ESessionVisibility>()
	{
		return ESessionVisibility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESessionVisibility(ESessionVisibility_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESessionVisibility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESessionVisibility_Hash() { return 1609036651U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESessionVisibility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESessionVisibility"), 0, Get_Z_Construct_UEnum_FactoryGame_ESessionVisibility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SV_Private", (int64)SV_Private },
				{ "SV_FriendsOnly", (int64)SV_FriendsOnly },
				{ "SV_Invalid", (int64)SV_Invalid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
				{ "SV_FriendsOnly.DisplayName", "FriendsOnly" },
				{ "SV_Invalid.Hidden", "" },
				{ "SV_Private.DisplayName", "Private" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ESessionVisibility",
				"ESessionVisibility",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFGOnlineSessionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFGOnlineSessionSettings, Z_Construct_UPackage__Script_FactoryGame(), TEXT("FGOnlineSessionSettings"), sizeof(FFGOnlineSessionSettings), Get_Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FFGOnlineSessionSettings>()
{
	return FFGOnlineSessionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFGOnlineSessionSettings(FFGOnlineSessionSettings::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("FGOnlineSessionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFFGOnlineSessionSettings
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFFGOnlineSessionSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FGOnlineSessionSettings")),new UScriptStruct::TCppStructOps<FFGOnlineSessionSettings>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFFGOnlineSessionSettings;
	struct Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NATType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NATType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NATType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumConnectedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumConnectedPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HostPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HostId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "The content of this struct is used to populate the session settings automatically\nusing the Unreal Reflection system, the keys names used to propagate the settings is\nthe variable name, then the variables is converted to strings and back." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFGOnlineSessionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NATType_MetaData[] = {
		{ "Category", "FGOnlineSessionSettings" },
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "Hosts nat type" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NATType = { "NATType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, NATType), Z_Construct_UEnum_FactoryGame_ECachedNATType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NATType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NATType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NATType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_SessionName_MetaData[] = {
		{ "Category", "FGOnlineSessionSettings" },
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "Name of the session, same as the name exposed in the Save/Load menus" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_SessionName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "Category", "FGOnlineSessionSettings" },
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "The build version on the form ++FactoryGame+Main-4.20-CL-123456" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, BuildVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_BuildVersion_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_PlayDuration_MetaData[] = {
		{ "Category", "FGOnlineSessionSettings" },
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "For how long has the game been played in seconds" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_PlayDuration = { "PlayDuration", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, PlayDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_PlayDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_PlayDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NumConnectedPlayers_MetaData[] = {
		{ "Category", "FGOnlineSessionSettings" },
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "Number of players currently connected to the game" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NumConnectedPlayers = { "NumConnectedPlayers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, NumConnectedPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NumConnectedPlayers_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NumConnectedPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostPort_MetaData[] = {
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "IMPORTANT: Don't rename this! This is parsed in engine code" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostPort = { "HostPort", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, HostPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostPort_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostAddress_MetaData[] = {
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "IMPORTANT: Don't rename this! This is parsed in engine code, @todo: Maybe make this something else than a string?" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostAddress = { "HostAddress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, HostAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostAddress_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostId_MetaData[] = {
		{ "ModuleRelativePath", "FGOnlineSessionSettings.h" },
		{ "ToolTip", "IMPORTANT: Don't rename this! This is parsed in engine code" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostId = { "HostId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFGOnlineSessionSettings, HostId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NATType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NATType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_SessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_PlayDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_NumConnectedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::NewProp_HostId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"FGOnlineSessionSettings",
		sizeof(FFGOnlineSessionSettings),
		alignof(FFGOnlineSessionSettings),
		Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFGOnlineSessionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FGOnlineSessionSettings"), sizeof(FFGOnlineSessionSettings), Get_Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFGOnlineSessionSettings_Hash() { return 3453069217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
