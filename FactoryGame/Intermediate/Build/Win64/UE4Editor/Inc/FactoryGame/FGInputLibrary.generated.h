// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FKey;
struct FInputActionKeyMapping;
struct FFGKeyMapping;
struct FInputEvent;
struct FInputAxisKeyMapping;
#ifdef FACTORYGAME_FGInputLibrary_generated_h
#error "FGInputLibrary.generated.h already included, missing '#pragma once' in FGInputLibrary.h"
#endif
#define FACTORYGAME_FGInputLibrary_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFGKeyMapping_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FACTORYGAME_API UScriptStruct* StaticStruct<struct FFGKeyMapping>();

#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsKeyMappingRelevant) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_keyMappingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsKeyMappingRelevant(Z_Param_keyMappingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFormatStringWithKeyNames) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UTextProperty,Z_Param_textToFormat); \
		P_GET_UBOOL(Z_Param_abbreviateKeyNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::FormatStringWithKeyNames(Z_Param_playerController,Z_Param_textToFormat,Z_Param_abbreviateKeyNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbbreviatedKeyName) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::GetAbbreviatedKeyName(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyNameForAxis) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_axisName); \
		P_GET_UBOOL(Z_Param_positiveAxisScale); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::GetKeyNameForAxis(Z_Param_playerController,Z_Param_axisName,Z_Param_positiveAxisScale,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyForAxis) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_axisName); \
		P_GET_UBOOL(Z_Param_positiveAxisScale); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UFGInputLibrary::GetKeyForAxis(Z_Param_playerController,Z_Param_axisName,Z_Param_positiveAxisScale,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyNameForAction) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_actionName); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_GET_UBOOL(Z_Param_abbreviateKeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::GetKeyNameForAction(Z_Param_playerController,Z_Param_actionName,Z_Param_getGamepadKey,Z_Param_abbreviateKeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyMappingForAction) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_inAction); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputActionKeyMapping*)Z_Param__Result=UFGInputLibrary::GetKeyMappingForAction(Z_Param_playerController,Z_Param_inAction,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInputMappings) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInputLibrary::UpdateInputMappings(Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebindKey) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_newKeyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::RebindKey(Z_Param_playerController,Z_Param_Out_newKeyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingKeyMapping) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGKeyMapping*)Z_Param__Result=UFGInputLibrary::GetOverlappingKeyMapping(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAxisKeyMappingAvailable) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsAxisKeyMappingAvailable(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActionKeyMappingAvailable) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsActionKeyMappingAvailable(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFGKeyMappingAvailable) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsFGKeyMappingAvailable(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNullKeyMappingWithSameKeyCombo) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInputLibrary::NullKeyMappingWithSameKeyCombo(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFGKeyMappingStruct) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_actionName); \
		P_GET_UBOOL(Z_Param_isAxisMapping); \
		P_GET_UBOOL(Z_Param_positiveAxisScale); \
		P_GET_STRUCT(FInputEvent,Z_Param_inputEvent); \
		P_GET_STRUCT(FKey,Z_Param_keyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGKeyMapping*)Z_Param__Result=UFGInputLibrary::CreateFGKeyMappingStruct(Z_Param_actionName,Z_Param_isAxisMapping,Z_Param_positiveAxisScale,Z_Param_inputEvent,Z_Param_keyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActionAndAxisMappingUsingSameKeys) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_actionMapping); \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_axisMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsActionAndAxisMappingUsingSameKeys(Z_Param_Out_actionMapping,Z_Param_Out_axisMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAxisMappingUsingSameKeys) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_mappingA); \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_mappingB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsAxisMappingUsingSameKeys(Z_Param_Out_mappingA,Z_Param_Out_mappingB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActionMappingUsingSameKeys) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_mappingA); \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_mappingB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsActionMappingUsingSameKeys(Z_Param_Out_mappingA,Z_Param_Out_mappingB); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsKeyMappingRelevant) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_keyMappingName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsKeyMappingRelevant(Z_Param_keyMappingName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFormatStringWithKeyNames) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UTextProperty,Z_Param_textToFormat); \
		P_GET_UBOOL(Z_Param_abbreviateKeyNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::FormatStringWithKeyNames(Z_Param_playerController,Z_Param_textToFormat,Z_Param_abbreviateKeyNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAbbreviatedKeyName) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::GetAbbreviatedKeyName(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyNameForAxis) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_axisName); \
		P_GET_UBOOL(Z_Param_positiveAxisScale); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::GetKeyNameForAxis(Z_Param_playerController,Z_Param_axisName,Z_Param_positiveAxisScale,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyForAxis) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_axisName); \
		P_GET_UBOOL(Z_Param_positiveAxisScale); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UFGInputLibrary::GetKeyForAxis(Z_Param_playerController,Z_Param_axisName,Z_Param_positiveAxisScale,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyNameForAction) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_actionName); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_GET_UBOOL(Z_Param_abbreviateKeyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UFGInputLibrary::GetKeyNameForAction(Z_Param_playerController,Z_Param_actionName,Z_Param_getGamepadKey,Z_Param_abbreviateKeyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetKeyMappingForAction) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_PROPERTY(UNameProperty,Z_Param_inAction); \
		P_GET_UBOOL(Z_Param_getGamepadKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FInputActionKeyMapping*)Z_Param__Result=UFGInputLibrary::GetKeyMappingForAction(Z_Param_playerController,Z_Param_inAction,Z_Param_getGamepadKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateInputMappings) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInputLibrary::UpdateInputMappings(Z_Param_playerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRebindKey) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_newKeyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::RebindKey(Z_Param_playerController,Z_Param_Out_newKeyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingKeyMapping) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGKeyMapping*)Z_Param__Result=UFGInputLibrary::GetOverlappingKeyMapping(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAxisKeyMappingAvailable) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsAxisKeyMappingAvailable(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActionKeyMappingAvailable) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsActionKeyMappingAvailable(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFGKeyMappingAvailable) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsFGKeyMappingAvailable(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNullKeyMappingWithSameKeyCombo) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_playerController); \
		P_GET_STRUCT_REF(FFGKeyMapping,Z_Param_Out_keyMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFGInputLibrary::NullKeyMappingWithSameKeyCombo(Z_Param_playerController,Z_Param_Out_keyMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFGKeyMappingStruct) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_actionName); \
		P_GET_UBOOL(Z_Param_isAxisMapping); \
		P_GET_UBOOL(Z_Param_positiveAxisScale); \
		P_GET_STRUCT(FInputEvent,Z_Param_inputEvent); \
		P_GET_STRUCT(FKey,Z_Param_keyPressed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFGKeyMapping*)Z_Param__Result=UFGInputLibrary::CreateFGKeyMappingStruct(Z_Param_actionName,Z_Param_isAxisMapping,Z_Param_positiveAxisScale,Z_Param_inputEvent,Z_Param_keyPressed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActionAndAxisMappingUsingSameKeys) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_actionMapping); \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_axisMapping); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsActionAndAxisMappingUsingSameKeys(Z_Param_Out_actionMapping,Z_Param_Out_axisMapping); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAxisMappingUsingSameKeys) \
	{ \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_mappingA); \
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_mappingB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsAxisMappingUsingSameKeys(Z_Param_Out_mappingA,Z_Param_Out_mappingB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActionMappingUsingSameKeys) \
	{ \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_mappingA); \
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_mappingB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFGInputLibrary::IsActionMappingUsingSameKeys(Z_Param_Out_mappingA,Z_Param_Out_mappingB); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFGInputLibrary(); \
	friend struct Z_Construct_UClass_UFGInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInputLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUFGInputLibrary(); \
	friend struct Z_Construct_UClass_UFGInputLibrary_Statics; \
public: \
	DECLARE_CLASS(UFGInputLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGInputLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInputLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInputLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInputLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInputLibrary(UFGInputLibrary&&); \
	NO_API UFGInputLibrary(const UFGInputLibrary&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGInputLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGInputLibrary(UFGInputLibrary&&); \
	NO_API UFGInputLibrary(const UFGInputLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGInputLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGInputLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGInputLibrary)


#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_38_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_INCLASS \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGInputLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGInputLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
