// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSaveHeader;
enum class ESaveExists : uint8;
enum class ESaveState : uint8;
enum class ESaveSortMode : uint8;
enum class ESaveSortDirection : uint8;
struct FSessionSaveStruct;
class UObject;
class UFGSaveSystem;
#ifdef FACTORYGAME_FGSaveSystem_generated_h
#error "FGSaveSystem.generated.h already included, missing '#pragma once' in FGSaveSystem.h"
#endif
#define FACTORYGAME_FGSaveSystem_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSessionSaveStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSessionSaveStruct>();

#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapRedirector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FMapRedirector>();

#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveHeader_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSaveHeader>();

#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedSaveExists) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_cachedSaves); \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_currentSessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESaveExists*)Z_Param__Result=UFGSaveSystem::GetCachedSaveExists(Z_Param_Out_cachedSaves,Z_Param_saveName,Z_Param_currentSessionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSaveName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSaveSystem::IsValidSaveName(Z_Param_saveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionNameUsed) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSessionNameUsed(Z_Param_sessionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveState) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_saveGame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESaveState*)Z_Param__Result=UFGSaveSystem::GetSaveState(Z_Param_Out_saveGame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortSaves) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_saves); \
		P_GET_ENUM(ESaveSortMode,Z_Param_sortMode); \
		P_GET_ENUM(ESaveSortDirection,Z_Param_sortDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSaveSystem::SortSaves(Z_Param_Out_saves,ESaveSortMode(Z_Param_sortMode),ESaveSortDirection(Z_Param_sortDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortSessions) \
	{ \
		P_GET_TARRAY_REF(FSessionSaveStruct,Z_Param_Out_sessions); \
		P_GET_ENUM(ESaveSortMode,Z_Param_sortMode); \
		P_GET_ENUM(ESaveSortDirection,Z_Param_sortDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSaveSystem::SortSessions(Z_Param_Out_sessions,ESaveSortMode(Z_Param_sortMode),ESaveSortDirection(Z_Param_sortDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGroupSavesPerSession) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_saves); \
		P_GET_TARRAY_REF(FSessionSaveStruct,Z_Param_Out_out_groupedBySession); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSaveSystem::GroupSavesPerSession(Z_Param_Out_saves,Z_Param_Out_out_groupedBySession); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSaveSystem**)Z_Param__Result=UFGSaveSystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedSaveExists) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_cachedSaves); \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_currentSessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESaveExists*)Z_Param__Result=UFGSaveSystem::GetCachedSaveExists(Z_Param_Out_cachedSaves,Z_Param_saveName,Z_Param_currentSessionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSaveName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGSaveSystem::IsValidSaveName(Z_Param_saveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSessionNameUsed) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_sessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSessionNameUsed(Z_Param_sessionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveState) \
	{ \
		P_GET_STRUCT_REF(FSaveHeader,Z_Param_Out_saveGame); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESaveState*)Z_Param__Result=UFGSaveSystem::GetSaveState(Z_Param_Out_saveGame); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortSaves) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_saves); \
		P_GET_ENUM(ESaveSortMode,Z_Param_sortMode); \
		P_GET_ENUM(ESaveSortDirection,Z_Param_sortDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSaveSystem::SortSaves(Z_Param_Out_saves,ESaveSortMode(Z_Param_sortMode),ESaveSortDirection(Z_Param_sortDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortSessions) \
	{ \
		P_GET_TARRAY_REF(FSessionSaveStruct,Z_Param_Out_sessions); \
		P_GET_ENUM(ESaveSortMode,Z_Param_sortMode); \
		P_GET_ENUM(ESaveSortDirection,Z_Param_sortDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSaveSystem::SortSessions(Z_Param_Out_sessions,ESaveSortMode(Z_Param_sortMode),ESaveSortDirection(Z_Param_sortDirection)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGroupSavesPerSession) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_saves); \
		P_GET_TARRAY_REF(FSessionSaveStruct,Z_Param_Out_out_groupedBySession); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGSaveSystem::GroupSavesPerSession(Z_Param_Out_saves,Z_Param_Out_out_groupedBySession); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGSaveSystem**)Z_Param__Result=UFGSaveSystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSaveSystem(); \
	friend struct Z_Construct_UClass_UFGSaveSystem_Statics; \
public: \
	DECLARE_CLASS(UFGSaveSystem, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSaveSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_INCLASS \
private: \
	static void StaticRegisterNativesUFGSaveSystem(); \
	friend struct Z_Construct_UClass_UFGSaveSystem_Statics; \
public: \
	DECLARE_CLASS(UFGSaveSystem, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSaveSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSaveSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSaveSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSaveSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSaveSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSaveSystem(UFGSaveSystem&&); \
	NO_API UFGSaveSystem(const UFGSaveSystem&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSaveSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSaveSystem(UFGSaveSystem&&); \
	NO_API UFGSaveSystem(const UFGSaveSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSaveSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSaveSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSaveSystem)


#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMapRedirectors() { return STRUCT_OFFSET(UFGSaveSystem, mMapRedirectors); }


#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_200_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h_203_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSaveSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSaveSystem_h


#define FOREACH_ENUM_ESAVESORTDIRECTION(op) \
	op(ESaveSortDirection::SSD_Ascending) \
	op(ESaveSortDirection::SSD_Descending) 

enum class ESaveSortDirection : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESaveSortDirection>();

#define FOREACH_ENUM_ESAVESORTMODE(op) \
	op(ESaveSortMode::SSM_Name) \
	op(ESaveSortMode::SSM_Time) 

enum class ESaveSortMode : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESaveSortMode>();

#define FOREACH_ENUM_ESAVESTATE(op) \
	op(ESaveState::SS_Unsupported) \
	op(ESaveState::SS_Volatile) \
	op(ESaveState::SS_Supported) \
	op(ESaveState::SS_Newer) 

enum class ESaveState : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESaveState>();

#define FOREACH_ENUM_ESAVEEXISTS(op) \
	op(ESaveExists::SE_DoesntExist) \
	op(ESaveExists::SE_ExistsInSameSession) \
	op(ESaveExists::SE_ExistsInOtherSession) 

enum class ESaveExists : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESaveExists>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
