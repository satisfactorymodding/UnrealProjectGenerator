// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGInventoryComponent;
#ifdef FACTORYGAME_FGBuildableGeneratorNuclear_generated_h
#error "FGBuildableGeneratorNuclear.generated.h already included, missing '#pragma once' in FGBuildableGeneratorNuclear.h"
#endif
#define FACTORYGAME_FGBuildableGeneratorNuclear_generated_h

#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWasteInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetWasteInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWasteInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetWasteInventory(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableGeneratorNuclear(); \
	friend struct Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableGeneratorNuclear, AFGBuildableGeneratorFuel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableGeneratorNuclear)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableGeneratorNuclear(); \
	friend struct Z_Construct_UClass_AFGBuildableGeneratorNuclear_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableGeneratorNuclear, AFGBuildableGeneratorFuel, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableGeneratorNuclear)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableGeneratorNuclear(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableGeneratorNuclear) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableGeneratorNuclear); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableGeneratorNuclear); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableGeneratorNuclear(AFGBuildableGeneratorNuclear&&); \
	NO_API AFGBuildableGeneratorNuclear(const AFGBuildableGeneratorNuclear&); \
public:


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableGeneratorNuclear() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableGeneratorNuclear(AFGBuildableGeneratorNuclear&&); \
	NO_API AFGBuildableGeneratorNuclear(const AFGBuildableGeneratorNuclear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableGeneratorNuclear); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableGeneratorNuclear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableGeneratorNuclear)


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mOutputInventory() { return STRUCT_OFFSET(AFGBuildableGeneratorNuclear, mOutputInventory); }


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_14_PROLOG
#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Buildables_FGBuildableGeneratorNuclear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
