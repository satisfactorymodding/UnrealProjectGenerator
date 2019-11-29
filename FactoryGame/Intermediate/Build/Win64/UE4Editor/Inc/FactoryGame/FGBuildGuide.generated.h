// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef FACTORYGAME_FGBuildGuide_generated_h
#error "FGBuildGuide.generated.h already included, missing '#pragma once' in FGBuildGuide.h"
#endif
#define FACTORYGAME_FGBuildGuide_generated_h

#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBuildGuideStartEnd) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_startPoint); \
		P_GET_STRUCT(FVector,Z_Param_endPoint); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_meshSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBuildGuideStartEnd(Z_Param_startPoint,Z_Param_endPoint,Z_Param_meshSize); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBuildGuideStartEnd) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_startPoint); \
		P_GET_STRUCT(FVector,Z_Param_endPoint); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_meshSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBuildGuideStartEnd(Z_Param_startPoint,Z_Param_endPoint,Z_Param_meshSize); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFGBuildGuide(); \
	friend struct Z_Construct_UClass_AFGBuildGuide_Statics; \
public: \
	DECLARE_CLASS(AFGBuildGuide, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildGuide)


#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_INCLASS \
private: \
	static void StaticRegisterNativesAFGBuildGuide(); \
	friend struct Z_Construct_UClass_AFGBuildGuide_Statics; \
public: \
	DECLARE_CLASS(AFGBuildGuide, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(AFGBuildGuide)


#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFGBuildGuide(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFGBuildGuide) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildGuide); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildGuide); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildGuide(AFGBuildGuide&&); \
	NO_API AFGBuildGuide(const AFGBuildGuide&); \
public:


#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFGBuildGuide(AFGBuildGuide&&); \
	NO_API AFGBuildGuide(const AFGBuildGuide&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFGBuildGuide); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFGBuildGuide); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFGBuildGuide)


#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_PRIVATE_PROPERTY_OFFSET
#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_49_PROLOG
#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_INCLASS \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_PRIVATE_PROPERTY_OFFSET \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_INCLASS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class AFGBuildGuide>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Hologram_FGBuildGuide_h


#define FOREACH_ENUM_EGUIDELINETYPE(op) \
	op(EGuideLineType::GLT_Default) \
	op(EGuideLineType::GLT_ConveyorBelt) 

enum class EGuideLineType : uint8;
template<> FACTORYGAME_API UEnum* StaticEnum<EGuideLineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
