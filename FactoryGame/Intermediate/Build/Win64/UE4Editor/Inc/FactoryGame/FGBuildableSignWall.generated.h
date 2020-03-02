// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSignWallData;
#ifdef FACTORYGAME_FGBuildableSignWall_generated_h
#error "FGBuildableSignWall.generated.h already included, missing '#pragma once' in FGBuildableSignWall.h"
#endif
#define FACTORYGAME_FGBuildableSignWall_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSignWallData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSignWallData>();

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SignData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SignData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSignWallData*)Z_Param__Result=P_THIS->GetSignData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSignData) \
	{ \
		P_GET_STRUCT(FSignWallData,Z_Param_signData); \
		P_GET_UBOOL(Z_Param_bUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSignData(Z_Param_signData,Z_Param_bUpdate); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SignData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_SignData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSignWallData*)Z_Param__Result=P_THIS->GetSignData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSignData) \
	{ \
		P_GET_STRUCT(FSignWallData,Z_Param_signData); \
		P_GET_UBOOL(Z_Param_bUpdate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSignData(Z_Param_signData,Z_Param_bUpdate); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableSignWall(); \
	friend struct Z_Construct_UClass_AFGBuildableSignWall_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSignWall, AFGBuildableWall, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSignWall)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableSignWall(); \
	friend struct Z_Construct_UClass_AFGBuildableSignWall_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableSignWall, AFGBuildableWall, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableSignWall)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableSignWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableSignWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSignWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSignWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSignWall(AFGBuildableSignWall&&); \
	NO_API AFGBuildableSignWall(const AFGBuildableSignWall&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableSignWall(AFGBuildableSignWall&&); \
	NO_API AFGBuildableSignWall(const AFGBuildableSignWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableSignWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableSignWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableSignWall)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSignDisplayRoot() { return STRUCT_OFFSET(AFGBuildableSignWall, mSignDisplayRoot); } \
	FORCEINLINE static uint32 __PPO__mTextDisplayRoot() { return STRUCT_OFFSET(AFGBuildableSignWall, mTextDisplayRoot); } \
	FORCEINLINE static uint32 __PPO__mTextRenderComponent() { return STRUCT_OFFSET(AFGBuildableSignWall, mTextRenderComponent); } \
	FORCEINLINE static uint32 __PPO__mSignData() { return STRUCT_OFFSET(AFGBuildableSignWall, mSignData); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_45_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableSignWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableSignWall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
