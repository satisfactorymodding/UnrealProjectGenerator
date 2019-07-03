// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGCentralStorageContainer_generated_h
#error "FGCentralStorageContainer.generated.h already included, missing '#pragma once' in FGCentralStorageContainer.h"
#endif
#define FACTORYGAME_FGCentralStorageContainer_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToCentralStorageSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToCentralStorageSubsystem(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToCentralStorageSubsystem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToCentralStorageSubsystem(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCentralStorageContainer(); \
	friend struct Z_Construct_UClass_AFGCentralStorageContainer_Statics; \
public: \
	DECLARE_CLASS(AFGCentralStorageContainer, AFGBuildableStorage, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCentralStorageContainer)


#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGCentralStorageContainer(); \
	friend struct Z_Construct_UClass_AFGCentralStorageContainer_Statics; \
public: \
	DECLARE_CLASS(AFGCentralStorageContainer, AFGBuildableStorage, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCentralStorageContainer)


#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCentralStorageContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCentralStorageContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCentralStorageContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCentralStorageContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCentralStorageContainer(AFGCentralStorageContainer&&); \
	NO_API AFGCentralStorageContainer(const AFGCentralStorageContainer&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCentralStorageContainer(AFGCentralStorageContainer&&); \
	NO_API AFGCentralStorageContainer(const AFGCentralStorageContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCentralStorageContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCentralStorageContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCentralStorageContainer)


#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGCentralStorageContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
