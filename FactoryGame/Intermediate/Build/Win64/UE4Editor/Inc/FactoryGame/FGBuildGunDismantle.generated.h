// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FInventoryStack;
#ifdef FACTORYGAME_FGBuildGunDismantle_generated_h
#error "FGBuildGunDismantle.generated.h already included, missing '#pragma once' in FGBuildGunDismantle.h"
#endif
#define FACTORYGAME_FGBuildGunDismantle_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_RPC_WRAPPERS \
	virtual bool Server_DismantleActor_Validate(AActor* ); \
	virtual void Server_DismantleActor_Implementation(AActor* actorToDismantle); \
 \
	DECLARE_FUNCTION(execServer_DismantleActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actorToDismantle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DismantleActor_Validate(Z_Param_actorToDismantle)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DismantleActor_Validate")); \
			return; \
		} \
		P_THIS->Server_DismantleActor_Implementation(Z_Param_actorToDismantle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleRefund) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInventoryStack>*)Z_Param__Result=P_THIS->GetDismantleRefund(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDismantle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetSelectedActor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_DismantleActor_Validate(AActor* ); \
	virtual void Server_DismantleActor_Implementation(AActor* actorToDismantle); \
 \
	DECLARE_FUNCTION(execServer_DismantleActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actorToDismantle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_DismantleActor_Validate(Z_Param_actorToDismantle)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_DismantleActor_Validate")); \
			return; \
		} \
		P_THIS->Server_DismantleActor_Implementation(Z_Param_actorToDismantle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDismantleRefund) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FInventoryStack>*)Z_Param__Result=P_THIS->GetDismantleRefund(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanDismantle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDismantle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSelectedActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetSelectedActor(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_EVENT_PARMS \
	struct FGBuildGunStateDismantle_eventServer_DismantleActor_Parms \
	{ \
		AActor* actorToDismantle; \
	};


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBuildGunStateDismantle(); \
	friend struct Z_Construct_UClass_UFGBuildGunStateDismantle_Statics; \
public: \
	DECLARE_CLASS(UFGBuildGunStateDismantle, UFGBuildGunState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildGunStateDismantle)


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGBuildGunStateDismantle(); \
	friend struct Z_Construct_UClass_UFGBuildGunStateDismantle_Statics; \
public: \
	DECLARE_CLASS(UFGBuildGunStateDismantle, UFGBuildGunState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildGunStateDismantle)


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildGunStateDismantle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildGunStateDismantle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildGunStateDismantle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildGunStateDismantle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildGunStateDismantle(UFGBuildGunStateDismantle&&); \
	NO_API UFGBuildGunStateDismantle(const UFGBuildGunStateDismantle&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildGunStateDismantle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildGunStateDismantle(UFGBuildGunStateDismantle&&); \
	NO_API UFGBuildGunStateDismantle(const UFGBuildGunStateDismantle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildGunStateDismantle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildGunStateDismantle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildGunStateDismantle)


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSelectedActor() { return STRUCT_OFFSET(UFGBuildGunStateDismantle, mSelectedActor); }


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_13_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGBuildGunDismantle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
