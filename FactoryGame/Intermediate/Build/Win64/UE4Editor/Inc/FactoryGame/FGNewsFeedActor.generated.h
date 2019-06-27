// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGNewsFeedActor_generated_h
#error "FGNewsFeedActor.generated.h already included, missing '#pragma once' in FGNewsFeedActor.h"
#endif
#define FACTORYGAME_FGNewsFeedActor_generated_h

#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNewsFeedMap_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_11_DELEGATE \
struct _Script_FactoryGame_eventOnNewsReceived_Parms \
{ \
	FText news; \
}; \
static inline void FOnNewsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnNewsReceived, const FText& news) \
{ \
	_Script_FactoryGame_eventOnNewsReceived_Parms Parms; \
	Parms.news=news; \
	OnNewsReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGNewsFeedActor(); \
	friend struct Z_Construct_UClass_AFGNewsFeedActor_Statics; \
public: \
	DECLARE_CLASS(AFGNewsFeedActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNewsFeedActor) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAFGNewsFeedActor(); \
	friend struct Z_Construct_UClass_AFGNewsFeedActor_Statics; \
public: \
	DECLARE_CLASS(AFGNewsFeedActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNewsFeedActor) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNewsFeedActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGNewsFeedActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNewsFeedActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNewsFeedActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNewsFeedActor(AFGNewsFeedActor&&); \
	NO_API AFGNewsFeedActor(const AFGNewsFeedActor&); \
public:


#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNewsFeedActor(AFGNewsFeedActor&&); \
	NO_API AFGNewsFeedActor(const AFGNewsFeedActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNewsFeedActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNewsFeedActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGNewsFeedActor)


#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOnNewsReceived() { return STRUCT_OFFSET(AFGNewsFeedActor, mOnNewsReceived); } \
	FORCEINLINE static uint32 __PPO__mNewFeedText() { return STRUCT_OFFSET(AFGNewsFeedActor, mNewFeedText); } \
	FORCEINLINE static uint32 __PPO__mNewsFeedRequestFailedText() { return STRUCT_OFFSET(AFGNewsFeedActor, mNewsFeedRequestFailedText); } \
	FORCEINLINE static uint32 __PPO__mNewsFeedURLs() { return STRUCT_OFFSET(AFGNewsFeedActor, mNewsFeedURLs); }


#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_25_PROLOG
#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_INCLASS \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGNewsFeedActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGNewsFeedActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
