// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef FACTORYGAME_FGPopupInstigatorInterface_generated_h
#error "FGPopupInstigatorInterface.generated.h already included, missing '#pragma once' in FGPopupInstigatorInterface.h"
#endif
#define FACTORYGAME_FGPopupInstigatorInterface_generated_h

#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_EVENT_PARMS \
	struct FGPopupInstigatorInterface_eventNotifyPopupClosed_Parms \
	{ \
		TSubclassOf<UUserWidget>  popupClass; \
		int32 exitCode; \
	}; \
	struct FGPopupInstigatorInterface_eventWidgetFactory_Parms \
	{ \
		TSubclassOf<UUserWidget>  popupClass; \
		TArray<UUserWidget*> out_widgets; \
	};


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPopupInstigatorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPopupInstigatorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPopupInstigatorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPopupInstigatorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPopupInstigatorInterface(UFGPopupInstigatorInterface&&); \
	NO_API UFGPopupInstigatorInterface(const UFGPopupInstigatorInterface&); \
public:


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGPopupInstigatorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGPopupInstigatorInterface(UFGPopupInstigatorInterface&&); \
	NO_API UFGPopupInstigatorInterface(const UFGPopupInstigatorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGPopupInstigatorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGPopupInstigatorInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGPopupInstigatorInterface)


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGPopupInstigatorInterface(); \
	friend struct Z_Construct_UClass_UFGPopupInstigatorInterface_Statics; \
public: \
	DECLARE_CLASS(UFGPopupInstigatorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGPopupInstigatorInterface)


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGPopupInstigatorInterface() {} \
public: \
	typedef UFGPopupInstigatorInterface UClassType; \
	typedef IFGPopupInstigatorInterface ThisClass; \
	static void Execute_NotifyPopupClosed(UObject* O, TSubclassOf<UUserWidget>  popupClass, int32 exitCode); \
	static void Execute_WidgetFactory(UObject* O, TSubclassOf<UUserWidget>  popupClass, TArray<UUserWidget*>& out_widgets); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGPopupInstigatorInterface() {} \
public: \
	typedef UFGPopupInstigatorInterface UClassType; \
	typedef IFGPopupInstigatorInterface ThisClass; \
	static void Execute_NotifyPopupClosed(UObject* O, TSubclassOf<UUserWidget>  popupClass, int32 exitCode); \
	static void Execute_WidgetFactory(UObject* O, TSubclassOf<UUserWidget>  popupClass, TArray<UUserWidget*>& out_widgets); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGPopupInstigatorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGPopupInstigatorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
