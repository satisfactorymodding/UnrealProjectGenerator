// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class AFGEquipment;
#ifdef FACTORYGAME_FGEquipmentDescriptor_generated_h
#error "FGEquipmentDescriptor.generated.h already included, missing '#pragma once' in FGEquipmentDescriptor.h"
#endif
#define FACTORYGAME_FGEquipmentDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEquipmentClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AFGEquipment> *)Z_Param__Result=UFGEquipmentDescriptor::GetEquipmentClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEquipmentClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<AFGEquipment> *)Z_Param__Result=UFGEquipmentDescriptor::GetEquipmentClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGEquipmentDescriptor(); \
	friend struct Z_Construct_UClass_UFGEquipmentDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGEquipmentDescriptor, UFGItemDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEquipmentDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFGEquipmentDescriptor(); \
	friend struct Z_Construct_UClass_UFGEquipmentDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGEquipmentDescriptor, UFGItemDescriptor, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGEquipmentDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGEquipmentDescriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGEquipmentDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEquipmentDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEquipmentDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEquipmentDescriptor(UFGEquipmentDescriptor&&); \
	NO_API UFGEquipmentDescriptor(const UFGEquipmentDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGEquipmentDescriptor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGEquipmentDescriptor(UFGEquipmentDescriptor&&); \
	NO_API UFGEquipmentDescriptor(const UFGEquipmentDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGEquipmentDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGEquipmentDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGEquipmentDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGEquipmentDescriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
