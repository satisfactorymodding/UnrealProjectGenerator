// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AFGCharacterBase;
struct FRotator;
#ifdef FACTORYGAME_FGCharacterAnimInstance_generated_h
#error "FGCharacterAnimInstance.generated.h already included, missing '#pragma once' in FGCharacterAnimInstance.h"
#endif
#define FACTORYGAME_FGCharacterAnimInstance_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_RPC_WRAPPERS \
	virtual void OnRadialDamageTaken_Implementation(); \
	virtual void OnAnyDamageTaken_Implementation(); \
	virtual void OnPointDamageTaken_Implementation(FVector shootDIrection); \
 \
	DECLARE_FUNCTION(execGetAccelerationVectorLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationVectorLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVelocityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterBase**)Z_Param__Result=P_THIS->GetCachedCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRunLeanRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRunLeanRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredWalkRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredWalkRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRadialDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRadialDamageTaken_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnyDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnyDamageTaken_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPointDamageTaken) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_shootDIrection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPointDamageTaken_Implementation(Z_Param_shootDIrection); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRadialDamageTaken_Implementation(); \
	virtual void OnAnyDamageTaken_Implementation(); \
	virtual void OnPointDamageTaken_Implementation(FVector shootDIrection); \
 \
	DECLARE_FUNCTION(execGetAccelerationVectorLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAccelerationVectorLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocityDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVelocityDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVelocity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetVelocity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCachedCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterBase**)Z_Param__Result=P_THIS->GetCachedCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredRunLeanRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRunLeanRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredWalkRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredWalkRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRadialDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRadialDamageTaken_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAnyDamageTaken) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAnyDamageTaken_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPointDamageTaken) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_shootDIrection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPointDamageTaken_Implementation(Z_Param_shootDIrection); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_EVENT_PARMS \
	struct FGCharacterAnimInstance_eventOnPointDamageTaken_Parms \
	{ \
		FVector shootDIrection; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UFGCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UFGCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCharacterAnimInstance)


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UFGCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UFGCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCharacterAnimInstance)


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCharacterAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCharacterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCharacterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCharacterAnimInstance(UFGCharacterAnimInstance&&); \
	NO_API UFGCharacterAnimInstance(const UFGCharacterAnimInstance&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCharacterAnimInstance(UFGCharacterAnimInstance&&); \
	NO_API UFGCharacterAnimInstance(const UFGCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCharacterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCharacterAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGCharacterAnimInstance)


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGCharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
