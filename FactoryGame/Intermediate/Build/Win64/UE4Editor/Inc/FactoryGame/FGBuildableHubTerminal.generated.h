// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGBuildableTradingPost;
#ifdef FACTORYGAME_FGBuildableHubTerminal_generated_h
#error "FGBuildableHubTerminal.generated.h already included, missing '#pragma once' in FGBuildableHubTerminal.h"
#endif
#define FACTORYGAME_FGBuildableHubTerminal_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTradingPost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildableTradingPost**)Z_Param__Result=P_THIS->GetTradingPost(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTradingPost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildableTradingPost**)Z_Param__Result=P_THIS->GetTradingPost(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableHubTerminal(); \
	friend struct Z_Construct_UClass_AFGBuildableHubTerminal_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableHubTerminal, AFGBuildable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableHubTerminal)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableHubTerminal(); \
	friend struct Z_Construct_UClass_AFGBuildableHubTerminal_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableHubTerminal, AFGBuildable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableHubTerminal)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableHubTerminal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableHubTerminal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableHubTerminal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableHubTerminal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableHubTerminal(AFGBuildableHubTerminal&&); \
	NO_API AFGBuildableHubTerminal(const AFGBuildableHubTerminal&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableHubTerminal() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableHubTerminal(AFGBuildableHubTerminal&&); \
	NO_API AFGBuildableHubTerminal(const AFGBuildableHubTerminal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableHubTerminal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableHubTerminal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableHubTerminal)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableHubTerminal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
