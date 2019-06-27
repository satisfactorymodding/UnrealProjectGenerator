// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGRailroadTrackHologram_generated_h
#error "FGRailroadTrackHologram.generated.h already included, missing '#pragma once' in FGRailroadTrackHologram.h"
#endif
#define FACTORYGAME_FGRailroadTrackHologram_generated_h

#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SplineData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SplineData(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SplineData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SplineData(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRailroadTrackHologram(); \
	friend struct Z_Construct_UClass_AFGRailroadTrackHologram_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadTrackHologram, AFGBuildableHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadTrackHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGRailroadTrackHologram(); \
	friend struct Z_Construct_UClass_AFGRailroadTrackHologram_Statics; \
public: \
	DECLARE_CLASS(AFGRailroadTrackHologram, AFGBuildableHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRailroadTrackHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGRailroadTrackHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGRailroadTrackHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRailroadTrackHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRailroadTrackHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRailroadTrackHologram(AFGRailroadTrackHologram&&); \
	NO_API AFGRailroadTrackHologram(const AFGRailroadTrackHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRailroadTrackHologram(AFGRailroadTrackHologram&&); \
	NO_API AFGRailroadTrackHologram(const AFGRailroadTrackHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRailroadTrackHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRailroadTrackHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGRailroadTrackHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSplineComponent() { return STRUCT_OFFSET(AFGRailroadTrackHologram, mSplineComponent); } \
	FORCEINLINE static uint32 __PPO__mSplineData() { return STRUCT_OFFSET(AFGRailroadTrackHologram, mSplineData); } \
	FORCEINLINE static uint32 __PPO__mConnectionComponents() { return STRUCT_OFFSET(AFGRailroadTrackHologram, mConnectionComponents); } \
	FORCEINLINE static uint32 __PPO__mSnappedConnectionComponents() { return STRUCT_OFFSET(AFGRailroadTrackHologram, mSnappedConnectionComponents); }


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Hologram_FGRailroadTrackHologram_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
