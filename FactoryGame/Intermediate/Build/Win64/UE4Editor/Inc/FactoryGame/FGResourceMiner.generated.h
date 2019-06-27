// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGResourceNode;
#ifdef FACTORYGAME_FGResourceMiner_generated_h
#error "FGResourceMiner.generated.h already included, missing '#pragma once' in FGResourceMiner.h"
#endif
#define FACTORYGAME_FGResourceMiner_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_RPC_WRAPPERS \
	virtual bool Server_ExtractResources_Validate(); \
	virtual void Server_ExtractResources_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_ExtractResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ExtractResources_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ExtractResources_Validate")); \
			return; \
		} \
		P_THIS->Server_ExtractResources_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoMine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoMine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceNode**)Z_Param__Result=P_THIS->GetResourceNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResourceNode) \
	{ \
		P_GET_OBJECT(AFGResourceNode,Z_Param_inNode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResourceNode(Z_Param_inNode); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ExtractResources_Validate(); \
	virtual void Server_ExtractResources_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_ExtractResources) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ExtractResources_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ExtractResources_Validate")); \
			return; \
		} \
		P_THIS->Server_ExtractResources_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoMine) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoMine(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResourceNode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGResourceNode**)Z_Param__Result=P_THIS->GetResourceNode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResourceNode) \
	{ \
		P_GET_OBJECT(AFGResourceNode,Z_Param_inNode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetResourceNode(Z_Param_inNode); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGResourceMiner(); \
	friend struct Z_Construct_UClass_AFGResourceMiner_Statics; \
public: \
	DECLARE_CLASS(AFGResourceMiner, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResourceMiner)


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFGResourceMiner(); \
	friend struct Z_Construct_UClass_AFGResourceMiner_Statics; \
public: \
	DECLARE_CLASS(AFGResourceMiner, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGResourceMiner)


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGResourceMiner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGResourceMiner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResourceMiner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResourceMiner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResourceMiner(AFGResourceMiner&&); \
	NO_API AFGResourceMiner(const AFGResourceMiner&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGResourceMiner(AFGResourceMiner&&); \
	NO_API AFGResourceMiner(const AFGResourceMiner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGResourceMiner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGResourceMiner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGResourceMiner)


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPickParticleSystem() { return STRUCT_OFFSET(AFGResourceMiner, mPickParticleSystem); } \
	FORCEINLINE static uint32 __PPO__mPickArmsAnim() { return STRUCT_OFFSET(AFGResourceMiner, mPickArmsAnim); } \
	FORCEINLINE static uint32 __PPO__mCachedResouceNode() { return STRUCT_OFFSET(AFGResourceMiner, mCachedResouceNode); }


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGResourceMiner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
