// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGInteractWidget;
class UFGFactoryConnectionComponent;
struct FInventoryItem;
class UFGItemDescriptor;
class UShapeComponent;
class AActor;
class UMeshComponent;
struct FInventoryStack;
#ifdef FACTORYGAME_FGBuildable_generated_h
#error "FGBuildable.generated.h already included, missing '#pragma once' in FGBuildable.h"
#endif
#define FACTORYGAME_FGBuildable_generated_h

#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_33_DELEGATE \
static inline void FBuildableDismantledSignature_DelegateWrapper(const FMulticastScriptDelegate& BuildableDismantledSignature) \
{ \
	BuildableDismantledSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_RPC_WRAPPERS \
	virtual bool Factory_GrabOutput_Implementation(UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf<UFGItemDescriptor>  type); \
	virtual bool Factory_PeekOutput_Implementation(const UFGFactoryConnectionComponent* connection, TArray<FInventoryItem>& out_items, TSubclassOf<UFGItemDescriptor>  type) const; \
	virtual void PlayDismantleSound_Implementation(); \
	virtual void PlayConstructSound_Implementation(); \
	virtual void PlayDismantleEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execGetNumPowerConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetNumPowerConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DidFirstTimeUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DidFirstTimeUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ColorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ColorSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReapplyColorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReapplyColorSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractWidgetClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGInteractWidget> *)Z_Param__Result=P_THIS->GetInteractWidgetClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_GrabOutput) \
	{ \
		P_GET_OBJECT(UFGFactoryConnectionComponent,Z_Param_connection); \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_OffsetBeyond); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_GrabOutput_Implementation(Z_Param_connection,Z_Param_Out_out_item,Z_Param_Out_out_OffsetBeyond,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_PeekOutput) \
	{ \
		P_GET_OBJECT(UFGFactoryConnectionComponent,Z_Param_connection); \
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_out_items); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_PeekOutput_Implementation(Z_Param_connection,Z_Param_Out_out_items,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDismantleSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayDismantleSound_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayConstructSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayConstructSound_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClearanceComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UShapeComponent**)Z_Param__Result=P_THIS->GetClearanceComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveHighlightEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveHighlightEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowHighlightEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowHighlightEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDismantleEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayDismantleEffects_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayBuildEffects) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayBuildEffects(Z_Param_inInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMeshComponent*>*)Z_Param__Result=P_THIS->GetMainMeshes(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Factory_GrabOutput_Implementation(UFGFactoryConnectionComponent* connection, FInventoryItem& out_item, float& out_OffsetBeyond, TSubclassOf<UFGItemDescriptor>  type); \
	virtual bool Factory_PeekOutput_Implementation(const UFGFactoryConnectionComponent* connection, TArray<FInventoryItem>& out_items, TSubclassOf<UFGItemDescriptor>  type) const; \
	virtual void PlayDismantleSound_Implementation(); \
	virtual void PlayConstructSound_Implementation(); \
	virtual void PlayDismantleEffects_Implementation(); \
 \
	DECLARE_FUNCTION(execGetNumPowerConnections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetNumPowerConnections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_DidFirstTimeUse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_DidFirstTimeUse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_ColorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ColorSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReapplyColorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReapplyColorSlot(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInteractWidgetClass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UFGInteractWidget> *)Z_Param__Result=P_THIS->GetInteractWidgetClass(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_GrabOutput) \
	{ \
		P_GET_OBJECT(UFGFactoryConnectionComponent,Z_Param_connection); \
		P_GET_STRUCT_REF(FInventoryItem,Z_Param_Out_out_item); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_out_OffsetBeyond); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_GrabOutput_Implementation(Z_Param_connection,Z_Param_Out_out_item,Z_Param_Out_out_OffsetBeyond,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFactory_PeekOutput) \
	{ \
		P_GET_OBJECT(UFGFactoryConnectionComponent,Z_Param_connection); \
		P_GET_TARRAY_REF(FInventoryItem,Z_Param_Out_out_items); \
		P_GET_OBJECT(UClass,Z_Param_type); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Factory_PeekOutput_Implementation(Z_Param_connection,Z_Param_Out_out_items,Z_Param_type); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDismantleSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayDismantleSound_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayConstructSound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayConstructSound_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetClearanceComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UShapeComponent**)Z_Param__Result=P_THIS->GetClearanceComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveHighlightEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveHighlightEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowHighlightEffect) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowHighlightEffect(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayDismantleEffects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayDismantleEffects_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayBuildEffects) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_inInstigator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayBuildEffects(Z_Param_inInstigator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UMeshComponent*>*)Z_Param__Result=P_THIS->GetMainMeshes(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_EVENT_PARMS \
	struct FGBuildable_eventFactory_GrabOutput_Parms \
	{ \
		UFGFactoryConnectionComponent* connection; \
		FInventoryItem out_item; \
		float out_OffsetBeyond; \
		TSubclassOf<UFGItemDescriptor>  type; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGBuildable_eventFactory_GrabOutput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGBuildable_eventFactory_PeekOutput_Parms \
	{ \
		const UFGFactoryConnectionComponent* connection; \
		TArray<FInventoryItem> out_items; \
		TSubclassOf<UFGItemDescriptor>  type; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGBuildable_eventFactory_PeekOutput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGBuildable_eventFactory_ReceiveTick_Parms \
	{ \
		float deltaTime; \
	}; \
	struct FGBuildable_eventGetDismantleBlueprintReturns_Parms \
	{ \
		TArray<FInventoryStack> out_returns; \
	};


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AFGBuildable, NO_API)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildable(); \
	friend struct Z_Construct_UClass_AFGBuildable_Statics; \
public: \
	DECLARE_CLASS(AFGBuildable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildable) \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildable*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildable(); \
	friend struct Z_Construct_UClass_AFGBuildable_Statics; \
public: \
	DECLARE_CLASS(AFGBuildable, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildable) \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildable*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildable(AFGBuildable&&); \
	NO_API AFGBuildable(const AFGBuildable&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildable(AFGBuildable&&); \
	NO_API AFGBuildable(const AFGBuildable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildable)


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mFactoryTickFunction() { return STRUCT_OFFSET(AFGBuildable, mFactoryTickFunction); } \
	FORCEINLINE static uint32 __PPO__mMaterialNameToInstanceManager() { return STRUCT_OFFSET(AFGBuildable, mMaterialNameToInstanceManager); } \
	FORCEINLINE static uint32 __PPO__mPrimaryColor() { return STRUCT_OFFSET(AFGBuildable, mPrimaryColor); } \
	FORCEINLINE static uint32 __PPO__mSecondaryColor() { return STRUCT_OFFSET(AFGBuildable, mSecondaryColor); } \
	FORCEINLINE static uint32 __PPO__mColorSlot() { return STRUCT_OFFSET(AFGBuildable, mColorSlot); } \
	FORCEINLINE static uint32 __PPO__mBuildEffectTemplate() { return STRUCT_OFFSET(AFGBuildable, mBuildEffectTemplate); } \
	FORCEINLINE static uint32 __PPO__mDismantleEffectTemplate() { return STRUCT_OFFSET(AFGBuildable, mDismantleEffectTemplate); } \
	FORCEINLINE static uint32 __PPO__mBuildEffectInstignator() { return STRUCT_OFFSET(AFGBuildable, mBuildEffectInstignator); } \
	FORCEINLINE static uint32 __PPO__mDismantleEffectClassName() { return STRUCT_OFFSET(AFGBuildable, mDismantleEffectClassName); } \
	FORCEINLINE static uint32 __PPO__mBuildEffectClassName() { return STRUCT_OFFSET(AFGBuildable, mBuildEffectClassName); } \
	FORCEINLINE static uint32 __PPO__mBuildEffectSpeed() { return STRUCT_OFFSET(AFGBuildable, mBuildEffectSpeed); } \
	FORCEINLINE static uint32 __PPO__mForceNetUpdateOnRegisterPlayer() { return STRUCT_OFFSET(AFGBuildable, mForceNetUpdateOnRegisterPlayer); } \
	FORCEINLINE static uint32 __PPO__mHighlightParticleClassName() { return STRUCT_OFFSET(AFGBuildable, mHighlightParticleClassName); } \
	FORCEINLINE static uint32 __PPO__mHighlightParticleSystemTemplate() { return STRUCT_OFFSET(AFGBuildable, mHighlightParticleSystemTemplate); } \
	FORCEINLINE static uint32 __PPO__mHighlightParticleSystemComponent() { return STRUCT_OFFSET(AFGBuildable, mHighlightParticleSystemComponent); } \
	FORCEINLINE static uint32 __PPO__mDidFirstTimeUse() { return STRUCT_OFFSET(AFGBuildable, mDidFirstTimeUse); } \
	FORCEINLINE static uint32 __PPO__mShouldShowHighlight() { return STRUCT_OFFSET(AFGBuildable, mShouldShowHighlight); } \
	FORCEINLINE static uint32 __PPO__mCameraDistanceSq() { return STRUCT_OFFSET(AFGBuildable, mCameraDistanceSq); } \
	FORCEINLINE static uint32 __PPO__mBuildingID() { return STRUCT_OFFSET(AFGBuildable, mBuildingID); } \
	FORCEINLINE static uint32 __PPO__mDismantleRefund() { return STRUCT_OFFSET(AFGBuildable, mDismantleRefund); } \
	FORCEINLINE static uint32 __PPO__mInteractWidgetClass() { return STRUCT_OFFSET(AFGBuildable, mInteractWidgetClass); } \
	FORCEINLINE static uint32 __PPO__mInteractingPlayers() { return STRUCT_OFFSET(AFGBuildable, mInteractingPlayers); } \
	FORCEINLINE static uint32 __PPO__mBuiltWithRecipe() { return STRUCT_OFFSET(AFGBuildable, mBuiltWithRecipe); } \
	FORCEINLINE static uint32 __PPO__mBuildTimeStamp() { return STRUCT_OFFSET(AFGBuildable, mBuildTimeStamp); } \
	FORCEINLINE static uint32 __PPO__mCachedShapeComponent() { return STRUCT_OFFSET(AFGBuildable, mCachedShapeComponent); }


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_46_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Buildables_FGBuildable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
