// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef FACTORYGAME_FGMenuBase_generated_h
#error "FGMenuBase.generated.h already included, missing '#pragma once' in FGMenuBase.h"
#endif
#define FACTORYGAME_FGMenuBase_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMenuExitDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMenuExitDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMenuEnterDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMenuEnterDone(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMenuExitDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMenuExitDone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnMenuEnterDone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnMenuEnterDone(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_EVENT_PARMS \
	struct FGMenuBase_eventOnMenuEnter_Parms \
	{ \
		UWidget* prevMenu; \
	}; \
	struct FGMenuBase_eventOnMenuExit_Parms \
	{ \
		UWidget* prevMenu; \
		bool noAnimation; \
	};


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMenuBase(); \
	friend struct Z_Construct_UClass_UFGMenuBase_Statics; \
public: \
	DECLARE_CLASS(UFGMenuBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMenuBase)


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUFGMenuBase(); \
	friend struct Z_Construct_UClass_UFGMenuBase_Statics; \
public: \
	DECLARE_CLASS(UFGMenuBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMenuBase)


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMenuBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMenuBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMenuBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMenuBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMenuBase(UFGMenuBase&&); \
	NO_API UFGMenuBase(const UFGMenuBase&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMenuBase(UFGMenuBase&&); \
	NO_API UFGMenuBase(const UFGMenuBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMenuBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMenuBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMenuBase)


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCachedOwner() { return STRUCT_OFFSET(UFGMenuBase, mCachedOwner); }


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_7_PROLOG \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGMenuBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
