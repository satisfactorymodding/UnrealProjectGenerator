// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
class AFGCharacterPlayer;
#ifdef FACTORYGAME_FGEquipmentChild_generated_h
#error "FGEquipmentChild.generated.h already included, missing '#pragma once' in FGEquipmentChild.h"
#endif
#define FACTORYGAME_FGEquipmentChild_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_RPC_WRAPPERS \
	virtual void OnUnEquip_Implementation(); \
	virtual void OnEquip_Implementation(AFGCharacterPlayer* character); \
 \
	DECLARE_FUNCTION(execGetAttachSocketTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachSocketTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnEquip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_character); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUnEquip_Implementation(); \
	virtual void OnEquip_Implementation(AFGCharacterPlayer* character); \
 \
	DECLARE_FUNCTION(execGetAttachSocketTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetAttachSocketTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnUnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnEquip_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_character); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_EVENT_PARMS \
	struct FGEquipmentChild_eventOnEquip_Parms \
	{ \
		AFGCharacterPlayer* character; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGEquipmentChild(); \
	friend struct Z_Construct_UClass_AFGEquipmentChild_Statics; \
public: \
	DECLARE_CLASS(AFGEquipmentChild, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipmentChild)


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFGEquipmentChild(); \
	friend struct Z_Construct_UClass_AFGEquipmentChild_Statics; \
public: \
	DECLARE_CLASS(AFGEquipmentChild, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGEquipmentChild)


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGEquipmentChild(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGEquipmentChild) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipmentChild); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipmentChild); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipmentChild(AFGEquipmentChild&&); \
	NO_API AFGEquipmentChild(const AFGEquipmentChild&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGEquipmentChild(AFGEquipmentChild&&); \
	NO_API AFGEquipmentChild(const AFGEquipmentChild&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGEquipmentChild); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGEquipmentChild); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGEquipmentChild)


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mParentEquipment() { return STRUCT_OFFSET(AFGEquipmentChild, mParentEquipment); } \
	FORCEINLINE static uint32 __PPO__mAttachSocket() { return STRUCT_OFFSET(AFGEquipmentChild, mAttachSocket); }


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_15_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGEquipmentChild>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGEquipmentChild_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
