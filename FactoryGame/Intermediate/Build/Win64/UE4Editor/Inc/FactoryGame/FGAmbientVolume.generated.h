// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGAmbientVolume_generated_h
#error "FGAmbientVolume.generated.h already included, missing '#pragma once' in FGAmbientVolume.h"
#endif
#define FACTORYGAME_FGAmbientVolume_generated_h

#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGAmbientVolume(); \
	friend struct Z_Construct_UClass_AFGAmbientVolume_Statics; \
public: \
	DECLARE_CLASS(AFGAmbientVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAmbientVolume) \
	virtual UObject* _getUObject() const override { return const_cast<AFGAmbientVolume*>(this); }


#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGAmbientVolume(); \
	friend struct Z_Construct_UClass_AFGAmbientVolume_Statics; \
public: \
	DECLARE_CLASS(AFGAmbientVolume, AVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGAmbientVolume) \
	virtual UObject* _getUObject() const override { return const_cast<AFGAmbientVolume*>(this); }


#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGAmbientVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGAmbientVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGAmbientVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGAmbientVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGAmbientVolume(AFGAmbientVolume&&); \
	NO_API AFGAmbientVolume(const AFGAmbientVolume&); \
public:


#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGAmbientVolume(AFGAmbientVolume&&); \
	NO_API AFGAmbientVolume(const AFGAmbientVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGAmbientVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGAmbientVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGAmbientVolume)


#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAmbientSettings() { return STRUCT_OFFSET(AFGAmbientVolume, mAmbientSettings); } \
	FORCEINLINE static uint32 __PPO__mAudioComponent() { return STRUCT_OFFSET(AFGAmbientVolume, mAudioComponent); } \
	FORCEINLINE static uint32 __PPO__mAdditionalAttenuationDistance() { return STRUCT_OFFSET(AFGAmbientVolume, mAdditionalAttenuationDistance); } \
	FORCEINLINE static uint32 __PPO__mSignificanceRange() { return STRUCT_OFFSET(AFGAmbientVolume, mSignificanceRange); }


#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGAmbientVolume_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGAmbientVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGAmbientVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
