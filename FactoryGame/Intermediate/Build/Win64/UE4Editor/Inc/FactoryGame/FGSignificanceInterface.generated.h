// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGSignificanceInterface_generated_h
#error "FGSignificanceInterface.generated.h already included, missing '#pragma once' in FGSignificanceInterface.h"
#endif
#define FACTORYGAME_FGSignificanceInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_RPC_WRAPPERS \
	virtual void LostSignificance_Implementation() {}; \
	virtual void GainedSignificance_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetSignificanceRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSignificanceRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignificanceBias) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSignificanceBias(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLostSignificance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LostSignificance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGainedSignificance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GainedSignificance_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void LostSignificance_Implementation() {}; \
	virtual void GainedSignificance_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetSignificanceRange) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSignificanceRange(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignificanceBias) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetSignificanceBias(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLostSignificance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LostSignificance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGainedSignificance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GainedSignificance_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSignificanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSignificanceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSignificanceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSignificanceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSignificanceInterface(UFGSignificanceInterface&&); \
	NO_API UFGSignificanceInterface(const UFGSignificanceInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSignificanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSignificanceInterface(UFGSignificanceInterface&&); \
	NO_API UFGSignificanceInterface(const UFGSignificanceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSignificanceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSignificanceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSignificanceInterface)


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGSignificanceInterface(); \
	friend struct Z_Construct_UClass_UFGSignificanceInterface_Statics; \
public: \
	DECLARE_CLASS(UFGSignificanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSignificanceInterface)


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGSignificanceInterface() {} \
public: \
	typedef UFGSignificanceInterface UClassType; \
	typedef IFGSignificanceInterface ThisClass; \
	static void Execute_GainedSignificance(UObject* O); \
	static void Execute_LostSignificance(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGSignificanceInterface() {} \
public: \
	typedef UFGSignificanceInterface UClassType; \
	typedef IFGSignificanceInterface ThisClass; \
	static void Execute_GainedSignificance(UObject* O); \
	static void Execute_LostSignificance(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_10_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSignificanceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
