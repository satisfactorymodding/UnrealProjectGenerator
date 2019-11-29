// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGCrate_generated_h
#error "FGCrate.generated.h already included, missing '#pragma once' in FGCrate.h"
#endif
#define FACTORYGAME_FGCrate_generated_h

#define FactoryGame_Source_FactoryGame_FGCrate_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterInventoryClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterInventoryClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterInventoryClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterInventoryClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_FGCrate_h_27_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_FGCrate_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCrate(); \
	friend struct Z_Construct_UClass_AFGCrate_Statics; \
public: \
	DECLARE_CLASS(AFGCrate, AFGInteractActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCrate) \
	virtual UObject* _getUObject() const override { return const_cast<AFGCrate*>(this); }


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAFGCrate(); \
	friend struct Z_Construct_UClass_AFGCrate_Statics; \
public: \
	DECLARE_CLASS(AFGCrate, AFGInteractActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCrate) \
	virtual UObject* _getUObject() const override { return const_cast<AFGCrate*>(this); }


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCrate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCrate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCrate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCrate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCrate(AFGCrate&&); \
	NO_API AFGCrate(const AFGCrate&); \
public:


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCrate(AFGCrate&&); \
	NO_API AFGCrate(const AFGCrate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCrate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCrate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCrate)


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mInventory() { return STRUCT_OFFSET(AFGCrate, mInventory); } \
	FORCEINLINE static uint32 __PPO__mIconType() { return STRUCT_OFFSET(AFGCrate, mIconType); }


#define FactoryGame_Source_FactoryGame_FGCrate_h_24_PROLOG \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_INCLASS \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCrate_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCrate_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGCrate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCrate_h


#define FOREACH_ENUM_EFGCRATEICONTYPE(op) \
	op(EFGCrateIconType::CIT_DeathIcon) 

enum class EFGCrateIconType : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EFGCrateIconType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
