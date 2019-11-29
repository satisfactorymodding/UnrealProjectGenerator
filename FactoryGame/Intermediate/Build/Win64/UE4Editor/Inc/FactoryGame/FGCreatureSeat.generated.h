// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCreature;
#ifdef FACTORYGAME_FGCreatureSeat_generated_h
#error "FGCreatureSeat.generated.h already included, missing '#pragma once' in FGCreatureSeat.h"
#endif
#define FACTORYGAME_FGCreatureSeat_generated_h

#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMountedCreature) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCreature**)Z_Param__Result=P_THIS->GetMountedCreature(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMountedCreature) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCreature**)Z_Param__Result=P_THIS->GetMountedCreature(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCreatureSeat(); \
	friend struct Z_Construct_UClass_AFGCreatureSeat_Statics; \
public: \
	DECLARE_CLASS(AFGCreatureSeat, AFGDriveablePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreatureSeat)


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGCreatureSeat(); \
	friend struct Z_Construct_UClass_AFGCreatureSeat_Statics; \
public: \
	DECLARE_CLASS(AFGCreatureSeat, AFGDriveablePawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCreatureSeat)


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCreatureSeat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCreatureSeat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreatureSeat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreatureSeat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreatureSeat(AFGCreatureSeat&&); \
	NO_API AFGCreatureSeat(const AFGCreatureSeat&); \
public:


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCreatureSeat() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCreatureSeat(AFGCreatureSeat&&); \
	NO_API AFGCreatureSeat(const AFGCreatureSeat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCreatureSeat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCreatureSeat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCreatureSeat)


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_15_PROLOG
#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGCreatureSeat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Creature_FGCreatureSeat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
