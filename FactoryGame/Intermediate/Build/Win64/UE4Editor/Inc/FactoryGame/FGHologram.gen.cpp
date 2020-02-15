// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryGame/Public/Hologram/FGHologram.h"
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
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_GetSplineMode();
	FACTORYGAME_API UEnum* Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_IsChanged();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_SetSplineMode();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGRecipe_NoRegister();
	FACTORYGAME_API UFunction* Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	FACTORYGAME_API UClass* Z_Construct_UClass_UFGConstructionMessageInterface_NoRegister();
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
	template<> FACTORYGAME_API UEnum* StaticEnum<EHologramScrollMode>()
	{
		return EHologramScrollMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHologramScrollMode(EHologramScrollMode_StaticEnum, TEXT("/Script/FactoryGame"), TEXT("EHologramScrollMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FactoryGame_EHologramScrollMode_Hash() { return 4286465443U; }
	UEnum* Z_Construct_UEnum_FactoryGame_EHologramScrollMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FactoryGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHologramScrollMode"), 0, Get_Z_Construct_UEnum_FactoryGame_EHologramScrollMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHologramScrollMode::HSM_NONE", (int64)EHologramScrollMode::HSM_NONE },
				{ "EHologramScrollMode::HSM_ROTATE", (int64)EHologramScrollMode::HSM_ROTATE },
				{ "EHologramScrollMode::HSM_RAISE_LOWER", (int64)EHologramScrollMode::HSM_RAISE_LOWER },
				{ "EHologramScrollMode::HSM_SPLINE_PATH_MODE", (int64)EHologramScrollMode::HSM_SPLINE_PATH_MODE },
				{ "EHologramScrollMode::HSM_MAX", (int64)EHologramScrollMode::HSM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HSM_MAX.Hidden", "" },
				{ "HSM_NONE.DisplayName", "None" },
				{ "HSM_RAISE_LOWER.DisplayName", "Raise/Lower" },
				{ "HSM_ROTATE.DisplayName", "Rotate" },
				{ "HSM_SPLINE_PATH_MODE.DisplayName", "Spline Mode" },
				{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
				{ "ToolTip", "Enum for different scroll modes a hologram can implement." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FactoryGame,
				nullptr,
				"EHologramScrollMode",
				"EHologramScrollMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
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
	static FName NAME_AFGHologram_GetSupportedSplineModes = FName(TEXT("GetSupportedSplineModes"));
	void AFGHologram::GetSupportedSplineModes(TArray<EHologramSplinePathMode>& out_splineModes) const
	{
		FGHologram_eventGetSupportedSplineModes_Parms Parms;
		Parms.out_splineModes=out_splineModes;
		const_cast<AFGHologram*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFGHologram_GetSupportedSplineModes),&Parms);
		out_splineModes=Parms.out_splineModes;
	}
	static FName NAME_AFGHologram_OnPendingConstructionHologramCreated = FName(TEXT("OnPendingConstructionHologramCreated"));
	void AFGHologram::OnPendingConstructionHologramCreated(AFGHologram* fromHologram)
	{
		FGHologram_eventOnPendingConstructionHologramCreated_Parms Parms;
		Parms.fromHologram=fromHologram;
		ProcessEvent(FindFunctionChecked(NAME_AFGHologram_OnPendingConstructionHologramCreated),&Parms);
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
			{ "GetSplineMode", &AFGHologram::execGetSplineMode },
			{ "GetSupportedSplineModes", &AFGHologram::execGetSupportedSplineModes },
			{ "IsChanged", &AFGHologram::execIsChanged },
			{ "OnPendingConstructionHologramCreated", &AFGHologram::execOnPendingConstructionHologramCreated },
			{ "OnRep_InitialScrollModeValue", &AFGHologram::execOnRep_InitialScrollModeValue },
			{ "OnRep_PlacementMaterial", &AFGHologram::execOnRep_PlacementMaterial },
			{ "Server_SetSnapToGuideLines", &AFGHologram::execServer_SetSnapToGuideLines },
			{ "SetSplineMode", &AFGHologram::execSetSplineMode },
			{ "SpawnChildHologramFromRecipe", &AFGHologram::execSpawnChildHologramFromRecipe },
			{ "SpawnHologramFromRecipe", &AFGHologram::execSpawnHologramFromRecipe },
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::NewProp_hitClass = { "hitClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventAddValidHitClass_Parms, hitClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::NewProp_hitClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Use this to add a valid hit class for this hologram in blueprints begin play." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "AddValidHitClass", sizeof(FGHologram_eventAddValidHitClass_Parms), Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_AddValidHitClass_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHologram_eventCanConstruct_Parms), &Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "@return true if the hologram can be constructed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "CanConstruct", sizeof(FGHologram_eventCanConstruct_Parms), Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_CanConstruct_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Play snapping sound. @todo Now when things are simulated, this can be done locally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "Client_PlaySnapSound", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults = { "out_constructResults", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventGetConstructDisqualifiers_Parms, out_constructResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults_Inner = { "out_constructResults", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFGConstructDisqualifier_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::NewProp_out_constructResults_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "@return true if the hologram can be constructed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "GetConstructDisqualifiers", sizeof(FGHologram_eventGetConstructDisqualifiers_Parms), Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHologram_eventGetNoSnapMode_Parms), &Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "@return true if no snap mode is enabled; false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "GetNoSnapMode", sizeof(FGHologram_eventGetNoSnapMode_Parms), Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_GetNoSnapMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_GetNoSnapMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics
	{
		struct FGHologram_eventGetSplineMode_Parms
		{
			EHologramSplinePathMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventGetSplineMode_Parms, ReturnValue), Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "GetSplineMode", sizeof(FGHologram_eventGetSplineMode_Parms), Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_GetSplineMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_GetSplineMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out_splineModes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_out_splineModes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_out_splineModes_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::NewProp_out_splineModes = { "out_splineModes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventGetSupportedSplineModes_Parms, out_splineModes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::NewProp_out_splineModes_Inner = { "out_splineModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::NewProp_out_splineModes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::NewProp_out_splineModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::NewProp_out_splineModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::NewProp_out_splineModes_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Get the target spline path modes implemented for spline based holograms\n@param out_splineModes         Array with all supported spline pathing modes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "GetSupportedSplineModes", sizeof(FGHologram_eventGetSupportedSplineModes_Parms), Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes_Statics::FuncParams);
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_IsChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHologram_eventIsChanged_Parms), &Z_Construct_UFunction_AFGHologram_IsChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_IsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_IsChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_IsChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "If the hologram contains changes that can be reset using the right mouse button, e.g. multi step placement and rotation.\n@return true if the hologram has changes; false if the hologram is in vanilla condition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_IsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "IsChanged", sizeof(FGHologram_eventIsChanged_Parms), Z_Construct_UFunction_AFGHologram_IsChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_IsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_IsChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_IsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_IsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_IsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fromHologram;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::NewProp_fromHologram = { "fromHologram", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventOnPendingConstructionHologramCreated_Parms, fromHologram), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::NewProp_fromHologram,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Even on if this hologram was constructed as a pending hologram" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "OnPendingConstructionHologramCreated", sizeof(FGHologram_eventOnPendingConstructionHologramCreated_Parms), Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "OnRep_InitialScrollModeValue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "So we can set the material on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "OnRep_PlacementMaterial", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::NewProp_isEnabled = { "isEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGHologram_eventServer_SetSnapToGuideLines_Parms), &Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::NewProp_isEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::NewProp_isEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Set hologram to snap to guide lines on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "Server_SetSnapToGuideLines", sizeof(FGHologram_eventServer_SetSnapToGuideLines_Parms), Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics
	{
		struct FGHologram_eventSetSplineMode_Parms
		{
			EHologramSplinePathMode mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSetSplineMode_Parms, mode), Z_Construct_UEnum_FactoryGame_EHologramSplinePathMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::NewProp_mode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "SetSplineMode", sizeof(FGHologram_eventSetSplineMode_Parms), Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_SetSplineMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_SetSplineMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics
	{
		struct FGHologram_eventSpawnChildHologramFromRecipe_Parms
		{
			AFGHologram* parent;
			TSubclassOf<UFGRecipe>  recipe;
			AActor* hologramOwner;
			FVector spawnLocation;
			APawn* hologramInstigator;
			AFGHologram* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hologramInstigator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hologramOwner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_recipe;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnChildHologramFromRecipe_Parms, ReturnValue), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_hologramInstigator = { "hologramInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnChildHologramFromRecipe_Parms, hologramInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_spawnLocation = { "spawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnChildHologramFromRecipe_Parms, spawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_hologramOwner = { "hologramOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnChildHologramFromRecipe_Parms, hologramOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_recipe = { "recipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnChildHologramFromRecipe_Parms, recipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_parent = { "parent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnChildHologramFromRecipe_Parms, parent), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_hologramInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_spawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_hologramOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_recipe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::NewProp_parent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Hologram" },
		{ "CPP_Default_hologramInstigator", "None" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Spawns a hologram from recipe and sets is as child to specified parent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "SpawnChildHologramFromRecipe", sizeof(FGHologram_eventSpawnChildHologramFromRecipe_Parms), Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics
	{
		struct FGHologram_eventSpawnHologramFromRecipe_Parms
		{
			TSubclassOf<UFGRecipe>  inRecipe;
			AActor* hologramOwner;
			FVector spawnLocation;
			APawn* hologramInstigator;
			AFGHologram* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hologramInstigator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnLocation;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hologramOwner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_inRecipe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnHologramFromRecipe_Parms, ReturnValue), Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_hologramInstigator = { "hologramInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnHologramFromRecipe_Parms, hologramInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_spawnLocation = { "spawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnHologramFromRecipe_Parms, spawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_hologramOwner = { "hologramOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnHologramFromRecipe_Parms, hologramOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_inRecipe = { "inRecipe", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGHologram_eventSpawnHologramFromRecipe_Parms, inRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_hologramInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_spawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_hologramOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::NewProp_inRecipe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "FactoryGame|Hologram" },
		{ "CPP_Default_hologramInstigator", "None" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Spawns a hologram from recipe" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFGHologram, nullptr, "SpawnHologramFromRecipe", sizeof(FGHologram_eventSpawnHologramFromRecipe_Parms), Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConstructionRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mConstructionRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mConstructionPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mConstructionPosition;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mUseBuildClearanceOverlapSnapp_MetaData[];
#endif
		static void NewProp_mUseBuildClearanceOverlapSnapp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mUseBuildClearanceOverlapSnapp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mBuildClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mBuildClass;
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
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFGHologram_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FactoryGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFGHologram_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFGHologram_AddValidHitClass, "AddValidHitClass" }, // 1667247659
		{ &Z_Construct_UFunction_AFGHologram_CanConstruct, "CanConstruct" }, // 3151638249
		{ &Z_Construct_UFunction_AFGHologram_Client_PlaySnapSound, "Client_PlaySnapSound" }, // 603403459
		{ &Z_Construct_UFunction_AFGHologram_GetConstructDisqualifiers, "GetConstructDisqualifiers" }, // 42895975
		{ &Z_Construct_UFunction_AFGHologram_GetNoSnapMode, "GetNoSnapMode" }, // 3376527610
		{ &Z_Construct_UFunction_AFGHologram_GetSplineMode, "GetSplineMode" }, // 3462254666
		{ &Z_Construct_UFunction_AFGHologram_GetSupportedSplineModes, "GetSupportedSplineModes" }, // 884507323
		{ &Z_Construct_UFunction_AFGHologram_IsChanged, "IsChanged" }, // 2262448170
		{ &Z_Construct_UFunction_AFGHologram_OnPendingConstructionHologramCreated, "OnPendingConstructionHologramCreated" }, // 3003256174
		{ &Z_Construct_UFunction_AFGHologram_OnRep_InitialScrollModeValue, "OnRep_InitialScrollModeValue" }, // 1802640521
		{ &Z_Construct_UFunction_AFGHologram_OnRep_PlacementMaterial, "OnRep_PlacementMaterial" }, // 3054200716
		{ &Z_Construct_UFunction_AFGHologram_Server_SetSnapToGuideLines, "Server_SetSnapToGuideLines" }, // 3970620022
		{ &Z_Construct_UFunction_AFGHologram_SetSplineMode, "SetSplineMode" }, // 2975724247
		{ &Z_Construct_UFunction_AFGHologram_SpawnChildHologramFromRecipe, "SpawnChildHologramFromRecipe" }, // 1944763016
		{ &Z_Construct_UFunction_AFGHologram_SpawnHologramFromRecipe, "SpawnHologramFromRecipe" }, // 274469260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Input Replication Rendering Actor Tick" },
		{ "IncludePath", "Hologram/FGHologram.h" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "The base class for all holograms.\nIt defines the interface all \"buildable things\" must follow.\n\nNote : Do not use SetActorLocation(), SetActorRotation() etc to move a hologram.\n      Use SetHologramLocationAndRotation() instead as this handles snapping etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "CustomSerialization" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionRotation = { "mConstructionRotation", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mConstructionRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "CustomSerialization" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionPosition = { "mConstructionPosition", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mConstructionPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "The client needs to know the initial saved scroll mode value from the BuildGun." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue = { "mInitialScrollModeValue", "OnRep_InitialScrollModeValue", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mInitialScrollModeValue), METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "If the hologram has changed, i.e. multi step placement or rotation." },
	};
#endif
	void Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_SetBit(void* Obj)
	{
		((AFGHologram*)Obj)->mIsChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged = { "mIsChanged", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGHologram), &Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "CustomSerialization" },
	};
#endif
	void Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_SetBit(void* Obj)
	{
		((AFGHologram*)Obj)->mIsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled = { "mIsDisabled", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGHologram), &Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", ", CustomSerialization" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator = { "mConstructionInstigator", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mConstructionInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mUseBuildClearanceOverlapSnapp_MetaData[] = {
		{ "Category", "FGHologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
	};
#endif
	void Z_Construct_UClass_AFGHologram_Statics::NewProp_mUseBuildClearanceOverlapSnapp_SetBit(void* Obj)
	{
		((AFGHologram*)Obj)->mUseBuildClearanceOverlapSnapp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mUseBuildClearanceOverlapSnapp = { "mUseBuildClearanceOverlapSnapp", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGHologram), &Z_Construct_UClass_AFGHologram_Statics::NewProp_mUseBuildClearanceOverlapSnapp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mUseBuildClearanceOverlapSnapp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mUseBuildClearanceOverlapSnapp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mBuildClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "The class for the build actor this hologram wants to construct. Set on spawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mBuildClass = { "mBuildClass", nullptr, (EPropertyFlags)0x0024080000000020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mBuildClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mBuildClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mBuildClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Enables composite holograms.\nChildren are included in the cost and are constructed together with this hologram.\nChildren can be optionally disabled with mIsDisabled.\n\nYou're responsible for:\n - updating the childrens location/rotation.\n - validate placement for children.\n - set correct materials on children." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren = { "mChildren", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mChildren), METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mChildren_Inner = { "mChildren", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFGHologram_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Material on hologram for invalid placement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial = { "mInvalidPlacementMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mInvalidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mInvalidPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Material on hologram for valid placement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial = { "mValidPlacementMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mValidPlacementMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Can we construct the building, updated by SetCanConstruct from the build gun." },
	};
#endif
	void Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_SetBit(void* Obj)
	{
		((AFGHologram*)Obj)->mPlacementMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial = { "mPlacementMaterial", "OnRep_PlacementMaterial", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFGHologram), &Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mPlacementMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Clearance detector box. Used to detect nearby clearances an display them during the build steps" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector = { "mClearanceDetector", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mClearanceDetector), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mClearanceDetector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "Looping sound to play on holograms" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound = { "mLoopSound", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mLoopSound), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mLoopSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "The recipe for this hologram." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe = { "mRecipe", nullptr, (EPropertyFlags)0x0024080000000020, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mRecipe), Z_Construct_UClass_UFGRecipe_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mRecipe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_MetaData[] = {
		{ "Category", "Hologram" },
		{ "ModuleRelativePath", "Public/Hologram/FGHologram.h" },
		{ "ToolTip", "These classes will be considered a valid hit when checking is valid hit result.\nBy default all static geometry is considered valid.\nBuildings, vehicles and pawns are not considered valid by default." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses = { "mValidHitClasses", nullptr, (EPropertyFlags)0x0024080000030001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFGHologram, mValidHitClasses), METADATA_PARAMS(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFGHologram_Statics::NewProp_mValidHitClasses_Inner = { "mValidHitClasses", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFGHologram_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mInitialScrollModeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mIsDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mConstructionInstigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mUseBuildClearanceOverlapSnapp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFGHologram_Statics::NewProp_mBuildClass,
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
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFGHologram_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFGConstructionMessageInterface_NoRegister, (int32)VTABLE_OFFSET(AFGHologram, IFGConstructionMessageInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFGHologram_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFGHologram>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFGHologram_Statics::ClassParams = {
		&AFGHologram::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFGHologram_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFGHologram_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
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
	IMPLEMENT_CLASS(AFGHologram, 1226310176);
	template<> FACTORYGAME_API UClass* StaticClass<AFGHologram>()
	{
		return AFGHologram::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFGHologram(Z_Construct_UClass_AFGHologram, &AFGHologram::StaticClass, TEXT("/Script/FactoryGame"), TEXT("AFGHologram"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFGHologram);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
