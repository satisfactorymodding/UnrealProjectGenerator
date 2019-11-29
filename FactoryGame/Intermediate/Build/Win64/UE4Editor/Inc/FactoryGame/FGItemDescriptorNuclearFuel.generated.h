// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptorNuclearFuel;
class UFGItemDescriptor;
#ifdef FACTORYGAME_FGItemDescriptorNuclearFuel_generated_h
#error "FGItemDescriptorNuclearFuel.generated.h already included, missing '#pragma once' in FGItemDescriptorNuclearFuel.h"
#endif
#define FACTORYGAME_FGItemDescriptorNuclearFuel_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAmountWasteCreated) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGItemDescriptorNuclearFuel::GetAmountWasteCreated(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpentFuelClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=UFGItemDescriptorNuclearFuel::GetSpentFuelClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAmountWasteCreated) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGItemDescriptorNuclearFuel::GetAmountWasteCreated(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSpentFuelClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemDescriptor> *)Z_Param__Result=UFGItemDescriptorNuclearFuel::GetSpentFuelClass(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGItemDescriptorNuclearFuel(); \
	friend struct Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics; \
public: \
	DECLARE_CLASS(UFGItemDescriptorNuclearFuel, UFGItemDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGItemDescriptorNuclearFuel)


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFGItemDescriptorNuclearFuel(); \
	friend struct Z_Construct_UClass_UFGItemDescriptorNuclearFuel_Statics; \
public: \
	DECLARE_CLASS(UFGItemDescriptorNuclearFuel, UFGItemDescriptor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGItemDescriptorNuclearFuel)


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGItemDescriptorNuclearFuel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGItemDescriptorNuclearFuel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGItemDescriptorNuclearFuel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGItemDescriptorNuclearFuel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGItemDescriptorNuclearFuel(UFGItemDescriptorNuclearFuel&&); \
	NO_API UFGItemDescriptorNuclearFuel(const UFGItemDescriptorNuclearFuel&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGItemDescriptorNuclearFuel(UFGItemDescriptorNuclearFuel&&); \
	NO_API UFGItemDescriptorNuclearFuel(const UFGItemDescriptorNuclearFuel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGItemDescriptorNuclearFuel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGItemDescriptorNuclearFuel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGItemDescriptorNuclearFuel)


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSpentFuelClass() { return STRUCT_OFFSET(UFGItemDescriptorNuclearFuel, mSpentFuelClass); } \
	FORCEINLINE static uint32 __PPO__mAmountOfWaste() { return STRUCT_OFFSET(UFGItemDescriptorNuclearFuel, mAmountOfWaste); }


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_13_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGItemDescriptorNuclearFuel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGItemDescriptorNuclearFuel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
