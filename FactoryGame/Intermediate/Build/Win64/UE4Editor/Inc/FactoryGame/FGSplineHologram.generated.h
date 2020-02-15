// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGSplineHologram_generated_h
#error "FGSplineHologram.generated.h already included, missing '#pragma once' in FGSplineHologram.h"
#endif
#define FACTORYGAME_FGSplineHologram_generated_h

#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SplineData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SplineData(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SplineData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SplineData(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGSplineHologram(); \
	friend struct Z_Construct_UClass_AFGSplineHologram_Statics; \
public: \
	DECLARE_CLASS(AFGSplineHologram, AFGBuildableHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSplineHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAFGSplineHologram(); \
	friend struct Z_Construct_UClass_AFGSplineHologram_Statics; \
public: \
	DECLARE_CLASS(AFGSplineHologram, AFGBuildableHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSplineHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGSplineHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGSplineHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSplineHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSplineHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSplineHologram(AFGSplineHologram&&); \
	NO_API AFGSplineHologram(const AFGSplineHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSplineHologram(AFGSplineHologram&&); \
	NO_API AFGSplineHologram(const AFGSplineHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSplineHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSplineHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGSplineHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSplineComponent() { return STRUCT_OFFSET(AFGSplineHologram, mSplineComponent); } \
	FORCEINLINE static uint32 __PPO__mSplineData() { return STRUCT_OFFSET(AFGSplineHologram, mSplineData); } \
	FORCEINLINE static uint32 __PPO__mIsConnectionSnappedOnConstruction() { return STRUCT_OFFSET(AFGSplineHologram, mIsConnectionSnappedOnConstruction); } \
	FORCEINLINE static uint32 __PPO__mBuildStep() { return STRUCT_OFFSET(AFGSplineHologram, mBuildStep); }


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_23_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGSplineHologram>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Hologram_FGSplineHologram_h


#define FOREACH_ENUM_ESPLINEHOLOGRAMBUILDSTEP(op) \
	op(ESplineHologramBuildStep::SHBS_FindStart) \
	op(ESplineHologramBuildStep::SHBS_PlacePoleOrSnapEnding) \
	op(ESplineHologramBuildStep::SHBS_AdjustPole) 

enum class ESplineHologramBuildStep : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ESplineHologramBuildStep>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
