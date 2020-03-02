// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGSignificanceManager_generated_h
#error "FGSignificanceManager.generated.h already included, missing '#pragma once' in FGSignificanceManager.h"
#endif
#define FACTORYGAME_FGSignificanceManager_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGainSignificanceData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FGainSignificanceData>();

#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSignificanceManager(); \
	friend struct Z_Construct_UClass_UFGSignificanceManager_Statics; \
public: \
	DECLARE_CLASS(UFGSignificanceManager, USignificanceManager, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSignificanceManager)


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUFGSignificanceManager(); \
	friend struct Z_Construct_UClass_UFGSignificanceManager_Statics; \
public: \
	DECLARE_CLASS(UFGSignificanceManager, USignificanceManager, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSignificanceManager)


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSignificanceManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSignificanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSignificanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSignificanceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSignificanceManager(UFGSignificanceManager&&); \
	NO_API UFGSignificanceManager(const UFGSignificanceManager&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSignificanceManager(UFGSignificanceManager&&); \
	NO_API UFGSignificanceManager(const UFGSignificanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSignificanceManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSignificanceManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGSignificanceManager)


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPreviousSignificantFactories() { return STRUCT_OFFSET(UFGSignificanceManager, mPreviousSignificantFactories); } \
	FORCEINLINE static uint32 __PPO__mPreviousSignificantConveyorBases() { return STRUCT_OFFSET(UFGSignificanceManager, mPreviousSignificantConveyorBases); } \
	FORCEINLINE static uint32 __PPO__mPreviousSignificantPipelines() { return STRUCT_OFFSET(UFGSignificanceManager, mPreviousSignificantPipelines); }


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_43_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSignificanceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSignificanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
