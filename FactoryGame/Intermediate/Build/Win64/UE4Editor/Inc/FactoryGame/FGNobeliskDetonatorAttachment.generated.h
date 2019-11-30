// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGNobeliskDetonatorAttachment_generated_h
#error "FGNobeliskDetonatorAttachment.generated.h already included, missing '#pragma once' in FGNobeliskDetonatorAttachment.h"
#endif
#define FACTORYGAME_FGNobeliskDetonatorAttachment_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_RPC_WRAPPERS \
	virtual void Multicast_SetIsLoaded_Implementation(bool isLoaded); \
 \
	DECLARE_FUNCTION(execMulticast_SetIsLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_isLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_SetIsLoaded_Implementation(Z_Param_isLoaded); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetIsLoaded_Implementation(bool isLoaded); \
 \
	DECLARE_FUNCTION(execMulticast_SetIsLoaded) \
	{ \
		P_GET_UBOOL(Z_Param_isLoaded); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_SetIsLoaded_Implementation(Z_Param_isLoaded); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_EVENT_PARMS \
	struct FGNobeliskDetonatorAttachment_eventMulticast_SetIsLoaded_Parms \
	{ \
		bool isLoaded; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGNobeliskDetonatorAttachment(); \
	friend struct Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskDetonatorAttachment, AFGWeaponAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskDetonatorAttachment)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGNobeliskDetonatorAttachment(); \
	friend struct Z_Construct_UClass_AFGNobeliskDetonatorAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskDetonatorAttachment, AFGWeaponAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskDetonatorAttachment)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNobeliskDetonatorAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGNobeliskDetonatorAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskDetonatorAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskDetonatorAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskDetonatorAttachment(AFGNobeliskDetonatorAttachment&&); \
	NO_API AFGNobeliskDetonatorAttachment(const AFGNobeliskDetonatorAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNobeliskDetonatorAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskDetonatorAttachment(AFGNobeliskDetonatorAttachment&&); \
	NO_API AFGNobeliskDetonatorAttachment(const AFGNobeliskDetonatorAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskDetonatorAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskDetonatorAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGNobeliskDetonatorAttachment)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsLoaded() { return STRUCT_OFFSET(AFGNobeliskDetonatorAttachment, mIsLoaded); }


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGNobeliskDetonatorAttachment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
