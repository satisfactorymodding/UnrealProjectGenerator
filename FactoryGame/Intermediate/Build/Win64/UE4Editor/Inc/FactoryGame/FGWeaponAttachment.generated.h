// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FACTORYGAME_FGWeaponAttachment_generated_h
#error "FGWeaponAttachment.generated.h already included, missing '#pragma once' in FGWeaponAttachment.h"
#endif
#define FACTORYGAME_FGWeaponAttachment_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_RPC_WRAPPERS \
	virtual void Multicast_PlayReloadEffectMulticast_Implementation(); \
	virtual void Multicast_SetFlashLocation_Implementation(FVector const& newFlashLocation); \
	virtual void PlayFireEffect_Implementation(FVector flashLocation); \
 \
	DECLARE_FUNCTION(execMulticast_PlayReloadEffectMulticast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_PlayReloadEffectMulticast_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_SetFlashLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newFlashLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_SetFlashLocation_Implementation(Z_Param_newFlashLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_flashLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireEffect_Implementation(Z_Param_flashLocation); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_PlayReloadEffectMulticast_Implementation(); \
	virtual void Multicast_SetFlashLocation_Implementation(FVector const& newFlashLocation); \
	virtual void PlayFireEffect_Implementation(FVector flashLocation); \
 \
	DECLARE_FUNCTION(execMulticast_PlayReloadEffectMulticast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_PlayReloadEffectMulticast_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_SetFlashLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newFlashLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_SetFlashLocation_Implementation(Z_Param_newFlashLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_flashLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireEffect_Implementation(Z_Param_flashLocation); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_EVENT_PARMS \
	struct FGWeaponAttachment_eventMulticast_SetFlashLocation_Parms \
	{ \
		FVector newFlashLocation; \
	}; \
	struct FGWeaponAttachment_eventPlayFireEffect_Parms \
	{ \
		FVector flashLocation; \
	};


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWeaponAttachment(); \
	friend struct Z_Construct_UClass_AFGWeaponAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGWeaponAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeaponAttachment)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFGWeaponAttachment(); \
	friend struct Z_Construct_UClass_AFGWeaponAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGWeaponAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeaponAttachment)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWeaponAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWeaponAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeaponAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeaponAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeaponAttachment(AFGWeaponAttachment&&); \
	NO_API AFGWeaponAttachment(const AFGWeaponAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWeaponAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeaponAttachment(AFGWeaponAttachment&&); \
	NO_API AFGWeaponAttachment(const AFGWeaponAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeaponAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeaponAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWeaponAttachment)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_8_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGWeaponAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
