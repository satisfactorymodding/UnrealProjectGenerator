// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGNobeliskExplosive_generated_h
#error "FGNobeliskExplosive.generated.h already included, missing '#pragma once' in FGNobeliskExplosive.h"
#endif
#define FACTORYGAME_FGNobeliskExplosive_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_DetonateIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DetonateIn(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DetonateIn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DetonateIn(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGNobeliskExplosive(); \
	friend struct Z_Construct_UClass_AFGNobeliskExplosive_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskExplosive, AFGDestructiveProjectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskExplosive)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFGNobeliskExplosive(); \
	friend struct Z_Construct_UClass_AFGNobeliskExplosive_Statics; \
public: \
	DECLARE_CLASS(AFGNobeliskExplosive, AFGDestructiveProjectile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGNobeliskExplosive)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGNobeliskExplosive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGNobeliskExplosive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskExplosive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskExplosive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskExplosive(AFGNobeliskExplosive&&); \
	NO_API AFGNobeliskExplosive(const AFGNobeliskExplosive&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGNobeliskExplosive(AFGNobeliskExplosive&&); \
	NO_API AFGNobeliskExplosive(const AFGNobeliskExplosive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGNobeliskExplosive); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGNobeliskExplosive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGNobeliskExplosive)


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mRotatingMovementComp() { return STRUCT_OFFSET(AFGNobeliskExplosive, mRotatingMovementComp); } \
	FORCEINLINE static uint32 __PPO__mDetonateIn() { return STRUCT_OFFSET(AFGNobeliskExplosive, mDetonateIn); } \
	FORCEINLINE static uint32 __PPO__mEnvironmentDestructionSphere() { return STRUCT_OFFSET(AFGNobeliskExplosive, mEnvironmentDestructionSphere); } \
	FORCEINLINE static uint32 __PPO__mThrowRotation() { return STRUCT_OFFSET(AFGNobeliskExplosive, mThrowRotation); }


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_12_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGNobeliskExplosive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGNobeliskExplosive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
