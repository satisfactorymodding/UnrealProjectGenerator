// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableConveyorLift_generated_h
#error "FGBuildableConveyorLift.generated.h already included, missing '#pragma once' in FGBuildableConveyorLift.h"
#endif
#define FACTORYGAME_FGBuildableConveyorLift_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TopTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TopTransform(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TopTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_TopTransform(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableConveyorLift(); \
	friend struct Z_Construct_UClass_AFGBuildableConveyorLift_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConveyorLift, AFGBuildableConveyorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConveyorLift)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableConveyorLift(); \
	friend struct Z_Construct_UClass_AFGBuildableConveyorLift_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConveyorLift, AFGBuildableConveyorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConveyorLift)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableConveyorLift(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableConveyorLift) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConveyorLift); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConveyorLift); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConveyorLift(AFGBuildableConveyorLift&&); \
	NO_API AFGBuildableConveyorLift(const AFGBuildableConveyorLift&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConveyorLift(AFGBuildableConveyorLift&&); \
	NO_API AFGBuildableConveyorLift(const AFGBuildableConveyorLift&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConveyorLift); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConveyorLift); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableConveyorLift)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTopTransform() { return STRUCT_OFFSET(AFGBuildableConveyorLift, mTopTransform); } \
	FORCEINLINE static uint32 __PPO__mIsReversed() { return STRUCT_OFFSET(AFGBuildableConveyorLift, mIsReversed); } \
	FORCEINLINE static uint32 __PPO__mItemMeshMap() { return STRUCT_OFFSET(AFGBuildableConveyorLift, mItemMeshMap); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableConveyorLift>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConveyorLift_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
