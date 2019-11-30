// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGResourceNode;
#ifdef FACTORYGAME_FGPortableMinerDispenser_generated_h
#error "FGPortableMinerDispenser.generated.h already included, missing '#pragma once' in FGPortableMinerDispenser.h"
#endif
#define FACTORYGAME_FGPortableMinerDispenser_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_RPC_WRAPPERS \
	virtual bool Server_PrimaryFire_Validate(); \
	virtual void Server_PrimaryFire_Implementation(); \
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
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_PrimaryFire_Validate(); \
	virtual void Server_PrimaryFire_Implementation(); \
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
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_EVENT_PARMS \
	struct FGPortableMinerDispenser_eventSpawnPortableMiner_Parms \
	{ \
		AFGResourceNode* resourceNode; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGPortableMinerDispenser(); \
	friend struct Z_Construct_UClass_AFGPortableMinerDispenser_Statics; \
public: \
	DECLARE_CLASS(AFGPortableMinerDispenser, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPortableMinerDispenser)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGPortableMinerDispenser(); \
	friend struct Z_Construct_UClass_AFGPortableMinerDispenser_Statics; \
public: \
	DECLARE_CLASS(AFGPortableMinerDispenser, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGPortableMinerDispenser)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGPortableMinerDispenser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGPortableMinerDispenser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPortableMinerDispenser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPortableMinerDispenser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPortableMinerDispenser(AFGPortableMinerDispenser&&); \
	NO_API AFGPortableMinerDispenser(const AFGPortableMinerDispenser&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGPortableMinerDispenser(AFGPortableMinerDispenser&&); \
	NO_API AFGPortableMinerDispenser(const AFGPortableMinerDispenser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGPortableMinerDispenser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGPortableMinerDispenser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGPortableMinerDispenser)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGPortableMinerDispenser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
