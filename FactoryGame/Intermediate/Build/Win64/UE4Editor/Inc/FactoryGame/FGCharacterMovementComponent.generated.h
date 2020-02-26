// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerPipeHyperData;
struct FVector;
struct FRotator;
class AFGBuildablePipeHyperPart;
class UFGLadderComponent;
#ifdef FACTORYGAME_FGCharacterMovementComponent_generated_h
#error "FGCharacterMovementComponent.generated.h already included, missing '#pragma once' in FGCharacterMovementComponent.h"
#endif
#define FACTORYGAME_FGCharacterMovementComponent_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerPipeHyperData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FPlayerPipeHyperData>();

#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_RPC_WRAPPERS \
	virtual bool ServerSetHookLocation_Validate(FVector const& ); \
	virtual void ServerSetHookLocation_Implementation(FVector const& hookLocation); \
 \
	DECLARE_FUNCTION(execGetPipeHyperDataRef) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlayerPipeHyperData*)Z_Param__Result=P_THIS->GetPipeHyperDataRef(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeMinSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPipeMinSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPipeVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeCharacterTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_cameraForwardAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetPipeCharacterTransform(Z_Param_cameraForwardAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeTravelDirectionWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPipeTravelDirectionWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterPipeHyper) \
	{ \
		P_GET_OBJECT(AFGBuildablePipeHyperPart,Z_Param_pipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnterPipeHyper(Z_Param_pipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInHyperPipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInHyperPipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOnLadder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGLadderComponent**)Z_Param__Result=P_THIS->GetOnLadder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBaseVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWantsToSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWantsToSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetHookLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_hookLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetHookLocation_Validate(Z_Param_hookLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetHookLocation_Validate")); \
			return; \
		} \
		P_THIS->ServerSetHookLocation_Implementation(Z_Param_hookLocation); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetHookLocation_Validate(FVector const& ); \
	virtual void ServerSetHookLocation_Implementation(FVector const& hookLocation); \
 \
	DECLARE_FUNCTION(execGetPipeHyperDataRef) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FPlayerPipeHyperData*)Z_Param__Result=P_THIS->GetPipeHyperDataRef(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeMinSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPipeMinSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPipeVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeCharacterTransform) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_cameraForwardAxis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetPipeCharacterTransform(Z_Param_cameraForwardAxis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPipeTravelDirectionWorld) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPipeTravelDirectionWorld(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterPipeHyper) \
	{ \
		P_GET_OBJECT(AFGBuildablePipeHyperPart,Z_Param_pipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->EnterPipeHyper(Z_Param_pipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInHyperPipe) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInHyperPipe(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOnLadder) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGLadderComponent**)Z_Param__Result=P_THIS->GetOnLadder(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetBaseVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWantsToSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetWantsToSprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetHookLocation) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_hookLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetHookLocation_Validate(Z_Param_hookLocation)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetHookLocation_Validate")); \
			return; \
		} \
		P_THIS->ServerSetHookLocation_Implementation(Z_Param_hookLocation); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_EVENT_PARMS \
	struct FGCharacterMovementComponent_eventServerSetHookLocation_Parms \
	{ \
		FVector hookLocation; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UFGCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCharacterMovementComponent)


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_INCLASS \
private: \
	static void StaticRegisterNativesUFGCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UFGCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UFGCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCharacterMovementComponent)


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCharacterMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCharacterMovementComponent(UFGCharacterMovementComponent&&); \
	NO_API UFGCharacterMovementComponent(const UFGCharacterMovementComponent&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCharacterMovementComponent(UFGCharacterMovementComponent&&); \
	NO_API UFGCharacterMovementComponent(const UFGCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCharacterMovementComponent)


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCachedJetPack() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedJetPack); } \
	FORCEINLINE static uint32 __PPO__mCachedParachute() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedParachute); } \
	FORCEINLINE static uint32 __PPO__mCachedHookshot() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedHookshot); } \
	FORCEINLINE static uint32 __PPO__mCachedJumpingStilts() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mCachedJumpingStilts); } \
	FORCEINLINE static uint32 __PPO__mOnLadder() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mOnLadder); } \
	FORCEINLINE static uint32 __PPO__mPipeData() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mPipeData); } \
	FORCEINLINE static uint32 __PPO__mSlideCurve() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mSlideCurve); } \
	FORCEINLINE static uint32 __PPO__mSlopeCurve() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mSlopeCurve); } \
	FORCEINLINE static uint32 __PPO__mMaxSlideAngle() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mMaxSlideAngle); } \
	FORCEINLINE static uint32 __PPO__mBaseVelocity() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mBaseVelocity); } \
	FORCEINLINE static uint32 __PPO__mBoostJumpZMultiplier() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpZMultiplier); } \
	FORCEINLINE static uint32 __PPO__mBoostJumpVelocityMultiplier() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpVelocityMultiplier); } \
	FORCEINLINE static uint32 __PPO__mBoostJumpTimeWindow() { return STRUCT_OFFSET(UFGCharacterMovementComponent, mBoostJumpTimeWindow); }


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_117_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGCharacterMovementComponent_h


#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(ECustomMovementMode::CMM_None) \
	op(ECustomMovementMode::CMM_Ladder) \
	op(ECustomMovementMode::CMM_PipeHyper) 

enum class ECustomMovementMode : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<ECustomMovementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
