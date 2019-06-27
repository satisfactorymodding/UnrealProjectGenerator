// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSplitterSortRule;
#ifdef FACTORYGAME_FGBuildableSplitterSmart_generated_h
#error "FGBuildableSplitterSmart.generated.h already included, missing '#pragma once' in FGBuildableSplitterSmart.h"
#endif
#define FACTORYGAME_FGBuildableSplitterSmart_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplitterSortRule_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_9_DELEGATE \
static inline void FOnSortRulesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSortRulesChanged) \
{ \
	OnSortRulesChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SortRules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SortRules(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_STRUCT(FSplitterSortRule,Z_Param_rule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSortRuleAt(Z_Param_index,Z_Param_rule); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSortRuleAt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSortRule) \
	{ \
		P_GET_STRUCT(FSplitterSortRule,Z_Param_rule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSortRule(Z_Param_rule); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSplitterSortRule*)Z_Param__Result=P_THIS->GetSortRuleAt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidSortRuleAt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumSortRules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumSortRules(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSortRules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSortRules(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SortRules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SortRules(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_GET_STRUCT(FSplitterSortRule,Z_Param_rule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSortRuleAt(Z_Param_index,Z_Param_rule); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveSortRuleAt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSortRule) \
	{ \
		P_GET_STRUCT(FSplitterSortRule,Z_Param_rule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSortRule(Z_Param_rule); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSplitterSortRule*)Z_Param__Result=P_THIS->GetSortRuleAt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValidSortRuleAt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidSortRuleAt(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumSortRules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxNumSortRules(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSortRules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSortRules(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableSplitterSmart(); \
	friend struct Z_Construct_UClass_AFGBuildableSplitterSmart_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSplitterSmart, AFGBuildableAttachmentSplitter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSplitterSmart)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableSplitterSmart(); \
	friend struct Z_Construct_UClass_AFGBuildableSplitterSmart_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSplitterSmart, AFGBuildableAttachmentSplitter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSplitterSmart)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableSplitterSmart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableSplitterSmart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSplitterSmart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSplitterSmart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSplitterSmart(AFGBuildableSplitterSmart&&); \
	NO_API AFGBuildableSplitterSmart(const AFGBuildableSplitterSmart&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSplitterSmart(AFGBuildableSplitterSmart&&); \
	NO_API AFGBuildableSplitterSmart(const AFGBuildableSplitterSmart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSplitterSmart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSplitterSmart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableSplitterSmart)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnSortRulesChangedDelegate() { return STRUCT_OFFSET(AFGBuildableSplitterSmart, OnSortRulesChangedDelegate); } \
	FORCEINLINE static uint32 __PPO__mSortRules() { return STRUCT_OFFSET(AFGBuildableSplitterSmart, mSortRules); } \
	FORCEINLINE static uint32 __PPO__mMaxNumSortRules() { return STRUCT_OFFSET(AFGBuildableSplitterSmart, mMaxNumSortRules); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_41_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableSplitterSmart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
