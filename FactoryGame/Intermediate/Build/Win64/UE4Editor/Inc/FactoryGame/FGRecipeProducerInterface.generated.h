// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FACTORYGAME_FGRecipeProducerInterface_generated_h
#error "FGRecipeProducerInterface.generated.h already included, missing '#pragma once' in FGRecipeProducerInterface.h"
#endif
#define FACTORYGAME_FGRecipeProducerInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_RPC_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGRecipeProducerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRecipeProducerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRecipeProducerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRecipeProducerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRecipeProducerInterface(UFGRecipeProducerInterface&&); \
	NO_API UFGRecipeProducerInterface(const UFGRecipeProducerInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGRecipeProducerInterface(UFGRecipeProducerInterface&&); \
	NO_API UFGRecipeProducerInterface(const UFGRecipeProducerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGRecipeProducerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGRecipeProducerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGRecipeProducerInterface)


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGRecipeProducerInterface(); \
	friend struct Z_Construct_UClass_UFGRecipeProducerInterface_Statics; \
public: \
	DECLARE_CLASS(UFGRecipeProducerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGRecipeProducerInterface)


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGRecipeProducerInterface() {} \
public: \
	typedef UFGRecipeProducerInterface UClassType; \
	typedef IFGRecipeProducerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGRecipeProducerInterface() {} \
public: \
	typedef UFGRecipeProducerInterface UClassType; \
	typedef IFGRecipeProducerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_11_PROLOG
#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGRecipeProducerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGRecipeProducerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
