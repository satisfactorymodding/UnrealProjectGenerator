// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRailroadTrackPosition;
#ifdef FACTORYGAME_FGRailroadInterface_generated_h
#error "FGRailroadInterface.generated.h already included, missing '#pragma once' in FGRailroadInterface.h"
#endif
#define FACTORYGAME_FGRailroadInterface_generated_h

#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_RPC_WRAPPERS \
	virtual FRailroadTrackPosition GetTrackPosition_Implementation() const { return FRailroadTrackPosition(); }; \
	virtual void UnregisteredFromTrack_Implementation() {}; \
	virtual void RegisteredOnTrack_Implementation(FRailroadTrackPosition const& position) {}; \
 \
	DECLARE_FUNCTION(execGetTrackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRailroadTrackPosition*)Z_Param__Result=P_THIS->GetTrackPosition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisteredFromTrack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisteredFromTrack_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisteredOnTrack) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisteredOnTrack_Implementation(Z_Param_Out_position); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FRailroadTrackPosition GetTrackPosition_Implementation() const { return FRailroadTrackPosition(); }; \
	virtual void UnregisteredFromTrack_Implementation() {}; \
	virtual void RegisteredOnTrack_Implementation(FRailroadTrackPosition const& position) {}; \
 \
	DECLARE_FUNCTION(execGetTrackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRailroadTrackPosition*)Z_Param__Result=P_THIS->GetTrackPosition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnregisteredFromTrack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnregisteredFromTrack_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisteredOnTrack) \
	{ \
		P_GET_STRUCT_REF(FRailroadTrackPosition,Z_Param_Out_position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisteredOnTrack_Implementation(Z_Param_Out_position); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_EVENT_PARMS \
	struct FGRailroadInterface_eventGetTrackPosition_Parms \
	{ \
		FRailroadTrackPosition ReturnValue; \
	}; \
	struct FGRailroadInterface_eventRegisteredOnTrack_Parms \
	{ \
		FRailroadTrackPosition position; \
	};


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadInterface(UFGRailroadInterface&&); \
	NO_API UFGRailroadInterface(const UFGRailroadInterface&); \
public:


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRailroadInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRailroadInterface(UFGRailroadInterface&&); \
	NO_API UFGRailroadInterface(const UFGRailroadInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRailroadInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRailroadInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRailroadInterface)


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGRailroadInterface(); \
	friend struct Z_Construct_UClass_UFGRailroadInterface_Statics; \
public: \
	DECLARE_CLASS(UFGRailroadInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRailroadInterface)


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGRailroadInterface() {} \
public: \
	typedef UFGRailroadInterface UClassType; \
	typedef IFGRailroadInterface ThisClass; \
	static FRailroadTrackPosition Execute_GetTrackPosition(const UObject* O); \
	static void Execute_RegisteredOnTrack(UObject* O, FRailroadTrackPosition const& position); \
	static void Execute_UnregisteredFromTrack(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGRailroadInterface() {} \
public: \
	typedef UFGRailroadInterface UClassType; \
	typedef IFGRailroadInterface ThisClass; \
	static FRailroadTrackPosition Execute_GetTrackPosition(const UObject* O); \
	static void Execute_RegisteredOnTrack(UObject* O, FRailroadTrackPosition const& position); \
	static void Execute_UnregisteredFromTrack(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_10_PROLOG \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRailroadInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRailroadInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRailroadInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
