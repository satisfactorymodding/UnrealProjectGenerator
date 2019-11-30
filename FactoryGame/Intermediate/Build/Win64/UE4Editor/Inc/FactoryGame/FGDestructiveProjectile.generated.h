// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGDestructiveProjectile_generated_h
#error "FGDestructiveProjectile.generated.h already included, missing '#pragma once' in FGDestructiveProjectile.h"
#endif
#define FACTORYGAME_FGDestructiveProjectile_generated_h

#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestroyedFoliageEffectData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FDestroyedFoliageEffectData>();

#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGDestructiveProjectile(); \
	friend struct Z_Construct_UClass_AFGDestructiveProjectile_Statics; \
public: \
	DECLARE_CLASS(AFGDestructiveProjectile, AFGProjectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDestructiveProjectile)


#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_INCLASS \
private: \
	static void StaticRegisterNativesAFGDestructiveProjectile(); \
	friend struct Z_Construct_UClass_AFGDestructiveProjectile_Statics; \
public: \
	DECLARE_CLASS(AFGDestructiveProjectile, AFGProjectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDestructiveProjectile)


#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGDestructiveProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGDestructiveProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDestructiveProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDestructiveProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDestructiveProjectile(AFGDestructiveProjectile&&); \
	NO_API AFGDestructiveProjectile(const AFGDestructiveProjectile&); \
public:


#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDestructiveProjectile(AFGDestructiveProjectile&&); \
	NO_API AFGDestructiveProjectile(const AFGDestructiveProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDestructiveProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDestructiveProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGDestructiveProjectile)


#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDestructionCollisionComp() { return STRUCT_OFFSET(AFGDestructiveProjectile, mDestructionCollisionComp); } \
	FORCEINLINE static uint32 __PPO__mDestroysRelevantActors() { return STRUCT_OFFSET(AFGDestructiveProjectile, mDestroysRelevantActors); } \
	FORCEINLINE static uint32 __PPO__mDestroysFoliage() { return STRUCT_OFFSET(AFGDestructiveProjectile, mDestroysFoliage); } \
	FORCEINLINE static uint32 __PPO__mMaxParticleSpawnsPerDetonation() { return STRUCT_OFFSET(AFGDestructiveProjectile, mMaxParticleSpawnsPerDetonation); }


#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_45_PROLOG
#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_INCLASS \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGDestructiveProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDestructiveProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
