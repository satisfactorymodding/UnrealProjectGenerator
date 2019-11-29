// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGHUD;
#ifdef FACTORYGAME_FGWeapon_generated_h
#error "FGWeapon.generated.h already included, missing '#pragma once' in FGWeapon.h"
#endif
#define FACTORYGAME_FGWeapon_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_RPC_WRAPPERS \
	virtual bool Server_Reload_Validate(); \
	virtual void Server_Reload_Implementation(); \
	virtual void PlayReloadEffects_Implementation(); \
	virtual void PlayFireEffect_Implementation(); \
	virtual void FireAmmunition_Implementation(); \
	virtual bool Server_EndPrimaryFire_Validate(); \
	virtual void Server_EndPrimaryFire_Implementation(); \
	virtual bool Server_StartPrimaryFire_Validate(); \
	virtual void Server_StartPrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAssosiatedHud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHUD**)Z_Param__Result=P_THIS->GetAssosiatedHud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Reload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Reload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Reload_Validate")); \
			return; \
		} \
		P_THIS->Server_Reload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReloadEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReloadEffects_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActualReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActualReload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFireEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireEffect_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMagSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsReloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsReloading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpareAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSpareAmmunition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAmmunition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReloadTimeLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetReloadTimeLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanReload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_EndPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_EndPrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_EndPrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_EndPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartPrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartPrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_StartPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_Reload_Validate(); \
	virtual void Server_Reload_Implementation(); \
	virtual void PlayReloadEffects_Implementation(); \
	virtual void PlayFireEffect_Implementation(); \
	virtual bool Server_EndPrimaryFire_Validate(); \
	virtual void Server_EndPrimaryFire_Implementation(); \
	virtual bool Server_StartPrimaryFire_Validate(); \
	virtual void Server_StartPrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execGetAssosiatedHud) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGHUD**)Z_Param__Result=P_THIS->GetAssosiatedHud(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_Reload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_Reload_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_Reload_Validate")); \
			return; \
		} \
		P_THIS->Server_Reload_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReloadEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReloadEffects_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execActualReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ActualReload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFireEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireEffect_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMagSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsReloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsReloading(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFireAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireAmmunition_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpareAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetSpareAmmunition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAmmunition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAmmunition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetReloadTimeLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetReloadTimeLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanReload) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanReload(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_EndPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_EndPrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_EndPrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_EndPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartPrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartPrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_StartPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWeapon(); \
	friend struct Z_Construct_UClass_AFGWeapon_Statics; \
public: \
	DECLARE_CLASS(AFGWeapon, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeapon)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFGWeapon(); \
	friend struct Z_Construct_UClass_AFGWeapon_Statics; \
public: \
	DECLARE_CLASS(AFGWeapon, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeapon)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeapon(AFGWeapon&&); \
	NO_API AFGWeapon(const AFGWeapon&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeapon(AFGWeapon&&); \
	NO_API AFGWeapon(const AFGWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWeapon)


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAssosiatedHud() { return STRUCT_OFFSET(AFGWeapon, mAssosiatedHud); } \
	FORCEINLINE static uint32 __PPO__mMagSize() { return STRUCT_OFFSET(AFGWeapon, mMagSize); } \
	FORCEINLINE static uint32 __PPO__mCurrentAmmo() { return STRUCT_OFFSET(AFGWeapon, mCurrentAmmo); } \
	FORCEINLINE static uint32 __PPO__mAmmunitionClass() { return STRUCT_OFFSET(AFGWeapon, mAmmunitionClass); } \
	FORCEINLINE static uint32 __PPO__mDamageTypeClass() { return STRUCT_OFFSET(AFGWeapon, mDamageTypeClass); } \
	FORCEINLINE static uint32 __PPO__mReloadTime() { return STRUCT_OFFSET(AFGWeapon, mReloadTime); } \
	FORCEINLINE static uint32 __PPO__mFireRate() { return STRUCT_OFFSET(AFGWeapon, mFireRate); } \
	FORCEINLINE static uint32 __PPO__mIsFiring() { return STRUCT_OFFSET(AFGWeapon, mIsFiring); } \
	FORCEINLINE static uint32 __PPO__mIsPendingFire() { return STRUCT_OFFSET(AFGWeapon, mIsPendingFire); } \
	FORCEINLINE static uint32 __PPO__mIsReloading() { return STRUCT_OFFSET(AFGWeapon, mIsReloading); } \
	FORCEINLINE static uint32 __PPO__mReloadSound() { return STRUCT_OFFSET(AFGWeapon, mReloadSound); }


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_19_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
