// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FACTORYGAME_FGNobeliskExplosiveAttachment_generated_h
#error "FGNobeliskExplosiveAttachment.generated.h already included, missing '#pragma once' in FGNobeliskExplosiveAttachment.h"
#endif
#define FACTORYGAME_FGNobeliskExplosiveAttachment_generated_h

#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_RPC_WRAPPERS \
	virtual void Multicast_SetIsLoaded_Implementation(bool isLoaded); \
	virtual void Multicast_PlayBeginFireEffect_Implementation(FVector const& location); \
 \
	DECLARE_FUNCTION(execMulticast_SetIsLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_isLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_SetIsLoaded_Implementation(Z_Param_isLoaded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_PlayBeginFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_PlayBeginFireEffect_Implementation(Z_Param_location); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetIsLoaded_Implementation(bool isLoaded); \
	virtual void Multicast_PlayBeginFireEffect_Implementation(FVector const& location); \
 \
	DECLARE_FUNCTION(execMulticast_SetIsLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_isLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_SetIsLoaded_Implementation(Z_Param_isLoaded); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMulticast_PlayBeginFireEffect) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_PlayBeginFireEffect_Implementation(Z_Param_location); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_EVENT_PARMS \
	struct FGNobeliskExplosiveAttachment_eventMulticast_PlayBeginFireEffect_Parms \
	{ \
		FVector location; \
	}; \
	struct FGNobeliskExplosiveAttachment_eventMulticast_SetIsLoaded_Parms \
	{ \
		bool isLoaded; \
	}; \
	struct FGNobeliskExplosiveAttachment_eventOnBeginFireEffect_Parms \
	{ \
		FVector location; \
	};


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGNobeliskExplosiveAttachment(); \
	friend struct Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskExplosiveAttachment, AFGWeaponAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskExplosiveAttachment)


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGNobeliskExplosiveAttachment(); \
	friend struct Z_Construct_UClass_AFGNobeliskExplosiveAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskExplosiveAttachment, AFGWeaponAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskExplosiveAttachment)


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNobeliskExplosiveAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGNobeliskExplosiveAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskExplosiveAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskExplosiveAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskExplosiveAttachment(AFGNobeliskExplosiveAttachment&&); \
	NO_API AFGNobeliskExplosiveAttachment(const AFGNobeliskExplosiveAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNobeliskExplosiveAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskExplosiveAttachment(AFGNobeliskExplosiveAttachment&&); \
	NO_API AFGNobeliskExplosiveAttachment(const AFGNobeliskExplosiveAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskExplosiveAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskExplosiveAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGNobeliskExplosiveAttachment)


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsLoaded() { return STRUCT_OFFSET(AFGNobeliskExplosiveAttachment, mIsLoaded); }


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGNobeliskExplosiveAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
