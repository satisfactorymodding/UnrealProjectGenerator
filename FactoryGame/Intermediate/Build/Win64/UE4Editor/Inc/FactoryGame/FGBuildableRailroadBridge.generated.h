// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGBuildableRailroadBridge_generated_h
#error "FGBuildableRailroadBridge.generated.h already included, missing '#pragma once' in FGBuildableRailroadBridge.h"
#endif
#define FACTORYGAME_FGBuildableRailroadBridge_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadBridge(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadBridge_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadBridge, AFGBuildable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadBridge)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadBridge(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadBridge_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadBridge, AFGBuildable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadBridge)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRailroadBridge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableRailroadBridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadBridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadBridge(AFGBuildableRailroadBridge&&); \
	NO_API AFGBuildableRailroadBridge(const AFGBuildableRailroadBridge&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadBridge(AFGBuildableRailroadBridge&&); \
	NO_API AFGBuildableRailroadBridge(const AFGBuildableRailroadBridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadBridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadBridge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableRailroadBridge)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSplineComponent() { return STRUCT_OFFSET(AFGBuildableRailroadBridge, mSplineComponent); } \
	FORCEINLINE static uint32 __PPO__mSplineData() { return STRUCT_OFFSET(AFGBuildableRailroadBridge, mSplineData); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_17_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableRailroadBridge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableRailroadBridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
