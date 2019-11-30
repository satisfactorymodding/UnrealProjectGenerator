// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGPopupWidget;
class UUserWidget;
struct FPopupData;
#ifdef FACTORYGAME_FGBaseUI_generated_h
#error "FGBaseUI.generated.h already included, missing '#pragma once' in FGBaseUI.h"
#endif
#define FACTORYGAME_FGBaseUI_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPopup) \
	{ \
		P_GET_OBJECT(UFGPopupWidget,Z_Param_inPopup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPopup(Z_Param_inPopup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPopup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPopupWidget**)Z_Param__Result=P_THIS->GetPopup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopPopupQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopPopupQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPopup) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Title); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Body); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ConfirmClickDelegate); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PopupID); \
		P_GET_OBJECT(UClass,Z_Param_popupClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPopup(Z_Param_Title,Z_Param_Body,FPopupConfirmClicked(Z_Param_Out_ConfirmClickDelegate),EPopupId(Z_Param_PopupID),Z_Param_popupClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPopup) \
	{ \
		P_GET_OBJECT(UFGPopupWidget,Z_Param_inPopup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPopup(Z_Param_inPopup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPopup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGPopupWidget**)Z_Param__Result=P_THIS->GetPopup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopPopupQueue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PopPopupQueue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddPopup) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Title); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Body); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_ConfirmClickDelegate); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PopupID); \
		P_GET_OBJECT(UClass,Z_Param_popupClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddPopup(Z_Param_Title,Z_Param_Body,FPopupConfirmClicked(Z_Param_Out_ConfirmClickDelegate),EPopupId(Z_Param_PopupID),Z_Param_popupClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_EVENT_PARMS \
	struct FGBaseUI_eventCreatePopupWidget_Parms \
	{ \
		FPopupData popupData; \
		UFGPopupWidget* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGBaseUI_eventCreatePopupWidget_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBaseUI(); \
	friend struct Z_Construct_UClass_UFGBaseUI_Statics; \
public: \
	DECLARE_CLASS(UFGBaseUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBaseUI)


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGBaseUI(); \
	friend struct Z_Construct_UClass_UFGBaseUI_Statics; \
public: \
	DECLARE_CLASS(UFGBaseUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBaseUI)


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBaseUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBaseUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBaseUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBaseUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBaseUI(UFGBaseUI&&); \
	NO_API UFGBaseUI(const UFGBaseUI&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBaseUI(UFGBaseUI&&); \
	NO_API UFGBaseUI(const UFGBaseUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBaseUI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBaseUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBaseUI)


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mActivePopup() { return STRUCT_OFFSET(UFGBaseUI, mActivePopup); }


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_17_PROLOG \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGBaseUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
