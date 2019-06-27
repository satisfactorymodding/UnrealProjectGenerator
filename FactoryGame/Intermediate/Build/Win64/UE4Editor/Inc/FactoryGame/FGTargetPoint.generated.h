// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGWheeledVehicle;
#ifdef FACTORYGAME_FGTargetPoint_generated_h
#error "FGTargetPoint.generated.h already included, missing '#pragma once' in FGTargetPoint.h"
#endif
#define FACTORYGAME_FGTargetPoint_generated_h

#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Visibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Visibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetSpeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetSpeed(Z_Param_newSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargetSpeedStill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargetSpeedStill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTargetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWaitTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newWaitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWaitTime(Z_Param_newWaitTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseWaitTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_addedWaitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseWaitTime(Z_Param_addedWaitTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaitTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWaitTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_inVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_inVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGWheeledVehicle**)Z_Param__Result=P_THIS->GetOwningVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningVehicle) \
	{ \
		P_GET_OBJECT(AFGWheeledVehicle,Z_Param_newVehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningVehicle(Z_Param_newVehicle); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Visibility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_Visibility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTargetSpeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_newSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTargetSpeed(Z_Param_newSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTargetSpeedStill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTargetSpeedStill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTargetSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetTargetSpeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWaitTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_newWaitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWaitTime(Z_Param_newWaitTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIncreaseWaitTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_addedWaitTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->IncreaseWaitTime(Z_Param_addedWaitTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWaitTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetWaitTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVisibility) \
	{ \
		P_GET_UBOOL(Z_Param_inVisible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVisibility(Z_Param_inVisible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwningVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGWheeledVehicle**)Z_Param__Result=P_THIS->GetOwningVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwningVehicle) \
	{ \
		P_GET_OBJECT(AFGWheeledVehicle,Z_Param_newVehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwningVehicle(Z_Param_newVehicle); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGTargetPoint(); \
	friend struct Z_Construct_UClass_AFGTargetPoint_Statics; \
public: \
	DECLARE_CLASS(AFGTargetPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGTargetPoint) \
	virtual UObject* _getUObject() const override { return const_cast<AFGTargetPoint*>(this); }


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFGTargetPoint(); \
	friend struct Z_Construct_UClass_AFGTargetPoint_Statics; \
public: \
	DECLARE_CLASS(AFGTargetPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGTargetPoint) \
	virtual UObject* _getUObject() const override { return const_cast<AFGTargetPoint*>(this); }


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGTargetPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGTargetPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGTargetPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGTargetPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGTargetPoint(AFGTargetPoint&&); \
	NO_API AFGTargetPoint(const AFGTargetPoint&); \
public:


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGTargetPoint(AFGTargetPoint&&); \
	NO_API AFGTargetPoint(const AFGTargetPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGTargetPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGTargetPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGTargetPoint)


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mWaitTime() { return STRUCT_OFFSET(AFGTargetPoint, mWaitTime); } \
	FORCEINLINE static uint32 __PPO__mDefaultWaitTime() { return STRUCT_OFFSET(AFGTargetPoint, mDefaultWaitTime); }


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTargetPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGTargetPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
