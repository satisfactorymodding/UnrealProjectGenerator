// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Hologram/FGHologram.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFGHologram() {}
// Cross Module References
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EHologramScrollMode();
	UPackage* Z_Construct_UPackage__Script_FactoryGame();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHologram_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_AFGHologram();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_AddValidHitClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_CanConstruct();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConstructDisqualifier_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_GetNoSnapMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_IsChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
// End Cross Module References
	static UEnum* EHologramScrollMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FactoryGame_EHologramScrollMode, Z_Construct_UPackage__Script_FactoryGame(), TEXT("EHologramScrollMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHologramScrollMode(EHologramScrollMode_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EHologramScrollMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EHologramScrollMode_CRC() { return 956374301U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EHologramScrollMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHologramScrollMode"), 0, Get_Z_Construct_UEnum_FactoryGame_EHologramScrollMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHologramScrollMode::HSM_NONE", (int64)EHologramScrollMode::HSM_NONE },
				{ "EHologramScrollMode::HSM_ROTATE", (int64)EHologramScrollMode::HSM_ROTATE },
				{ "EHologramScrollMode::HSM_RAISE_LOWER", (int64)EHologramScrollMode::HSM_RAISE_LOWER },
				{ "EHologramScrollMode::HSM_MAX", (int64)EHologramScrollMode::HSM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HSM_MAX.Hidden", "" },
				{ "HSM_NONE.DisplayName", "None" },
				{ "HSM_RAISE_LOWER.DisplayName", "Raise/Lower" },
				{ "HSM_ROTATE.DisplayName", "Rotate" },
				{ "ModuleRelativePath", "Hologram/FGHologram.h" },
				{ "ToolTip", "Enum for different scroll modes a hologram can implement." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHologramScrollMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EHologramScrollMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AFGHologram_Client_PlaySnapSound = FName(TEXT("Client_PlaySnapSound"));
	void AFGHologram::Client_PlaySnapSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFGHologram_Client_PlaySnapSound),NULL);
	}
	static FName NAME_AFGHologram_Server_SetSnapToGuideLines = FName(TEXT("Server_SetSnapToGuideLines"));
	void AFGHologram::Server_SetSnapToGuideLines(bool isEnabled)
	{
		FGHologram_eventServer_SetSnapToGuideLines_Parms Parms;
		Parms.isEnabled=isEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFGHologram_Server_SetSnapToGuideLines),&Parms);
	}
	void AFGHologram::StaticRegisterNativesAFGHologram()
	{
		UClass* Class = AFGHologram::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddValidHitClass", &AFGHologram::execAddValidHitClass },
			{ "CanConstruct", &AFGHologram::execCanConstruct },
			{ "Client_PlaySnapSound", &AFGHologram::execClient_PlaySnapSound },
			{ "GetConstructDisqualifiers", &AFGHologram::execGetConstructDisqualifiers },
			{ "GetNoSnapMode", &AFGHologram::execGetNoSnapMode },
			{ "IsChanged", &AFGHologram::execIsChanged },
			{ "OnRep_InitialScrollModeValue", &AFGHologram::execOnRep_InitialScrollModeValue },
			{ "OnRep_PlacementMaterial", &AFGHologram::execOnRep_PlacementMaterial },
			{ "Server_SetSnapToGuideLines", &AFGHologram::execServer_SetSnapToGuideLines },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics
	{
		struct FGHologram_eventAddValidHitClass_Parms
		{
			TSubclassOf<AActor>  hitClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_hitClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::NewProp_hitClass = { UE4CodeGen_Private::EPropertyClass::Class, "hitClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FGHologram_eventAddValidHitClass_Parms, hitClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::NewProp_hitClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Use this to add a valid hit class for this hologram in blueprints begin play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "AddValidHitClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(FGHologram_eventAddValidHitClass_Parms), Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_AddValidHitClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_CanConstruct_Statics
	{
		struct FGHologram_eventCanConstruct_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHologram_eventCanConstruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHologram_eventCanConstruct_Parms), &Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "@return true if the hologram can be constructed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "CanConstruct", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGHologram_eventCanConstruct_Parms), Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_CanConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Play snapping sound. @todo Now when things are simulated, this can be done locally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "Client_PlaySnapSound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x01040CC1, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics
	{
		struct FGHologram_eventGetConstructDisqualifiers_Parms
		{
			TArray<TSubclassOf<UFGConstructDisqualifier> > out_constructResults;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_constructResults;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_out_constructResults_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults = { UE4CodeGen_Private::EPropertyClass::Array, "out_constructResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000180, 1, nullptr, STRUCT_OFFSET(FGHologram_eventGetConstructDisqualifiers_Parms, out_constructResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "out_constructResults", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000000, 1, nullptr, 0, Z_Construct_UClass_UFGConstructDisqualifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "@return true if the hologram can be constructed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "GetConstructDisqualifiers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x44420401, sizeof(FGHologram_eventGetConstructDisqualifiers_Parms), Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics
	{
		struct FGHologram_eventGetNoSnapMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHologram_eventGetNoSnapMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHologram_eventGetNoSnapMode_Parms), &Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "@return true if no snap mode is enabled; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "GetNoSnapMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(FGHologram_eventGetNoSnapMode_Parms), Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_GetNoSnapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_IsChanged_Statics
	{
		struct FGHologram_eventIsChanged_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHologram_IsChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FGHologram_eventIsChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_IsChanged_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHologram_eventIsChanged_Parms), &Z_Construct_UFunction_AFGHologram_IsChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_IsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_IsChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_IsChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "If the hologram contains changes that can be reset using the right mouse button, e.g. multi step placement and rotation.\n@return true if the hologram has changes; false if the hologram is in vanilla condition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_IsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "IsChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(FGHologram_eventIsChanged_Parms), Z_Construct_UFunction_AFGHologram_IsChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_IsChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_IsChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_IsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_IsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_IsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "OnRep_InitialScrollModeValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00040401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "So we can set the material on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "OnRep_PlacementMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics
	{
		static void NewProp_isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::NewProp_isEnabled_SetBit(void* Obj)
	{
		((FGHologram_eventServer_SetSnapToGuideLines_Parms*)Obj)->isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::NewProp_isEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "isEnabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGHologram_eventServer_SetSnapToGuideLines_Parms), &Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Set hologram to snap to guide lines on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, "Server_SetSnapToGuideLines", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(FGHologram_eventServer_SetSnapToGuideLines_Parms), Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFGHologram_NoRegister()
	{
		return AFGHologram::StaticClass();
	}
	struct Z_Construct_UClass_AFGHologram_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInitialScrollModeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_mInitialScrollModeValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsChanged_MetaData[];
#endif
		static void NewProp_mIsChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mIsDisabled_MetaData[];
#endif
		static void NewProp_mIsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mIsDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConstructionInstigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mConstructionInstigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mChildren;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mChildren_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mInvalidPlacementMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mInvalidPlacementMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mValidPlacementMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mValidPlacementMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPlacementMaterial_MetaData[];
#endif
		static void NewProp_mPlacementMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mPlacementMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mClearanceDetector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mClearanceDetector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mLoopSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mLoopSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mRecipe_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mRecipe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mValidHitClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mValidHitClasses;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mValidHitClasses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGHologram_AddValidHitClass, "AddValidHitClass" }, // 1692412473
		{ &Z_Construct_UFunction_AFGHologram_CanConstruct, "CanConstruct" }, // 554549142
		{ &Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound, "Client_PlaySnapSound" }, // 1778717988
		{ &Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers, "GetConstructDisqualifiers" }, // 1420932822
		{ &Z_Construct_UFunction_AFGHologram_GetNoSnapMode, "GetNoSnapMode" }, // 562586018
		{ &Z_Construct_UFunction_AFGHologram_IsChanged, "IsChanged" }, // 442108112
		{ &Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue, "OnRep_InitialScrollModeValue" }, // 1849818692
		{ &Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial, "OnRep_PlacementMaterial" }, // 547970754
		{ &Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines, "Server_SetSnapToGuideLines" }, // 1675136345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGHologram.h" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "The base class for all holograms.\nIt defines the interface all \"buildable things\" must follow.\n\nNote : Do not use SetActorLocation(), SetActorRotation() etc to move a hologram.\n      Use SetHologramLocationAndRotation() instead as this handles snapping etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "The client needs to know the initial saved scroll mode value from the BuildGun." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue = { UE4CodeGen_Private::EPropertyClass::Int, "mInitialScrollModeValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000100000020, 1, "OnRep_InitialScrollModeValue", STRUCT_OFFSET(AFGHologram, mInitialScrollModeValue), METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "If the hologram has changed, i.e. multi step placement or rotation." },
	};
#endif
	void Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_SetBit(void* Obj)
	{
		((AFGHologram*)Obj)->mIsChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsChanged", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGHologram), &Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "If this hologram is disabled and should not be visible or constructed." },
	};
#endif
	void Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_SetBit(void* Obj)
	{
		((AFGHologram*)Obj)->mIsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "mIsDisabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGHologram), &Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Who is building" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator = { UE4CodeGen_Private::EPropertyClass::Object, "mConstructionInstigator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000020, 1, nullptr, STRUCT_OFFSET(AFGHologram, mConstructionInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Enables composite holograms.\nChildren are included in the cost and are constructed together with this hologram.\nChildren can be optionally disabled with mIsDisabled.\n\nYou're responsible for:\n - updating the childrens location/rotation.\n - validate placement for children.\n - set correct materials on children." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren = { UE4CodeGen_Private::EPropertyClass::Array, "mChildren", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGHologram, mChildren), METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "mChildren", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Material on hologram for invalid placement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mInvalidPlacementMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGHologram, mInvalidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Material on hologram for valid placement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "mValidPlacementMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(AFGHologram, mValidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Can we construct the building, updated by SetCanConstruct from the build gun." },
	};
#endif
	void Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_SetBit(void* Obj)
	{
		((AFGHologram*)Obj)->mPlacementMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial = { UE4CodeGen_Private::EPropertyClass::Bool, "mPlacementMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_PlacementMaterial", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFGHologram), &Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Clearance detector box" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector = { UE4CodeGen_Private::EPropertyClass::Object, "mClearanceDetector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGHologram, mClearanceDetector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "Looping sound to play on holograms" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound = { UE4CodeGen_Private::EPropertyClass::Object, "mLoopSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFGHologram, mLoopSound), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "The recipe for this hologram." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe = { UE4CodeGen_Private::EPropertyClass::Class, "mRecipe", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000020, 1, nullptr, STRUCT_OFFSET(AFGHologram, mRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_MetaData[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Hologram/FGHologram.h" },
		{ "ToolTip", "These classes will be considered a valid hit when checking is valid hit result.\nBy default all static geometry is considered valid.\nBuildings, vehicles and pawns are not considered valid by default." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses = { UE4CodeGen_Private::EPropertyClass::Array, "mValidHitClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000030001, 1, nullptr, STRUCT_OFFSET(AFGHologram, mValidHitClasses), METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "mValidHitClasses", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000020000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGHologram_Statics::ClassParams = {
		&AFGHologram::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AFGHologram_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFGHologram()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFGHologram_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFGHologram, 1029408623);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHologram(Z_Construct_UClass_AFGHologram, &AFGHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
