// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEquipmentSlot : uint8;
#ifdef FACTORYGAME_FGInventoryComponentEquipment_generated_h
#error "FGInventoryComponentEquipment.generated.h already included, missing '#pragma once' in FGInventoryComponentEquipment.h"
#endif
#define FACTORYGAME_FGInventoryComponentEquipment_generated_h

#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetActiveIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentSlotEnum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EEquipmentSlot*)Z_Param__Result=P_THIS->GetEquipmentSlotEnum(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetActiveIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentSlotEnum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EEquipmentSlot*)Z_Param__Result=P_THIS->GetEquipmentSlotEnum(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInventoryComponentEquipment(); \
	friend struct Z_Construct_UClass_UFGInventoryComponentEquipment_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryComponentEquipment, UFGInventoryComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryComponentEquipment)


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFGInventoryComponentEquipment(); \
	friend struct Z_Construct_UClass_UFGInventoryComponentEquipment_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryComponentEquipment, UFGInventoryComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryComponentEquipment)


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInventoryComponentEquipment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInventoryComponentEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryComponentEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryComponentEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryComponentEquipment(UFGInventoryComponentEquipment&&); \
	NO_API UFGInventoryComponentEquipment(const UFGInventoryComponentEquipment&); \
public:


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryComponentEquipment(UFGInventoryComponentEquipment&&); \
	NO_API UFGInventoryComponentEquipment(const UFGInventoryComponentEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryComponentEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryComponentEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGInventoryComponentEquipment)


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOverrideEquipmentInSlot() { return STRUCT_OFFSET(UFGInventoryComponentEquipment, mOverrideEquipmentInSlot); } \
	FORCEINLINE static uint32 __PPO__mEquipmentInSlot() { return STRUCT_OFFSET(UFGInventoryComponentEquipment, mEquipmentInSlot); } \
	FORCEINLINE static uint32 __PPO__mEquipmentInventorySlot() { return STRUCT_OFFSET(UFGInventoryComponentEquipment, mEquipmentInventorySlot); } \
	FORCEINLINE static uint32 __PPO__mActiveEquipmentIndex() { return STRUCT_OFFSET(UFGInventoryComponentEquipment, mActiveEquipmentIndex); }


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_9_PROLOG
#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGInventoryComponentEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
