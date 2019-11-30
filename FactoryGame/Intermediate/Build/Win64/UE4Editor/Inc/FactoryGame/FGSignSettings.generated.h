// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FSignColorData;
#ifdef FACTORYGAME_FGSignSettings_generated_h
#error "FGSignSettings.generated.h already included, missing '#pragma once' in FGSignSettings.h"
#endif
#define FACTORYGAME_FGSignSettings_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSignColorData_Statics; \
	static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBackgroundMaterialInstanceFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UFGSignSettings::GetBackgroundMaterialInstanceFromIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconMaterialInstanceFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UFGSignSettings::GetIconMaterialInstanceFromIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextMaterialInstanceFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UFGSignSettings::GetTextMaterialInstanceFromIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignColorData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSignColorData>*)Z_Param__Result=UFGSignSettings::GetSignColorData(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBackgroundMaterialInstanceFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UFGSignSettings::GetBackgroundMaterialInstanceFromIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconMaterialInstanceFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UFGSignSettings::GetIconMaterialInstanceFromIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTextMaterialInstanceFromIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=UFGSignSettings::GetTextMaterialInstanceFromIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSignColorData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FSignColorData>*)Z_Param__Result=UFGSignSettings::GetSignColorData(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGSignSettings(); \
	friend struct Z_Construct_UClass_UFGSignSettings_Statics; \
public: \
	DECLARE_CLASS(UFGSignSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSignSettings)


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUFGSignSettings(); \
	friend struct Z_Construct_UClass_UFGSignSettings_Statics; \
public: \
	DECLARE_CLASS(UFGSignSettings, UFGSettings, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSignSettings)


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSignSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSignSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSignSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSignSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSignSettings(UFGSignSettings&&); \
	NO_API UFGSignSettings(const UFGSignSettings&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSignSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSignSettings(UFGSignSettings&&); \
	NO_API UFGSignSettings(const UFGSignSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSignSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSignSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSignSettings)


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_46_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSignSettings_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSignSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
