// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
class AFGFoliageRemoval;
struct FTransform;
class UStaticMesh;
struct FVector;
class UFGFoliageResourceUserData;
#ifdef FACTORYGAME_FGFoliagePickup_generated_h
#error "FGFoliagePickup.generated.h already included, missing '#pragma once' in FGFoliagePickup.h"
#endif
#define FACTORYGAME_FGFoliagePickup_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_RPC_WRAPPERS \
	virtual bool Server_PickupWithTransform_Validate(AFGCharacterPlayer* , AFGFoliageRemoval* , FTransform ); \
	virtual void Server_PickupWithTransform_Implementation(AFGCharacterPlayer* byCharacter, AFGFoliageRemoval* foliageRemoval, FTransform withTransform); \
	virtual void BroadcastPickup_Implementation(UStaticMesh* fromStaticMesh, FVector atLocation); \
 \
	DECLARE_FUNCTION(execServer_PickupWithTransform) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_OBJECT(AFGFoliageRemoval,Z_Param_foliageRemoval); \
		P_GET_STRUCT(FTransform,Z_Param_withTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PickupWithTransform_Validate(Z_Param_byCharacter,Z_Param_foliageRemoval,Z_Param_withTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PickupWithTransform_Validate")); \
			return; \
		} \
		P_THIS->Server_PickupWithTransform_Implementation(Z_Param_byCharacter,Z_Param_foliageRemoval,Z_Param_withTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcastPickup) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_fromStaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_atLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BroadcastPickup_Implementation(Z_Param_fromStaticMesh,Z_Param_atLocation); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_PickupWithTransform_Validate(AFGCharacterPlayer* , AFGFoliageRemoval* , FTransform ); \
	virtual void Server_PickupWithTransform_Implementation(AFGCharacterPlayer* byCharacter, AFGFoliageRemoval* foliageRemoval, FTransform withTransform); \
	virtual void BroadcastPickup_Implementation(UStaticMesh* fromStaticMesh, FVector atLocation); \
 \
	DECLARE_FUNCTION(execServer_PickupWithTransform) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_GET_OBJECT(AFGFoliageRemoval,Z_Param_foliageRemoval); \
		P_GET_STRUCT(FTransform,Z_Param_withTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PickupWithTransform_Validate(Z_Param_byCharacter,Z_Param_foliageRemoval,Z_Param_withTransform)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PickupWithTransform_Validate")); \
			return; \
		} \
		P_THIS->Server_PickupWithTransform_Implementation(Z_Param_byCharacter,Z_Param_foliageRemoval,Z_Param_withTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBroadcastPickup) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_fromStaticMesh); \
		P_GET_STRUCT(FVector,Z_Param_atLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BroadcastPickup_Implementation(Z_Param_fromStaticMesh,Z_Param_atLocation); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_EVENT_PARMS \
	struct FGFoliagePickup_eventBroadcastPickup_Parms \
	{ \
		UStaticMesh* fromStaticMesh; \
		FVector atLocation; \
	}; \
	struct FGFoliagePickup_eventPlayPickupEffect_Parms \
	{ \
		UFGFoliageResourceUserData* foliageUserData; \
		FVector atLocation; \
	}; \
	struct FGFoliagePickup_eventServer_PickupWithTransform_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
		AFGFoliageRemoval* foliageRemoval; \
		FTransform withTransform; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGFoliagePickup(); \
	friend struct Z_Construct_UClass_AFGFoliagePickup_Statics; \
public: \
	DECLARE_CLASS(AFGFoliagePickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFoliagePickup) \
	virtual UObject* _getUObject() const override { return const_cast<AFGFoliagePickup*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGFoliagePickup(); \
	friend struct Z_Construct_UClass_AFGFoliagePickup_Statics; \
public: \
	DECLARE_CLASS(AFGFoliagePickup, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFoliagePickup) \
	virtual UObject* _getUObject() const override { return const_cast<AFGFoliagePickup*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGFoliagePickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGFoliagePickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFoliagePickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFoliagePickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFoliagePickup(AFGFoliagePickup&&); \
	NO_API AFGFoliagePickup(const AFGFoliagePickup&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFoliagePickup(AFGFoliagePickup&&); \
	NO_API AFGFoliagePickup(const AFGFoliagePickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFoliagePickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFoliagePickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGFoliagePickup)


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPickupMesh() { return STRUCT_OFFSET(AFGFoliagePickup, mPickupMesh); }


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGFoliagePickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGFoliagePickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
