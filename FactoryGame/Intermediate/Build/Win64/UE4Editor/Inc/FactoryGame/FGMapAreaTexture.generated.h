// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGMapArea;
class UTexture2D;
#ifdef FACTORYGAME_FGMapAreaTexture_generated_h
#error "FGMapAreaTexture.generated.h already included, missing '#pragma once' in FGMapAreaTexture.h"
#endif
#define FACTORYGAME_FGMapAreaTexture_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorMapAreaPair_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FColorMapAreaPair>();

#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNewMapAreaVisisted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMapArea); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNewMapAreaVisisted(Z_Param_newMapArea); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetFogOfWarTexture(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNewMapAreaVisisted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_newMapArea); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnNewMapAreaVisisted(Z_Param_newMapArea); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFogOfWarTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetFogOfWarTexture(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMapAreaTexture(); \
	friend struct Z_Construct_UClass_UFGMapAreaTexture_Statics; \
public: \
	DECLARE_CLASS(UFGMapAreaTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapAreaTexture)


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUFGMapAreaTexture(); \
	friend struct Z_Construct_UClass_UFGMapAreaTexture_Statics; \
public: \
	DECLARE_CLASS(UFGMapAreaTexture, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapAreaTexture)


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapAreaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapAreaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapAreaTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapAreaTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapAreaTexture(UFGMapAreaTexture&&); \
	NO_API UFGMapAreaTexture(const UFGMapAreaTexture&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapAreaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapAreaTexture(UFGMapAreaTexture&&); \
	NO_API UFGMapAreaTexture(const UFGMapAreaTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapAreaTexture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapAreaTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapAreaTexture)


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFogOfWarTexture() { return STRUCT_OFFSET(UFGMapAreaTexture, mFogOfWarTexture); } \
	FORCEINLINE static uint32 __PPO__mAreaData() { return STRUCT_OFFSET(UFGMapAreaTexture, mAreaData); } \
	FORCEINLINE static uint32 __PPO__mColorPalette() { return STRUCT_OFFSET(UFGMapAreaTexture, mColorPalette); } \
	FORCEINLINE static uint32 __PPO__mColorToArea() { return STRUCT_OFFSET(UFGMapAreaTexture, mColorToArea); } \
	FORCEINLINE static uint32 __PPO__mCaptureActor() { return STRUCT_OFFSET(UFGMapAreaTexture, mCaptureActor); } \
	FORCEINLINE static uint32 __PPO__mDataWidth() { return STRUCT_OFFSET(UFGMapAreaTexture, mDataWidth); } \
	FORCEINLINE static uint32 __PPO__mCachedGameState() { return STRUCT_OFFSET(UFGMapAreaTexture, mCachedGameState); }


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_49_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGMapAreaTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGMapAreaTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
