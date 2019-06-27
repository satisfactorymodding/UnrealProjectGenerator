// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGConnectionComponent_generated_h
#error "FGConnectionComponent.generated.h already included, missing '#pragma once' in FGConnectionComponent.h"
#endif
#define FACTORYGAME_FGConnectionComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFGConnectionComponent, NO_API)


#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGConnectionComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConnectionComponent) \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFGConnectionComponent*>(this); }


#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGConnectionComponent(); \
	friend struct Z_Construct_UClass_UFGConnectionComponent_Statics; \
public: \
	DECLARE_CLASS(UFGConnectionComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConnectionComponent) \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFGConnectionComponent*>(this); }


#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGConnectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConnectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConnectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConnectionComponent(UFGConnectionComponent&&); \
	NO_API UFGConnectionComponent(const UFGConnectionComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGConnectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConnectionComponent(UFGConnectionComponent&&); \
	NO_API UFGConnectionComponent(const UFGConnectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConnectionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConnectionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConnectionComponent)


#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGConnectionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGConnectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
