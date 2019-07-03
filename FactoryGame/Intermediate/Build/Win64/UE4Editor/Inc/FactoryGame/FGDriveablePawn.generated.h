// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UAnimSequence;
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGDriveablePawn_generated_h
#error "FGDriveablePawn.generated.h already included, missing '#pragma once' in FGDriveablePawn.h"
#endif
#define FACTORYGAME_FGDriveablePawn_generated_h

#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaceExitingDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceExitingDriver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPendingDriver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriverExitOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDriverExitOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriverSeatAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetDriverSeatAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriverSeatSocket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDriverSeatSocket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDriverVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDriverVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldAttachDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldAttachDriver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDriverLeave) \
	{ \
		P_GET_UBOOL(Z_Param_keepDriving); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DriverLeave(Z_Param_keepDriving); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDriverEnter) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_driver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DriverEnter(Z_Param_driver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDriverEnter) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDriverEnter(Z_Param_character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetDriver(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaceExitingDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlaceExitingDriver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPendingDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPendingDriver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriverExitOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetDriverExitOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriverSeatAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetDriverSeatAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriverSeatSocket) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetDriverSeatSocket(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDriverVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDriverVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldAttachDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldAttachDriver(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDriverLeave) \
	{ \
		P_GET_UBOOL(Z_Param_keepDriving); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DriverLeave(Z_Param_keepDriving); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDriverEnter) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_driver); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DriverEnter(Z_Param_driver); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDriverEnter) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDriverEnter(Z_Param_character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDriver) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterPlayer**)Z_Param__Result=P_THIS->GetDriver(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGDriveablePawn(); \
	friend struct Z_Construct_UClass_AFGDriveablePawn_Statics; \
public: \
	DECLARE_CLASS(AFGDriveablePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDriveablePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDriveablePawn*>(this); }


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGDriveablePawn(); \
	friend struct Z_Construct_UClass_AFGDriveablePawn_Statics; \
public: \
	DECLARE_CLASS(AFGDriveablePawn, APawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDriveablePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDriveablePawn*>(this); }


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGDriveablePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGDriveablePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDriveablePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDriveablePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDriveablePawn(AFGDriveablePawn&&); \
	NO_API AFGDriveablePawn(const AFGDriveablePawn&); \
public:


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDriveablePawn(AFGDriveablePawn&&); \
	NO_API AFGDriveablePawn(const AFGDriveablePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDriveablePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDriveablePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGDriveablePawn)


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDriver() { return STRUCT_OFFSET(AFGDriveablePawn, mDriver); } \
	FORCEINLINE static uint32 __PPO__mIsDriving() { return STRUCT_OFFSET(AFGDriveablePawn, mIsDriving); }


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDriveablePawn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDriveablePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
