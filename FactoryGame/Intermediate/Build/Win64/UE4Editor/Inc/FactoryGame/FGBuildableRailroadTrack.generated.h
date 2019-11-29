// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
#ifdef FACTORYGAME_FGBuildableRailroadTrack_generated_h
#error "FGBuildableRailroadTrack.generated.h already included, missing '#pragma once' in FGBuildableRailroadTrack.h"
#endif
#define FACTORYGAME_FGBuildableRailroadTrack_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRailroadTrackPosition_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FRailroadTrackPosition>();

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadTrack(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadTrack_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadTrack, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadTrack)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableRailroadTrack(); \
	friend struct Z_Construct_UClass_AFGBuildableRailroadTrack_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableRailroadTrack, AFGBuildable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableRailroadTrack)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableRailroadTrack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableRailroadTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadTrack(AFGBuildableRailroadTrack&&); \
	NO_API AFGBuildableRailroadTrack(const AFGBuildableRailroadTrack&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableRailroadTrack(AFGBuildableRailroadTrack&&); \
	NO_API AFGBuildableRailroadTrack(const AFGBuildableRailroadTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableRailroadTrack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableRailroadTrack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableRailroadTrack)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mMesh() { return STRUCT_OFFSET(AFGBuildableRailroadTrack, mMesh); } \
	FORCEINLINE static uint32 __PPO__mMeshLength() { return STRUCT_OFFSET(AFGBuildableRailroadTrack, mMeshLength); } \
	FORCEINLINE static uint32 __PPO__mSplineComponent() { return STRUCT_OFFSET(AFGBuildableRailroadTrack, mSplineComponent); } \
	FORCEINLINE static uint32 __PPO__mSplineData() { return STRUCT_OFFSET(AFGBuildableRailroadTrack, mSplineData); } \
	FORCEINLINE static uint32 __PPO__mConnections() { return STRUCT_OFFSET(AFGBuildableRailroadTrack, mConnections); } \
	FORCEINLINE static uint32 __PPO__mIsOwnedByPlatform() { return STRUCT_OFFSET(AFGBuildableRailroadTrack, mIsOwnedByPlatform); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_88_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableRailroadTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableRailroadTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
