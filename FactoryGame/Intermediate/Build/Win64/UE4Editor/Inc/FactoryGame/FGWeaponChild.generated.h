// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGWeaponChild_generated_h
#error "FGWeaponChild.generated.h already included, missing '#pragma once' in FGWeaponChild.h"
#endif
#define FACTORYGAME_FGWeaponChild_generated_h

#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_RPC_WRAPPERS \
	virtual void NotifyReloadComplete_Implementation(); \
	virtual void NotifyReloading_Implementation(); \
	virtual void NotifyEndSecondaryFire_Implementation(); \
	virtual void NotifyBeginSecondaryFire_Implementation(); \
	virtual void NotifyPrimaryFireExecuted_Implementation(); \
	virtual void NotifyFailedToFire_Implementation(); \
	virtual void NotifyEndPrimaryFire_Implementation(); \
	virtual void NotifyBeginPrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyReloadComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyReloadComplete_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyReloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyReloading_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyEndSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyEndSecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyBeginSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyBeginSecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyPrimaryFireExecuted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyPrimaryFireExecuted_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyFailedToFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyFailedToFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyEndPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyEndPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyBeginPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyBeginPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void NotifyReloadComplete_Implementation(); \
	virtual void NotifyReloading_Implementation(); \
	virtual void NotifyEndSecondaryFire_Implementation(); \
	virtual void NotifyBeginSecondaryFire_Implementation(); \
	virtual void NotifyPrimaryFireExecuted_Implementation(); \
	virtual void NotifyFailedToFire_Implementation(); \
	virtual void NotifyEndPrimaryFire_Implementation(); \
	virtual void NotifyBeginPrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execNotifyReloadComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyReloadComplete_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyReloading) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyReloading_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyEndSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyEndSecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyBeginSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyBeginSecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyPrimaryFireExecuted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyPrimaryFireExecuted_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyFailedToFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyFailedToFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyEndPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyEndPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotifyBeginPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->NotifyBeginPrimaryFire_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWeaponChild(); \
	friend struct Z_Construct_UClass_AFGWeaponChild_Statics; \
public: \
	DECLARE_CLASS(AFGWeaponChild, AFGEquipmentChild, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeaponChild)


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGWeaponChild(); \
	friend struct Z_Construct_UClass_AFGWeaponChild_Statics; \
public: \
	DECLARE_CLASS(AFGWeaponChild, AFGEquipmentChild, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWeaponChild)


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWeaponChild(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWeaponChild) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeaponChild); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeaponChild); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeaponChild(AFGWeaponChild&&); \
	NO_API AFGWeaponChild(const AFGWeaponChild&); \
public:


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWeaponChild() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWeaponChild(AFGWeaponChild&&); \
	NO_API AFGWeaponChild(const AFGWeaponChild&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWeaponChild); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWeaponChild); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWeaponChild)


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsLoaded() { return STRUCT_OFFSET(AFGWeaponChild, mIsLoaded); }


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGWeaponChild_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGWeaponChild>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGWeaponChild_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
