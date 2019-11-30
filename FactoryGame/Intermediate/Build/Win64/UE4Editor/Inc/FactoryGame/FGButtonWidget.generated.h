// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
#ifdef FACTORYGAME_FGButtonWidget_generated_h
#error "FGButtonWidget.generated.h already included, missing '#pragma once' in FGButtonWidget.h"
#endif
#define FACTORYGAME_FGButtonWidget_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetButton) \
	{ \
		P_GET_OBJECT(UButton,Z_Param_inButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButton(Z_Param_inButton); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetButton) \
	{ \
		P_GET_OBJECT(UButton,Z_Param_inButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButton(Z_Param_inButton); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGButtonWidget(); \
	friend struct Z_Construct_UClass_UFGButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UFGButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGButtonWidget)


#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFGButtonWidget(); \
	friend struct Z_Construct_UClass_UFGButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UFGButtonWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGButtonWidget)


#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGButtonWidget(UFGButtonWidget&&); \
	NO_API UFGButtonWidget(const UFGButtonWidget&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGButtonWidget(UFGButtonWidget&&); \
	NO_API UFGButtonWidget(const UFGButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGButtonWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGButtonWidget)


#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
