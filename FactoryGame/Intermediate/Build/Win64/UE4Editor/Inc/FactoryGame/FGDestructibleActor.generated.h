// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FACTORYGAME_FGDestructibleActor_generated_h
#error "FGDestructibleActor.generated.h already included, missing '#pragma once' in FGDestructibleActor.h"
#endif
#define FACTORYGAME_FGDestructibleActor_generated_h

#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_RPC_WRAPPERS \
	virtual void Multicast_OnDestructibleFractured_Implementation(FVector const& hitPoint, FVector const& hitDirection); \
 \
	DECLARE_FUNCTION(execMulticast_OnDestructibleFractured) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_hitPoint); \
		P_GET_STRUCT(FVector,Z_Param_hitDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_OnDestructibleFractured_Implementation(Z_Param_hitPoint,Z_Param_hitDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDestructibleFractured) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_hitPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_hitDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDestructibleFractured(Z_Param_Out_hitPoint,Z_Param_Out_hitDirection); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnDestructibleFractured_Implementation(FVector const& hitPoint, FVector const& hitDirection); \
 \
	DECLARE_FUNCTION(execMulticast_OnDestructibleFractured) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_hitPoint); \
		P_GET_STRUCT(FVector,Z_Param_hitDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Multicast_OnDestructibleFractured_Implementation(Z_Param_hitPoint,Z_Param_hitDirection); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnDestructibleFractured) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_hitPoint); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_hitDirection); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnDestructibleFractured(Z_Param_Out_hitPoint,Z_Param_Out_hitDirection); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_EVENT_PARMS \
	struct FGDestructibleActor_eventMulticast_OnDestructibleFractured_Parms \
	{ \
		FVector hitPoint; \
		FVector hitDirection; \
	};


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGDestructibleActor(); \
	friend struct Z_Construct_UClass_AFGDestructibleActor_Statics; \
public: \
	DECLARE_CLASS(AFGDestructibleActor, ADestructibleActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDestructibleActor) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDestructibleActor*>(this); }


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGDestructibleActor(); \
	friend struct Z_Construct_UClass_AFGDestructibleActor_Statics; \
public: \
	DECLARE_CLASS(AFGDestructibleActor, ADestructibleActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGDestructibleActor) \
	virtual UObject* _getUObject() const override { return const_cast<AFGDestructibleActor*>(this); }


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGDestructibleActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGDestructibleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDestructibleActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDestructibleActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDestructibleActor(AFGDestructibleActor&&); \
	NO_API AFGDestructibleActor(const AFGDestructibleActor&); \
public:


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGDestructibleActor(AFGDestructibleActor&&); \
	NO_API AFGDestructibleActor(const AFGDestructibleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGDestructibleActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGDestructibleActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGDestructibleActor)


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mStaticMeshProxy() { return STRUCT_OFFSET(AFGDestructibleActor, mStaticMeshProxy); } \
	FORCEINLINE static uint32 __PPO__mHasBeenFractured() { return STRUCT_OFFSET(AFGDestructibleActor, mHasBeenFractured); }


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_17_PROLOG \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGDestructibleActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGDestructibleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
