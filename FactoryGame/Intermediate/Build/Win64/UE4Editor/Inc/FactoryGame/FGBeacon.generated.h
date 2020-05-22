// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGBeacon_generated_h
#error "FGBeacon.generated.h already included, missing '#pragma once' in FGBeacon.h"
#endif
#define FACTORYGAME_FGBeacon_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_EVENT_PARMS \
	struct FGBeacon_eventPickUpBeacon_Parms \
	{ \
		AFGCharacterPlayer* player; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBeacon(); \
	friend struct Z_Construct_UClass_AFGBeacon_Statics; \
public: \
	DECLARE_CLASS(AFGBeacon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBeacon)


#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFGBeacon(); \
	friend struct Z_Construct_UClass_AFGBeacon_Statics; \
public: \
	DECLARE_CLASS(AFGBeacon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBeacon)


#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBeacon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBeacon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBeacon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBeacon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBeacon(AFGBeacon&&); \
	NO_API AFGBeacon(const AFGBeacon&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBeacon(AFGBeacon&&); \
	NO_API AFGBeacon(const AFGBeacon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBeacon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBeacon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBeacon)


#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_10_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGBeacon_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBeacon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGBeacon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
