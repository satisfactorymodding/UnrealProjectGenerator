// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
struct FSlateChildSize;
#ifdef FACTORYGAME_FGInteractWidget_generated_h
#error "FGInteractWidget.generated.h already included, missing '#pragma once' in FGInteractWidget.h"
#endif
#define FACTORYGAME_FGInteractWidget_generated_h

#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_RPC_WRAPPERS \
	virtual void SetupDefaultFocus_Implementation(); \
	virtual void OnEscapePressed_Implementation(); \
	virtual void UpdateIgnoreLookInput_Implementation(); \
	virtual void UpdateIgnoreMoveInput_Implementation(); \
	virtual void SetInputMode_Implementation(); \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCustomTickRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCustomTickRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportsStacking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetSupportsStacking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupDefaultFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupDefaultFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultFocusWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetDefaultFocusWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultFocusWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_focusWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultFocusWidget(Z_Param_focusWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseGamepadCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetUseGamepadCursor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredAlignmentSize) \
	{ \
		P_GET_STRUCT(FSlateChildSize,Z_Param_newSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredAlignmentSize(Z_Param_newSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredAlignmentSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateChildSize*)Z_Param__Result=P_THIS->GetDesiredAlignmentSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredVerticalAlignment(EVerticalAlignment(Z_Param_newAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredVerticalAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EVerticalAlignment>*)Z_Param__Result=P_THIS->GetDesiredVerticalAlignment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredHorizontalAlignment(EHorizontalAlignment(Z_Param_newAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredHorizontalAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHorizontalAlignment>*)Z_Param__Result=P_THIS->GetDesiredHorizontalAlignment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConsume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConsume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEscapePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEscapePressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateIgnoreLookInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateIgnoreLookInput_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateIgnoreMoveInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateIgnoreMoveInput_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetupDefaultFocus_Implementation(); \
	virtual void OnEscapePressed_Implementation(); \
	virtual void UpdateIgnoreLookInput_Implementation(); \
	virtual void UpdateIgnoreMoveInput_Implementation(); \
	virtual void SetInputMode_Implementation(); \
	virtual void Init_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCustomTickRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCustomTickRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportsStacking) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetSupportsStacking(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupDefaultFocus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetupDefaultFocus_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultFocusWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidget**)Z_Param__Result=P_THIS->GetDefaultFocusWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDefaultFocusWidget) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_focusWidget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDefaultFocusWidget(Z_Param_focusWidget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUseGamepadCursor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetUseGamepadCursor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredAlignmentSize) \
	{ \
		P_GET_STRUCT(FSlateChildSize,Z_Param_newSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredAlignmentSize(Z_Param_newSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredAlignmentSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateChildSize*)Z_Param__Result=P_THIS->GetDesiredAlignmentSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredVerticalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredVerticalAlignment(EVerticalAlignment(Z_Param_newAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredVerticalAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EVerticalAlignment>*)Z_Param__Result=P_THIS->GetDesiredVerticalAlignment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDesiredHorizontalAlignment) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_newAlignment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDesiredHorizontalAlignment(EHorizontalAlignment(Z_Param_newAlignment)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDesiredHorizontalAlignment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EHorizontalAlignment>*)Z_Param__Result=P_THIS->GetDesiredHorizontalAlignment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnConsume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnConsume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEscapePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEscapePressed_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateIgnoreLookInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateIgnoreLookInput_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateIgnoreMoveInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateIgnoreMoveInput_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetInputMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetInputMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Init_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_EVENT_PARMS \
	struct FGInteractWidget_eventOnCustomTick_Parms \
	{ \
		float UpdateTime; \
	};


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInteractWidget(); \
	friend struct Z_Construct_UClass_UFGInteractWidget_Statics; \
public: \
	DECLARE_CLASS(UFGInteractWidget, UUserWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInteractWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUFGInteractWidget(); \
	friend struct Z_Construct_UClass_UFGInteractWidget_Statics; \
public: \
	DECLARE_CLASS(UFGInteractWidget, UUserWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInteractWidget) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInteractWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInteractWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInteractWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInteractWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInteractWidget(UFGInteractWidget&&); \
	NO_API UFGInteractWidget(const UFGInteractWidget&); \
public:


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInteractWidget(UFGInteractWidget&&); \
	NO_API UFGInteractWidget(const UFGInteractWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInteractWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInteractWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInteractWidget)


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mUseGamepadCursor() { return STRUCT_OFFSET(UFGInteractWidget, mUseGamepadCursor); } \
	FORCEINLINE static uint32 __PPO__mCustomTickRate() { return STRUCT_OFFSET(UFGInteractWidget, mCustomTickRate); } \
	FORCEINLINE static uint32 __PPO__mCallCustomTickOnConstruct() { return STRUCT_OFFSET(UFGInteractWidget, mCallCustomTickOnConstruct); } \
	FORCEINLINE static uint32 __PPO__mDefaultFocusWidget() { return STRUCT_OFFSET(UFGInteractWidget, mDefaultFocusWidget); } \
	FORCEINLINE static uint32 __PPO__mSupportsStacking() { return STRUCT_OFFSET(UFGInteractWidget, mSupportsStacking); }


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_14_PROLOG \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_INCLASS \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGInteractWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_UI_FGInteractWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
