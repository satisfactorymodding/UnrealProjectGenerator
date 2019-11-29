// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef FACTORYGAME_FGFoliageRemoval_generated_h
#error "FGFoliageRemoval.generated.h already included, missing '#pragma once' in FGFoliageRemoval.h"
#endif
#define FACTORYGAME_FGFoliageRemoval_generated_h

#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemovedInstanceArray_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super;


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FRemovedInstanceArray>();

#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemovedInstance_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FRemovedInstance>();

#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegisterWithSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithSubsystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInstance) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_foliageTransform); \
		P_GET_UBOOL(Z_Param_localSpace); \
		P_GET_PROPERTY(UIntProperty,Z_Param_instanceId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_foliageTransform,Z_Param_localSpace,Z_Param_instanceId); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegisterWithSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterWithSubsystem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveInstance) \
	{ \
		P_GET_STRUCT(FTransform,Z_Param_foliageTransform); \
		P_GET_UBOOL(Z_Param_localSpace); \
		P_GET_PROPERTY(UIntProperty,Z_Param_instanceId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_foliageTransform,Z_Param_localSpace,Z_Param_instanceId); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGFoliageRemoval(); \
	friend struct Z_Construct_UClass_AFGFoliageRemoval_Statics; \
public: \
	DECLARE_CLASS(AFGFoliageRemoval, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFoliageRemoval) \
	virtual UObject* _getUObject() const override { return const_cast<AFGFoliageRemoval*>(this); }


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_INCLASS \
private: \
	static void StaticRegisterNativesAFGFoliageRemoval(); \
	friend struct Z_Construct_UClass_AFGFoliageRemoval_Statics; \
public: \
	DECLARE_CLASS(AFGFoliageRemoval, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGFoliageRemoval) \
	virtual UObject* _getUObject() const override { return const_cast<AFGFoliageRemoval*>(this); }


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGFoliageRemoval(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGFoliageRemoval) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFoliageRemoval); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFoliageRemoval); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFoliageRemoval(AFGFoliageRemoval&&); \
	NO_API AFGFoliageRemoval(const AFGFoliageRemoval&); \
public:


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGFoliageRemoval(AFGFoliageRemoval&&); \
	NO_API AFGFoliageRemoval(const AFGFoliageRemoval&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGFoliageRemoval); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGFoliageRemoval); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGFoliageRemoval)


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mRemovedInstances() { return STRUCT_OFFSET(AFGFoliageRemoval, mRemovedInstances); } \
	FORCEINLINE static uint32 __PPO__mMeshComponent() { return STRUCT_OFFSET(AFGFoliageRemoval, mMeshComponent); } \
	FORCEINLINE static uint32 __PPO__mLevelName() { return STRUCT_OFFSET(AFGFoliageRemoval, mLevelName); } \
	FORCEINLINE static uint32 __PPO__mFoliageTypeName() { return STRUCT_OFFSET(AFGFoliageRemoval, mFoliageTypeName); } \
	FORCEINLINE static uint32 __PPO__mLevelBounds() { return STRUCT_OFFSET(AFGFoliageRemoval, mLevelBounds); }


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_79_PROLOG
#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_INCLASS \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGFoliageRemoval_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGFoliageRemoval>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGFoliageRemoval_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
