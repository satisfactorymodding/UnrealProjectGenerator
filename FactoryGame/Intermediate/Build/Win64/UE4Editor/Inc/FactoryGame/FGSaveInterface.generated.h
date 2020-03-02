// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef FACTORYGAME_FGSaveInterface_generated_h
#error "FGSaveInterface.generated.h already included, missing '#pragma once' in FGSaveInterface.h"
#endif
#define FACTORYGAME_FGSaveInterface_generated_h

#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_RPC_WRAPPERS \
	virtual bool NeedTransform_Implementation() { return false; }; \
	virtual bool ShouldSave_Implementation() const { return false; }; \
	virtual void GatherDependencies_Implementation(TArray<UObject*>& out_dependentObjects) {}; \
	virtual void PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
	virtual void PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
	virtual void PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
	virtual void PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
 \
	DECLARE_FUNCTION(execNeedTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NeedTransform_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldSave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldSave_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGatherDependencies) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_out_dependentObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GatherDependencies_Implementation(Z_Param_Out_out_dependentObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostLoadGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostLoadGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreLoadGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreLoadGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostSaveGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostSaveGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreSaveGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreSaveGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool NeedTransform_Implementation() { return false; }; \
	virtual bool ShouldSave_Implementation() const { return false; }; \
	virtual void GatherDependencies_Implementation(TArray<UObject*>& out_dependentObjects) {}; \
	virtual void PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
	virtual void PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
	virtual void PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
	virtual void PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion) {}; \
 \
	DECLARE_FUNCTION(execNeedTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->NeedTransform_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldSave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldSave_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGatherDependencies) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_out_dependentObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GatherDependencies_Implementation(Z_Param_Out_out_dependentObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostLoadGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostLoadGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreLoadGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreLoadGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostSaveGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostSaveGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPreSaveGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_saveVersion); \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameVersion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PreSaveGame_Implementation(Z_Param_saveVersion,Z_Param_gameVersion); \
		P_NATIVE_END; \
	}


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_EVENT_PARMS \
	struct FGSaveInterface_eventGatherDependencies_Parms \
	{ \
		TArray<UObject*> out_dependentObjects; \
	}; \
	struct FGSaveInterface_eventNeedTransform_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGSaveInterface_eventNeedTransform_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct FGSaveInterface_eventPostLoadGame_Parms \
	{ \
		int32 saveVersion; \
		int32 gameVersion; \
	}; \
	struct FGSaveInterface_eventPostSaveGame_Parms \
	{ \
		int32 saveVersion; \
		int32 gameVersion; \
	}; \
	struct FGSaveInterface_eventPreLoadGame_Parms \
	{ \
		int32 saveVersion; \
		int32 gameVersion; \
	}; \
	struct FGSaveInterface_eventPreSaveGame_Parms \
	{ \
		int32 saveVersion; \
		int32 gameVersion; \
	}; \
	struct FGSaveInterface_eventShouldSave_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FGSaveInterface_eventShouldSave_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_CALLBACK_WRAPPERS
#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFGSaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSaveInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSaveInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSaveInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSaveInterface(UFGSaveInterface&&); \
	NO_API UFGSaveInterface(const UFGSaveInterface&); \
public:


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFGSaveInterface(UFGSaveInterface&&); \
	NO_API UFGSaveInterface(const UFGSaveInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFGSaveInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFGSaveInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFGSaveInterface)


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFGSaveInterface(); \
	friend struct Z_Construct_UClass_UFGSaveInterface_Statics; \
public: \
	DECLARE_CLASS(UFGSaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FactoryGame"), NO_API) \
	DECLARE_SERIALIZER(UFGSaveInterface)


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_GENERATED_UINTERFACE_BODY() \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFGSaveInterface() {} \
public: \
	typedef UFGSaveInterface UClassType; \
	typedef IFGSaveInterface ThisClass; \
	static void Execute_GatherDependencies(UObject* O, TArray<UObject*>& out_dependentObjects); \
	static bool Execute_NeedTransform(UObject* O); \
	static void Execute_PostLoadGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static void Execute_PostSaveGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static void Execute_PreLoadGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static void Execute_PreSaveGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static bool Execute_ShouldSave(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_INCLASS_IINTERFACE \
protected: \
	virtual ~IFGSaveInterface() {} \
public: \
	typedef UFGSaveInterface UClassType; \
	typedef IFGSaveInterface ThisClass; \
	static void Execute_GatherDependencies(UObject* O, TArray<UObject*>& out_dependentObjects); \
	static bool Execute_NeedTransform(UObject* O); \
	static void Execute_PostLoadGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static void Execute_PostSaveGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static void Execute_PreLoadGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static void Execute_PreSaveGame(UObject* O, int32 saveVersion, int32 gameVersion); \
	static bool Execute_ShouldSave(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_48_PROLOG \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_EVENT_PARMS


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_RPC_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_CALLBACK_WRAPPERS \
	FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h_52_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FACTORYGAME_API UClass* StaticClass<class UFGSaveInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FactoryGame_Source_FactoryGame_Public_FGSaveInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
