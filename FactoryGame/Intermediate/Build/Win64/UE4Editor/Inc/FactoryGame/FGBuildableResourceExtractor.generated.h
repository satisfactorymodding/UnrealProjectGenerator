// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
class UFGInventoryComponent;
class AFGResourceNode;
#ifdef FACTORYGAME_FGBuildableResourceExtractor_generated_h
#error "FGBuildableResourceExtractor.generated.h already included, missing '#pragma once' in FGBuildableResourceExtractor.h"
#endif
#define FACTORYGAME_FGBuildableResourceExtractor_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsStartupComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsStartupComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMiningParticle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetMiningParticle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetOutputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceNode**)Z_Param__Result=P_THIS->GetResourceNode(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsStartupComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsStartupComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMiningParticle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=P_THIS->GetMiningParticle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOutputInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetOutputInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceNode**)Z_Param__Result=P_THIS->GetResourceNode(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableResourceExtractor(); \
	friend struct Z_Construct_UClass_AFGBuildableResourceExtractor_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableResourceExtractor, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableResourceExtractor)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableResourceExtractor(); \
	friend struct Z_Construct_UClass_AFGBuildableResourceExtractor_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableResourceExtractor, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableResourceExtractor)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableResourceExtractor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableResourceExtractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableResourceExtractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableResourceExtractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableResourceExtractor(AFGBuildableResourceExtractor&&); \
	NO_API AFGBuildableResourceExtractor(const AFGBuildableResourceExtractor&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableResourceExtractor(AFGBuildableResourceExtractor&&); \
	NO_API AFGBuildableResourceExtractor(const AFGBuildableResourceExtractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableResourceExtractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableResourceExtractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableResourceExtractor)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mExtractStartupTime() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractStartupTime); } \
	FORCEINLINE static uint32 __PPO__mExtractCycleTime() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractCycleTime); } \
	FORCEINLINE static uint32 __PPO__mAllowedResourceForms() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mAllowedResourceForms); } \
	FORCEINLINE static uint32 __PPO__mExtractionOffset() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractionOffset); } \
	FORCEINLINE static uint32 __PPO__mExtractResourceNode() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractResourceNode); } \
	FORCEINLINE static uint32 __PPO__mCurrentExtractProgress() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mCurrentExtractProgress); } \
	FORCEINLINE static uint32 __PPO__mOutputInventory() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mOutputInventory); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_16_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableResourceExtractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableResourceExtractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
