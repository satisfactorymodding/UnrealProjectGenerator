// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameVersion : uint8;
#ifdef FACTORYGAME_FGVersionFunctionLibrary_generated_h
#error "FGVersionFunctionLibrary.generated.h already included, missing '#pragma once' in FGVersionFunctionLibrary.h"
#endif
#define FACTORYGAME_FGVersionFunctionLibrary_generated_h

#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGameVersion*)Z_Param__Result=UFGVersionFunctionLibrary::GetGameVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPublicBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGVersionFunctionLibrary::IsPublicBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGVersionFunctionLibrary::GetVersionString(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGameVersion*)Z_Param__Result=UFGVersionFunctionLibrary::GetGameVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPublicBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGVersionFunctionLibrary::IsPublicBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFGVersionFunctionLibrary::GetVersionString(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGVersionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGVersionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGVersionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVersionFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFGVersionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGVersionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGVersionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGVersionFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVersionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVersionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVersionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVersionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVersionFunctionLibrary(UFGVersionFunctionLibrary&&); \
	NO_API UFGVersionFunctionLibrary(const UFGVersionFunctionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGVersionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGVersionFunctionLibrary(UFGVersionFunctionLibrary&&); \
	NO_API UFGVersionFunctionLibrary(const UFGVersionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGVersionFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGVersionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGVersionFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_16_PROLOG
#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGVersionFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGVersionFunctionLibrary_h


#define FOREACH_ENUM_EGAMEVERSION(op) \
	op(EGameVersion::GV_Main) \
	op(EGameVersion::GV_Experimental) \
	op(EGameVersion::GV_Other) 

enum class EGameVersion : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EGameVersion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
