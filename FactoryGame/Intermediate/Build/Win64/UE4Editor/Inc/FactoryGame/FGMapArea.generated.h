// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGMapArea;
class UFGMapAreaZoneDescriptor;
#ifdef FACTORYGAME_FGMapArea_generated_h
#error "FGMapArea.generated.h already included, missing '#pragma once' in FGMapArea.h"
#endif
#define FACTORYGAME_FGMapArea_generated_h

#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetZoneType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGMapAreaZoneDescriptor> *)Z_Param__Result=UFGMapArea::GetZoneType(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserSetAreaDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGMapArea::GetUserSetAreaDisplayName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAreaDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGMapArea::GetAreaDisplayName(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetZoneType) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGMapAreaZoneDescriptor> *)Z_Param__Result=UFGMapArea::GetZoneType(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserSetAreaDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGMapArea::GetUserSetAreaDisplayName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAreaDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGMapArea::GetAreaDisplayName(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGMapArea(); \
	friend struct Z_Construct_UClass_UFGMapArea_Statics; \
public: \
	DECLARE_CLASS(UFGMapArea, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapArea)


#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGMapArea(); \
	friend struct Z_Construct_UClass_UFGMapArea_Statics; \
public: \
	DECLARE_CLASS(UFGMapArea, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGMapArea)


#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapArea(UFGMapArea&&); \
	NO_API UFGMapArea(const UFGMapArea&); \
public:


#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGMapArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGMapArea(UFGMapArea&&); \
	NO_API UFGMapArea(const UFGMapArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGMapArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGMapArea); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGMapArea)


#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDisplayName() { return STRUCT_OFFSET(UFGMapArea, mDisplayName); } \
	FORCEINLINE static uint32 __PPO__mZoneType() { return STRUCT_OFFSET(UFGMapArea, mZoneType); } \
	FORCEINLINE static uint32 __PPO__mUserSetDisplayName() { return STRUCT_OFFSET(UFGMapArea, mUserSetDisplayName); }


#define FactoryGame_Source_FactoryGame_FGMapArea_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGMapArea_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGMapArea_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGMapArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
