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
class IFGExtractableResourceInterface;
#ifdef FACTORYGAME_FGBuildableResourceExtractor_generated_h
#error "FGBuildableResourceExtractor.generated.h already included, missing '#pragma once' in FGBuildableResourceExtractor.h"
#endif
#define FACTORYGAME_FGBuildableResourceExtractor_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxFlowRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxFlowRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlowRateSmoothed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFlowRateSmoothed(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetNumExtractedItemsPerCycleConverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNumExtractedItemsPerCycleConverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumExtractedItemsPerCycle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumExtractedItemsPerCycle(); \
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
	DECLARE_FUNCTION(execGetExtractableResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IFGExtractableResourceInterface>*)Z_Param__Result=P_THIS->GetExtractableResource(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxFlowRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxFlowRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFlowRateSmoothed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFlowRateSmoothed(); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetNumExtractedItemsPerCycleConverted) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNumExtractedItemsPerCycleConverted(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumExtractedItemsPerCycle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumExtractedItemsPerCycle(); \
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
	DECLARE_FUNCTION(execGetExtractableResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TScriptInterface<IFGExtractableResourceInterface>*)Z_Param__Result=P_THIS->GetExtractableResource(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableResourceExtractor(); \
	friend struct Z_Construct_UClass_AFGBuildableResourceExtractor_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableResourceExtractor, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableResourceExtractor)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableResourceExtractor(); \
	friend struct Z_Construct_UClass_AFGBuildableResourceExtractor_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableResourceExtractor, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableResourceExtractor)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableResourceExtractor(AFGBuildableResourceExtractor&&); \
	NO_API AFGBuildableResourceExtractor(const AFGBuildableResourceExtractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableResourceExtractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableResourceExtractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableResourceExtractor)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mExtractStartupTime() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractStartupTime); } \
	FORCEINLINE static uint32 __PPO__mExtractCycleTime() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractCycleTime); } \
	FORCEINLINE static uint32 __PPO__mItemsPerCycle() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mItemsPerCycle); } \
	FORCEINLINE static uint32 __PPO__mAllowedResourceForms() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mAllowedResourceForms); } \
	FORCEINLINE static uint32 __PPO__mMinimumDepthForPlacement() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mMinimumDepthForPlacement); } \
	FORCEINLINE static uint32 __PPO__mRequireResourceAtMinimumDepthChecks() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mRequireResourceAtMinimumDepthChecks); } \
	FORCEINLINE static uint32 __PPO__mOnlyAllowCertainResources() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mOnlyAllowCertainResources); } \
	FORCEINLINE static uint32 __PPO__mAllowedResources() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mAllowedResources); } \
	FORCEINLINE static uint32 __PPO__mExtractionOffset() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractionOffset); } \
	FORCEINLINE static uint32 __PPO__mMustPlaceOnResourceDisqualifier() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mMustPlaceOnResourceDisqualifier); } \
	FORCEINLINE static uint32 __PPO__mExtractResourceNode() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractResourceNode); } \
	FORCEINLINE static uint32 __PPO__mExtractableResource() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mExtractableResource); } \
	FORCEINLINE static uint32 __PPO__mCurrentExtractProgress() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mCurrentExtractProgress); } \
	FORCEINLINE static uint32 __PPO__mPipeOutputConnections() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mPipeOutputConnections); } \
	FORCEINLINE static uint32 __PPO__mOutputInventory() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mOutputInventory); } \
	FORCEINLINE static uint32 __PPO__mReplicatedFlowRate() { return STRUCT_OFFSET(AFGBuildableResourceExtractor, mReplicatedFlowRate); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_19_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableResourceExtractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableResourceExtractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
