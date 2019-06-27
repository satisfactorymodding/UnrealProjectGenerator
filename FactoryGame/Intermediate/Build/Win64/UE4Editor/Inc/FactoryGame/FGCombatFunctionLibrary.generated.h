// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UShapeComponent;
struct FVector;
class UFGDamageType;
class APawn;
class IFGAggroTargetInterface;
class UFGAttack;
class AActor;
class AFGCharacterBase;
#ifdef FACTORYGAME_FGCombatFunctionLibrary_generated_h
#error "FGCombatFunctionLibrary.generated.h already included, missing '#pragma once' in FGCombatFunctionLibrary.h"
#endif
#define FACTORYGAME_FGCombatFunctionLibrary_generated_h

#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoRadialDamageWithinCollision) \
	{ \
		P_GET_OBJECT(AController,Z_Param_controller); \
		P_GET_OBJECT(UShapeComponent,Z_Param_collisionShape); \
		P_GET_STRUCT(FVector,Z_Param_centerLocation); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGCombatFunctionLibrary::DoRadialDamageWithinCollision(Z_Param_controller,Z_Param_collisionShape,Z_Param_centerLocation,Z_Param_damageType,Z_Param_damage,Z_Param_radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithinRange) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_attacker); \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_victim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGCombatFunctionLibrary::IsWithinRange(Z_Param_attacker,Z_Param_victim,Z_Param_range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithinAttackRange) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_attacker); \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_victim); \
		P_GET_OBJECT(UClass,Z_Param_attackClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGCombatFunctionLibrary::IsWithinAttackRange(Z_Param_attacker,Z_Param_victim,Z_Param_attackClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetCharacterFromDamageCauser) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterBase**)Z_Param__Result=UFGCombatFunctionLibrary::TryGetCharacterFromDamageCauser(Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoRadialDamageWithinCollision) \
	{ \
		P_GET_OBJECT(AController,Z_Param_controller); \
		P_GET_OBJECT(UShapeComponent,Z_Param_collisionShape); \
		P_GET_STRUCT(FVector,Z_Param_centerLocation); \
		P_GET_OBJECT(UClass,Z_Param_damageType); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_damage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_radius); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGCombatFunctionLibrary::DoRadialDamageWithinCollision(Z_Param_controller,Z_Param_collisionShape,Z_Param_centerLocation,Z_Param_damageType,Z_Param_damage,Z_Param_radius); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithinRange) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_attacker); \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_victim); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_range); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGCombatFunctionLibrary::IsWithinRange(Z_Param_attacker,Z_Param_victim,Z_Param_range); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWithinAttackRange) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_attacker); \
		P_GET_TINTERFACE(IFGAggroTargetInterface,Z_Param_victim); \
		P_GET_OBJECT(UClass,Z_Param_attackClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGCombatFunctionLibrary::IsWithinAttackRange(Z_Param_attacker,Z_Param_victim,Z_Param_attackClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryGetCharacterFromDamageCauser) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_damageCauser); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCharacterBase**)Z_Param__Result=UFGCombatFunctionLibrary::TryGetCharacterFromDamageCauser(Z_Param_damageCauser); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGCombatFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGCombatFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGCombatFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCombatFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUFGCombatFunctionLibrary(); \
	friend struct Z_Construct_UClass_UFGCombatFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGCombatFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGCombatFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCombatFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCombatFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCombatFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCombatFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCombatFunctionLibrary(UFGCombatFunctionLibrary&&); \
	NO_API UFGCombatFunctionLibrary(const UFGCombatFunctionLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGCombatFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGCombatFunctionLibrary(UFGCombatFunctionLibrary&&); \
	NO_API UFGCombatFunctionLibrary(const UFGCombatFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGCombatFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGCombatFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGCombatFunctionLibrary)


#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_6_PROLOG
#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_INCLASS \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCombatFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
