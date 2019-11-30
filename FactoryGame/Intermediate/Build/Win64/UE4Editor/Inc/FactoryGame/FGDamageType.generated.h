// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGDamageType_generated_h
#error "FGDamageType.generated.h already included, missing '#pragma once' in FGDamageType.h"
#endif
#define FACTORYGAME_FGDamageType_generated_h

#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGDamageType(); \
	friend struct Z_Construct_UClass_UFGDamageType_Statics; \
public: \
	DECLARE_CLASS(UFGDamageType, UDamageType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDamageType)


#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUFGDamageType(); \
	friend struct Z_Construct_UClass_UFGDamageType_Statics; \
public: \
	DECLARE_CLASS(UFGDamageType, UDamageType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGDamageType)


#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGDamageType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDamageType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDamageType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDamageType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDamageType(UFGDamageType&&); \
	NO_API UFGDamageType(const UFGDamageType&); \
public:


#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGDamageType(UFGDamageType&&); \
	NO_API UFGDamageType(const UFGDamageType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGDamageType); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGDamageType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGDamageType)


#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_23_PROLOG
#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_INCLASS \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_DamageTypes_FGDamageType_h


#define FOREACH_ENUM_EPLAYONDAMAGEEVENT(op) \
	op(PODE_OnTakeAnyDamage) \
	op(PODE_OnTakePointDamage) \
	op(PODE_OnTakeRadialDamage) 
#define FOREACH_ENUM_EOVERRIDESETTING(op) \
	op(OS_Additive) \
	op(OS_Override) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
