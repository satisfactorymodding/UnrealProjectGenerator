// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeFloatCurve;
struct FRuntimeCurveLinearColor;
struct FLinearColor;
struct FSkySphereSettings;
#ifdef FACTORYGAME_FGSkySphere_generated_h
#error "FGSkySphere.generated.h already included, missing '#pragma once' in FGSkySphere.h"
#endif
#define FACTORYGAME_FGSkySphere_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkySphereSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FSkySphereSettings>();

#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_RPC_WRAPPERS \
	virtual void UpdatePreview_Implementation(); \
 \
	DECLARE_FUNCTION(execGetFloatCurveValue) \
	{ \
		P_GET_STRUCT_REF(FRuntimeFloatCurve,Z_Param_Out_curve); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=AFGSkySphere::GetFloatCurveValue(Z_Param_Out_curve,Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorCurveValue) \
	{ \
		P_GET_STRUCT_REF(FRuntimeCurveLinearColor,Z_Param_Out_curve); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=AFGSkySphere::GetColorCurveValue(Z_Param_Out_curve,Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePreview) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePreview_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdatePreview_Implementation(); \
 \
	DECLARE_FUNCTION(execGetFloatCurveValue) \
	{ \
		P_GET_STRUCT_REF(FRuntimeFloatCurve,Z_Param_Out_curve); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=AFGSkySphere::GetFloatCurveValue(Z_Param_Out_curve,Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorCurveValue) \
	{ \
		P_GET_STRUCT_REF(FRuntimeCurveLinearColor,Z_Param_Out_curve); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=AFGSkySphere::GetColorCurveValue(Z_Param_Out_curve,Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePreview) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePreview_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_EVENT_PARMS \
	struct FGSkySphere_eventApplySkySphereSettings_Parms \
	{ \
		FSkySphereSettings settings; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGSkySphere(); \
	friend struct Z_Construct_UClass_AFGSkySphere_Statics; \
public: \
	DECLARE_CLASS(AFGSkySphere, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSkySphere) \
	virtual UObject* _getUObject() const override { return const_cast<AFGSkySphere*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_INCLASS \
private: \
	static void StaticRegisterNativesAFGSkySphere(); \
	friend struct Z_Construct_UClass_AFGSkySphere_Statics; \
public: \
	DECLARE_CLASS(AFGSkySphere, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGSkySphere) \
	virtual UObject* _getUObject() const override { return const_cast<AFGSkySphere*>(this); }


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGSkySphere(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGSkySphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSkySphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSkySphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSkySphere(AFGSkySphere&&); \
	NO_API AFGSkySphere(const AFGSkySphere&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGSkySphere(AFGSkySphere&&); \
	NO_API AFGSkySphere(const AFGSkySphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGSkySphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGSkySphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGSkySphere)


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_59_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSkySphere_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGSkySphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSkySphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
