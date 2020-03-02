// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGJumpingStilts_generated_h
#error "FGJumpingStilts.generated.h already included, missing '#pragma once' in FGJumpingStilts.h"
#endif
#define FACTORYGAME_FGJumpingStilts_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNormalizedFallSpeedUntilDamaged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedFallSpeedUntilDamaged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFallSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentFallSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxFallSpeedBeforeDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxFallSpeedBeforeDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedZJumpSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_defaultJumpZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAdjustedZJumpSpeed(Z_Param_defaultJumpZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedMaxSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_defaultMaxSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAdjustedMaxSpeed(Z_Param_defaultMaxSpeed); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNormalizedFallSpeedUntilDamaged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetNormalizedFallSpeedUntilDamaged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFallSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentFallSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxFallSpeedBeforeDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxFallSpeedBeforeDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedZJumpSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_defaultJumpZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAdjustedZJumpSpeed(Z_Param_defaultJumpZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAdjustedMaxSpeed) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_defaultMaxSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAdjustedMaxSpeed(Z_Param_defaultMaxSpeed); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGJumpingStilts(); \
	friend struct Z_Construct_UClass_AFGJumpingStilts_Statics; \
public: \
	DECLARE_CLASS(AFGJumpingStilts, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJumpingStilts)


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGJumpingStilts(); \
	friend struct Z_Construct_UClass_AFGJumpingStilts_Statics; \
public: \
	DECLARE_CLASS(AFGJumpingStilts, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJumpingStilts)


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGJumpingStilts(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGJumpingStilts) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJumpingStilts); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJumpingStilts); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJumpingStilts(AFGJumpingStilts&&); \
	NO_API AFGJumpingStilts(const AFGJumpingStilts&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJumpingStilts(AFGJumpingStilts&&); \
	NO_API AFGJumpingStilts(const AFGJumpingStilts&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJumpingStilts); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJumpingStilts); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGJumpingStilts)


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFallDamageCurveOverride() { return STRUCT_OFFSET(AFGJumpingStilts, mFallDamageCurveOverride); } \
	FORCEINLINE static uint32 __PPO__mSprintSpeedFactor() { return STRUCT_OFFSET(AFGJumpingStilts, mSprintSpeedFactor); } \
	FORCEINLINE static uint32 __PPO__mJumpSpeedFactor() { return STRUCT_OFFSET(AFGJumpingStilts, mJumpSpeedFactor); }


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGJumpingStilts>();

#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGJumpingStiltsAttachment(); \
	friend struct Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGJumpingStiltsAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJumpingStiltsAttachment)


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_INCLASS \
private: \
	static void StaticRegisterNativesAFGJumpingStiltsAttachment(); \
	friend struct Z_Construct_UClass_AFGJumpingStiltsAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGJumpingStiltsAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJumpingStiltsAttachment)


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGJumpingStiltsAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGJumpingStiltsAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJumpingStiltsAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJumpingStiltsAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJumpingStiltsAttachment(AFGJumpingStiltsAttachment&&); \
	NO_API AFGJumpingStiltsAttachment(const AFGJumpingStiltsAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGJumpingStiltsAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJumpingStiltsAttachment(AFGJumpingStiltsAttachment&&); \
	NO_API AFGJumpingStiltsAttachment(const AFGJumpingStiltsAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJumpingStiltsAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJumpingStiltsAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGJumpingStiltsAttachment)


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_70_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGJumpingStiltsAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGJumpingStilts_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
