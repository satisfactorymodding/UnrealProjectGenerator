// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef FACTORYGAME_FGCreatureController_generated_h
#error "FGCreatureController.generated.h already included, missing '#pragma once' in FGCreatureController.h"
#endif
#define FACTORYGAME_FGCreatureController_generated_h

#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_RPC_WRAPPERS \
	virtual void StopPanic_Implementation(); \
	virtual void StartPanic_Implementation(); \
 \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetPerceptionUpdated(Z_Param_inActor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPanic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopPanic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPanic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartPanic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_enabled); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopPanic_Implementation(); \
 \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inActor); \
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTargetPerceptionUpdated(Z_Param_inActor,Z_Param_Stimulus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopPanic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopPanic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartPanic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartPanic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEnabled(Z_Param_enabled); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCreatureController(); \
	friend struct Z_Construct_UClass_AFGCreatureController_Statics; \
public: \
	DECLARE_CLASS(AFGCreatureController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreatureController)


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGCreatureController(); \
	friend struct Z_Construct_UClass_AFGCreatureController_Statics; \
public: \
	DECLARE_CLASS(AFGCreatureController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreatureController)


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCreatureController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCreatureController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreatureController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreatureController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreatureController(AFGCreatureController&&); \
	NO_API AFGCreatureController(const AFGCreatureController&); \
public:


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreatureController(AFGCreatureController&&); \
	NO_API AFGCreatureController(const AFGCreatureController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreatureController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreatureController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCreatureController)


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_AI_FGCreatureController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
