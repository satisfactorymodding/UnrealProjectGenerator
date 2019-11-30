// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGBuildableStorage_generated_h
#error "FGBuildableStorage.generated.h already included, missing '#pragma once' in FGBuildableStorage.h"
#endif
#define FACTORYGAME_FGBuildableStorage_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStorageInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetStorageInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStorageInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetStorageInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableStorage(); \
	friend struct Z_Construct_UClass_AFGBuildableStorage_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableStorage, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableStorage)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableStorage(); \
	friend struct Z_Construct_UClass_AFGBuildableStorage_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableStorage, AFGBuildableFactory, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableStorage)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableStorage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableStorage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableStorage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableStorage(AFGBuildableStorage&&); \
	NO_API AFGBuildableStorage(const AFGBuildableStorage&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableStorage(AFGBuildableStorage&&); \
	NO_API AFGBuildableStorage(const AFGBuildableStorage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableStorage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableStorage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableStorage)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mStorageInventory() { return STRUCT_OFFSET(AFGBuildableStorage, mStorageInventory); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_16_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableStorage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
