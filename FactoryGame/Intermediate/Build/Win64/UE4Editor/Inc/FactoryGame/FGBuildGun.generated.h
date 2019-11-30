// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFGRecipe;
enum class EBuildGunState : uint8;
class AFGBuildGun;
class UFGBuildGunState;
class UFGInventoryComponent;
struct FItemAmount;
#ifdef FACTORYGAME_FGBuildGun_generated_h
#error "FGBuildGun.generated.h already included, missing '#pragma once' in FGBuildGun.h"
#endif
#define FACTORYGAME_FGBuildGun_generated_h

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_30_DELEGATE \
struct _Script_FactoryGame_eventOnBuildGunRecipeChanged_Parms \
{ \
	TSubclassOf<UFGRecipe>  newRecipe; \
}; \
static inline void FOnBuildGunRecipeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnBuildGunRecipeChanged, TSubclassOf<UFGRecipe>  newRecipe) \
{ \
	_Script_FactoryGame_eventOnBuildGunRecipeChanged_Parms Parms; \
	Parms.newRecipe=newRecipe; \
	OnBuildGunRecipeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_29_DELEGATE \
struct _Script_FactoryGame_eventOnBuildGunStateChanged_Parms \
{ \
	EBuildGunState newState; \
}; \
static inline void FOnBuildGunStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnBuildGunStateChanged, EBuildGunState newState) \
{ \
	_Script_FactoryGame_eventOnBuildGunStateChanged_Parms Parms; \
	Parms.newState=newState; \
	OnBuildGunStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_RPC_WRAPPERS \
	virtual void ChangeGuideLinesSnapMode_Implementation(bool enabled); \
	virtual void ChangeNoSnapMode_Implementation(); \
	virtual void ChangeScrollMode_Implementation(); \
	virtual void ScrollUp_Implementation(); \
	virtual void ScrollDown_Implementation(); \
	virtual void SecondaryFire_Implementation(); \
	virtual void PrimaryFire_Implementation(); \
	virtual void TickState_Implementation(float deltaTime); \
	virtual void EndState_Implementation(); \
	virtual void BeginState_Implementation(); \
 \
	DECLARE_FUNCTION(execHasBuildGunDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBuildGunDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildGunDelayIsComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BuildGunDelayIsComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetBuildGunDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetBuildGunDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginBuildGunDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginBuildGunDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGunDelayMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetBuildGunDelayMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGunDelayPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBuildGunDelayPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildGun**)Z_Param__Result=P_THIS->GetBuildGun(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeGuideLinesSnapMode) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeGuideLinesSnapMode_Implementation(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeNoSnapMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeNoSnapMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeScrollMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeScrollMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollUp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollDown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickState_Implementation(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ChangeGuideLinesSnapMode_Implementation(bool enabled); \
	virtual void ChangeNoSnapMode_Implementation(); \
	virtual void ChangeScrollMode_Implementation(); \
	virtual void ScrollUp_Implementation(); \
	virtual void ScrollDown_Implementation(); \
	virtual void SecondaryFire_Implementation(); \
	virtual void PrimaryFire_Implementation(); \
	virtual void TickState_Implementation(float deltaTime); \
	virtual void EndState_Implementation(); \
	virtual void BeginState_Implementation(); \
 \
	DECLARE_FUNCTION(execHasBuildGunDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasBuildGunDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBuildGunDelayIsComplete) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->BuildGunDelayIsComplete(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetBuildGunDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetBuildGunDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginBuildGunDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginBuildGunDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGunDelayMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetBuildGunDelayMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGunDelayPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBuildGunDelayPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGun) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AFGBuildGun**)Z_Param__Result=P_THIS->GetBuildGun(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeGuideLinesSnapMode) \
	{ \
		P_GET_UBOOL(Z_Param_enabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeGuideLinesSnapMode_Implementation(Z_Param_enabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeNoSnapMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeNoSnapMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeScrollMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeScrollMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollUp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollDown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTickState) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_deltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TickState_Implementation(Z_Param_deltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginState_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAuthority) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasAuthority(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_EVENT_PARMS \
	struct FGBuildGunState_eventChangeGuideLinesSnapMode_Parms \
	{ \
		bool enabled; \
	}; \
	struct FGBuildGunState_eventTickState_Parms \
	{ \
		float deltaTime; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGBuildGunState(); \
	friend struct Z_Construct_UClass_UFGBuildGunState_Statics; \
public: \
	DECLARE_CLASS(UFGBuildGunState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildGunState)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUFGBuildGunState(); \
	friend struct Z_Construct_UClass_UFGBuildGunState_Statics; \
public: \
	DECLARE_CLASS(UFGBuildGunState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGBuildGunState)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildGunState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildGunState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildGunState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildGunState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildGunState(UFGBuildGunState&&); \
	NO_API UFGBuildGunState(const UFGBuildGunState&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGBuildGunState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGBuildGunState(UFGBuildGunState&&); \
	NO_API UFGBuildGunState(const UFGBuildGunState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGBuildGunState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGBuildGunState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGBuildGunState)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mActionDelay() { return STRUCT_OFFSET(UFGBuildGunState, mActionDelay); } \
	FORCEINLINE static uint32 __PPO__mActionMessage() { return STRUCT_OFFSET(UFGBuildGunState, mActionMessage); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_35_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGBuildGunState>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_RPC_WRAPPERS \
	virtual bool Server_GotoState_Validate(EBuildGunState ); \
	virtual void Server_GotoState_Implementation(EBuildGunState state); \
	virtual bool Server_GotoBuildState_Validate(TSubclassOf<UFGRecipe>  ); \
	virtual void Server_GotoBuildState_Implementation(TSubclassOf<UFGRecipe>  recipe); \
	virtual bool Server_NoSnapMode_Validate(); \
	virtual void Server_NoSnapMode_Implementation(); \
	virtual bool Server_ScrollMode_Validate(); \
	virtual void Server_ScrollMode_Implementation(); \
	virtual bool Server_ScrollUp_Validate(); \
	virtual void Server_ScrollUp_Implementation(); \
	virtual bool Server_ScrollDown_Validate(); \
	virtual void Server_ScrollDown_Implementation(); \
	virtual bool Server_SecondaryFire_Validate(); \
	virtual void Server_SecondaryFire_Implementation(); \
	virtual bool Server_PrimaryFire_Validate(); \
	virtual void Server_PrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_GotoState) \
	{ \
		P_GET_ENUM(EBuildGunState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_GotoState_Validate(EBuildGunState(Z_Param_state))) \
		{ \
			RPC_ValidateFailed(TEXT("Server_GotoState_Validate")); \
			return; \
		} \
		P_THIS->Server_GotoState_Implementation(EBuildGunState(Z_Param_state)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_GotoBuildState) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_GotoBuildState_Validate(Z_Param_recipe)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_GotoBuildState_Validate")); \
			return; \
		} \
		P_THIS->Server_GotoBuildState_Implementation(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NoSnapMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NoSnapMode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NoSnapMode_Validate")); \
			return; \
		} \
		P_THIS->Server_NoSnapMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ScrollMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScrollMode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScrollMode_Validate")); \
			return; \
		} \
		P_THIS->Server_ScrollMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ScrollUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScrollUp_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScrollUp_Validate")); \
			return; \
		} \
		P_THIS->Server_ScrollUp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ScrollDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScrollDown_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScrollDown_Validate")); \
			return; \
		} \
		P_THIS->Server_ScrollDown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SecondaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SecondaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_SecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_PrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_PrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGotoDismantleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GotoDismantleState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGotoBuildState) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GotoBuildState(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGotoMenuState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GotoMenuState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInState) \
	{ \
		P_GET_ENUM(EBuildGunState,Z_Param_inState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInState(EBuildGunState(Z_Param_inState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareActiveRecipeTo) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CompareActiveRecipeTo(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBuildGunDelayMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetCurrentBuildGunDelayMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBuildGunDelayPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentBuildGunDelayPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGunStateFor) \
	{ \
		P_GET_ENUM(EBuildGunState,Z_Param_gunState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGBuildGunState**)Z_Param__Result=P_THIS->GetBuildGunStateFor(EBuildGunState(Z_Param_gunState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCostForRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetCostForRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipes(Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_GotoState_Validate(EBuildGunState ); \
	virtual void Server_GotoState_Implementation(EBuildGunState state); \
	virtual bool Server_GotoBuildState_Validate(TSubclassOf<UFGRecipe>  ); \
	virtual void Server_GotoBuildState_Implementation(TSubclassOf<UFGRecipe>  recipe); \
	virtual bool Server_NoSnapMode_Validate(); \
	virtual void Server_NoSnapMode_Implementation(); \
	virtual bool Server_ScrollMode_Validate(); \
	virtual void Server_ScrollMode_Implementation(); \
	virtual bool Server_ScrollUp_Validate(); \
	virtual void Server_ScrollUp_Implementation(); \
	virtual bool Server_ScrollDown_Validate(); \
	virtual void Server_ScrollDown_Implementation(); \
	virtual bool Server_SecondaryFire_Validate(); \
	virtual void Server_SecondaryFire_Implementation(); \
	virtual bool Server_PrimaryFire_Validate(); \
	virtual void Server_PrimaryFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_GotoState) \
	{ \
		P_GET_ENUM(EBuildGunState,Z_Param_state); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_GotoState_Validate(EBuildGunState(Z_Param_state))) \
		{ \
			RPC_ValidateFailed(TEXT("Server_GotoState_Validate")); \
			return; \
		} \
		P_THIS->Server_GotoState_Implementation(EBuildGunState(Z_Param_state)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_GotoBuildState) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_GotoBuildState_Validate(Z_Param_recipe)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_GotoBuildState_Validate")); \
			return; \
		} \
		P_THIS->Server_GotoBuildState_Implementation(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_NoSnapMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_NoSnapMode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_NoSnapMode_Validate")); \
			return; \
		} \
		P_THIS->Server_NoSnapMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ScrollMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScrollMode_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScrollMode_Validate")); \
			return; \
		} \
		P_THIS->Server_ScrollMode_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ScrollUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScrollUp_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScrollUp_Validate")); \
			return; \
		} \
		P_THIS->Server_ScrollUp_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_ScrollDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_ScrollDown_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_ScrollDown_Validate")); \
			return; \
		} \
		P_THIS->Server_ScrollDown_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SecondaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SecondaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_SecondaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_PrimaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_PrimaryFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("Server_PrimaryFire_Validate")); \
			return; \
		} \
		P_THIS->Server_PrimaryFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGotoDismantleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GotoDismantleState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGotoBuildState) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GotoBuildState(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGotoMenuState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GotoMenuState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInState) \
	{ \
		P_GET_ENUM(EBuildGunState,Z_Param_inState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInState(EBuildGunState(Z_Param_inState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareActiveRecipeTo) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CompareActiveRecipeTo(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBuildGunDelayMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetCurrentBuildGunDelayMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBuildGunDelayPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentBuildGunDelayPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildGunStateFor) \
	{ \
		P_GET_ENUM(EBuildGunState,Z_Param_gunState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGBuildGunState**)Z_Param__Result=P_THIS->GetBuildGunStateFor(EBuildGunState(Z_Param_gunState)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UFGInventoryComponent**)Z_Param__Result=P_THIS->GetInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCostForRecipe) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemAmount>*)Z_Param__Result=P_THIS->GetCostForRecipe(Z_Param_recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableRecipes) \
	{ \
		P_GET_TARRAY_REF(TSubclassOf<UFGRecipe> ,Z_Param_Out_out_recipes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetAvailableRecipes(Z_Param_Out_out_recipes); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_EVENT_PARMS \
	struct FGBuildGun_eventServer_GotoBuildState_Parms \
	{ \
		TSubclassOf<UFGRecipe>  recipe; \
	}; \
	struct FGBuildGun_eventServer_GotoState_Parms \
	{ \
		EBuildGunState state; \
	};


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildGun(); \
	friend struct Z_Construct_UClass_AFGBuildGun_Statics; \
public: \
	DECLARE_CLASS(AFGBuildGun, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildGun) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildGun*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildGun(); \
	friend struct Z_Construct_UClass_AFGBuildGun_Statics; \
public: \
	DECLARE_CLASS(AFGBuildGun, AFGEquipment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildGun) \
	virtual UObject* _getUObject() const override { return const_cast<AFGBuildGun*>(this); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildGun(AFGBuildGun&&); \
	NO_API AFGBuildGun(const AFGBuildGun&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildGun(AFGBuildGun&&); \
	NO_API AFGBuildGun(const AFGBuildGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildGun)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mBuildDistanceMax() { return STRUCT_OFFSET(AFGBuildGun, mBuildDistanceMax); } \
	FORCEINLINE static uint32 __PPO__mMenuStateClass() { return STRUCT_OFFSET(AFGBuildGun, mMenuStateClass); } \
	FORCEINLINE static uint32 __PPO__mBuildStateClass() { return STRUCT_OFFSET(AFGBuildGun, mBuildStateClass); } \
	FORCEINLINE static uint32 __PPO__mDismantleStateClass() { return STRUCT_OFFSET(AFGBuildGun, mDismantleStateClass); } \
	FORCEINLINE static uint32 __PPO__mStates() { return STRUCT_OFFSET(AFGBuildGun, mStates); } \
	FORCEINLINE static uint32 __PPO__mHitResult() { return STRUCT_OFFSET(AFGBuildGun, mHitResult); } \
	FORCEINLINE static uint32 __PPO__mCurrentStateEnum() { return STRUCT_OFFSET(AFGBuildGun, mCurrentStateEnum); } \
	FORCEINLINE static uint32 __PPO__mCurrentState() { return STRUCT_OFFSET(AFGBuildGun, mCurrentState); }


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_164_PROLOG \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildGun>();

#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildGunAttachment(); \
	friend struct Z_Construct_UClass_AFGBuildGunAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGBuildGunAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildGunAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildGunAttachment(); \
	friend struct Z_Construct_UClass_AFGBuildGunAttachment_Statics; \
public: \
	DECLARE_CLASS(AFGBuildGunAttachment, AFGEquipmentAttachment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildGunAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildGunAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildGunAttachment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildGunAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildGunAttachment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildGunAttachment(AFGBuildGunAttachment&&); \
	NO_API AFGBuildGunAttachment(const AFGBuildGunAttachment&); \
public:


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildGunAttachment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildGunAttachment(AFGBuildGunAttachment&&); \
	NO_API AFGBuildGunAttachment(const AFGBuildGunAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildGunAttachment); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildGunAttachment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildGunAttachment)


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_385_PROLOG
#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_INCLASS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h_388_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildGunAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_Equipment_FGBuildGun_h


#define FOREACH_ENUM_EBUILDGUNSTATE(op) \
	op(EBuildGunState::BGS_NONE) \
	op(EBuildGunState::BGS_MENU) \
	op(EBuildGunState::BGS_BUILD) \
	op(EBuildGunState::BGS_DISMANTLE) 

enum class EBuildGunState : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EBuildGunState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
