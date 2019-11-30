// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FTransform;
#ifdef FACTORYGAME_FGNobeliskDetonator_generated_h
#error "FGNobeliskDetonator.generated.h already included, missing '#pragma once' in FGNobeliskDetonator.h"
#endif
#define FACTORYGAME_FGNobeliskDetonator_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_RPC_WRAPPERS \
	virtual bool Server_ExecuteSecondaryFire_Validate(); \
	virtual void Server_ExecuteSecondaryFire_Implementation(); \
	virtual void OnSecondaryFirePressed_Implementation(); \
	virtual bool Server_ExecutePrimaryFire_Validate(); \
	virtual void Server_ExecutePrimaryFire_Implementation(); \
	virtual bool Server_StartDetonations_Validate(); \
	virtual void Server_StartDetonations_Implementation(); \
	virtual bool Server_SpawnExplosive_Validate(FTransform , int32 ); \
	virtual void Server_SpawnExplosive_Implementation(FTransform spawnTransform, int32 throwForce); \
 \
	DECLARE_FUNCTION(execOnViewportFocusChanged) \
	{ \
		P_GET_UBOOL(Z_Param_isOpen); \
		P_GET_OBJECT(UClass,Z_Param_interactionClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnViewportFocusChanged(Z_Param_isOpen,Z_Param_interactionClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ExecuteSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ExecuteSecondaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ExecuteSecondaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_ExecuteSecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteSecondaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryFirePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryFirePressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ExecutePrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ExecutePrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ExecutePrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_ExecutePrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecutePrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecutePrimaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartDetonations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartDetonations_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartDetonations_Validate")); \
			return; \
		} \
		P_THIS->Server_StartDetonations_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SpawnExplosive) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_spawnTransform); \
		P_GET_PROPERTY(UIntProperty,Z_Param_throwForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SpawnExplosive_Validate(Z_Param_spawnTransform,Z_Param_throwForce)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SpawnExplosive_Validate")); \
			return; \
		} \
		P_THIS->Server_SpawnExplosive_Implementation(Z_Param_spawnTransform,Z_Param_throwForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChargePct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetChargePct(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ExecuteSecondaryFire_Validate(); \
	virtual void Server_ExecuteSecondaryFire_Implementation(); \
	virtual void OnSecondaryFirePressed_Implementation(); \
	virtual bool Server_ExecutePrimaryFire_Validate(); \
	virtual void Server_ExecutePrimaryFire_Implementation(); \
	virtual bool Server_StartDetonations_Validate(); \
	virtual void Server_StartDetonations_Implementation(); \
	virtual bool Server_SpawnExplosive_Validate(FTransform , int32 ); \
	virtual void Server_SpawnExplosive_Implementation(FTransform spawnTransform, int32 throwForce); \
 \
	DECLARE_FUNCTION(execOnViewportFocusChanged) \
	{ \
		P_GET_UBOOL(Z_Param_isOpen); \
		P_GET_OBJECT(UClass,Z_Param_interactionClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnViewportFocusChanged(Z_Param_isOpen,Z_Param_interactionClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ExecuteSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ExecuteSecondaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ExecuteSecondaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_ExecuteSecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteSecondaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSecondaryFirePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryFirePressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ExecutePrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ExecutePrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ExecutePrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_ExecutePrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecutePrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecutePrimaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_StartDetonations) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_StartDetonations_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_StartDetonations_Validate")); \
			return; \
		} \
		P_THIS->Server_StartDetonations_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SpawnExplosive) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_spawnTransform); \
		P_GET_PROPERTY(UIntProperty,Z_Param_throwForce); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SpawnExplosive_Validate(Z_Param_spawnTransform,Z_Param_throwForce)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SpawnExplosive_Validate")); \
			return; \
		} \
		P_THIS->Server_SpawnExplosive_Implementation(Z_Param_spawnTransform,Z_Param_throwForce); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChargePct) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetChargePct(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_EVENT_PARMS \
	struct FGNobeliskDetonator_eventServer_SpawnExplosive_Parms \
	{ \
		FTransform spawnTransform; \
		int32 throwForce; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGNobeliskDetonator(); \
	friend struct Z_Construct_UClass_AFGNobeliskDetonator_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskDetonator, AFGWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskDetonator)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGNobeliskDetonator(); \
	friend struct Z_Construct_UClass_AFGNobeliskDetonator_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskDetonator, AFGWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskDetonator)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNobeliskDetonator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGNobeliskDetonator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskDetonator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskDetonator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskDetonator(AFGNobeliskDetonator&&); \
	NO_API AFGNobeliskDetonator(const AFGNobeliskDetonator&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskDetonator(AFGNobeliskDetonator&&); \
	NO_API AFGNobeliskDetonator(const AFGNobeliskDetonator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskDetonator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskDetonator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGNobeliskDetonator)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mExplosiveData() { return STRUCT_OFFSET(AFGNobeliskDetonator, mExplosiveData); } \
	FORCEINLINE static uint32 __PPO__mExplosiveClass() { return STRUCT_OFFSET(AFGNobeliskDetonator, mExplosiveClass); } \
	FORCEINLINE static uint32 __PPO__mDispensedExplosives() { return STRUCT_OFFSET(AFGNobeliskDetonator, mDispensedExplosives); } \
	FORCEINLINE static uint32 __PPO__mIsPendingExecuteFire() { return STRUCT_OFFSET(AFGNobeliskDetonator, mIsPendingExecuteFire); } \
	FORCEINLINE static uint32 __PPO__mMaxChargeTime() { return STRUCT_OFFSET(AFGNobeliskDetonator, mMaxChargeTime); } \
	FORCEINLINE static uint32 __PPO__mMaxThrowForce() { return STRUCT_OFFSET(AFGNobeliskDetonator, mMaxThrowForce); } \
	FORCEINLINE static uint32 __PPO__mMinThrowForce() { return STRUCT_OFFSET(AFGNobeliskDetonator, mMinThrowForce); } \
	FORCEINLINE static uint32 __PPO__mDelayBetweenExplosions() { return STRUCT_OFFSET(AFGNobeliskDetonator, mDelayBetweenExplosions); }


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_16_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGNobeliskDetonator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
