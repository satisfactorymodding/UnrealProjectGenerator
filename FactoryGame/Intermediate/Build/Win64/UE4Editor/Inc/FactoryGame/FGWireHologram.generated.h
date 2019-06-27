// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGWireHologram_generated_h
#error "FGWireHologram.generated.h already included, missing '#pragma once' in FGWireHologram.h"
#endif
#define FACTORYGAME_FGWireHologram_generated_h

#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_EVENT_PARMS \
	struct FGWireHologram_eventOnAutomaticPoleDisableToggle_Parms \
	{ \
		bool disabled; \
	};


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWireHologram(); \
	friend struct Z_Construct_UClass_AFGWireHologram_Statics; \
public: \
	DECLARE_CLASS(AFGWireHologram, AFGBuildableHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWireHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGWireHologram(); \
	friend struct Z_Construct_UClass_AFGWireHologram_Statics; \
public: \
	DECLARE_CLASS(AFGWireHologram, AFGBuildableHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWireHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWireHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWireHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWireHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWireHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWireHologram(AFGWireHologram&&); \
	NO_API AFGWireHologram(const AFGWireHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWireHologram(AFGWireHologram&&); \
	NO_API AFGWireHologram(const AFGWireHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWireHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWireHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWireHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mConnections() { return STRUCT_OFFSET(AFGWireHologram, mConnections); } \
	FORCEINLINE static uint32 __PPO__mPowerPole() { return STRUCT_OFFSET(AFGWireHologram, mPowerPole); } \
	FORCEINLINE static uint32 __PPO__mDefaultPowerPoleRecipe() { return STRUCT_OFFSET(AFGWireHologram, mDefaultPowerPoleRecipe); } \
	FORCEINLINE static uint32 __PPO__mStartLocation() { return STRUCT_OFFSET(AFGWireHologram, mStartLocation); } \
	FORCEINLINE static uint32 __PPO__mCurrentConnection() { return STRUCT_OFFSET(AFGWireHologram, mCurrentConnection); } \
	FORCEINLINE static uint32 __PPO__mWireMesh() { return STRUCT_OFFSET(AFGWireHologram, mWireMesh); }


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Hologram_FGWireHologram_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
