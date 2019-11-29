// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FACTORYGAME_FGSporeFlower_generated_h
#error "FGSporeFlower.generated.h already included, missing '#pragma once' in FGSporeFlower.h"
#endif
#define FACTORYGAME_FGSporeFlower_generated_h

#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActorShouldTriggerFlower) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActorShouldTriggerFlower(Z_Param_actor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActorShouldTriggerFlower) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ActorShouldTriggerFlower(Z_Param_actor); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGSporeFlower(); \
	friend struct Z_Construct_UClass_AFGSporeFlower_Statics; \
public: \
	DECLARE_CLASS(AFGSporeFlower, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSporeFlower) \
	virtual UObject* _getUObject() const override { return const_cast<AFGSporeFlower*>(this); }


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGSporeFlower(); \
	friend struct Z_Construct_UClass_AFGSporeFlower_Statics; \
public: \
	DECLARE_CLASS(AFGSporeFlower, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSporeFlower) \
	virtual UObject* _getUObject() const override { return const_cast<AFGSporeFlower*>(this); }


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGSporeFlower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGSporeFlower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSporeFlower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSporeFlower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSporeFlower(AFGSporeFlower&&); \
	NO_API AFGSporeFlower(const AFGSporeFlower&); \
public:


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSporeFlower(AFGSporeFlower&&); \
	NO_API AFGSporeFlower(const AFGSporeFlower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSporeFlower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSporeFlower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGSporeFlower)


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mTriggerActorClasses() { return STRUCT_OFFSET(AFGSporeFlower, mTriggerActorClasses); } \
	FORCEINLINE static uint32 __PPO__mTriggerActors() { return STRUCT_OFFSET(AFGSporeFlower, mTriggerActors); }


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_16_PROLOG
#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGSporeFlower_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGSporeFlower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGSporeFlower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
