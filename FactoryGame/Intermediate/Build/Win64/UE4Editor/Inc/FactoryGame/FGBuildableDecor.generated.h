// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef FACTORYGAME_FGBuildableDecor_generated_h
#error "FGBuildableDecor.generated.h already included, missing '#pragma once' in FGBuildableDecor.h"
#endif
#define FACTORYGAME_FGBuildableDecor_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDecorMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDecorMesh(Z_Param_mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecorMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetDecorMesh(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDecorMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_mesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDecorMesh(Z_Param_mesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDecorMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=P_THIS->GetDecorMesh(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableDecor(); \
	friend struct Z_Construct_UClass_AFGBuildableDecor_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableDecor, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableDecor)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableDecor(); \
	friend struct Z_Construct_UClass_AFGBuildableDecor_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableDecor, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableDecor)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableDecor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableDecor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableDecor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableDecor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableDecor(AFGBuildableDecor&&); \
	NO_API AFGBuildableDecor(const AFGBuildableDecor&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableDecor(AFGBuildableDecor&&); \
	NO_API AFGBuildableDecor(const AFGBuildableDecor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableDecor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableDecor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableDecor)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDecorMesh() { return STRUCT_OFFSET(AFGBuildableDecor, mDecorMesh); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableDecor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableDecor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
