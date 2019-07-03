// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FItemView;
class USceneComponent;
#ifdef FACTORYGAME_FGRenderTargetStage_generated_h
#error "FGRenderTargetStage.generated.h already included, missing '#pragma once' in FGRenderTargetStage.h"
#endif
#define FACTORYGAME_FGRenderTargetStage_generated_h

#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRenderTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetView) \
	{ \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_view); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetView(Z_Param_Out_view); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewDistance(Z_Param_distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRenderedComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRenderedComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->GetStage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureOnce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CaptureOnce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginCapture(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRenderTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetView) \
	{ \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_view); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetView(Z_Param_Out_view); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPreviewDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_distance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPreviewDistance(Z_Param_distance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRenderedComponents) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRenderedComponents(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(USceneComponent**)Z_Param__Result=P_THIS->GetStage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCaptureOnce) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CaptureOnce(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndCapture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginCapture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginCapture(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGRenderTargetStage(); \
	friend struct Z_Construct_UClass_AFGRenderTargetStage_Statics; \
public: \
	DECLARE_CLASS(AFGRenderTargetStage, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRenderTargetStage)


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAFGRenderTargetStage(); \
	friend struct Z_Construct_UClass_AFGRenderTargetStage_Statics; \
public: \
	DECLARE_CLASS(AFGRenderTargetStage, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGRenderTargetStage)


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGRenderTargetStage(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGRenderTargetStage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRenderTargetStage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRenderTargetStage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRenderTargetStage(AFGRenderTargetStage&&); \
	NO_API AFGRenderTargetStage(const AFGRenderTargetStage&); \
public:


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGRenderTargetStage(AFGRenderTargetStage&&); \
	NO_API AFGRenderTargetStage(const AFGRenderTargetStage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGRenderTargetStage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGRenderTargetStage); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGRenderTargetStage)


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mDynamicRenderTargetSizeX() { return STRUCT_OFFSET(AFGRenderTargetStage, mDynamicRenderTargetSizeX); } \
	FORCEINLINE static uint32 __PPO__mDynamicRenderTargetSizeY() { return STRUCT_OFFSET(AFGRenderTargetStage, mDynamicRenderTargetSizeY); } \
	FORCEINLINE static uint32 __PPO__mDynamicPixelFormat() { return STRUCT_OFFSET(AFGRenderTargetStage, mDynamicPixelFormat); } \
	FORCEINLINE static uint32 __PPO__mSceneCaptureComponent() { return STRUCT_OFFSET(AFGRenderTargetStage, mSceneCaptureComponent); } \
	FORCEINLINE static uint32 __PPO__mStage() { return STRUCT_OFFSET(AFGRenderTargetStage, mStage); }


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_8_PROLOG
#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_INCLASS \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_FGRenderTargetStage_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_FGRenderTargetStage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
