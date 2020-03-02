// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECompassViewDistance : uint8;
enum class EFogOfWarRevealType : uint8;
enum class ERepresentationType : uint8;
struct FLinearColor;
class UTexture2D;
struct FRotator;
struct FVector;
#ifdef FACTORYGAME_FGActorRepresentationInterface_generated_h
#error "FGActorRepresentationInterface.generated.h already included, missing '#pragma once' in FGActorRepresentationInterface.h"
#endif
#define FACTORYGAME_FGActorRepresentationInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_RPC_WRAPPERS \
	virtual ECompassViewDistance SetActorCompassViewDistance_Implementation(ECompassViewDistance compassViewDistance) { return (ECompassViewDistance)0; }; \
	virtual ECompassViewDistance GetActorCompassViewDistance_Implementation() { return (ECompassViewDistance)0; }; \
	virtual float GetActorFogOfWarRevealRadius_Implementation() { return 0; }; \
	virtual EFogOfWarRevealType GetActorFogOfWarRevealType_Implementation() { return (EFogOfWarRevealType)0; }; \
	virtual bool GetActorShouldShowOnMap_Implementation() { return false; }; \
	virtual bool GetActorShouldShowInCompass_Implementation() { return false; }; \
	virtual ERepresentationType GetActorRepresentationType_Implementation() { return (ERepresentationType)0; }; \
	virtual void SetActorRepresentationColor_Implementation(FLinearColor newColor) {}; \
	virtual FLinearColor GetActorRepresentationColor_Implementation() { return FLinearColor(ForceInit); }; \
	virtual FText SetActorRepresentationText_Implementation(FText const& newText) { return FText::GetEmpty(); }; \
	virtual FText GetActorRepresentationText_Implementation() { return FText::GetEmpty(); }; \
	virtual UTexture2D* GetActorRepresentationTexture_Implementation() { return NULL; }; \
	virtual FRotator GetRealActorRotation_Implementation() { return FRotator(ForceInit); }; \
	virtual FVector GetRealActorLocation_Implementation() { return FVector(ForceInit); }; \
	virtual bool IsActorStatic_Implementation() { return false; }; \
	virtual bool RemoveAsRepresentation_Implementation() { return false; }; \
	virtual bool UpdateRepresentation_Implementation() { return false; }; \
	virtual bool AddAsRepresentation_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execSetActorCompassViewDistance) \
	{ \
		P_GET_ENUM(ECompassViewDistance,Z_Param_compassViewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECompassViewDistance*)Z_Param__Result=P_THIS->SetActorCompassViewDistance_Implementation(ECompassViewDistance(Z_Param_compassViewDistance)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorCompassViewDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECompassViewDistance*)Z_Param__Result=P_THIS->GetActorCompassViewDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorFogOfWarRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActorFogOfWarRevealRadius_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorFogOfWarRevealType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFogOfWarRevealType*)Z_Param__Result=P_THIS->GetActorFogOfWarRevealType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorShouldShowOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetActorShouldShowOnMap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorShouldShowInCompass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetActorShouldShowInCompass_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERepresentationType*)Z_Param__Result=P_THIS->GetActorRepresentationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRepresentationColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorRepresentationColor_Implementation(Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetActorRepresentationColor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRepresentationText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_newText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->SetActorRepresentationText_Implementation(Z_Param_Out_newText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetActorRepresentationText_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetActorRepresentationTexture_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealActorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRealActorRotation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealActorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRealActorLocation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorStatic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorStatic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAsRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveAsRepresentation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateRepresentation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAsRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddAsRepresentation_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ECompassViewDistance SetActorCompassViewDistance_Implementation(ECompassViewDistance compassViewDistance) { return (ECompassViewDistance)0; }; \
	virtual ECompassViewDistance GetActorCompassViewDistance_Implementation() { return (ECompassViewDistance)0; }; \
	virtual float GetActorFogOfWarRevealRadius_Implementation() { return 0; }; \
	virtual EFogOfWarRevealType GetActorFogOfWarRevealType_Implementation() { return (EFogOfWarRevealType)0; }; \
	virtual bool GetActorShouldShowOnMap_Implementation() { return false; }; \
	virtual bool GetActorShouldShowInCompass_Implementation() { return false; }; \
	virtual ERepresentationType GetActorRepresentationType_Implementation() { return (ERepresentationType)0; }; \
	virtual void SetActorRepresentationColor_Implementation(FLinearColor newColor) {}; \
	virtual FLinearColor GetActorRepresentationColor_Implementation() { return FLinearColor(ForceInit); }; \
	virtual FText SetActorRepresentationText_Implementation(FText const& newText) { return FText::GetEmpty(); }; \
	virtual FText GetActorRepresentationText_Implementation() { return FText::GetEmpty(); }; \
	virtual UTexture2D* GetActorRepresentationTexture_Implementation() { return NULL; }; \
	virtual FRotator GetRealActorRotation_Implementation() { return FRotator(ForceInit); }; \
	virtual FVector GetRealActorLocation_Implementation() { return FVector(ForceInit); }; \
	virtual bool IsActorStatic_Implementation() { return false; }; \
	virtual bool RemoveAsRepresentation_Implementation() { return false; }; \
	virtual bool UpdateRepresentation_Implementation() { return false; }; \
	virtual bool AddAsRepresentation_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execSetActorCompassViewDistance) \
	{ \
		P_GET_ENUM(ECompassViewDistance,Z_Param_compassViewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECompassViewDistance*)Z_Param__Result=P_THIS->SetActorCompassViewDistance_Implementation(ECompassViewDistance(Z_Param_compassViewDistance)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorCompassViewDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECompassViewDistance*)Z_Param__Result=P_THIS->GetActorCompassViewDistance_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorFogOfWarRevealRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetActorFogOfWarRevealRadius_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorFogOfWarRevealType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EFogOfWarRevealType*)Z_Param__Result=P_THIS->GetActorFogOfWarRevealType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorShouldShowOnMap) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetActorShouldShowOnMap_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorShouldShowInCompass) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetActorShouldShowInCompass_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERepresentationType*)Z_Param__Result=P_THIS->GetActorRepresentationType_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRepresentationColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_newColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetActorRepresentationColor_Implementation(Z_Param_newColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationColor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetActorRepresentationColor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActorRepresentationText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_newText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->SetActorRepresentationText_Implementation(Z_Param_Out_newText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetActorRepresentationText_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorRepresentationTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetActorRepresentationTexture_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealActorRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetRealActorRotation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRealActorLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetRealActorLocation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActorStatic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActorStatic_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAsRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->RemoveAsRepresentation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->UpdateRepresentation_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAsRepresentation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AddAsRepresentation_Implementation(); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_EVENT_PARMS \
	struct FGActorRepresentationInterface_eventAddAsRepresentation_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventAddAsRepresentation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorCompassViewDistance_Parms \
	{ \
		ECompassViewDistance ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorCompassViewDistance_Parms() \
			: ReturnValue((ECompassViewDistance)0) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorFogOfWarRevealRadius_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorFogOfWarRevealRadius_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorFogOfWarRevealType_Parms \
	{ \
		EFogOfWarRevealType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorFogOfWarRevealType_Parms() \
			: ReturnValue((EFogOfWarRevealType)0) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorRepresentationColor_Parms \
	{ \
		FLinearColor ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorRepresentationColor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorRepresentationText_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct FGActorRepresentationInterface_eventGetActorRepresentationTexture_Parms \
	{ \
		UTexture2D* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorRepresentationTexture_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorRepresentationType_Parms \
	{ \
		ERepresentationType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorRepresentationType_Parms() \
			: ReturnValue((ERepresentationType)0) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorShouldShowInCompass_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorShouldShowInCompass_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetActorShouldShowOnMap_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetActorShouldShowOnMap_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetRealActorLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetRealActorLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventGetRealActorRotation_Parms \
	{ \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventGetRealActorRotation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventIsActorStatic_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventIsActorStatic_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventRemoveAsRepresentation_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventRemoveAsRepresentation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventSetActorCompassViewDistance_Parms \
	{ \
		ECompassViewDistance compassViewDistance; \
		ECompassViewDistance ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventSetActorCompassViewDistance_Parms() \
			: ReturnValue((ECompassViewDistance)0) \
		{ \
		} \
	}; \
	struct FGActorRepresentationInterface_eventSetActorRepresentationColor_Parms \
	{ \
		FLinearColor newColor; \
	}; \
	struct FGActorRepresentationInterface_eventSetActorRepresentationText_Parms \
	{ \
		FText newText; \
		FText ReturnValue; \
	}; \
	struct FGActorRepresentationInterface_eventUpdateRepresentation_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGActorRepresentationInterface_eventUpdateRepresentation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGActorRepresentationInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGActorRepresentationInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGActorRepresentationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGActorRepresentationInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGActorRepresentationInterface(UFGActorRepresentationInterface&&); \
	NO_API UFGActorRepresentationInterface(const UFGActorRepresentationInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGActorRepresentationInterface(UFGActorRepresentationInterface&&); \
	NO_API UFGActorRepresentationInterface(const UFGActorRepresentationInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGActorRepresentationInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGActorRepresentationInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGActorRepresentationInterface)


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGActorRepresentationInterface(); \
	friend struct Z_Construct_UClass_UFGActorRepresentationInterface_Statics; \
public: \
	DECLARE_CLASS(UFGActorRepresentationInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGActorRepresentationInterface)


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGActorRepresentationInterface() {} \
public: \
	typedef UFGActorRepresentationInterface UClassType; \
	typedef IFGActorRepresentationInterface ThisClass; \
	static bool Execute_AddAsRepresentation(UObject* O); \
	static ECompassViewDistance Execute_GetActorCompassViewDistance(UObject* O); \
	static float Execute_GetActorFogOfWarRevealRadius(UObject* O); \
	static EFogOfWarRevealType Execute_GetActorFogOfWarRevealType(UObject* O); \
	static FLinearColor Execute_GetActorRepresentationColor(UObject* O); \
	static FText Execute_GetActorRepresentationText(UObject* O); \
	static UTexture2D* Execute_GetActorRepresentationTexture(UObject* O); \
	static ERepresentationType Execute_GetActorRepresentationType(UObject* O); \
	static bool Execute_GetActorShouldShowInCompass(UObject* O); \
	static bool Execute_GetActorShouldShowOnMap(UObject* O); \
	static FVector Execute_GetRealActorLocation(UObject* O); \
	static FRotator Execute_GetRealActorRotation(UObject* O); \
	static bool Execute_IsActorStatic(UObject* O); \
	static bool Execute_RemoveAsRepresentation(UObject* O); \
	static ECompassViewDistance Execute_SetActorCompassViewDistance(UObject* O, ECompassViewDistance compassViewDistance); \
	static void Execute_SetActorRepresentationColor(UObject* O, FLinearColor newColor); \
	static FText Execute_SetActorRepresentationText(UObject* O, FText const& newText); \
	static bool Execute_UpdateRepresentation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGActorRepresentationInterface() {} \
public: \
	typedef UFGActorRepresentationInterface UClassType; \
	typedef IFGActorRepresentationInterface ThisClass; \
	static bool Execute_AddAsRepresentation(UObject* O); \
	static ECompassViewDistance Execute_GetActorCompassViewDistance(UObject* O); \
	static float Execute_GetActorFogOfWarRevealRadius(UObject* O); \
	static EFogOfWarRevealType Execute_GetActorFogOfWarRevealType(UObject* O); \
	static FLinearColor Execute_GetActorRepresentationColor(UObject* O); \
	static FText Execute_GetActorRepresentationText(UObject* O); \
	static UTexture2D* Execute_GetActorRepresentationTexture(UObject* O); \
	static ERepresentationType Execute_GetActorRepresentationType(UObject* O); \
	static bool Execute_GetActorShouldShowInCompass(UObject* O); \
	static bool Execute_GetActorShouldShowOnMap(UObject* O); \
	static FVector Execute_GetRealActorLocation(UObject* O); \
	static FRotator Execute_GetRealActorRotation(UObject* O); \
	static bool Execute_IsActorStatic(UObject* O); \
	static bool Execute_RemoveAsRepresentation(UObject* O); \
	static ECompassViewDistance Execute_SetActorCompassViewDistance(UObject* O, ECompassViewDistance compassViewDistance); \
	static void Execute_SetActorRepresentationColor(UObject* O, FLinearColor newColor); \
	static FText Execute_SetActorRepresentationText(UObject* O, FText const& newText); \
	static bool Execute_UpdateRepresentation(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_11_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGActorRepresentationInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGActorRepresentationInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
