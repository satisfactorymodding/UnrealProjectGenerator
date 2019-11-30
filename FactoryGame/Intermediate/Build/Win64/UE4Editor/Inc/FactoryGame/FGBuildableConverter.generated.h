// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef FACTORYGAME_FGBuildableConverter_generated_h
#error "FGBuildableConverter.generated.h already included, missing '#pragma once' in FGBuildableConverter.h"
#endif
#define FACTORYGAME_FGBuildableConverter_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupItemFilter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupItemFilter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterIngredientClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterIngredientClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfInputs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfInputs(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupItemFilter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupItemFilter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFilterIngredientClasses) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_object); \
		P_GET_PROPERTY(UIntProperty,Z_Param_idx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FilterIngredientClasses(Z_Param_object,Z_Param_idx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumberOfInputs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfInputs(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildableConverter(); \
	friend struct Z_Construct_UClass_AFGBuildableConverter_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConverter, AFGBuildableManufacturer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConverter)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildableConverter(); \
	friend struct Z_Construct_UClass_AFGBuildableConverter_Statics; \
public: \
	DECLARE_CLASS(AFGBuildableConverter, AFGBuildableManufacturer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildableConverter)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildableConverter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildableConverter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConverter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConverter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConverter(AFGBuildableConverter&&); \
	NO_API AFGBuildableConverter(const AFGBuildableConverter&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildableConverter(AFGBuildableConverter&&); \
	NO_API AFGBuildableConverter(const AFGBuildableConverter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildableConverter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildableConverter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildableConverter)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mNumberOfIngredientsNeeded() { return STRUCT_OFFSET(AFGBuildableConverter, mNumberOfIngredientsNeeded); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildableConverter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildableConverter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
