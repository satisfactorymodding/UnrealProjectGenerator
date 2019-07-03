// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGConsumableDescriptor;
#ifdef FACTORYGAME_FGConsumableEquipment_generated_h
#error "FGConsumableEquipment.generated.h already included, missing '#pragma once' in FGConsumableEquipment.h"
#endif
#define FACTORYGAME_FGConsumableEquipment_generated_h

#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_RPC_WRAPPERS \
	virtual void PlayConsumeEffects_Implementation(UFGConsumableDescriptor* consumable); \
	virtual bool Server_PrimaryFire_Validate(); \
	virtual void Server_PrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execPlayConsumeEffects) \
	{ \
		P_GET_OBJECT(UFGConsumableDescriptor,Z_Param_consumable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayConsumeEffects_Implementation(Z_Param_consumable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_PrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_PrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsumeable) \
	{ \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UFGConsumableDescriptor> ,Z_Param_Out_out_consumeable); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_numConsumeable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConsumeable(Z_Param_Out_out_consumeable,Z_Param_Out_out_numConsumeable); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayConsumeEffects_Implementation(UFGConsumableDescriptor* consumable); \
	virtual bool Server_PrimaryFire_Validate(); \
	virtual void Server_PrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execPlayConsumeEffects) \
	{ \
		P_GET_OBJECT(UFGConsumableDescriptor,Z_Param_consumable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayConsumeEffects_Implementation(Z_Param_consumable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_PrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_PrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsumeable) \
	{ \
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UFGConsumableDescriptor> ,Z_Param_Out_out_consumeable); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_out_numConsumeable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetConsumeable(Z_Param_Out_out_consumeable,Z_Param_Out_out_numConsumeable); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_EVENT_PARMS \
	struct FGConsumableEquipment_eventPlayConsumeEffects_Parms \
	{ \
		UFGConsumableDescriptor* consumable; \
	};


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGConsumableEquipment(); \
	friend struct Z_Construct_UClass_AFGConsumableEquipment_Statics; \
public: \
	DECLARE_CLASS(AFGConsumableEquipment, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGConsumableEquipment)


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFGConsumableEquipment(); \
	friend struct Z_Construct_UClass_AFGConsumableEquipment_Statics; \
public: \
	DECLARE_CLASS(AFGConsumableEquipment, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGConsumableEquipment)


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGConsumableEquipment(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGConsumableEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGConsumableEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGConsumableEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGConsumableEquipment(AFGConsumableEquipment&&); \
	NO_API AFGConsumableEquipment(const AFGConsumableEquipment&); \
public:


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGConsumableEquipment(AFGConsumableEquipment&&); \
	NO_API AFGConsumableEquipment(const AFGConsumableEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGConsumableEquipment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGConsumableEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGConsumableEquipment)


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_9_PROLOG \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_INCLASS \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Equipment_FGConsumableEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
