// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class AFGCentralStorageContainer;
class UObject;
class AFGCentralStorageSubsystem;
#ifdef FACTORYGAME_FGCentralStorageSubsystem_generated_h
#error "FGCentralStorageSubsystem.generated.h already included, missing '#pragma once' in FGCentralStorageSubsystem.h"
#endif
#define FACTORYGAME_FGCentralStorageSubsystem_generated_h

#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_14_DELEGATE \
static inline void FCentralStorageAddedOrRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CentralStorageAddedOrRemovedDelegate) \
{ \
	CentralStorageAddedOrRemovedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveItemsFromCentralStorage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItemsFromCentralStorage(Z_Param_itemClass,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumItemsFromCentralStorage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumItemsFromCentralStorage(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCentralStorageContainers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGCentralStorageContainer*>*)Z_Param__Result=P_THIS->GetCentralStorageContainers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCentralStorageBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCentralStorageBuilt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCentralStorageSubsystem**)Z_Param__Result=AFGCentralStorageSubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveItemsFromCentralStorage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveItemsFromCentralStorage(Z_Param_itemClass,Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumItemsFromCentralStorage) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_itemClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumItemsFromCentralStorage(Z_Param_itemClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCentralStorageContainers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AFGCentralStorageContainer*>*)Z_Param__Result=P_THIS->GetCentralStorageContainers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCentralStorageBuilt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCentralStorageBuilt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGet) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_worldContext); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGCentralStorageSubsystem**)Z_Param__Result=AFGCentralStorageSubsystem::Get(Z_Param_worldContext); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGCentralStorageSubsystem(); \
	friend struct Z_Construct_UClass_AFGCentralStorageSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGCentralStorageSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCentralStorageSubsystem)


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFGCentralStorageSubsystem(); \
	friend struct Z_Construct_UClass_AFGCentralStorageSubsystem_Statics; \
public: \
	DECLARE_CLASS(AFGCentralStorageSubsystem, AFGSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGCentralStorageSubsystem)


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGCentralStorageSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGCentralStorageSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCentralStorageSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCentralStorageSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCentralStorageSubsystem(AFGCentralStorageSubsystem&&); \
	NO_API AFGCentralStorageSubsystem(const AFGCentralStorageSubsystem&); \
public:


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGCentralStorageSubsystem(AFGCentralStorageSubsystem&&); \
	NO_API AFGCentralStorageSubsystem(const AFGCentralStorageSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGCentralStorageSubsystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGCentralStorageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGCentralStorageSubsystem)


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mCentralStorages() { return STRUCT_OFFSET(AFGCentralStorageSubsystem, mCentralStorages); }


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_20_PROLOG
#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_INCLASS \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGCentralStorageSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGCentralStorageSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
