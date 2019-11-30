// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGBuildable;
#ifdef FACTORYGAME_FGBuildableHologram_generated_h
#error "FGBuildableHologram.generated.h already included, missing '#pragma once' in FGBuildableHologram.h"
#endif
#define FACTORYGAME_FGBuildableHologram_generated_h

#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_EVENT_PARMS \
	struct FGBuildableHologram_eventReceiveConfigureActor_Parms \
	{ \
		AFGBuildable* inBuildable; \
	}; \
	struct FGBuildableHologram_eventReceiveConfigureComponents_Parms \
	{ \
		AFGBuildable* inBuildable; \
	};


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableHologram(); \
	friend struct Z_Construct_UClass_AFGBuildableHologram_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableHologram, AFGHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableHologram(); \
	friend struct Z_Construct_UClass_AFGBuildableHologram_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableHologram, AFGHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableHologram(AFGBuildableHologram&&); \
	NO_API AFGBuildableHologram(const AFGBuildableHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableHologram(AFGBuildableHologram&&); \
	NO_API AFGBuildableHologram(const AFGBuildableHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBuildableClass() { return STRUCT_OFFSET(AFGBuildableHologram, mBuildableClass); } \
	FORCEINLINE static uint32 __PPO__mMaxPlacementFloorAngle() { return STRUCT_OFFSET(AFGBuildableHologram, mMaxPlacementFloorAngle); } \
	FORCEINLINE static uint32 __PPO__mLegs() { return STRUCT_OFFSET(AFGBuildableHologram, mLegs); } \
	FORCEINLINE static uint32 __PPO__mClearanceBox() { return STRUCT_OFFSET(AFGBuildableHologram, mClearanceBox); }


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_19_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableHologram>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Hologram_FGBuildableHologram_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
