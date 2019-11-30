// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGConsumableDescriptor;
class UStaticMesh;
class USkeletalMesh;
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGConsumableDescriptor_generated_h
#error "FGConsumableDescriptor.generated.h already included, missing '#pragma once' in FGConsumableDescriptor.h"
#endif
#define FACTORYGAME_FGConsumableDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTPOverrideMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGConsumableDescriptor::GetTPOverrideMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFPOverrideMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UFGConsumableDescriptor::GetFPOverrideMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTPOverrideMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGConsumableDescriptor::GetTPOverrideMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFPOverrideMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USkeletalMesh**)Z_Param__Result=UFGConsumableDescriptor::GetFPOverrideMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_EVENT_PARMS \
	struct FGConsumableDescriptor_eventConsumedBy_Parms \
	{ \
		AFGCharacterPlayer* player; \
	};


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGConsumableDescriptor(); \
	friend struct Z_Construct_UClass_UFGConsumableDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGConsumableDescriptor, UFGEquipmentDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConsumableDescriptor)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGConsumableDescriptor(); \
	friend struct Z_Construct_UClass_UFGConsumableDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGConsumableDescriptor, UFGEquipmentDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGConsumableDescriptor)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGConsumableDescriptor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGConsumableDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConsumableDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConsumableDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConsumableDescriptor(UFGConsumableDescriptor&&); \
	NO_API UFGConsumableDescriptor(const UFGConsumableDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGConsumableDescriptor(UFGConsumableDescriptor&&); \
	NO_API UFGConsumableDescriptor(const UFGConsumableDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGConsumableDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGConsumableDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGConsumableDescriptor)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCustomHandsMeshScale() { return STRUCT_OFFSET(UFGConsumableDescriptor, mCustomHandsMeshScale); } \
	FORCEINLINE static uint32 __PPO__mCustomRotation() { return STRUCT_OFFSET(UFGConsumableDescriptor, mCustomRotation); } \
	FORCEINLINE static uint32 __PPO__mCustomLocation() { return STRUCT_OFFSET(UFGConsumableDescriptor, mCustomLocation); } \
	FORCEINLINE static uint32 __PPO__mFPOverrideMesh() { return STRUCT_OFFSET(UFGConsumableDescriptor, mFPOverrideMesh); } \
	FORCEINLINE static uint32 __PPO__mTPOverrideMesh() { return STRUCT_OFFSET(UFGConsumableDescriptor, mTPOverrideMesh); }


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Resources_FGConsumableDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
