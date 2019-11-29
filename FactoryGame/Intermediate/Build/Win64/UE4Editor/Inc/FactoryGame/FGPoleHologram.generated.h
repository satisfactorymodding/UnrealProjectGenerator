// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGPoleHologram_generated_h
#error "FGPoleHologram.generated.h already included, missing '#pragma once' in FGPoleHologram.h"
#endif
#define FACTORYGAME_FGPoleHologram_generated_h

#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PoleMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PoleMesh(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PoleMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_PoleMesh(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPoleHologram(); \
	friend struct Z_Construct_UClass_AFGPoleHologram_Statics; \
public: \
	DECLARE_CLASS(AFGPoleHologram, AFGFactoryHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPoleHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGPoleHologram(); \
	friend struct Z_Construct_UClass_AFGPoleHologram_Statics; \
public: \
	DECLARE_CLASS(AFGPoleHologram, AFGFactoryHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPoleHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPoleHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPoleHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPoleHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPoleHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPoleHologram(AFGPoleHologram&&); \
	NO_API AFGPoleHologram(const AFGPoleHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPoleHologram(AFGPoleHologram&&); \
	NO_API AFGPoleHologram(const AFGPoleHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPoleHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPoleHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPoleHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPoleMesh() { return STRUCT_OFFSET(AFGPoleHologram, mPoleMesh); } \
	FORCEINLINE static uint32 __PPO__mPoleMeshComponent() { return STRUCT_OFFSET(AFGPoleHologram, mPoleMeshComponent); } \
	FORCEINLINE static uint32 __PPO__mPoleHeightComponent() { return STRUCT_OFFSET(AFGPoleHologram, mPoleHeightComponent); }


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGPoleHologram>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Hologram_FGPoleHologram_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
