// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef FACTORYGAME_FGWidgetSwitcher_generated_h
#error "FGWidgetSwitcher.generated.h already included, missing '#pragma once' in FGWidgetSwitcher.h"
#endif
#define FACTORYGAME_FGWidgetSwitcher_generated_h

#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_8_DELEGATE \
static inline void FOnMenuAnimDone_DelegateWrapper(const FMulticastScriptDelegate& OnMenuAnimDone) \
{ \
	OnMenuAnimDone.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_7_DELEGATE \
struct _Script_FactoryGame_eventOnActiveWidgetSet_Parms \
{ \
	UWidget* oldWidget; \
	UWidget* newWidget; \
}; \
static inline void FOnActiveWidgetSet_DelegateWrapper(const FMulticastScriptDelegate& OnActiveWidgetSet, UWidget* oldWidget, UWidget* newWidget) \
{ \
	_Script_FactoryGame_eventOnActiveWidgetSet_Parms Parms; \
	Parms.oldWidget=oldWidget; \
	Parms.newWidget=newWidget; \
	OnActiveWidgetSet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FadeOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitAnimationTookToLong) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitAnimationTookToLong(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterAnimationTookToLong) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterAnimationTookToLong(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFadeOut) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FadeOut(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitAnimationTookToLong) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitAnimationTookToLong(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterAnimationTookToLong) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterAnimationTookToLong(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGWidgetSwitcher(); \
	friend struct Z_Construct_UClass_UFGWidgetSwitcher_Statics; \
public: \
	DECLARE_CLASS(UFGWidgetSwitcher, UWidgetSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWidgetSwitcher)


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGWidgetSwitcher(); \
	friend struct Z_Construct_UClass_UFGWidgetSwitcher_Statics; \
public: \
	DECLARE_CLASS(UFGWidgetSwitcher, UWidgetSwitcher, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGWidgetSwitcher)


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGWidgetSwitcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGWidgetSwitcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWidgetSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWidgetSwitcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWidgetSwitcher(UFGWidgetSwitcher&&); \
	NO_API UFGWidgetSwitcher(const UFGWidgetSwitcher&); \
public:


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGWidgetSwitcher(UFGWidgetSwitcher&&); \
	NO_API UFGWidgetSwitcher(const UFGWidgetSwitcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGWidgetSwitcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGWidgetSwitcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGWidgetSwitcher)


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFadeOutTime() { return STRUCT_OFFSET(UFGWidgetSwitcher, mFadeOutTime); } \
	FORCEINLINE static uint32 __PPO__mOnWidgetSet() { return STRUCT_OFFSET(UFGWidgetSwitcher, mOnWidgetSet); } \
	FORCEINLINE static uint32 __PPO__mOnFadoutDone() { return STRUCT_OFFSET(UFGWidgetSwitcher, mOnFadoutDone); } \
	FORCEINLINE static uint32 __PPO__mPendingNewWidget() { return STRUCT_OFFSET(UFGWidgetSwitcher, mPendingNewWidget); } \
	FORCEINLINE static uint32 __PPO__mEnteringWidget() { return STRUCT_OFFSET(UFGWidgetSwitcher, mEnteringWidget); } \
	FORCEINLINE static uint32 __PPO__mExitingWidget() { return STRUCT_OFFSET(UFGWidgetSwitcher, mExitingWidget); }


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGWidgetSwitcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_UI_FGWidgetSwitcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
