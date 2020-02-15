// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FACTORYGAME_FGWaterVolume_generated_h
#error "FGWaterVolume.generated.h already included, missing '#pragma once' in FGWaterVolume.h"
#endif
#define FACTORYGAME_FGWaterVolume_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentExited) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentExited(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentEntered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentEntered(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentExited) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentExited(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPrimitiveComponentEntered) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_other); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherBodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPrimitiveComponentEntered(Z_Param_overlappedComp,Z_Param_other,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_fromSweep,Z_Param_Out_sweepResult); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGWaterVolume(); \
	friend struct Z_Construct_UClass_AFGWaterVolume_Statics; \
public: \
	DECLARE_CLASS(AFGWaterVolume, APhysicsVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWaterVolume) \
	virtual UObject* _getUObject() const override { return const_cast<AFGWaterVolume*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFGWaterVolume(); \
	friend struct Z_Construct_UClass_AFGWaterVolume_Statics; \
public: \
	DECLARE_CLASS(AFGWaterVolume, APhysicsVolume, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGWaterVolume) \
	virtual UObject* _getUObject() const override { return const_cast<AFGWaterVolume*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGWaterVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGWaterVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWaterVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWaterVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWaterVolume(AFGWaterVolume&&); \
	NO_API AFGWaterVolume(const AFGWaterVolume&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGWaterVolume(AFGWaterVolume&&); \
	NO_API AFGWaterVolume(const AFGWaterVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGWaterVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGWaterVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGWaterVolume)


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mAreaClass() { return STRUCT_OFFSET(AFGWaterVolume, mAreaClass); } \
	FORCEINLINE static uint32 __PPO__mWaterAudio() { return STRUCT_OFFSET(AFGWaterVolume, mWaterAudio); } \
	FORCEINLINE static uint32 __PPO__mCanPlaceExtractor() { return STRUCT_OFFSET(AFGWaterVolume, mCanPlaceExtractor); } \
	FORCEINLINE static uint32 __PPO__mPostProcessSettings() { return STRUCT_OFFSET(AFGWaterVolume, mPostProcessSettings); } \
	FORCEINLINE static uint32 __PPO__mResourceClass() { return STRUCT_OFFSET(AFGWaterVolume, mResourceClass); }


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_20_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGWaterVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGWaterVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
