// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGItemDescriptor;
struct FRotator;
struct FTransform;
struct FLinearColor;
struct FColor;
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

#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemView_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FItemView>();

#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIconSkyOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT(FRotator,Z_Param_skyOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconSkyOrientation(Z_Param_inClass,Z_Param_skyOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconSkyOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFGItemDescriptor::GetIconSkyOrientation(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconCameraDistance) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_cameraDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconCameraDistance(Z_Param_inClass,Z_Param_cameraDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconCameraDistance) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetIconCameraDistance(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconObjectOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT(FRotator,Z_Param_objectOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconObjectOrientation(Z_Param_inClass,Z_Param_objectOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconObjectOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFGItemDescriptor::GetIconObjectOrientation(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconFOV) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iconFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconFOV(Z_Param_inClass,Z_Param_iconFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconFOV) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetIconFOV(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconCameraTransform) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT(FTransform,Z_Param_cameraTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconCameraTransform(Z_Param_inClass,Z_Param_cameraTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconCameraTransform) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UFGItemDescriptor::GetIconCameraTransform(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidColorLinear) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UFGItemDescriptor::GetFluidColorLinear(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidColor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UFGItemDescriptor::GetFluidColor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidFriction) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetFluidFriction(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidViscosity) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetFluidViscosity(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidDensity) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetFluidDensity(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execRememberPickUp) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGItemDescriptor::RememberPickUp(Z_Param_inClass); \
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
	DECLARE_FUNCTION(execGetStackSizeConverted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetStackSizeConverted(Z_Param_inClass); \
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
	DECLARE_FUNCTION(execGetAbbreviatedDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGItemDescriptor::GetAbbreviatedDisplayName(Z_Param_inClass); \
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


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIconSkyOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT(FRotator,Z_Param_skyOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconSkyOrientation(Z_Param_inClass,Z_Param_skyOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconSkyOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFGItemDescriptor::GetIconSkyOrientation(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconCameraDistance) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_cameraDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconCameraDistance(Z_Param_inClass,Z_Param_cameraDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconCameraDistance) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetIconCameraDistance(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconObjectOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT(FRotator,Z_Param_objectOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconObjectOrientation(Z_Param_inClass,Z_Param_objectOrientation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconObjectOrientation) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UFGItemDescriptor::GetIconObjectOrientation(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconFOV) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_iconFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconFOV(Z_Param_inClass,Z_Param_iconFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconFOV) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetIconFOV(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIconCameraTransform) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_GET_STRUCT(FTransform,Z_Param_cameraTransform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGItemDescriptor::SetIconCameraTransform(Z_Param_inClass,Z_Param_cameraTransform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIconCameraTransform) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=UFGItemDescriptor::GetIconCameraTransform(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidColorLinear) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=UFGItemDescriptor::GetFluidColorLinear(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidColor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FColor*)Z_Param__Result=UFGItemDescriptor::GetFluidColor(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidFriction) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetFluidFriction(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidViscosity) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetFluidViscosity(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFluidDensity) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetFluidDensity(Z_Param_inClass); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execRememberPickUp) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGItemDescriptor::RememberPickUp(Z_Param_inClass); \
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
	DECLARE_FUNCTION(execGetStackSizeConverted) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UFGItemDescriptor::GetStackSizeConverted(Z_Param_inClass); \
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
	DECLARE_FUNCTION(execGetAbbreviatedDisplayName) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_inClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGItemDescriptor::GetAbbreviatedDisplayName(Z_Param_inClass); \
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


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFGItemDescriptor, NO_API)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGItemDescriptor(); \
	friend struct Z_Construct_UClass_UFGItemDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGItemDescriptor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGItemDescriptor) \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUFGItemDescriptor(); \
	friend struct Z_Construct_UClass_UFGItemDescriptor_Statics; \
public: \
	DECLARE_CLASS(UFGItemDescriptor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGItemDescriptor) \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_ARCHIVESERIALIZER


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_STANDARD_CONSTRUCTORS \
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


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGItemDescriptor(UFGItemDescriptor&&); \
	NO_API UFGItemDescriptor(const UFGItemDescriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGItemDescriptor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGItemDescriptor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFGItemDescriptor)


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_76_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGItemDescriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Resources_FGItemDescriptor_h


#define FOREACH_ENUM_ESTACKSIZE(op) \
	op(EStackSize::SS_ONE) \
	op(EStackSize::SS_SMALL) \
	op(EStackSize::SS_MEDIUM) \
	op(EStackSize::SS_BIG) \
	op(EStackSize::SS_HUGE) \
	op(EStackSize::SS_FLUID) \
	op(EStackSize::SS_LAST_ENUM) 

enum class EStackSize : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EStackSize>();

#define FOREACH_ENUM_ERESOURCEFORM(op) \
	op(EResourceForm::RF_INVALID) \
	op(EResourceForm::RF_SOLID) \
	op(EResourceForm::RF_LIQUID) \
	op(EResourceForm::RF_GAS) \
	op(EResourceForm::RF_HEAT) \
	op(EResourceForm::RF_LAST_ENUM) 

enum class EResourceForm : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EResourceForm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
