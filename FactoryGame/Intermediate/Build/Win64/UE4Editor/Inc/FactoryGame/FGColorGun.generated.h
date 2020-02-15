// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
enum class EFGColorGunTargetType : uint8;
#ifdef FACTORYGAME_FGColorGun_generated_h
#error "FGColorGun.generated.h already included, missing '#pragma once' in FGColorGun.h"
#endif
#define FACTORYGAME_FGColorGun_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_RPC_WRAPPERS \
	virtual bool Sever_SetSecondaryColorForSlot_Validate(uint8 , FLinearColor ); \
	virtual void Sever_SetSecondaryColorForSlot_Implementation(uint8 slotIndex, FLinearColor newColor); \
	virtual bool Sever_SetPrimaryColorForSlot_Validate(uint8 , FLinearColor ); \
	virtual void Sever_SetPrimaryColorForSlot_Implementation(uint8 slotIndex, FLinearColor newColor); \
	virtual bool Sever_SetColorSlot_Validate(uint8 ); \
	virtual void Sever_SetColorSlot_Implementation(uint8 slotIndex); \
 \
	DECLARE_FUNCTION(execOnSecondaryFirePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryFirePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPrimaryColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorSlotIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetColorSlotIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryColorForSlot(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPrimaryColorForSlot(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSever_SetSecondaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Sever_SetSecondaryColorForSlot_Validate(Z_Param_slotIndex,Z_Param_newColor)) \
		{ \
			RPC_ValidateFailed(TEXT("Sever_SetSecondaryColorForSlot_Validate")); \
			return; \
		} \
		P_THIS->Sever_SetSecondaryColorForSlot_Implementation(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSecondaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSecondaryColorForSlot(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSever_SetPrimaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Sever_SetPrimaryColorForSlot_Validate(Z_Param_slotIndex,Z_Param_newColor)) \
		{ \
			RPC_ValidateFailed(TEXT("Sever_SetPrimaryColorForSlot_Validate")); \
			return; \
		} \
		P_THIS->Sever_SetPrimaryColorForSlot_Implementation(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrimaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrimaryColorForSlot(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumColorSlotsExposedToPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetNumColorSlotsExposedToPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumColorSlots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetMaxNumColorSlots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSever_SetColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Sever_SetColorSlot_Validate(Z_Param_slotIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("Sever_SetColorSlot_Validate")); \
			return; \
		} \
		P_THIS->Sever_SetColorSlot_Implementation(Z_Param_slotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorSlot(Z_Param_slotIndex); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Sever_SetSecondaryColorForSlot_Validate(uint8 , FLinearColor ); \
	virtual void Sever_SetSecondaryColorForSlot_Implementation(uint8 slotIndex, FLinearColor newColor); \
	virtual bool Sever_SetPrimaryColorForSlot_Validate(uint8 , FLinearColor ); \
	virtual void Sever_SetPrimaryColorForSlot_Implementation(uint8 slotIndex, FLinearColor newColor); \
	virtual bool Sever_SetColorSlot_Validate(uint8 ); \
	virtual void Sever_SetColorSlot_Implementation(uint8 slotIndex); \
 \
	DECLARE_FUNCTION(execOnSecondaryFirePressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSecondaryFirePressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPrimaryColor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorSlotIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetColorSlotIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryColorForSlot(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPrimaryColorForSlot(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSever_SetSecondaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Sever_SetSecondaryColorForSlot_Validate(Z_Param_slotIndex,Z_Param_newColor)) \
		{ \
			RPC_ValidateFailed(TEXT("Sever_SetSecondaryColorForSlot_Validate")); \
			return; \
		} \
		P_THIS->Sever_SetSecondaryColorForSlot_Implementation(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSecondaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSecondaryColorForSlot(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSever_SetPrimaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Sever_SetPrimaryColorForSlot_Validate(Z_Param_slotIndex,Z_Param_newColor)) \
		{ \
			RPC_ValidateFailed(TEXT("Sever_SetPrimaryColorForSlot_Validate")); \
			return; \
		} \
		P_THIS->Sever_SetPrimaryColorForSlot_Implementation(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPrimaryColorForSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPrimaryColorForSlot(Z_Param_slotIndex,Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumColorSlotsExposedToPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetNumColorSlotsExposedToPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxNumColorSlots) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetMaxNumColorSlots(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSever_SetColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Sever_SetColorSlot_Validate(Z_Param_slotIndex)) \
		{ \
			RPC_ValidateFailed(TEXT("Sever_SetColorSlot_Validate")); \
			return; \
		} \
		P_THIS->Sever_SetColorSlot_Implementation(Z_Param_slotIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_slotIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorSlot(Z_Param_slotIndex); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_EVENT_PARMS \
	struct FGColorGun_eventOnTargetStateChanged_Parms \
	{ \
		EFGColorGunTargetType targetType; \
	}; \
	struct FGColorGun_eventSever_SetColorSlot_Parms \
	{ \
		uint8 slotIndex; \
	}; \
	struct FGColorGun_eventSever_SetPrimaryColorForSlot_Parms \
	{ \
		uint8 slotIndex; \
		FLinearColor newColor; \
	}; \
	struct FGColorGun_eventSever_SetSecondaryColorForSlot_Parms \
	{ \
		uint8 slotIndex; \
		FLinearColor newColor; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGColorGun(); \
	friend struct Z_Construct_UClass_AFGColorGun_Statics; \
public: \
	DECLARE_CLASS(AFGColorGun, AFGWeaponInstantFire, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGColorGun)


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFGColorGun(); \
	friend struct Z_Construct_UClass_AFGColorGun_Statics; \
public: \
	DECLARE_CLASS(AFGColorGun, AFGWeaponInstantFire, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGColorGun)


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGColorGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGColorGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGColorGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGColorGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGColorGun(AFGColorGun&&); \
	NO_API AFGColorGun(const AFGColorGun&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGColorGun(AFGColorGun&&); \
	NO_API AFGColorGun(const AFGColorGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGColorGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGColorGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGColorGun)


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mPrimaryColor_DEPRECATED() { return STRUCT_OFFSET(AFGColorGun, mPrimaryColor_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__mSecondaryColor_DEPRECATED() { return STRUCT_OFFSET(AFGColorGun, mSecondaryColor_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__mRedundantTargetCrosshairColor() { return STRUCT_OFFSET(AFGColorGun, mRedundantTargetCrosshairColor); } \
	FORCEINLINE static uint32 __PPO__mRedundantTargetCrosshairTexture() { return STRUCT_OFFSET(AFGColorGun, mRedundantTargetCrosshairTexture); } \
	FORCEINLINE static uint32 __PPO__mNoTargetCrosshairColor() { return STRUCT_OFFSET(AFGColorGun, mNoTargetCrosshairColor); } \
	FORCEINLINE static uint32 __PPO__mNoTargetCrosshairTexture() { return STRUCT_OFFSET(AFGColorGun, mNoTargetCrosshairTexture); } \
	FORCEINLINE static uint32 __PPO__mNonColorableTargetCrosshairColor() { return STRUCT_OFFSET(AFGColorGun, mNonColorableTargetCrosshairColor); } \
	FORCEINLINE static uint32 __PPO__mNonColorableTargetCrosshairTexture() { return STRUCT_OFFSET(AFGColorGun, mNonColorableTargetCrosshairTexture); } \
	FORCEINLINE static uint32 __PPO__mValidTargetCrosshairTexture() { return STRUCT_OFFSET(AFGColorGun, mValidTargetCrosshairTexture); } \
	FORCEINLINE static uint32 __PPO__mColorSlot() { return STRUCT_OFFSET(AFGColorGun, mColorSlot); } \
	FORCEINLINE static uint32 __PPO__mCurrentColorTarget() { return STRUCT_OFFSET(AFGColorGun, mCurrentColorTarget); }


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_22_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGColorGun_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGColorGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGColorGun_h


#define FOREACH_ENUM_EFGCOLORGUNTARGETTYPE(op) \
	op(EFGColorGunTargetType::ECGT_noTarget) \
	op(EFGColorGunTargetType::ECGT_nonColorable) \
	op(EFGColorGunTargetType::ECGT_validTarget) \
	op(EFGColorGunTargetType::ECGT_sameColorSlot) 

enum class EFGColorGunTargetType : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EFGColorGunTargetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
