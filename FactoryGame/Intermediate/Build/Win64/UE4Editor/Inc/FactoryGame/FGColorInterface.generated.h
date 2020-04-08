// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFGCharacterPlayer;
struct FLinearColor;
#ifdef FACTORYGAME_FGColorInterface_generated_h
#error "FGColorInterface.generated.h already included, missing '#pragma once' in FGColorInterface.h"
#endif
#define FACTORYGAME_FGColorInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_RPC_WRAPPERS \
	virtual void StopIsAimedAtForColor_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual void StartIsAimedAtForColor_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual bool GetCanBeColored_Implementation() { return false; }; \
	virtual uint8 GetColorSlot_Implementation() { return 0; }; \
	virtual FLinearColor GetSecondaryColor_Implementation() { return FLinearColor(ForceInit); }; \
	virtual FLinearColor GetPrimaryColor_Implementation() { return FLinearColor(ForceInit); }; \
	virtual void SetColorSlot_Implementation(uint8 index) {}; \
 \
	DECLARE_FUNCTION(execStopIsAimedAtForColor) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopIsAimedAtForColor_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIsAimedAtForColor) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIsAimedAtForColor_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanBeColored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanBeColored_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetColorSlot_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryColor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPrimaryColor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorSlot_Implementation(Z_Param_index); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopIsAimedAtForColor_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual void StartIsAimedAtForColor_Implementation(AFGCharacterPlayer* byCharacter) {}; \
	virtual bool GetCanBeColored_Implementation() { return false; }; \
	virtual uint8 GetColorSlot_Implementation() { return 0; }; \
	virtual FLinearColor GetSecondaryColor_Implementation() { return FLinearColor(ForceInit); }; \
	virtual FLinearColor GetPrimaryColor_Implementation() { return FLinearColor(ForceInit); }; \
	virtual void SetColorSlot_Implementation(uint8 index) {}; \
 \
	DECLARE_FUNCTION(execStopIsAimedAtForColor) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopIsAimedAtForColor_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartIsAimedAtForColor) \
	{ \
		P_GET_OBJECT(AFGCharacterPlayer,Z_Param_byCharacter); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIsAimedAtForColor_Implementation(Z_Param_byCharacter); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCanBeColored) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetCanBeColored_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColorSlot) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetColorSlot_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSecondaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSecondaryColor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPrimaryColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetPrimaryColor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetColorSlot) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetColorSlot_Implementation(Z_Param_index); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_EVENT_PARMS \
	struct FGColorInterface_eventGetCanBeColored_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGColorInterface_eventGetCanBeColored_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGColorInterface_eventGetColorSlot_Parms \
	{ \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGColorInterface_eventGetColorSlot_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FGColorInterface_eventGetPrimaryColor_Parms \
	{ \
		FLinearColor ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGColorInterface_eventGetPrimaryColor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGColorInterface_eventGetSecondaryColor_Parms \
	{ \
		FLinearColor ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGColorInterface_eventGetSecondaryColor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGColorInterface_eventSetColorSlot_Parms \
	{ \
		uint8 index; \
	}; \
	struct FGColorInterface_eventStartIsAimedAtForColor_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
	}; \
	struct FGColorInterface_eventStopIsAimedAtForColor_Parms \
	{ \
		AFGCharacterPlayer* byCharacter; \
	};


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGColorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGColorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGColorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGColorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGColorInterface(UFGColorInterface&&); \
	NO_API UFGColorInterface(const UFGColorInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGColorInterface(UFGColorInterface&&); \
	NO_API UFGColorInterface(const UFGColorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGColorInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGColorInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGColorInterface)


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGColorInterface(); \
	friend struct Z_Construct_UClass_UFGColorInterface_Statics; \
public: \
	DECLARE_CLASS(UFGColorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGColorInterface)


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	FORCEINLINE virtual ~IFGColorInterface() {} \
public: \
	typedef UFGColorInterface UClassType; \
	typedef IFGColorInterface ThisClass; \
	static bool Execute_GetCanBeColored(UObject* O); \
	static uint8 Execute_GetColorSlot(UObject* O); \
	static FLinearColor Execute_GetPrimaryColor(UObject* O); \
	static FLinearColor Execute_GetSecondaryColor(UObject* O); \
	static void Execute_SetColorSlot(UObject* O, uint8 index); \
	static void Execute_StartIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter); \
	static void Execute_StopIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_INCLASS_IINTERFACE \
protected: \
	FORCEINLINE virtual ~IFGColorInterface() {} \
public: \
	typedef UFGColorInterface UClassType; \
	typedef IFGColorInterface ThisClass; \
	static bool Execute_GetCanBeColored(UObject* O); \
	static uint8 Execute_GetColorSlot(UObject* O); \
	static FLinearColor Execute_GetPrimaryColor(UObject* O); \
	static FLinearColor Execute_GetSecondaryColor(UObject* O); \
	static void Execute_SetColorSlot(UObject* O, uint8 index); \
	static void Execute_StartIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter); \
	static void Execute_StopIsAimedAtForColor(UObject* O, AFGCharacterPlayer* byCharacter); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGColorInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGColorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGColorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
