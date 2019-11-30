// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
#ifdef FACTORYGAME_FGInventoryComponentTrash_generated_h
#error "FGInventoryComponentTrash.generated.h already included, missing '#pragma once' in FGInventoryComponentTrash.h"
#endif
#define FACTORYGAME_FGInventoryComponentTrash_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidItem(Z_Param_resource); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidItem) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_resource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsValidItem(Z_Param_resource); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInventoryComponentTrash(); \
	friend struct Z_Construct_UClass_UFGInventoryComponentTrash_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryComponentTrash, UFGInventoryComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryComponentTrash)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFGInventoryComponentTrash(); \
	friend struct Z_Construct_UClass_UFGInventoryComponentTrash_Statics; \
public: \
	DECLARE_CLASS(UFGInventoryComponentTrash, UFGInventoryComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInventoryComponentTrash)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInventoryComponentTrash(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInventoryComponentTrash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryComponentTrash); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryComponentTrash); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryComponentTrash(UFGInventoryComponentTrash&&); \
	NO_API UFGInventoryComponentTrash(const UFGInventoryComponentTrash&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInventoryComponentTrash(UFGInventoryComponentTrash&&); \
	NO_API UFGInventoryComponentTrash(const UFGInventoryComponentTrash&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInventoryComponentTrash); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInventoryComponentTrash); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGInventoryComponentTrash)


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_10_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGInventoryComponentTrash>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGInventoryComponentTrash_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
