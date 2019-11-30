// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/FGUseableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGUseableInterface() {}
// Cross Module References
	FACTORYGAME_API UScriptStruct* Z_Construct_UScriptStruct_FUseState();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_Valid_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseState_Valid();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGUseableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGCharacterPlayer_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_IsUseable();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_OnUse();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_OnUseStop();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_UFGUseableInterface_UpdateUseState();
// End Cross Module References
class UScriptStruct* FUseState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTORYGAME_API uint32 Get_Z_Construct_UScriptStruct_FUseState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUseState, Z_Construct_UPackage__Script_FactoryGame(), TEXT("UseState"), sizeof(FUseState), Get_Z_Construct_UScriptStruct_FUseState_Hash());
	}
	return Singleton;
}
template<> FACTORYGAME_API UScriptStruct* StaticStruct<FUseState>()
{
	return FUseState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUseState(FUseState::StaticStruct, TEXT("/Script/FactoryGame"), TEXT("UseState"), false, nullptr, nullptr);
static struct FScriptStruct_FactoryGame_StaticRegisterNativesFUseState
{
	FScriptStruct_FactoryGame_StaticRegisterNativesFUseState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UseState")),new UScriptStruct::TCppStructOps<FUseState>);
	}
} ScriptStruct_FactoryGame_StaticRegisterNativesFUseState;
	struct Z_Construct_UScriptStruct_FUseState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UseLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUseState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Describes a state of a useable object for the player that tries to use it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUseState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUseState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUseState_Statics::NewProp_State_MetaData[] = {
		{ "Category", "UseState" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Contains the usable state of the object, might be a error code" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUseState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0024080000000014, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUseState, State), Z_Construct_UClass_UFGUseState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_State_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseComponent_MetaData[] = {
		{ "Category", "UseState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Component that triggered the use" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseComponent = { "UseComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUseState, UseComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseComponent_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseLocation_MetaData[] = {
		{ "Category", "UseState" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Location of where the use happens" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseLocation = { "UseLocation", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUseState, UseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUseState_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "Category", "UseState" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Additional data that might be heavy to calculate several times the same frame, the reason it's cached here and not in the object, is that several players might want to cache different things" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUseState_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUseState, AdditionalData), Z_Construct_UClass_UFGUseState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_AdditionalData_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FUseState_Statics::NewProp_AdditionalData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUseState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUseState_Statics::NewProp_UseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUseState_Statics::NewProp_AdditionalData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUseState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
		nullptr,
		&NewStructOps,
		"UseState",
		sizeof(FUseState),
		alignof(FUseState),
		Z_Construct_UScriptStruct_FUseState_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FUseState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUseState_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FUseState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUseState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUseState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UseState"), sizeof(FUseState), Get_Z_Construct_UScriptStruct_FUseState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUseState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUseState_Hash() { return 2916474930U; }
	void UFGUseState::StaticRegisterNativesUFGUseState()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_NoRegister()
	{
		return UFGUseState::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsUsableState_MetaData[];
#endif
		static void NewProp_mIsUsableState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsUsableState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWantAdditonalData_MetaData[];
#endif
		static void NewProp_mWantAdditonalData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mWantAdditonalData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FGUseableInterface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_Statics::NewProp_mIsUsableState_MetaData[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "If true, we will allocate a instance of the state, so we can store information in the state" },
	};
#endif
	void Z_Construct_UClass_UFGUseState_Statics::NewProp_mIsUsableState_SetBit(void* Obj)
	{
		((UFGUseState*)Obj)->mIsUsableState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGUseState_Statics::NewProp_mIsUsableState = { "mIsUsableState", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGUseState), &Z_Construct_UClass_UFGUseState_Statics::NewProp_mIsUsableState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGUseState_Statics::NewProp_mIsUsableState_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_Statics::NewProp_mIsUsableState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_Statics::NewProp_mWantAdditonalData_MetaData[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "If true, we will allocate a instance of the state, so we can store information in the state" },
	};
#endif
	void Z_Construct_UClass_UFGUseState_Statics::NewProp_mWantAdditonalData_SetBit(void* Obj)
	{
		((UFGUseState*)Obj)->mWantAdditonalData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFGUseState_Statics::NewProp_mWantAdditonalData = { "mWantAdditonalData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFGUseState), &Z_Construct_UClass_UFGUseState_Statics::NewProp_mWantAdditonalData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFGUseState_Statics::NewProp_mWantAdditonalData_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_Statics::NewProp_mWantAdditonalData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFGUseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGUseState_Statics::NewProp_mIsUsableState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFGUseState_Statics::NewProp_mWantAdditonalData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_Statics::ClassParams = {
		&UFGUseState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFGUseState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFGUseState_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState, 1433218122);
	template<> FACTORYGAME_API UClass* StaticClass<UFGUseState>()
	{
		return UFGUseState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState(Z_Construct_UClass_UFGUseState, &UFGUseState::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState);
	void UFGUseState_Valid::StaticRegisterNativesUFGUseState_Valid()
	{
	}
	UClass* Z_Construct_UClass_UFGUseState_Valid_NoRegister()
	{
		return UFGUseState_Valid::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseState_Valid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseState_Valid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFGUseState,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseState_Valid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FGUseableInterface.h" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Default valid state for things to use whenever things just works as they should" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseState_Valid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFGUseState_Valid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseState_Valid_Statics::ClassParams = {
		&UFGUseState_Valid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseState_Valid_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseState_Valid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseState_Valid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseState_Valid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseState_Valid, 1788961463);
	template<> FACTORYGAME_API UClass* StaticClass<UFGUseState_Valid>()
	{
		return UFGUseState_Valid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseState_Valid(Z_Construct_UClass_UFGUseState_Valid, &UFGUseState_Valid::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseState_Valid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseState_Valid);
	FText IFGUseableInterface::GetLookAtDecription(AFGCharacterPlayer* byCharacter, FUseState const& state) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLookAtDecription instead.");
		FGUseableInterface_eventGetLookAtDecription_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IFGUseableInterface::IsUseable() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsUseable instead.");
		FGUseableInterface_eventIsUseable_Parms Parms;
		return Parms.ReturnValue;
	}
	void IFGUseableInterface::OnUse(AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUse instead.");
	}
	void IFGUseableInterface::OnUseStop(AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUseStop instead.");
	}
	void IFGUseableInterface::RegisterInteractingPlayer(AFGCharacterPlayer* player)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterInteractingPlayer instead.");
	}
	void IFGUseableInterface::StartIsLookedAt(AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartIsLookedAt instead.");
	}
	void IFGUseableInterface::StopIsLookedAt(AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopIsLookedAt instead.");
	}
	void IFGUseableInterface::UnregisterInteractingPlayer(AFGCharacterPlayer* player)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnregisterInteractingPlayer instead.");
	}
	void IFGUseableInterface::UpdateUseState(AFGCharacterPlayer* byCharacter, FVector const& atLocation, UPrimitiveComponent* componentHit, FUseState& out_useState) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateUseState instead.");
	}
	void UFGUseableInterface::StaticRegisterNativesUFGUseableInterface()
	{
		UClass* Class = UFGUseableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLookAtDecription", &IFGUseableInterface::execGetLookAtDecription },
			{ "IsUseable", &IFGUseableInterface::execIsUseable },
			{ "OnUse", &IFGUseableInterface::execOnUse },
			{ "OnUseStop", &IFGUseableInterface::execOnUseStop },
			{ "RegisterInteractingPlayer", &IFGUseableInterface::execRegisterInteractingPlayer },
			{ "StartIsLookedAt", &IFGUseableInterface::execStartIsLookedAt },
			{ "StopIsLookedAt", &IFGUseableInterface::execStopIsLookedAt },
			{ "UnregisterInteractingPlayer", &IFGUseableInterface::execUnregisterInteractingPlayer },
			{ "UpdateUseState", &IFGUseableInterface::execUpdateUseState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventGetLookAtDecription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventGetLookAtDecription_Parms, state), Z_Construct_UScriptStruct_FUseState, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventGetLookAtDecription_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Called every frame when we are looked at, get a localized text on how we can be used\n\n@param byCharacter   Character that uses the object.\n@param state                 The state that describes how the object reacts to interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "GetLookAtDecription", sizeof(FGUseableInterface_eventGetLookAtDecription_Parms), Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGUseableInterface_eventIsUseable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGUseableInterface_eventIsUseable_Parms), &Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Checks if this actor is usable (a good example of a not useable actor is a alive enemy)\nThis should primarily be used when we don't want the outline to show up\n@note Called on both server and client.\n\n@return      true if this object is in a useable state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "IsUseable", sizeof(FGUseableInterface_eventIsUseable_Parms), Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_IsUseable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_IsUseable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventOnUse_Parms, state), Z_Construct_UScriptStruct_FUseState, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventOnUse_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Called when a character tries to use this actor.\n@note Called on both server and client.\n\n@param byCharacter   Character that uses the object.\n@param state                 The state that describes how the object reacts to interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "OnUse", sizeof(FGUseableInterface_eventOnUse_Parms), Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_OnUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventOnUseStop_Parms, state), Z_Construct_UScriptStruct_FUseState, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventOnUseStop_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Called when a character releases the use button\n@note Called on both server and client.\n\n@param byCharacter    Character that uses the object.\n@param state                  The state that describes how the object reacts to interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "OnUseStop", sizeof(FGUseableInterface_eventOnUseStop_Parms), Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_OnUseStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_OnUseStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventRegisterInteractingPlayer_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Called from widgets that are opened by the use functionality" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "RegisterInteractingPlayer", sizeof(FGUseableInterface_eventRegisterInteractingPlayer_Parms), Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventStartIsLookedAt_Parms, state), Z_Construct_UScriptStruct_FUseState, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventStartIsLookedAt_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Called on by the interface if we are looking at something that's useable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "StartIsLookedAt", sizeof(FGUseableInterface_eventStartIsLookedAt_Parms), Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::NewProp_state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventStopIsLookedAt_Parms, state), Z_Construct_UScriptStruct_FUseState, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::NewProp_state_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::NewProp_state_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventStopIsLookedAt_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Called when we stop looking at the item" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "StopIsLookedAt", sizeof(FGUseableInterface_eventStopIsLookedAt_Parms), Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventUnregisterInteractingPlayer_Parms, player), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Called from widgets that are opened by the use functionality" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "UnregisterInteractingPlayer", sizeof(FGUseableInterface_eventUnregisterInteractingPlayer_Parms), Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_out_useState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_componentHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_componentHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_atLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_atLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_byCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_out_useState = { "out_useState", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventUpdateUseState_Parms, out_useState), Z_Construct_UScriptStruct_FUseState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_componentHit_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_componentHit = { "componentHit", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventUpdateUseState_Parms, componentHit), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_componentHit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_componentHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_atLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_atLocation = { "atLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventUpdateUseState_Parms, atLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_atLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_atLocation_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_byCharacter = { "byCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGUseableInterface_eventUpdateUseState_Parms, byCharacter), Z_Construct_UClass_AFGCharacterPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_out_useState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_componentHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_atLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::NewProp_byCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Use" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ToolTip", "Get the current use state for a object\n@param byCharacter   The character that want to use the object\n@param atLocation    Location on the object where the use is triggered (simulated location on client).\n@param componentHit  The component that the trace hit when looking at the object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFGUseableInterface, nullptr, "UpdateUseState", sizeof(FGUseableInterface_eventUpdateUseState_Parms), Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFGUseableInterface_UpdateUseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFGUseableInterface_UpdateUseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFGUseableInterface_NoRegister()
	{
		return UFGUseableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFGUseableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFGUseableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFGUseableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFGUseableInterface_GetLookAtDecription, "GetLookAtDecription" }, // 1321331063
		{ &Z_Construct_UFunction_UFGUseableInterface_IsUseable, "IsUseable" }, // 1136572136
		{ &Z_Construct_UFunction_UFGUseableInterface_OnUse, "OnUse" }, // 1743476151
		{ &Z_Construct_UFunction_UFGUseableInterface_OnUseStop, "OnUseStop" }, // 1988596226
		{ &Z_Construct_UFunction_UFGUseableInterface_RegisterInteractingPlayer, "RegisterInteractingPlayer" }, // 1899526737
		{ &Z_Construct_UFunction_UFGUseableInterface_StartIsLookedAt, "StartIsLookedAt" }, // 1181732175
		{ &Z_Construct_UFunction_UFGUseableInterface_StopIsLookedAt, "StopIsLookedAt" }, // 3822511063
		{ &Z_Construct_UFunction_UFGUseableInterface_UnregisterInteractingPlayer, "UnregisterInteractingPlayer" }, // 2999315746
		{ &Z_Construct_UFunction_UFGUseableInterface_UpdateUseState, "UpdateUseState" }, // 2308972575
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFGUseableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FGUseableInterface.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFGUseableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFGUseableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFGUseableInterface_Statics::ClassParams = {
		&UFGUseableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFGUseableInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFGUseableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFGUseableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFGUseableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFGUseableInterface, 1675706469);
	template<> FACTORYGAME_API UClass* StaticClass<UFGUseableInterface>()
	{
		return UFGUseableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFGUseableInterface(Z_Construct_UClass_UFGUseableInterface, &UFGUseableInterface::StaticClass, TEXT("/Script/FactoryGame"), TEXT("UFGUseableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFGUseableInterface);
	static FName NAME_UFGUseableInterface_GetLookAtDecription = FName(TEXT("GetLookAtDecription"));
	FText IFGUseableInterface::Execute_GetLookAtDecription(const UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventGetLookAtDecription_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_GetLookAtDecription);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			Parms.state=state;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetLookAtDecription_Implementation(byCharacter,state);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGUseableInterface_IsUseable = FName(TEXT("IsUseable"));
	bool IFGUseableInterface::Execute_IsUseable(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventIsUseable_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_IsUseable);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->IsUseable_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UFGUseableInterface_OnUse = FName(TEXT("OnUse"));
	void IFGUseableInterface::Execute_OnUse(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventOnUse_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_OnUse);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			I->OnUse_Implementation(byCharacter,state);
		}
	}
	static FName NAME_UFGUseableInterface_OnUseStop = FName(TEXT("OnUseStop"));
	void IFGUseableInterface::Execute_OnUseStop(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventOnUseStop_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_OnUseStop);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			I->OnUseStop_Implementation(byCharacter,state);
		}
	}
	static FName NAME_UFGUseableInterface_RegisterInteractingPlayer = FName(TEXT("RegisterInteractingPlayer"));
	void IFGUseableInterface::Execute_RegisterInteractingPlayer(UObject* O, AFGCharacterPlayer* player)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventRegisterInteractingPlayer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_RegisterInteractingPlayer);
		if (Func)
		{
			Parms.player=player;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			I->RegisterInteractingPlayer_Implementation(player);
		}
	}
	static FName NAME_UFGUseableInterface_StartIsLookedAt = FName(TEXT("StartIsLookedAt"));
	void IFGUseableInterface::Execute_StartIsLookedAt(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventStartIsLookedAt_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_StartIsLookedAt);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			I->StartIsLookedAt_Implementation(byCharacter,state);
		}
	}
	static FName NAME_UFGUseableInterface_StopIsLookedAt = FName(TEXT("StopIsLookedAt"));
	void IFGUseableInterface::Execute_StopIsLookedAt(UObject* O, AFGCharacterPlayer* byCharacter, FUseState const& state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventStopIsLookedAt_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_StopIsLookedAt);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			I->StopIsLookedAt_Implementation(byCharacter,state);
		}
	}
	static FName NAME_UFGUseableInterface_UnregisterInteractingPlayer = FName(TEXT("UnregisterInteractingPlayer"));
	void IFGUseableInterface::Execute_UnregisterInteractingPlayer(UObject* O, AFGCharacterPlayer* player)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventUnregisterInteractingPlayer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_UnregisterInteractingPlayer);
		if (Func)
		{
			Parms.player=player;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			I->UnregisterInteractingPlayer_Implementation(player);
		}
	}
	static FName NAME_UFGUseableInterface_UpdateUseState = FName(TEXT("UpdateUseState"));
	void IFGUseableInterface::Execute_UpdateUseState(const UObject* O, AFGCharacterPlayer* byCharacter, FVector const& atLocation, UPrimitiveComponent* componentHit, FUseState& out_useState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFGUseableInterface::StaticClass()));
		FGUseableInterface_eventUpdateUseState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFGUseableInterface_UpdateUseState);
		if (Func)
		{
			Parms.byCharacter=byCharacter;
			Parms.atLocation=atLocation;
			Parms.componentHit=componentHit;
			Parms.out_useState=out_useState;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			out_useState=Parms.out_useState;
		}
		else if (auto I = (const IFGUseableInterface*)(O->GetNativeInterfaceAddress(UFGUseableInterface::StaticClass())))
		{
			I->UpdateUseState_Implementation(byCharacter,atLocation,componentHit,out_useState);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
