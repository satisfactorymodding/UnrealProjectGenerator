// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGSaveSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGSaveSystem() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_ESaveExists();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSessionSaveStruct();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveHeader();
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMapRedirector();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveSystem_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGSaveSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSystem_DeleteSave();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSystem_FindSaveGames();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSystem_Get();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSystem_GetSaveExists();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName();
// End Cross Module References
	static UEnum* ESaveExists_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_ESaveExists, Z_Construct_UPackage__Script_FactoryGame(), TEXT("ESaveExists"));
		}
		return Singleton;
	}
	template<> FACTORYGAME_API UEnum* StaticEnum<ESaveExists>()
	{
		return ESaveExists_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESaveExists(ESaveExists_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("ESaveExists"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_ESaveExists_Hash() { return 720701149U; }
	UEnum* Z_Construct_UEnum_FactoryGame_ESaveExists()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESaveExists"), 0, Get_Z_Construct_UEnum_FactoryGame_ESaveExists_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESaveExists::SE_DoesntExist", (int64)ESaveExists::SE_DoesntExist },
				{ "ESaveExists::SE_ExistsInSameSession", (int64)ESaveExists::SE_ExistsInSameSession },
				{ "ESaveExists::SE_ExistsInOtherSession", (int64)ESaveExists::SE_ExistsInOtherSession },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "FGSaveSystem.h" },
				{ "SE_DoesntExist.DisplayName", "DoesntExist" },
				{ "SE_ExistsInOtherSession.DisplayName", "ExistsInOtherSession" },
				{ "SE_ExistsInSameSession.DisplayName", "ExistsInSameSession" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"ESaveExists",
				"ESaveExists",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSessionSaveStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSessionSaveStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionSaveStruct, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SessionSaveStruct"), sizeof(FSessionSaveStruct), Get_Z_Construct_UScriptStruct_FSessionSaveStruct_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSessionSaveStruct>()
{
	return FSessionSaveStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionSaveStruct(FSessionSaveStruct::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SessionSaveStruct"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSessionSaveStruct
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSessionSaveStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SessionSaveStruct")),new UScriptStruct::TCppStructOps<FSessionSaveStruct>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSessionSaveStruct;
	struct Z_Construct_UScriptStruct_FSessionSaveStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveHeaders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveHeaders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveHeaders_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionSaveStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewProp_SaveHeaders_MetaData[] = {
		{ "Category", "SessionSaveStruct" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "The saves that are in this session" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewProp_SaveHeaders = { "SaveHeaders", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionSaveStruct, SaveHeaders), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewProp_SaveHeaders_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewProp_SaveHeaders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewProp_SaveHeaders_Inner = { "SaveHeaders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewProp_SaveHeaders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::NewProp_SaveHeaders_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SessionSaveStruct",
		sizeof(FSessionSaveStruct),
		alignof(FSessionSaveStruct),
		Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionSaveStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionSaveStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionSaveStruct"), sizeof(FSessionSaveStruct), Get_Z_Construct_UScriptStruct_FSessionSaveStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionSaveStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionSaveStruct_Hash() { return 90808730U; }
class UScriptStruct* FMapRedirector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FMapRedirector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapRedirector, Z_Construct_UPackage__Script_FactoryGame(), TEXT("MapRedirector"), sizeof(FMapRedirector), Get_Z_Construct_UScriptStruct_FMapRedirector_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FMapRedirector>()
{
	return FMapRedirector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapRedirector(FMapRedirector::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("MapRedirector"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFMapRedirector
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFMapRedirector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MapRedirector")),new UScriptStruct::TCppStructOps<FMapRedirector>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFMapRedirector;
	struct Z_Construct_UScriptStruct_FMapRedirector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OldMapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapRedirector_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "For when a artist/LD has changed the name of a map" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapRedirector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapRedirector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_NewMapName_MetaData[] = {
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "New map name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_NewMapName = { "NewMapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapRedirector, NewMapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_NewMapName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_NewMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_OldMapName_MetaData[] = {
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Old map name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_OldMapName = { "OldMapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapRedirector, OldMapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_OldMapName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_OldMapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapRedirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_NewMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapRedirector_Statics::NewProp_OldMapName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapRedirector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"MapRedirector",
		sizeof(FMapRedirector),
		alignof(FMapRedirector),
		Z_Construct_UScriptStruct_FMapRedirector_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRedirector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapRedirector_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMapRedirector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapRedirector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapRedirector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapRedirector"), sizeof(FMapRedirector), Get_Z_Construct_UScriptStruct_FMapRedirector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapRedirector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapRedirector_Hash() { return 1307921176U; }
class UScriptStruct* FSaveHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FSaveHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveHeader, Z_Construct_UPackage__Script_FactoryGame(), TEXT("SaveHeader"), sizeof(FSaveHeader), Get_Z_Construct_UScriptStruct_FSaveHeader_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FSaveHeader>()
{
	return FSaveHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveHeader(FSaveHeader::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("SaveHeader"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFSaveHeader
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFSaveHeader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveHeader")),new UScriptStruct::TCppStructOps<FSaveHeader>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFSaveHeader;
	struct Z_Construct_UScriptStruct_FSaveHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "The header with information about a save game" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveHeader>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"SaveHeader",
		sizeof(FSaveHeader),
		alignof(FSaveHeader),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveHeader_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveHeader"), sizeof(FSaveHeader), Get_Z_Construct_UScriptStruct_FSaveHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveHeader_Hash() { return 757553678U; }
	void UFGSaveSystem::StaticRegisterNativesUFGSaveSystem()
	{
		UClass* Class = UFGSaveSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteSave", &UFGSaveSystem::execDeleteSave },
			{ "FindSaveGames", &UFGSaveSystem::execFindSaveGames },
			{ "Get", &UFGSaveSystem::execGet },
			{ "GetAllSavesPerSession", &UFGSaveSystem::execGetAllSavesPerSession },
			{ "GetSaveExists", &UFGSaveSystem::execGetSaveExists },
			{ "IsSessionNameUsed", &UFGSaveSystem::execIsSessionNameUsed },
			{ "IsValidSaveName", &UFGSaveSystem::execIsValidSaveName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics
	{
		struct FGSaveSystem_eventDeleteSave_Parms
		{
			FString saveName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSaveSystem_eventDeleteSave_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSaveSystem_eventDeleteSave_Parms), &Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::NewProp_saveName = { "saveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventDeleteSave_Parms, saveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::NewProp_saveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Delete a save game\n\n@param saveName - the save file's name without extension\n@return true if we managed to delete the save" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSystem, nullptr, "DeleteSave", sizeof(FGSaveSystem_eventDeleteSave_Parms), Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSystem_DeleteSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSystem_DeleteSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics
	{
		struct FGSaveSystem_eventFindSaveGames_Parms
		{
			TArray<FSaveHeader> out_saveGames;
			bool newestFirst;
		};
		static void NewProp_newestFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newestFirst;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_saveGames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_saveGames_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_newestFirst_SetBit(void* Obj)
	{
		((FGSaveSystem_eventFindSaveGames_Parms*)Obj)->newestFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_newestFirst = { "newestFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSaveSystem_eventFindSaveGames_Parms), &Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_newestFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_out_saveGames = { "out_saveGames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventFindSaveGames_Parms, out_saveGames), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_out_saveGames_Inner = { "out_saveGames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveHeader, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_newestFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_out_saveGames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::NewProp_out_saveGames_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Find all available save games from disc\n\n@param out_saveGames a list with the available save games" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSystem, nullptr, "FindSaveGames", sizeof(FGSaveSystem_eventFindSaveGames_Parms), Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSystem_FindSaveGames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSystem_FindSaveGames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSystem_Get_Statics
	{
		struct FGSaveSystem_eventGet_Parms
		{
			UObject* worldContext;
			UFGSaveSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_worldContext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSaveSystem_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventGet_Parms, ReturnValue), Z_Construct_UClass_UFGSaveSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGSaveSystem_Get_Statics::NewProp_worldContext = { "worldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventGet_Parms, worldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSystem_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_Get_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_Get_Statics::NewProp_worldContext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "DisplayName", "GetSaveSystem" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Get the save system from a world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSystem_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSystem, nullptr, "Get", sizeof(FGSaveSystem_eventGet_Parms), Z_Construct_UFunction_UFGSaveSystem_Get_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_Get_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSystem_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSystem_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics
	{
		struct FGSaveSystem_eventGetAllSavesPerSession_Parms
		{
			TArray<FSessionSaveStruct> out_sessions;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_sessions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_sessions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::NewProp_out_sessions = { "out_sessions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventGetAllSavesPerSession_Parms, out_sessions), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::NewProp_out_sessions_Inner = { "out_sessions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSessionSaveStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::NewProp_out_sessions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::NewProp_out_sessions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Loops through all save games and group them by session\nand sorts the saves by dates and then session by last save date" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSystem, nullptr, "GetAllSavesPerSession", sizeof(FGSaveSystem_eventGetAllSavesPerSession_Parms), Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics
	{
		struct FGSaveSystem_eventGetSaveExists_Parms
		{
			FString saveName;
			FString currentSessionName;
			ESaveExists ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentSessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currentSessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_saveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventGetSaveExists_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_ESaveExists, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_currentSessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_currentSessionName = { "currentSessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventGetSaveExists_Parms, currentSessionName), METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_currentSessionName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_currentSessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_saveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_saveName = { "saveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventGetSaveExists_Parms, saveName), METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_saveName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_saveName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_currentSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::NewProp_saveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Check if a save game exists, if you don't care about session name, pass in empty currentSessionName and check != ESaveExists::SE_DoesntExist" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSystem, nullptr, "GetSaveExists", sizeof(FGSaveSystem_eventGetSaveExists_Parms), Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSystem_GetSaveExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSystem_GetSaveExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics
	{
		struct FGSaveSystem_eventIsSessionNameUsed_Parms
		{
			FString sessionName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sessionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSaveSystem_eventIsSessionNameUsed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSaveSystem_eventIsSessionNameUsed_Parms), &Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventIsSessionNameUsed_Parms, sessionName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::NewProp_sessionName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSystem, nullptr, "IsSessionNameUsed", sizeof(FGSaveSystem_eventIsSessionNameUsed_Parms), Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics
	{
		struct FGSaveSystem_eventIsValidSaveName_Parms
		{
			FString saveName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_saveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGSaveSystem_eventIsValidSaveName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSaveSystem_eventIsValidSaveName_Parms), &Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::NewProp_saveName = { "saveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSaveSystem_eventIsValidSaveName_Parms, saveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::NewProp_saveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Helper, used to verify if the save game name is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGSaveSystem, nullptr, "IsValidSaveName", sizeof(FGSaveSystem_eventIsValidSaveName_Parms), Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGSaveSystem_NoRegister()
	{
		return UFGSaveSystem::StaticClass();
	}
	struct Z_Construct_UClass_UFGSaveSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mMapRedirectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mMapRedirectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mMapRedirectors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGSaveSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGSaveSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGSaveSystem_DeleteSave, "DeleteSave" }, // 174463724
		{ &Z_Construct_UFunction_UFGSaveSystem_FindSaveGames, "FindSaveGames" }, // 1673498271
		{ &Z_Construct_UFunction_UFGSaveSystem_Get, "Get" }, // 3483862341
		{ &Z_Construct_UFunction_UFGSaveSystem_GetAllSavesPerSession, "GetAllSavesPerSession" }, // 3746050476
		{ &Z_Construct_UFunction_UFGSaveSystem_GetSaveExists, "GetSaveExists" }, // 1111838653
		{ &Z_Construct_UFunction_UFGSaveSystem_IsSessionNameUsed, "IsSessionNameUsed" }, // 3927190561
		{ &Z_Construct_UFunction_UFGSaveSystem_IsValidSaveName, "IsValidSaveName" }, // 2038328039
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSaveSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGSaveSystem.h" },
		{ "ModuleRelativePath", "FGSaveSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGSaveSystem_Statics::NewProp_mMapRedirectors_MetaData[] = {
		{ "ModuleRelativePath", "FGSaveSystem.h" },
		{ "ToolTip", "Redirects for the maps when someone renames a map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFGSaveSystem_Statics::NewProp_mMapRedirectors = { "mMapRedirectors", nullptr, (EPropertyFlags)0x0020080000044000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFGSaveSystem, mMapRedirectors), METADATA_PARAMS(Z_Construct_UClass_UFGSaveSystem_Statics::NewProp_mMapRedirectors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGSaveSystem_Statics::NewProp_mMapRedirectors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFGSaveSystem_Statics::NewProp_mMapRedirectors_Inner = { "mMapRedirectors", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMapRedirector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGSaveSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSaveSystem_Statics::NewProp_mMapRedirectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGSaveSystem_Statics::NewProp_mMapRedirectors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGSaveSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGSaveSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGSaveSystem_Statics::ClassParams = {
		&UFGSaveSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFGSaveSystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFGSaveSystem_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFGSaveSystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGSaveSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGSaveSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGSaveSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGSaveSystem, 686077881);
	template<> FACTORYGAME_API UClass* StaticClass<UFGSaveSystem>()
	{
		return UFGSaveSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGSaveSystem(Z_Construct_UClass_UFGSaveSystem, &UFGSaveSystem::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGSaveSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGSaveSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
