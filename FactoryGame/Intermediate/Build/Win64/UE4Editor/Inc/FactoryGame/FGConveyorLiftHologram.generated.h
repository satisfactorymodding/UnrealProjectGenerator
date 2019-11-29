// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGConveyorLiftHologram_generated_h
#error "FGConveyorLiftHologram.generated.h already included, missing '#pragma once' in FGConveyorLiftHologram.h"
#endif
#define FACTORYGAME_FGConveyorLiftHologram_generated_h

#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ArrowDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ArrowDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TopTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TopTransform(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ArrowDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ArrowDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_TopTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TopTransform(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGConveyorLiftHologram(); \
	friend struct Z_Construct_UClass_AFGConveyorLiftHologram_Statics; \
public: \
	DECLARE_CLASS(AFGConveyorLiftHologram, AFGSplineHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGConveyorLiftHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGConveyorLiftHologram(); \
	friend struct Z_Construct_UClass_AFGConveyorLiftHologram_Statics; \
public: \
	DECLARE_CLASS(AFGConveyorLiftHologram, AFGSplineHologram, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGConveyorLiftHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGConveyorLiftHologram(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGConveyorLiftHologram) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGConveyorLiftHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGConveyorLiftHologram); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGConveyorLiftHologram(AFGConveyorLiftHologram&&); \
	NO_API AFGConveyorLiftHologram(const AFGConveyorLiftHologram&); \
public:


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGConveyorLiftHologram(AFGConveyorLiftHologram&&); \
	NO_API AFGConveyorLiftHologram(const AFGConveyorLiftHologram&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGConveyorLiftHologram); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGConveyorLiftHologram); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGConveyorLiftHologram)


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mConnectionComponents() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mConnectionComponents); } \
	FORCEINLINE static uint32 __PPO__mSnappedConnectionComponents() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mSnappedConnectionComponents); } \
	FORCEINLINE static uint32 __PPO__mUpgradedConveyorLift() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mUpgradedConveyorLift); } \
	FORCEINLINE static uint32 __PPO__mTopTransform() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mTopTransform); } \
	FORCEINLINE static uint32 __PPO__mBottomMesh() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mBottomMesh); } \
	FORCEINLINE static uint32 __PPO__mMidMesh() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mMidMesh); } \
	FORCEINLINE static uint32 __PPO__mTopMesh() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mTopMesh); } \
	FORCEINLINE static uint32 __PPO__mJointMesh() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mJointMesh); } \
	FORCEINLINE static uint32 __PPO__mArrowDirection() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mArrowDirection); } \
	FORCEINLINE static uint32 __PPO__mArrowComponent() { return STRUCT_OFFSET(AFGConveyorLiftHologram, mArrowComponent); }


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGConveyorLiftHologram>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Hologram_FGConveyorLiftHologram_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
