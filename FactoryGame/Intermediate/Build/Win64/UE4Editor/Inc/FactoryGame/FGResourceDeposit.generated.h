// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGResourceDescriptor;
#ifdef FACTORYGAME_FGResourceDeposit_generated_h
#error "FGResourceDeposit.generated.h already included, missing '#pragma once' in FGResourceDeposit.h"
#endif
#define FACTORYGAME_FGResourceDeposit_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ResourceDepositEmptied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ResourceDepositEmptied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMineAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMineAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDepositEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDepositEmpty(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ResourceDepositEmptied) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ResourceDepositEmptied(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMineAmount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMineAmount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDepositEmpty) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsDepositEmpty(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_EVENT_PARMS \
	struct FGResourceDeposit_eventPlayDepletedEffect_Parms \
	{ \
		TSubclassOf<UFGResourceDescriptor>  descriptor; \
	};


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGResourceDeposit(); \
	friend struct Z_Construct_UClass_AFGResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(AFGResourceDeposit, AFGResourceNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResourceDeposit)


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFGResourceDeposit(); \
	friend struct Z_Construct_UClass_AFGResourceDeposit_Statics; \
public: \
	DECLARE_CLASS(AFGResourceDeposit, AFGResourceNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResourceDeposit)


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGResourceDeposit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGResourceDeposit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResourceDeposit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResourceDeposit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResourceDeposit(AFGResourceDeposit&&); \
	NO_API AFGResourceDeposit(const AFGResourceDeposit&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResourceDeposit(AFGResourceDeposit&&); \
	NO_API AFGResourceDeposit(const AFGResourceDeposit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResourceDeposit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResourceDeposit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGResourceDeposit)


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mResourceDepositPackage() { return STRUCT_OFFSET(AFGResourceDeposit, mResourceDepositPackage); } \
	FORCEINLINE static uint32 __PPO__mResourceDepositTableIndex() { return STRUCT_OFFSET(AFGResourceDeposit, mResourceDepositTableIndex); } \
	FORCEINLINE static uint32 __PPO__mIsEmptied() { return STRUCT_OFFSET(AFGResourceDeposit, mIsEmptied); } \
	FORCEINLINE static uint32 __PPO__mMineAmount() { return STRUCT_OFFSET(AFGResourceDeposit, mMineAmount); }


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_18_PROLOG \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGResourceDeposit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGResourceDeposit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
