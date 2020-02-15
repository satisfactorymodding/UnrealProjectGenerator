// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGGameSession_generated_h
#error "FGGameSession.generated.h already included, missing '#pragma once' in FGGameSession.h"
#endif
#define FACTORYGAME_FGGameSession_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIntroSequenceUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntroSequenceUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForIntroSequenceUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForIntroSequenceUpdated(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIntroSequenceUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IntroSequenceUpdated(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execListenForIntroSequenceUpdated) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ListenForIntroSequenceUpdated(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGGameSession(); \
	friend struct Z_Construct_UClass_AFGGameSession_Statics; \
public: \
	DECLARE_CLASS(AFGGameSession, AGameSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGGameSession)


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFGGameSession(); \
	friend struct Z_Construct_UClass_AFGGameSession_Statics; \
public: \
	DECLARE_CLASS(AFGGameSession, AGameSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGGameSession)


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGGameSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGGameSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGameSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGameSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGameSession(AFGGameSession&&); \
	NO_API AFGGameSession(const AFGGameSession&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGameSession(AFGGameSession&&); \
	NO_API AFGGameSession(const AFGGameSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGameSession); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGameSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGGameSession)


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mLastLoginFailTime() { return STRUCT_OFFSET(AFGGameSession, mLastLoginFailTime); } \
	FORCEINLINE static uint32 __PPO__mFailedLoginCount() { return STRUCT_OFFSET(AFGGameSession, mFailedLoginCount); } \
	FORCEINLINE static uint32 __PPO__mLoggedInAdmins() { return STRUCT_OFFSET(AFGGameSession, mLoggedInAdmins); }


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_18_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGGameSession_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGGameSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGGameSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
