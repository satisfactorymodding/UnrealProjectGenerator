// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGFoliageResourceUserData_generated_h
#error "FGFoliageResourceUserData.generated.h already included, missing '#pragma once' in FGFoliageResourceUserData.h"
#endif
#define FACTORYGAME_FGFoliageResourceUserData_generated_h

#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGFoliageResourceUserData(); \
	friend struct Z_Construct_UClass_UFGFoliageResourceUserData_Statics; \
public: \
	DECLARE_CLASS(UFGFoliageResourceUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFoliageResourceUserData)


#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUFGFoliageResourceUserData(); \
	friend struct Z_Construct_UClass_UFGFoliageResourceUserData_Statics; \
public: \
	DECLARE_CLASS(UFGFoliageResourceUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFoliageResourceUserData)


#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGFoliageResourceUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGFoliageResourceUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFoliageResourceUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFoliageResourceUserData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFoliageResourceUserData(UFGFoliageResourceUserData&&); \
	NO_API UFGFoliageResourceUserData(const UFGFoliageResourceUserData&); \
public:


#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGFoliageResourceUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFoliageResourceUserData(UFGFoliageResourceUserData&&); \
	NO_API UFGFoliageResourceUserData(const UFGFoliageResourceUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFoliageResourceUserData); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFoliageResourceUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGFoliageResourceUserData)


#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPickupItems() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mPickupItems); } \
	FORCEINLINE static uint32 __PPO__mPickupEvent() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mPickupEvent); } \
	FORCEINLINE static uint32 __PPO__mPickupEffect() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mPickupEffect); } \
	FORCEINLINE static uint32 __PPO__mVehicleDestroyedEvent() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mVehicleDestroyedEvent); } \
	FORCEINLINE static uint32 __PPO__mVehicleDestroyedEffect() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mVehicleDestroyedEffect); } \
	FORCEINLINE static uint32 __PPO__mExplosionDestroyedEffect() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mExplosionDestroyedEffect); } \
	FORCEINLINE static uint32 __PPO__mFXPriority() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mFXPriority); } \
	FORCEINLINE static uint32 __PPO__mFoliageIdentifiers() { return STRUCT_OFFSET(UFGFoliageResourceUserData, mFoliageIdentifiers); }


#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGFoliageResourceUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGFoliageResourceUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
