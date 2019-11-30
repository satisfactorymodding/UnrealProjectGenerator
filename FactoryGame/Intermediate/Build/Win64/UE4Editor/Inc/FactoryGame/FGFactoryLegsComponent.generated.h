// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef FACTORYGAME_FGFactoryLegsComponent_generated_h
#error "FGFactoryLegsComponent.generated.h already included, missing '#pragma once' in FGFactoryLegsComponent.h"
#endif
#define FACTORYGAME_FGFactoryLegsComponent_generated_h

#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFeetOffset_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFootMeshComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetFootMeshComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLegMeshComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetLegMeshComponents(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFootMeshComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetFootMeshComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLegMeshComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetLegMeshComponents(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGFactoryLegsComponent(); \
	friend struct Z_Construct_UClass_UFGFactoryLegsComponent_Statics; \
public: \
	DECLARE_CLASS(UFGFactoryLegsComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFactoryLegsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFGFactoryLegsComponent*>(this); }


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUFGFactoryLegsComponent(); \
	friend struct Z_Construct_UClass_UFGFactoryLegsComponent_Statics; \
public: \
	DECLARE_CLASS(UFGFactoryLegsComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGFactoryLegsComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFGFactoryLegsComponent*>(this); }


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGFactoryLegsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGFactoryLegsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFactoryLegsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFactoryLegsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFactoryLegsComponent(UFGFactoryLegsComponent&&); \
	NO_API UFGFactoryLegsComponent(const UFGFactoryLegsComponent&); \
public:


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGFactoryLegsComponent(UFGFactoryLegsComponent&&); \
	NO_API UFGFactoryLegsComponent(const UFGFactoryLegsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGFactoryLegsComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGFactoryLegsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGFactoryLegsComponent)


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mLegSocketNames() { return STRUCT_OFFSET(UFGFactoryLegsComponent, mLegSocketNames); } \
	FORCEINLINE static uint32 __PPO__mLegMeshOverride() { return STRUCT_OFFSET(UFGFactoryLegsComponent, mLegMeshOverride); } \
	FORCEINLINE static uint32 __PPO__mFootMeshOverride() { return STRUCT_OFFSET(UFGFactoryLegsComponent, mFootMeshOverride); } \
	FORCEINLINE static uint32 __PPO__mMaxLegLengthOverride() { return STRUCT_OFFSET(UFGFactoryLegsComponent, mMaxLegLengthOverride); } \
	FORCEINLINE static uint32 __PPO__mLegMeshComponents() { return STRUCT_OFFSET(UFGFactoryLegsComponent, mLegMeshComponents); } \
	FORCEINLINE static uint32 __PPO__mFootMeshComponents() { return STRUCT_OFFSET(UFGFactoryLegsComponent, mFootMeshComponents); } \
	FORCEINLINE static uint32 __PPO__mCachedFeetOffset() { return STRUCT_OFFSET(UFGFactoryLegsComponent, mCachedFeetOffset); }


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_38_PROLOG
#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_INCLASS \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGFactoryLegsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
