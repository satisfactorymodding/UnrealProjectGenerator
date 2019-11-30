// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGBaseUI;
#ifdef FACTORYGAME_FGHUDBase_generated_h
#error "FGHUDBase.generated.h already included, missing '#pragma once' in FGHUDBase.h"
#endif
#define FACTORYGAME_FGHUDBase_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBaseUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGBaseUI**)Z_Param__Result=P_THIS->GetBaseUI(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBaseUI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGBaseUI**)Z_Param__Result=P_THIS->GetBaseUI(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGHUDBase(); \
	friend struct Z_Construct_UClass_AFGHUDBase_Statics; \
public: \
	DECLARE_CLASS(AFGHUDBase, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHUDBase)


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGHUDBase(); \
	friend struct Z_Construct_UClass_AFGHUDBase_Statics; \
public: \
	DECLARE_CLASS(AFGHUDBase, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGHUDBase)


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGHUDBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGHUDBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHUDBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHUDBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHUDBase(AFGHUDBase&&); \
	NO_API AFGHUDBase(const AFGHUDBase&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGHUDBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGHUDBase(AFGHUDBase&&); \
	NO_API AFGHUDBase(const AFGHUDBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGHUDBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGHUDBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGHUDBase)


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBaseUI() { return STRUCT_OFFSET(AFGHUDBase, mBaseUI); }


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGHUDBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGHUDBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGHUDBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
