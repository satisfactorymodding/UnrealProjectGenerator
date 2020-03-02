// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FACTORYGAME_FGJetPack_generated_h
#error "FGJetPack.generated.h already included, missing '#pragma once' in FGJetPack.h"
#endif
#define FACTORYGAME_FGJetPack_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_RPC_WRAPPERS \
	virtual float GetMaxFuel_Implementation(); \
	virtual float GetCurrentFuel_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetMaxFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxFuel_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentFuel_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetMaxFuel_Implementation(); \
	virtual float GetCurrentFuel_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetMaxFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxFuel_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFuel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentFuel_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_EVENT_PARMS \
	struct FGJetPack_eventCanThrust_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGJetPack_eventCanThrust_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGJetPack_eventGetCurrentFuel_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGJetPack_eventGetCurrentFuel_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FGJetPack_eventGetMaxFuel_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGJetPack_eventGetMaxFuel_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FGJetPack_eventGetNewVelocityWhenThrusting_Parms \
	{ \
		float delta; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGJetPack_eventGetNewVelocityWhenThrusting_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGJetPack(); \
	friend struct Z_Construct_UClass_AFGJetPack_Statics; \
public: \
	DECLARE_CLASS(AFGJetPack, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJetPack)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGJetPack(); \
	friend struct Z_Construct_UClass_AFGJetPack_Statics; \
public: \
	DECLARE_CLASS(AFGJetPack, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJetPack)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGJetPack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGJetPack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJetPack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJetPack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJetPack(AFGJetPack&&); \
	NO_API AFGJetPack(const AFGJetPack&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJetPack(AFGJetPack&&); \
	NO_API AFGJetPack(const AFGJetPack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJetPack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJetPack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGJetPack)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsThrusting() { return STRUCT_OFFSET(AFGJetPack, mIsThrusting); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGJetPack>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsThrusting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsThrusting(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsThrusting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsThrusting(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_EVENT_PARMS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGJetPackAttachment(); \
	friend struct Z_Construct_UClass_AFGJetPackAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGJetPackAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJetPackAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_INCLASS \
private: \
	static void StaticRegisterNativesAFGJetPackAttachment(); \
	friend struct Z_Construct_UClass_AFGJetPackAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGJetPackAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGJetPackAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGJetPackAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGJetPackAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJetPackAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJetPackAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJetPackAttachment(AFGJetPackAttachment&&); \
	NO_API AFGJetPackAttachment(const AFGJetPackAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGJetPackAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGJetPackAttachment(AFGJetPackAttachment&&); \
	NO_API AFGJetPackAttachment(const AFGJetPackAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGJetPackAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGJetPackAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGJetPackAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mIsThrusting() { return STRUCT_OFFSET(AFGJetPackAttachment, mIsThrusting); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_93_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGJetPackAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGJetPack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
