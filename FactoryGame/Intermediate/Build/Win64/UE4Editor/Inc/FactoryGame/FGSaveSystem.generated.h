// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveExists : uint8;
struct FSessionSaveStruct;
struct FSaveHeader;
class UObject;
class UFGSaveSystem;
#ifdef FACTORYGAME_FGSaveSystem_generated_h
#error "FGSaveSystem.generated.h already included, missing '#pragma once' in FGSaveSystem.h"
#endif
#define FACTORYGAME_FGSaveSystem_generated_h

#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSessionSaveStruct_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSessionSaveStruct>();

#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapRedirector_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FMapRedirector>();

#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSaveHeader_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSaveHeader>();

#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteSave(Z_Param_saveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_currentSessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESaveExists*)Z_Param__Result=P_THIS->GetSaveExists(Z_Param_saveName,Z_Param_currentSessionName); \
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
	DECLARE_FUNCTION(execGetAllSavesPerSession) \
	{ \
		P_GET_TARRAY_REF(FSessionSaveStruct,Z_Param_Out_out_sessions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSavesPerSession(Z_Param_Out_out_sessions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSaveGames) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_out_saveGames); \
		P_GET_UBOOL(Z_Param_newestFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindSaveGames(Z_Param_Out_out_saveGames,Z_Param_newestFirst); \
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


#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteSave) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DeleteSave(Z_Param_saveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveExists) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_saveName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_currentSessionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ESaveExists*)Z_Param__Result=P_THIS->GetSaveExists(Z_Param_saveName,Z_Param_currentSessionName); \
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
	DECLARE_FUNCTION(execGetAllSavesPerSession) \
	{ \
		P_GET_TARRAY_REF(FSessionSaveStruct,Z_Param_Out_out_sessions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAllSavesPerSession(Z_Param_Out_out_sessions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSaveGames) \
	{ \
		P_GET_TARRAY_REF(FSaveHeader,Z_Param_Out_out_saveGames); \
		P_GET_UBOOL(Z_Param_newestFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FindSaveGames(Z_Param_Out_out_saveGames,Z_Param_newestFirst); \
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


#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSaveSystem(); \
	friend struct Z_Construct_UClass_UFGSaveSystem_Statics; \
public: \
	DECLARE_CLASS(UFGSaveSystem, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSaveSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_INCLASS \
private: \
	static void StaticRegisterNativesUFGSaveSystem(); \
	friend struct Z_Construct_UClass_UFGSaveSystem_Statics; \
public: \
	DECLARE_CLASS(UFGSaveSystem, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSaveSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_ENHANCED_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMapRedirectors() { return STRUCT_OFFSET(UFGSaveSystem, mMapRedirectors); }


#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_159_PROLOG
#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_INCLASS \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSaveSystem_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSaveSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGSaveSystem_h


#define FOREACH_ENUM_ESAVEEXISTS(op) \
	op(ESaveExists::SE_DoesntExist) \
	op(ESaveExists::SE_ExistsInSameSession) \
	op(ESaveExists::SE_ExistsInOtherSession) 

enum class ESaveExists : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESaveExists>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
