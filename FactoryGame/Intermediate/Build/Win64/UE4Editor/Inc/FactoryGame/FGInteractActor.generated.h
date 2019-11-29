// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGInteractActor_generated_h
#error "FGInteractActor.generated.h already included, missing '#pragma once' in FGInteractActor.h"
#endif
#define FACTORYGAME_FGInteractActor_generated_h

#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_EVENT_PARMS \
	struct FGInteractActor_eventOnInteract_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
	};


#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGInteractActor(); \
	friend struct Z_Construct_UClass_AFGInteractActor_Statics; \
public: \
	DECLARE_CLASS(AFGInteractActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGInteractActor) \
	virtual UObject* _getUObject() const override { return const_cast<AFGInteractActor*>(this); }


#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFGInteractActor(); \
	friend struct Z_Construct_UClass_AFGInteractActor_Statics; \
public: \
	DECLARE_CLASS(AFGInteractActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGInteractActor) \
	virtual UObject* _getUObject() const override { return const_cast<AFGInteractActor*>(this); }


#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGInteractActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGInteractActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGInteractActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGInteractActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGInteractActor(AFGInteractActor&&); \
	NO_API AFGInteractActor(const AFGInteractActor&); \
public:


#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGInteractActor(AFGInteractActor&&); \
	NO_API AFGInteractActor(const AFGInteractActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGInteractActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGInteractActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGInteractActor)


#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGInteractActor_h_8_PROLOG \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_INCLASS \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGInteractActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGInteractActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGInteractActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGInteractActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
