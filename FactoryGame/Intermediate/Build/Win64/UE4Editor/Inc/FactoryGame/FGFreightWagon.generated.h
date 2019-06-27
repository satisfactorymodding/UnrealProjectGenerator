// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGFreightWagon_generated_h
#error "FGFreightWagon.generated.h already included, missing '#pragma once' in FGFreightWagon.h"
#endif
#define FACTORYGAME_FGFreightWagon_generated_h

#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFreightInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFreightInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFreightInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetFreightInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGFreightWagon(); \
	friend struct Z_Construct_UClass_AFGFreightWagon_Statics; \
public: \
	DECLARE_CLASS(AFGFreightWagon, AFGRailroadVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFreightWagon)


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGFreightWagon(); \
	friend struct Z_Construct_UClass_AFGFreightWagon_Statics; \
public: \
	DECLARE_CLASS(AFGFreightWagon, AFGRailroadVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFreightWagon)


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGFreightWagon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGFreightWagon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFreightWagon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFreightWagon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFreightWagon(AFGFreightWagon&&); \
	NO_API AFGFreightWagon(const AFGFreightWagon&); \
public:


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFreightWagon(AFGFreightWagon&&); \
	NO_API AFGFreightWagon(const AFGFreightWagon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFreightWagon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFreightWagon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGFreightWagon)


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mVehicleMovement() { return STRUCT_OFFSET(AFGFreightWagon, mVehicleMovement); } \
	FORCEINLINE static uint32 __PPO__mStorageInventory() { return STRUCT_OFFSET(AFGFreightWagon, mStorageInventory); } \
	FORCEINLINE static uint32 __PPO__mInventorySize() { return STRUCT_OFFSET(AFGFreightWagon, mInventorySize); }


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFreightWagon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGFreightWagon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
