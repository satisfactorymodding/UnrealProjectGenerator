// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class UObject;
#ifdef FACTORYGAME_FGTutorialSubsystem_generated_h
#error "FGTutorialSubsystem.generated.h already included, missing '#pragma once' in FGTutorialSubsystem.h"
#endif
#define FACTORYGAME_FGTutorialSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTutorialData_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FTutorialData>();

#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearBuiltData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearBuiltData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBuildingBuilt) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemDesc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBuildingBuilt(Z_Param_itemDesc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToBuiltClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToBuiltClasses(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearBuiltData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearBuiltData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBuildingBuilt) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemDesc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBuildingBuilt(Z_Param_itemDesc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToBuiltClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToBuiltClasses(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGTutorialSubsystem(); \
	friend struct Z_Construct_UClass_UFGTutorialSubsystem_Statics; \
public: \
	DECLARE_CLASS(UFGTutorialSubsystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGTutorialSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UFGTutorialSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUFGTutorialSubsystem(); \
	friend struct Z_Construct_UClass_UFGTutorialSubsystem_Statics; \
public: \
	DECLARE_CLASS(UFGTutorialSubsystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGTutorialSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UFGTutorialSubsystem*>(this); }


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGTutorialSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGTutorialSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGTutorialSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGTutorialSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGTutorialSubsystem(UFGTutorialSubsystem&&); \
	NO_API UFGTutorialSubsystem(const UFGTutorialSubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGTutorialSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGTutorialSubsystem(UFGTutorialSubsystem&&); \
	NO_API UFGTutorialSubsystem(const UFGTutorialSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGTutorialSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGTutorialSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGTutorialSubsystem)


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBuildingsBuilt() { return STRUCT_OFFSET(UFGTutorialSubsystem, mBuildingsBuilt); } \
	FORCEINLINE static uint32 __PPO__mHasSeenIntroTutorial() { return STRUCT_OFFSET(UFGTutorialSubsystem, mHasSeenIntroTutorial); } \
	FORCEINLINE static uint32 __PPO__mIntroTutorialMessages() { return STRUCT_OFFSET(UFGTutorialSubsystem, mIntroTutorialMessages); } \
	FORCEINLINE static uint32 __PPO__mTutorialData() { return STRUCT_OFFSET(UFGTutorialSubsystem, mTutorialData); }


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_41_PROLOG
#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_INCLASS \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGTutorialSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGTutorialSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
