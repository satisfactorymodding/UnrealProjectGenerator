// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
class UFGItemCategory;
class UStaticMesh;
class UTexture2D;
struct FSlateBrush;
struct FItemView;
enum class EResourceForm : uint8;
#ifdef FACTORYGAME_FGItemDescriptor_generated_h
#error "FGItemDescriptor.generated.h already included, missing '#pragma once' in FGItemDescriptor.h"
#endif
#define FACTORYGAME_FGItemDescriptor_generated_h

#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemView_Statics; \
	FACTORYGAME_API static class UScriptStruct* StaticStruct();


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemCategory> *)Z_Param__Result=UFGItemDescriptor::GetItemCategory(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeDiscarded) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGItemDescriptor::CanBeDiscarded(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackSize) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGItemDescriptor::GetStackSize(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGItemDescriptor::GetItemMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBigIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFGItemDescriptor::GetBigIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmallIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFGItemDescriptor::GetSmallIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UFGItemDescriptor::GetItemIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconView) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_out_itemView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::GetIconView(Z_Param_inClass,Z_Param_Out_out_itemView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviewView) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_out_previewView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::GetPreviewView(Z_Param_inClass,Z_Param_Out_out_previewView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemDescription) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGItemDescriptor::GetItemDescription(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGItemDescriptor::GetItemName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadioactiveDecay) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetRadioactiveDecay(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnergyValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetEnergyValue(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForm) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EResourceForm*)Z_Param__Result=UFGItemDescriptor::GetForm(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemCategory) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGItemCategory> *)Z_Param__Result=UFGItemDescriptor::GetItemCategory(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanBeDiscarded) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGItemDescriptor::CanBeDiscarded(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackSize) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UFGItemDescriptor::GetStackSize(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemMesh) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UStaticMesh**)Z_Param__Result=UFGItemDescriptor::GetItemMesh(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBigIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFGItemDescriptor::GetBigIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSmallIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFGItemDescriptor::GetSmallIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemIcon) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSlateBrush*)Z_Param__Result=UFGItemDescriptor::GetItemIcon(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconView) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_out_itemView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::GetIconView(Z_Param_inClass,Z_Param_Out_out_itemView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPreviewView) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT_REF(FItemView,Z_Param_Out_out_previewView); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::GetPreviewView(Z_Param_inClass,Z_Param_Out_out_previewView); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemDescription) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGItemDescriptor::GetItemDescription(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGItemDescriptor::GetItemName(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRadioactiveDecay) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetRadioactiveDecay(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnergyValue) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetEnergyValue(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForm) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EResourceForm*)Z_Param__Result=UFGItemDescriptor::GetForm(Z_Param_inClass); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFGItemDescriptor, NO_API)


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGItemDescriptor(); \
	friend struct Z_Construct_UClass_UFGItemDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGItemDescriptor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGItemDescriptor) \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUFGItemDescriptor(); \
	friend struct Z_Construct_UClass_UFGItemDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGItemDescriptor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGItemDescriptor) \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGItemDescriptor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGItemDescriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGItemDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGItemDescriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGItemDescriptor(UFGItemDescriptor&&); \
	NO_API UFGItemDescriptor(const UFGItemDescriptor&); \
public:


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGItemDescriptor(UFGItemDescriptor&&); \
	NO_API UFGItemDescriptor(const UFGItemDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGItemDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGItemDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGItemDescriptor)


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mStackSize() { return STRUCT_OFFSET(UFGItemDescriptor, mStackSize); } \
	FORCEINLINE static uint32 __PPO__mCanBeDiscarded() { return STRUCT_OFFSET(UFGItemDescriptor, mCanBeDiscarded); } \
	FORCEINLINE static uint32 __PPO__mEnergyValue() { return STRUCT_OFFSET(UFGItemDescriptor, mEnergyValue); } \
	FORCEINLINE static uint32 __PPO__mRadioactiveDecay() { return STRUCT_OFFSET(UFGItemDescriptor, mRadioactiveDecay); } \
	FORCEINLINE static uint32 __PPO__mForm() { return STRUCT_OFFSET(UFGItemDescriptor, mForm); } \
	FORCEINLINE static uint32 __PPO__mInventoryIcon() { return STRUCT_OFFSET(UFGItemDescriptor, mInventoryIcon); } \
	FORCEINLINE static uint32 __PPO__mSmallIcon() { return STRUCT_OFFSET(UFGItemDescriptor, mSmallIcon); } \
	FORCEINLINE static uint32 __PPO__mPersistentBigIcon() { return STRUCT_OFFSET(UFGItemDescriptor, mPersistentBigIcon); } \
	FORCEINLINE static uint32 __PPO__mConveyorMesh() { return STRUCT_OFFSET(UFGItemDescriptor, mConveyorMesh); } \
	FORCEINLINE static uint32 __PPO__mPreviewView() { return STRUCT_OFFSET(UFGItemDescriptor, mPreviewView); } \
	FORCEINLINE static uint32 __PPO__mItemCategory() { return STRUCT_OFFSET(UFGItemDescriptor, mItemCategory); }


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_72_PROLOG
#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_INCLASS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Resources_FGItemDescriptor_h


#define FOREACH_ENUM_ESTACKSIZE(op) \
	op(EStackSize::SS_ONE) \
	op(EStackSize::SS_SMALL) \
	op(EStackSize::SS_MEDIUM) \
	op(EStackSize::SS_BIG) \
	op(EStackSize::SS_HUGE) \
	op(EStackSize::SS_LAST_ENUM) 
#define FOREACH_ENUM_ERESOURCEFORM(op) \
	op(EResourceForm::RF_INVALID) \
	op(EResourceForm::RF_SOLID) \
	op(EResourceForm::RF_LIQUID) \
	op(EResourceForm::RF_GAS) \
	op(EResourceForm::RF_HEAT) \
	op(EResourceForm::RF_LAST_ENUM) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
