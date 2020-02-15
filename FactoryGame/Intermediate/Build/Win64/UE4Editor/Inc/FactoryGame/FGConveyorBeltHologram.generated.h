// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGConveyorBeltHologram_generated_h
#error "FGConveyorBeltHologram.generated.h already included, missing '#pragma once' in FGConveyorBeltHologram.h"
#endif
#define FACTORYGAME_FGConveyorBeltHologram_generated_h

#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ConnectionArrowComponentDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ConnectionArrowComponentDirection(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ConnectionArrowComponentDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ConnectionArrowComponentDirection(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGConveyorBeltHologram(); \
	friend struct Z_Construct_UClass_AFGConveyorBeltHologram_Statics; \
public: \
	DECLARE_CLASS(AFGConveyorBeltHologram, AFGSplineHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGConveyorBeltHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFGConveyorBeltHologram(); \
	friend struct Z_Construct_UClass_AFGConveyorBeltHologram_Statics; \
public: \
	DECLARE_CLASS(AFGConveyorBeltHologram, AFGSplineHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGConveyorBeltHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGConveyorBeltHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGConveyorBeltHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGConveyorBeltHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGConveyorBeltHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGConveyorBeltHologram(AFGConveyorBeltHologram&&); \
	NO_API AFGConveyorBeltHologram(const AFGConveyorBeltHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGConveyorBeltHologram(AFGConveyorBeltHologram&&); \
	NO_API AFGConveyorBeltHologram(const AFGConveyorBeltHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGConveyorBeltHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGConveyorBeltHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGConveyorBeltHologram)


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mChildPoleHologram() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mChildPoleHologram); } \
	FORCEINLINE static uint32 __PPO__mConnectionComponents() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mConnectionComponents); } \
	FORCEINLINE static uint32 __PPO__mSnappedConnectionComponents() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mSnappedConnectionComponents); } \
	FORCEINLINE static uint32 __PPO__mUpgradedConveyorBelt() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mUpgradedConveyorBelt); } \
	FORCEINLINE static uint32 __PPO__mDefaultConveyorPoleRecipe() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mDefaultConveyorPoleRecipe); } \
	FORCEINLINE static uint32 __PPO__mBendRadius() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mBendRadius); } \
	FORCEINLINE static uint32 __PPO__mMaxLength() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mMaxLength); } \
	FORCEINLINE static uint32 __PPO__mMaxIncline() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mMaxIncline); } \
	FORCEINLINE static uint32 __PPO__mConnectionArrowComponentDirection() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mConnectionArrowComponentDirection); } \
	FORCEINLINE static uint32 __PPO__mConnectionArrowComponent() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mConnectionArrowComponent); } \
	FORCEINLINE static uint32 __PPO__mConstructionPoleLocations() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mConstructionPoleLocations); } \
	FORCEINLINE static uint32 __PPO__mConstructionPoleRotations() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mConstructionPoleRotations); } \
	FORCEINLINE static uint32 __PPO__mSplineMeshes() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mSplineMeshes); } \
	FORCEINLINE static uint32 __PPO__mCollisionMeshes() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mCollisionMeshes); } \
	FORCEINLINE static uint32 __PPO__mMesh() { return STRUCT_OFFSET(AFGConveyorBeltHologram, mMesh); }


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_20_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGConveyorBeltHologram>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Hologram_FGConveyorBeltHologram_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
