// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemAmount;
class UFGSchematic;
class UObject;
class AFGGamePhaseManager;
#ifdef FACTORYGAME_FGGamePhaseManager_generated_h
#error "FGGamePhaseManager.generated.h already included, missing '#pragma once' in FGGamePhaseManager.h"
#endif
#define FACTORYGAME_FGGamePhaseManager_generated_h

#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhaseCost_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FPhaseCost>();

#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhaseTierInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FPhaseTierInfo>();

#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_87_DELEGATE \
struct _Script_FactoryGame_eventOnGamePhaseUpdated_Parms \
{ \
	TEnumAsByte<EGamePhase> gamePhase; \
}; \
static inline void FOnGamePhaseUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGamePhaseUpdated, EGamePhase gamePhase) \
{ \
	_Script_FactoryGame_eventOnGamePhaseUpdated_Parms Parms; \
	Parms.gamePhase=gamePhase; \
	OnGamePhaseUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_GamePhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GamePhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffOnGamePhase) \
	{ \
		P_GET_STRUCT(FItemAmount,Z_Param_payOff); \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PayOffOnGamePhase(Z_Param_payOff,EGamePhase(Z_Param_gamePhase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCostForGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCostForGamePhase(EGamePhase(Z_Param_gamePhase),Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseCostForGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBaseCostForGamePhase(EGamePhase(Z_Param_gamePhase),Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseForTechTier) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_techTier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePhase>*)Z_Param__Result=P_THIS->GetGamePhaseForTechTier(Z_Param_techTier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseForSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePhase>*)Z_Param__Result=P_THIS->GetGamePhaseForSchematic(Z_Param_inSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseName) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetGamePhaseName(EGamePhase(Z_Param_gamePhase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePhase>*)Z_Param__Result=P_THIS->GetGamePhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newPhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamePhase(EGamePhase(Z_Param_newPhase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGGamePhaseManager**)Z_Param__Result=AFGGamePhaseManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_GamePhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GamePhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPayOffOnGamePhase) \
	{ \
		P_GET_STRUCT(FItemAmount,Z_Param_payOff); \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PayOffOnGamePhase(Z_Param_payOff,EGamePhase(Z_Param_gamePhase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCostForGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetCostForGamePhase(EGamePhase(Z_Param_gamePhase),Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseCostForGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_GET_TARRAY_REF(FItemAmount,Z_Param_Out_out_cost); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetBaseCostForGamePhase(EGamePhase(Z_Param_gamePhase),Z_Param_Out_out_cost); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseForTechTier) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_techTier); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePhase>*)Z_Param__Result=P_THIS->GetGamePhaseForTechTier(Z_Param_techTier); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseForSchematic) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inSchematic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePhase>*)Z_Param__Result=P_THIS->GetGamePhaseForSchematic(Z_Param_inSchematic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhaseName) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_gamePhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetGamePhaseName(EGamePhase(Z_Param_gamePhase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamePhase) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EGamePhase>*)Z_Param__Result=P_THIS->GetGamePhase(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamePhase) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newPhase); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamePhase(EGamePhase(Z_Param_newPhase)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGGamePhaseManager**)Z_Param__Result=AFGGamePhaseManager::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGGamePhaseManager(); \
	friend struct Z_Construct_UClass_AFGGamePhaseManager_Statics; \
public: \
	DECLARE_CLASS(AFGGamePhaseManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGGamePhaseManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGGamePhaseManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_INCLASS \
private: \
	static void StaticRegisterNativesAFGGamePhaseManager(); \
	friend struct Z_Construct_UClass_AFGGamePhaseManager_Statics; \
public: \
	DECLARE_CLASS(AFGGamePhaseManager, AFGSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGGamePhaseManager) \
	virtual UObject* _getUObject() const override { return const_cast<AFGGamePhaseManager*>(this); }


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGGamePhaseManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGGamePhaseManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGamePhaseManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGamePhaseManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGamePhaseManager(AFGGamePhaseManager&&); \
	NO_API AFGGamePhaseManager(const AFGGamePhaseManager&); \
public:


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGGamePhaseManager(AFGGamePhaseManager&&); \
	NO_API AFGGamePhaseManager(const AFGGamePhaseManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGGamePhaseManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGGamePhaseManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGGamePhaseManager)


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mGamePhase() { return STRUCT_OFFSET(AFGGamePhaseManager, mGamePhase); } \
	FORCEINLINE static uint32 __PPO__mGamePhaseTierInfo() { return STRUCT_OFFSET(AFGGamePhaseManager, mGamePhaseTierInfo); } \
	FORCEINLINE static uint32 __PPO__mGamePhaseCosts() { return STRUCT_OFFSET(AFGGamePhaseManager, mGamePhaseCosts); }


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_89_PROLOG
#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_INCLASS \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGGamePhaseManager_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGGamePhaseManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGGamePhaseManager_h


#define FOREACH_ENUM_EGAMEPHASE(op) \
	op(EGP_EarlyGame) \
	op(EGP_MidGame) \
	op(EGP_LateGame) \
	op(EGP_EndGame) \
	op(EGP_FoodCourt) \
	op(EGP_Victory) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
