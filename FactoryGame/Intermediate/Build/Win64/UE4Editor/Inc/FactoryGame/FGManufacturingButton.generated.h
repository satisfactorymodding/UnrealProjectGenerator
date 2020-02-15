// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UButton;
#ifdef FACTORYGAME_FGManufacturingButton_generated_h
#error "FGManufacturingButton.generated.h already included, missing '#pragma once' in FGManufacturingButton.h"
#endif
#define FACTORYGAME_FGManufacturingButton_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_10_DELEGATE \
struct _Script_FactoryGame_eventManufacturePressed_Parms \
{ \
	float produceMultiplier; \
}; \
static inline void FManufacturePressed_DelegateWrapper(const FMulticastScriptDelegate& ManufacturePressed, float produceMultiplier) \
{ \
	_Script_FactoryGame_eventManufacturePressed_Parms Parms; \
	Parms.produceMultiplier=produceMultiplier; \
	ManufacturePressed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnReleasedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReleasedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPressedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPressedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetButton) \
	{ \
		P_GET_OBJECT(UButton,Z_Param_inButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButton(Z_Param_inButton); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnReleasedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnReleasedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPressedButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPressedButton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetButton) \
	{ \
		P_GET_OBJECT(UButton,Z_Param_inButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetButton(Z_Param_inButton); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGManufacturingButton(); \
	friend struct Z_Construct_UClass_UFGManufacturingButton_Statics; \
public: \
	DECLARE_CLASS(UFGManufacturingButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGManufacturingButton)


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFGManufacturingButton(); \
	friend struct Z_Construct_UClass_UFGManufacturingButton_Statics; \
public: \
	DECLARE_CLASS(UFGManufacturingButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGManufacturingButton)


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGManufacturingButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGManufacturingButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGManufacturingButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGManufacturingButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGManufacturingButton(UFGManufacturingButton&&); \
	NO_API UFGManufacturingButton(const UFGManufacturingButton&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGManufacturingButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGManufacturingButton(UFGManufacturingButton&&); \
	NO_API UFGManufacturingButton(const UFGManufacturingButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGManufacturingButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGManufacturingButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGManufacturingButton)


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGManufacturingButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGManufacturingButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
