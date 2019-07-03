// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGGameEngine_generated_h
#error "FGGameEngine.generated.h already included, missing '#pragma once' in FGGameEngine.h"
#endif
#define FACTORYGAME_FGGameEngine_generated_h

#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGGameEngine(); \
	friend struct Z_Construct_UClass_UFGGameEngine_Statics; \
public: \
	DECLARE_CLASS(UFGGameEngine, UGameEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameEngine) \
	virtual UObject* _getUObject() const override { return const_cast<UFGGameEngine*>(this); }


#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFGGameEngine(); \
	friend struct Z_Construct_UClass_UFGGameEngine_Statics; \
public: \
	DECLARE_CLASS(UFGGameEngine, UGameEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGGameEngine) \
	virtual UObject* _getUObject() const override { return const_cast<UFGGameEngine*>(this); }


#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameEngine(UFGGameEngine&&); \
	NO_API UFGGameEngine(const UFGGameEngine&); \
public:


#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGGameEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGGameEngine(UFGGameEngine&&); \
	NO_API UFGGameEngine(const UFGGameEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGGameEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGGameEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGGameEngine)


#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mEngineCommonImp() { return STRUCT_OFFSET(UFGGameEngine, mEngineCommonImp); }


#define FactoryGame_Source_FactoryGame_FGGameEngine_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGGameEngine_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGGameEngine_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGGameEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
