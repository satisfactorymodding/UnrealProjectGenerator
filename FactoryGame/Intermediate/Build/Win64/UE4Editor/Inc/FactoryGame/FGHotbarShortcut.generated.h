// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGPlayerController;
class UTexture2D;
#ifdef FACTORYGAME_FGHotbarShortcut_generated_h
#error "FGHotbarShortcut.generated.h already included, missing '#pragma once' in FGHotbarShortcut.h"
#endif
#define FACTORYGAME_FGHotbarShortcut_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_RPC_WRAPPERS \
	virtual bool IsActive_Implementation(AFGPlayerController* owner) const; \
	virtual UTexture2D* GetDisplayImage_Implementation() const; \
	virtual bool IsValidShortcut_Implementation(AFGPlayerController* owner) const; \
	virtual void Execute_Implementation(AFGPlayerController* owner); \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive_Implementation(Z_Param_owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisplayImage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetDisplayImage_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidShortcut) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidShortcut_Implementation(Z_Param_owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecute) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Execute_Implementation(Z_Param_owner); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsActive_Implementation(AFGPlayerController* owner) const; \
	virtual UTexture2D* GetDisplayImage_Implementation() const; \
	virtual bool IsValidShortcut_Implementation(AFGPlayerController* owner) const; \
	virtual void Execute_Implementation(AFGPlayerController* owner); \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive_Implementation(Z_Param_owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisplayImage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetDisplayImage_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidShortcut) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidShortcut_Implementation(Z_Param_owner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecute) \
	{ \
		P_GET_OBJECT(AFGPlayerController,Z_Param_owner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Execute_Implementation(Z_Param_owner); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_EVENT_PARMS \
	struct FGHotbarShortcut_eventExecute_Parms \
	{ \
		AFGPlayerController* owner; \
	}; \
	struct FGHotbarShortcut_eventGetDisplayImage_Parms \
	{ \
		UTexture2D* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGHotbarShortcut_eventGetDisplayImage_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGHotbarShortcut_eventIsActive_Parms \
	{ \
		AFGPlayerController* owner; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGHotbarShortcut_eventIsActive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGHotbarShortcut_eventIsValidShortcut_Parms \
	{ \
		AFGPlayerController* owner; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGHotbarShortcut_eventIsValidShortcut_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGHotbarShortcut(); \
	friend struct Z_Construct_UClass_UFGHotbarShortcut_Statics; \
public: \
	DECLARE_CLASS(UFGHotbarShortcut, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHotbarShortcut) \
	virtual UObject* _getUObject() const override { return const_cast<UFGHotbarShortcut*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGHotbarShortcut(); \
	friend struct Z_Construct_UClass_UFGHotbarShortcut_Statics; \
public: \
	DECLARE_CLASS(UFGHotbarShortcut, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGHotbarShortcut) \
	virtual UObject* _getUObject() const override { return const_cast<UFGHotbarShortcut*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHotbarShortcut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHotbarShortcut) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHotbarShortcut); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHotbarShortcut); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHotbarShortcut(UFGHotbarShortcut&&); \
	NO_API UFGHotbarShortcut(const UFGHotbarShortcut&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGHotbarShortcut(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGHotbarShortcut(UFGHotbarShortcut&&); \
	NO_API UFGHotbarShortcut(const UFGHotbarShortcut&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGHotbarShortcut); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGHotbarShortcut); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGHotbarShortcut)


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_10_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGHotbarShortcut_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
