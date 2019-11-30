// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef FACTORYGAME_FGListView_generated_h
#error "FGListView.generated.h already included, missing '#pragma once' in FGListView.h"
#endif
#define FACTORYGAME_FGListView_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_36_DELEGATE \
struct FGListView_eventGetNumRows_Parms \
{ \
	int32 ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	FGListView_eventGetNumRows_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline int32 FGetNumRows_DelegateWrapper(const FScriptDelegate& GetNumRows) \
{ \
	FGListView_eventGetNumRows_Parms Parms; \
	GetNumRows.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_33_DELEGATE \
struct FGListView_eventOnGenerateRow_Parms \
{ \
	int32 item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	FGListView_eventOnGenerateRow_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FOnGenerateRow_DelegateWrapper(const FScriptDelegate& OnGenerateRow, int32 item) \
{ \
	FGListView_eventOnGenerateRow_Parms Parms; \
	Parms.item=item; \
	OnGenerateRow.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefresh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Refresh(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefresh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Refresh(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGListView(); \
	friend struct Z_Construct_UClass_UFGListView_Statics; \
public: \
	DECLARE_CLASS(UFGListView, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGListView)


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUFGListView(); \
	friend struct Z_Construct_UClass_UFGListView_Statics; \
public: \
	DECLARE_CLASS(UFGListView, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGListView)


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGListView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGListView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGListView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGListView(UFGListView&&); \
	NO_API UFGListView(const UFGListView&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGListView(UFGListView&&); \
	NO_API UFGListView(const UFGListView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGListView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGListView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGListView)


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSelectionMode() { return STRUCT_OFFSET(UFGListView, mSelectionMode); }


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_25_PROLOG
#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGListView_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGListView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGListView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
